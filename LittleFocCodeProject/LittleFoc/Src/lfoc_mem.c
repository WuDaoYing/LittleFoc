#include "lfoc_mem.h"
#include <string.h>

/* -------------------------- 配置与内部定义 -------------------------- */
#define MEM_ALIGNMENT           4U      // 内存对齐粒度
#define MEM_BLOCK_HEADER_SIZE   sizeof(MemBlock_t)
#define MEM_MIN_BLOCK_SIZE      (MEM_BLOCK_HEADER_SIZE + 4U)  // 最小块：头部+至少4字节数据

/* 内存块控制头 */
typedef struct MemBlock {
    uint32_t size;          // 数据区大小（不含头部）
    uint8_t  is_free;       // 1=空闲，0=已分配
    struct MemBlock* prev;  // 前一个块（地址升序链表）
    struct MemBlock* next;  // 后一个块（地址升序链表）
} MemBlock_t;

/* 向上对齐宏 */
#define MEM_ALIGN_UP(size, align)   (((size) + (align) - 1U) & ~((align) - 1U))

/* -------------------------- 全局变量 -------------------------- */
static uint8_t* s_pool_start = NULL;   // 内存池起始地址
static uint32_t     s_pool_size = 0U;     // 内存池总大小
static MemBlock_t* s_free_list = NULL;   // 空闲块链表（按物理地址升序排列）

/* -------------------------- 内部辅助函数 -------------------------- */
static MemBlock_t* ptr_to_block(void* ptr)
{
    return (MemBlock_t*)((uint8_t*)ptr - MEM_BLOCK_HEADER_SIZE);
}

/* 从空闲链表中移除指定块 */
static void remove_from_free_list(MemBlock_t* block)
{
    if (block->prev != NULL) {
        block->prev->next = block->next;
    }
    else {
        s_free_list = block->next;
    }
    if (block->next != NULL) {
        block->next->prev = block->prev;
    }
    block->prev = NULL;
    block->next = NULL;
}

/* 按地址升序插入空闲链表，并尝试合并前后相邻块 */
static void insert_and_merge(MemBlock_t* block)
{
    MemBlock_t* prev = NULL;
    MemBlock_t* curr = s_free_list;

    /* 找到插入位置 */
    while ((curr != NULL) && (curr < block)) {
        prev = curr;
        curr = curr->next;
    }

    /* 插入链表 */
    block->prev = prev;
    block->next = curr;
    if (prev != NULL) {
        prev->next = block;
    }
    else {
        s_free_list = block;
    }
    if (curr != NULL) {
        curr->prev = block;
    }

    /* 合并前向相邻块 */
    if ((prev != NULL) &&
        ((uint8_t*)prev + MEM_BLOCK_HEADER_SIZE + prev->size == (uint8_t*)block)) {
        prev->size += MEM_BLOCK_HEADER_SIZE + block->size;
        prev->next = block->next;
        if (block->next != NULL) {
            block->next->prev = prev;
        }
        block = prev;
    }

    /* 合并后向相邻块 */
    if ((block->next != NULL) &&
        ((uint8_t*)block + MEM_BLOCK_HEADER_SIZE + block->size == (uint8_t*)block->next)) {
        MemBlock_t* next = block->next;
        block->size += MEM_BLOCK_HEADER_SIZE + next->size;
        block->next = next->next;
        if (next->next != NULL) {
            next->next->prev = block;
        }
    }
}

/* -------------------------- 对外接口 -------------------------- */

int Lfoc_Mem_Init(void* pool, uint32_t pool_size)
{
    if ((pool == NULL) || (pool_size < MEM_MIN_BLOCK_SIZE)) {
        return -1;
    }

    s_pool_start = (uint8_t*)pool;
    s_pool_size = pool_size;

    /* 初始化为一个完整空闲块 */
    s_free_list = (MemBlock_t*)s_pool_start;
    s_free_list->size = pool_size - MEM_BLOCK_HEADER_SIZE;
    s_free_list->is_free = 1U;
    s_free_list->prev = NULL;
    s_free_list->next = NULL;

    return 0;
}

void* Lfoc_Malloc(uint32_t size)
{
    if ((size == 0U) || (s_free_list == NULL)) {
        return NULL;
    }

    uint32_t alloc_size = MEM_ALIGN_UP(size, MEM_ALIGNMENT);
    uint32_t total_block_size = MEM_BLOCK_HEADER_SIZE + alloc_size;

    MemBlock_t* best_block = NULL;
    MemBlock_t* curr = s_free_list;

    /* 最佳适应算法：找到大小足够且最小的空闲块 */
    while (curr != NULL) {
        if (curr->size >= alloc_size) {
            if ((best_block == NULL) || (curr->size < best_block->size)) {
                best_block = curr;
            }
        }
        curr = curr->next;
    }

    if (best_block == NULL) {
        return NULL; // 无合适块
    }

    /* 剩余空间足够则拆分 */
    if ((best_block->size - alloc_size) >= MEM_MIN_BLOCK_SIZE) {
        MemBlock_t* new_block = (MemBlock_t*)((uint8_t*)best_block + total_block_size);
        new_block->size = best_block->size - total_block_size;
        new_block->is_free = 1U;

        /* 替换链表节点 */
        new_block->prev = best_block->prev;
        new_block->next = best_block->next;
        if (best_block->prev != NULL) {
            best_block->prev->next = new_block;
        }
        else {
            s_free_list = new_block;
        }
        if (best_block->next != NULL) {
            best_block->next->prev = new_block;
        }

        best_block->size = alloc_size;
    }
    else {
        /* 整块分配，从空闲链表移除 */
        remove_from_free_list(best_block);
    }

    best_block->is_free = 0U;
    return (void*)((uint8_t*)best_block + MEM_BLOCK_HEADER_SIZE);
}

