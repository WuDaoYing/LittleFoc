#ifndef __LFOC_MEM_H__
#define __LFOC_MEM_H__

#include <stdint.h>
#include <stddef.h>

/**
 * @brief  初始化内存池
 * @param  pool      内存池起始地址（建议4字节对齐）
 * @param  pool_size 内存池总大小（字节）
 * @retval 0 成功，-1 参数非法
 */
int Lfoc_Mem_Init(void* pool, uint32_t pool_size);

/**
 * @brief  分配内存（最佳适应算法，减少碎片生成）
 * @param  size  需要分配的字节数
 * @retval 成功返回数据指针，失败返回 NULL
 */
void* Lfoc_Malloc(uint32_t size);

/**
 * @brief  释放内存（自动合并相邻空闲块）
 * @param  ptr 待释放的内存指针
 */
void Lfoc_Free(void* ptr);

/**
 * @brief  重新分配内存
 * @param  ptr   旧内存指针（NULL等价于malloc，size=0等价于free）
 * @param  size  新的内存大小（字节）
 * @retval 成功返回新指针（可能与原指针相同），失败返回NULL且原内存保持有效
 * @note   优先原地扩容/缩容，无需拷贝数据；无法原地时才重新分配并拷贝
 */
void* Lfoc_Realloc(void* ptr, uint32_t size);

/**
 * @brief  增量式碎片整理（硬实时安全，耗时可控）
 * @param  max_blocks 本次最多扫描处理的空闲块数量
 * @retval 本次合并后新增的连续空闲字节数
 * @note   仅合并物理相邻的空闲块，不移动已分配内存，指针始终有效
 */
uint32_t Lfoc_Defrag_Incremental(uint32_t max_blocks);

/**
 * @brief  获取当前内存碎片率
 * @retval 碎片率 0~100（数值越高碎片越严重）
 */
uint32_t Lfoc_Get_Fragmentation_Ratio(void);

/**
 * @brief  获取最大连续空闲块大小
 * @retval 最大连续空闲字节数
 */
uint32_t Lfoc_Get_Maxfree_Block(void);

/**
 * @brief  获取当前总空闲内存大小
 * @retval 空闲字节数
 */
uint32_t Lfoc_Get_Free_Size(void);

#endif /* LFOC_MEM_H */
