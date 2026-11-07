#ifndef __LFOC_MALLOC_PORT_H__
#define __LFOC_MALLOC_PORT_H__
/**@file      lfoc_malloc_port.h
* @brief      管理LittleFoc的空间开辟与释放(头文件)
* @details    所有的空间开辟与释放都在这里进行重定义，方便用户使用
* @author     尹冠华
* @date       2026-1-26
* @version    V1.0
* @copyright    Copyright (c ) 2018-20226  黑龙江大学A8楼706
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* 仿真平台:只支持SIMULINK进行仿真验证\n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2026/01/26  <td>1.0      <td>尹冠华    <td>创建正式版本(发行版本)
* </table>
*
**********************************************************************************
*/
/*************************所引用的头文件*********************************/
#include "lfoc_port.h"        //!<LFOC的接口类型头文件
#include "lfoc_error.h"       //!<LFOC的存放错误定义头文件
#include "lfoc_type.h"        //!<LFOC的存放类型定义头文件
#include "lfoc_mem.h"         //!<LFOC的内存管理头文件
#include "stdio.h"            //!<系统的stdio文件在使用单片机时可以舍弃
#include "stdlib.h"           //!<系统的stdlib文件在使用单片机时可以舍弃

/* 平台移植配置：可在头文件或工程宏定义中开启，替换标准库内存函数*/
#if LFOC_MEM_MANAGE_MODE == MEM_MANAGE_LFOC
#define LFOC_MALLOC(size)      Lfoc_Malloc((size))
#define LFOC_FREE(ptr)         Lfoc_Free((ptr))
#define LFOC_REALLOC(ptr,size) Lfoc_Realloc((ptr), (size))
#else
#include "malloc.h"
#define LFOC_MALLOC(size)      malloc((size))
#define LFOC_FREE(ptr)         free((ptr))
#define LFOC_REALLOC(ptr,size) realloc((ptr), (size))
#endif
/*************************空间管理函数接口*********************************/
LFOC_ERROR __LFOC_MALLOC(void** head, LFOC_UI_SIZE size);                        //!<空间开辟函数声明
LFOC_ERROR __LFOC_REALLOC(void** head, LFOC_UI_SIZE size);                       //!<空间重开辟函数声明
LFOC_ERROR __LFOC_FREE(void** head);                                                         //!<空间解散函数声明
LFOC_ERROR __LFOC_MEMSET(void* head, LFOC_I_32BIT value, LFOC_UI_SIZE size);     //!<空间清理函数声明
#endif