void Lfoc_Free(void* ptr)
{
    if ((ptr == NULL) || (s_pool_start == NULL)) {
        return;
    }

    MemBlock_t* block = ptr_to_block(ptr);
    if (block->is_free) {
        return; // 重复释放
    }

    block->is_free = 1U;
    insert_and_merge(block);
}

void* Lfoc_Realloc(void* ptr, uint32_t size)
{
    /* 边界情况：空指针等价于malloc */
    if (ptr == NULL) {
        return Lfoc_Malloc(size);
    }
    /* 边界情况：大小为0等价于free */
    if (size == 0U) {
        Lfoc_Free(ptr);
        return NULL;
    }

    MemBlock_t* block = ptr_to_block(ptr);
    if (block->is_free) {
        return NULL; // 非法指针
    }

    uint32_t old_size = block->size;
    uint32_t new_size = MEM_ALIGN_UP(size, MEM_ALIGNMENT);

    /* 大小不变，直接返回 */
    if (new_size == old_size) {
        return ptr;
    }

    /* ---------------- 缩容场景 ---------------- */
    if (new_size < old_size) {
        uint32_t remain_size = old_size - new_size;

        /* 剩余空间足够拆分出空闲块 */
        if (remain_size >= MEM_MIN_BLOCK_SIZE) {
            MemBlock_t* split_block = (MemBlock_t*)((uint8_t*)block + MEM_BLOCK_HEADER_SIZE + new_size);
            split_block->size = remain_size - MEM_BLOCK_HEADER_SIZE;
            split_block->is_free = 1U;

            block->size = new_size;
            insert_and_merge(split_block);
        }
        /* 剩余空间不足拆分，保留原大小不浪费 */
        return ptr;
    }

    /* ---------------- 扩容场景 ---------------- */
    uint32_t delta = new_size - old_size;

    /* 检查下一个物理块是否为空闲且足够扩容 */
    MemBlock_t* next_block = (MemBlock_t*)((uint8_t*)block + MEM_BLOCK_HEADER_SIZE + old_size);
    uint8_t* pool_end = s_pool_start + s_pool_size;

    if (((uint8_t*)next_block + MEM_BLOCK_HEADER_SIZE <= pool_end) &&
        (next_block->is_free) &&
        ((MEM_BLOCK_HEADER_SIZE + next_block->size) >= delta)) {

        /* 从空闲链表移除下一块 */
        remove_from_free_list(next_block);

        /* 合并到当前块 */
        block->size += MEM_BLOCK_HEADER_SIZE + next_block->size;

        /* 合并后仍有剩余空间则拆分 */
        uint32_t total_new = block->size;
        if ((total_new - new_size) >= MEM_MIN_BLOCK_SIZE) {
            MemBlock_t* split_block = (MemBlock_t*)((uint8_t*)block + MEM_BLOCK_HEADER_SIZE + new_size);
            split_block->size = total_new - new_size - MEM_BLOCK_HEADER_SIZE;
            split_block->is_free = 1U;

            block->size = new_size;
            insert_and_merge(split_block);
        }

        return ptr; // 原地扩容成功，数据无需移动
    }

    /* ---------------- 无法原地扩容：重新分配+拷贝 ---------------- */
    void* new_ptr = Lfoc_Malloc(size);
    if (new_ptr == NULL) {
        return NULL; // 分配失败，原内存保持有效
    }

    /* 拷贝旧数据（按旧有效大小拷贝） */
    memcpy(new_ptr, ptr, old_size);
    Lfoc_Free(ptr);

    return new_ptr;
}

uint32_t Lfoc_Defrag_Incremental(uint32_t max_blocks)
{
    if ((s_free_list == NULL) || (max_blocks == 0U)) {
        return 0U;
    }

    uint32_t    merged_size = 0U;
    uint32_t    processed = 0U;
    MemBlock_t* curr = s_free_list;

    while ((curr != NULL) && (processed < max_blocks)) {
        MemBlock_t* next = curr->next;
        processed++;

        /* 检查并合并后向相邻空闲块 */
        if ((next != NULL) &&
            ((uint8_t*)curr + MEM_BLOCK_HEADER_SIZE + curr->size == (uint8_t*)next)) {
            curr->size += MEM_BLOCK_HEADER_SIZE + next->size;
            curr->next = next->next;
            if (next->next != NULL) {
                next->next->prev = curr;
            }
            merged_size += MEM_BLOCK_HEADER_SIZE + next->size;
            /* 合并后不前进，继续检查新的下一块 */
        }
        else {
            curr = next;
        }
    }

    return merged_size;
}

uint32_t Lfoc_Get_Fragmentation_Ratio(void)
{
    uint32_t total_free = 0U;
    uint32_t max_free = 0U;
    MemBlock_t* curr = s_free_list;

    while (curr != NULL) {
        total_free += curr->size;
        if (curr->size > max_free) {
            max_free = curr->size;
        }
        curr = curr->next;
    }

    if (total_free == 0U) {
        return 0U;
    }

    return ((total_free - max_free) * 100U) / total_free;
}

uint32_t Lfoc_Get_Maxfree_Block(void)
{
    uint32_t max_free = 0U;
    MemBlock_t* curr = s_free_list;

    while (curr != NULL) {
        if (curr->size > max_free) {
            max_free = curr->size;
        }
        curr = curr->next;
    }

    return max_free;
}

uint32_t Lfoc_Get_Free_Size(void)
{
    uint32_t total = 0U;
    MemBlock_t* curr = s_free_list;

    while (curr != NULL) {
        total += curr->size;
        curr = curr->next;
    }

    return total;
}
