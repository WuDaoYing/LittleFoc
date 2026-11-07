#include "lfoc_malloc_port.h"
#include "lfoc_error.h"
#include "lfoc_type.h"
#include <stdlib.h>
#include <string.h>

/**
 * @file    lfoc_malloc_port.c
 * @brief   LittleFoc 内存管理移植层（内存开辟与释放）
 * @details 统一封装内存分配/释放/重置接口，方便跨平台移植修改
 * @author  尹冠华
 * @date    2026-01-26
 * @version V1.0
 * @copyright Copyright (c) 2018-2026 黑龙江大学A8楼706
 *
 * @attention
 * 硬件平台：兼容所有支持C语言的处理器
 * 仿真平台：仅支持SIMULINK仿真验证
 *
 * @par 修改日志
 * <table>
 * <tr><th>Date        <th>Version  <th>Author    <th>Description
 * <tr><td>2026/01/26  <td>1.0      <td>尹冠华    <td>创建正式发行版本
 * </table>
 */


 

 /**
  * @brief  内部内存清零函数（对外不可见）
  * @param  ptr   目标内存指针
  * @param  value 填充值
  * @param  num   填充字节数
  * @return 目标内存指针
  * @note   默认使用标准库memset以获得最优性能，也可使用自定义实现
  */
static void* lfoc_memset_internal(void* ptr, int value, size_t num)
{
    if (ptr == NULL || num == 0)
    {
        return ptr;
    }

#if 0
    /* 自定义逐字节实现（无标准库时启用） */
    unsigned char* tmp = (unsigned char*)ptr;
    while (num--)
    {
        *tmp++ = (unsigned char)value;
    }
    return ptr;
#else
    /* 标准库实现（性能更优） */
    return memset(ptr, value, num);
#endif
}

/**
 * @brief  LFOC内存开辟接口
 * @param  head  二级指针，输出分配后的内存地址
 * @param  size  要开辟的内存大小（字节）
 * @return LFOC_ERROR__SUCCESS          分配成功
 * @return LFOC_ERROR__OPEN_SPACE_ERROR 分配失败
 * @see    __LFOC_FREE
 * @see    __LFOC_REALLOC
 * @see    __LFOC_MEMSET
 */
LFOC_ERROR __LFOC_MALLOC(void** head, LFOC_UI_SIZE size)
{
    /* 入参合法性校验 */
    if (head == NULL)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }

    *head = NULL;

    /* 边界处理：分配0字节按失败处理（避免标准库未定义行为） */
    if (size == 0)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }

    *head = LFOC_MALLOC(size);
    if (*head == NULL)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }

    return LFOC_ERROR__SUCCESS;
}

/**
 * @brief  LFOC内存释放接口
 * @param  head  二级指针，指向要释放的内存
 * @return LFOC_ERROR__SUCCESS          释放成功
 * @return LFOC_ERROR__FREE_SPACE_ERROR 释放失败
 * @see    __LFOC_MALLOC
 * @see    __LFOC_REALLOC
 * @see    __LFOC_MEMSET
 */
LFOC_ERROR __LFOC_FREE(void** head)
{
    if (head == NULL)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }

    /* 空指针直接返回，避免重复释放 */
    if (*head == NULL)
    {
        return LFOC_ERROR__SUCCESS;
    }

    LFOC_FREE(*head);
    *head = NULL;

    return LFOC_ERROR__SUCCESS;
}

/**
 * @brief  LFOC内存重新开辟接口
 * @param  head  二级指针，指向原内存，输出新内存地址
 * @param  size  重新开辟的内存大小（字节）
 * @return LFOC_ERROR__SUCCESS           重分配成功
 * @return LFOC_ERROR__EXTE_SPACE_ERROR  重分配失败
 * @note   失败时原内存保持有效，不会丢失
 * @see    __LFOC_MALLOC
 * @see    __LFOC_FREE
 * @see    __LFOC_MEMSET
 */
LFOC_ERROR __LFOC_REALLOC(void** head, LFOC_UI_SIZE size)
{
    if (head == NULL)
    {
        return LFOC_ERROR__EXTE_SPACE_ERROR;
    }

    if (size == 0)
    {
        return LFOC_ERROR__EXTE_SPACE_ERROR;
    }

    /* 关键：先接收返回值，成功再赋值，避免分配失败丢失原指针 */
    void* new_ptr = LFOC_REALLOC(*head, size);
    if (new_ptr == NULL)
    {
        return LFOC_ERROR__EXTE_SPACE_ERROR;
    }

    *head = new_ptr;
    return LFOC_ERROR__SUCCESS;
}

/**
 * @brief  LFOC内存清理接口
 * @param  head   目标内存指针
 * @param  value  填充值
 * @param  size   清理的字节数
 * @return LFOC_ERROR__SUCCESS            清理成功
 * @return LFOC_ERROR__CLEAR_SPACE_ERROR  清理失败
 * @see    __LFOC_MALLOC
 * @see    __LFOC_FREE
 * @see    __LFOC_REALLOC
 */
LFOC_ERROR __LFOC_MEMSET(void* head, LFOC_I_32BIT value, LFOC_UI_SIZE size)
{
    if (head == NULL || size == 0)
    {
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }

    lfoc_memset_internal(head, (int)value, (size_t)size);
    return LFOC_ERROR__SUCCESS;
}
