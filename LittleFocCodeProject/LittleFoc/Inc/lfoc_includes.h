#ifndef __LFOC_INCLUDES_H__
#define __LFOC_INCLUDES_H__
/**@file      lfoc_includes.h
* @brief      LittleFoc中所有的头文件存放位置
* @details    将所有头文件进行包含以供用户调用
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
#include "lfoc_type.h"                         //!<LFOC存放类型定义的头文件
#include "lfoc_error.h"                        //!<LFOC存放错误信息的头文件
#include "lfoc_log.h"                          //!<LFOC存放日志资源管理
#include "lfoc_malloc_port.h"                  //!<LFOC存放空间接口的头文件
#include "lfoc_math.h"                         //!<LFOC存放模板化数学库的头文件
#include "lfoc_port.h"                         //!<LFOC存放运算核心文件的头文件
#include "lfoc_mem.h"                          //!<LFOC存放内存管理文件的头文件
#include "lfoc_math_lse.h"                     //!<LFOC存放最小二乘算法的头文件

//#include "lfoc_abnormal_check.h"               //!<LFOC存放数据校验的头文件
//#include "lfoc_benchmark.h"                    //!<LFOC存放基准的头文件
//#include "lfoc_standardization.h"              //!<LFOC存放标幺化的头文件
//#include "lfoc_inverse_standardization.h"      //!<LFOC存放反标幺化的头文件
//#include "lfoc_quantization.h"                 //!<LFOC存放量化操作的头文件







#endif

