#ifndef __LFOC_MATH_H__
#define __LFOC_MATH_H__
/**@file      lfoc_math.h
* @brief      存放关键的运算函数(头文件)
* @details    包括SIN、COS函数和24象限反正切函数(标幺化和未标幺化的)
*             主要是规定统一模板好进行统一调度。
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
#include "math.h"          //!<通用数学库math头文件包含
#include "lfoc_type.h"     //!<LFOC存放类型定义的头文件

/**@brief (LFOC内联模式)SIN_COS的标幺化函数
* @details 此函数输入[0-1]输出[0-1]
* @param[in] float          A              输入标幺后的弧度
* @param[out] float         SIN            输出SIN值
* @param[out] float         COS            输出COS值
* @param[out] int           ERR            输出错误信息
* @return    无
* @attention   用户权限:用户可修改\n
*              用户更改权限:用户可按照对于驱动代码进行二次修改
* @see :: SIN_COS           SIN_COS函数
* @see :: ARCTAN2F          24象限反正切函数
* @see :: ARCTAN2F_PU       24象限反正切标幺化的函数
*/
LFOC_INLINE void SIN_COS_PU(float A, float* SIN, float* COS, int* ERR)
{
    (*SIN) = (float)(sin(A * 3.14f));
    (*COS) = (float)(cos(A * 3.14f));
}

/**@brief (LFOC内联模式)SIN_COS的函数
* @details 主要是为了统一格式
* @param[in] float          A              输入弧度
* @param[out] float         SIN            输出SIN值
* @param[out] float         COS            输出COS值
* @param[out] int           ERR            输出错误信息
* @return    无
* @attention   用户权限:用户可修改\n
*              用户更改权限:用户可按照对于驱动代码进行二次修改
* @see :: SIN_COS_PU        SIN_COS标幺化的函数
* @see :: ARCTAN2F          24象限反正切函数
* @see :: ARCTAN2F_PU       24象限反正切标幺化的函数
*/
LFOC_INLINE void SIN_COS(float A, float* SIN, float* COS, int* ERR)
{
    (*SIN) = (float)(sin(A));
    (*COS) = (float)(cos(A));
}

/**@brief (LFOC内联模式)arctan2f标幺化的函数
* @details 主要是为了统一格式
* @param[in] float          Dy             输入标幺化Dy
* @param[in] float          Dx             输入标幺化Dx
* @param[out] int           ERR            输出错误信息
* @return    标幺化的24象限反正切的值
* @attention   用户权限:用户可修改\n
*              用户更改权限:用户可按照对于驱动代码进行二次修改
* @see :: SIN_COS_PU        SIN_COS标幺化的函数
* @see :: SIN_COS           SIN_COS函数
* @see :: ARCTAN2F          24象限反正切函数
*/
LFOC_INLINE float ARCTAN2F_PU(float Dy, float Dx, int* ERR)
{
    return atan2f(Dy, Dx) / 3.1415926f;
}

/**@brief (LFOC内联模式)arctan2f的函数
* @details 主要是为了统一格式
* @param[in] float          Dy             输入标Dy
* @param[in] float          Dx             输入标Dx
* @param[out] int           ERR            输出错误信息
* @return    24象限反正切的值
* @attention   用户权限:用户可修改\n
*              用户更改权限:用户可按照对于驱动代码进行二次修改
* @see :: SIN_COS_PU        SIN_COS标幺化的函数
* @see :: SIN_COS           SIN_COS函数
* @see :: ARCTAN2F_PU       24象限反正切标幺化的函数
*/
static __inline float ARCTAN2F(float Dy, float Dx, int* ERR)
{
    return atan2f(Dy, Dx);
}




#endif
