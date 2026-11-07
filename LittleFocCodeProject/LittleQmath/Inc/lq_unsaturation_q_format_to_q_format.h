#ifndef __LQ_UNSATURATION_Q_FORMAT_TO_Q_FORMAT_H__
#define __LQ_UNSATURATION_Q_FORMAT_TO_Q_FORMAT_H__

#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
/**@file      lq_unsaturation_q_format_to_q_format.h
* @brief      LittleQmath的不饱和算法Q格式到Q格式转换
* @details    管理8BIT、16BIT、32BIT的浮点到Q格式类型，包含有函数模式、内联模式、宏展开(饱和失效)。\n
*             不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息。
* @author     尹冠华
* @date        2024-6-27
* @version     V2.0
* @copyright    Copyright (c ) 2018-2024  黑龙江大学A8楼514
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2024/03/28  <td>1.0      <td>尹冠华    <td>创建初始版本
* <tr><td>2024/06/27  <td>2.0      <td>尹冠华    <td>重新架构
* </table>
*
**********************************************************************************
*/

//!<不饱和算法:任意到指定Q格式 宏定义展开(饱和失效)
#if LQ_UNSATURATION_Q_FORMAT_TO_Q_FORMAT_LOADING_MODE==2
/****************************不饱和算法 INT8 Q格式转Q格式算法************************************/
//!<以INT8为基准Q格式转Q格式算法(Q1到Q7)
#define LQ_UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
/****************************不饱和算法 UINT8 UQ格式转UQ格式算法************************************/
//!<以UINT8为基准UQ格式转UQ格式算法(UQ1到UQ8)
#define LQ_UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
/****************************不饱和算法 INT16 Q格式转Q格式算法************************************/
//!<以INT16为基准Q格式转Q格式算法(Q1到Q15)
#define LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
/****************************不饱和算法 UINT16 UQ格式转UQ格式算法************************************/
//!<以UINT16为基准UQ格式转UQ格式算法(UQ1到UQ15)
#define LQ_UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
/****************************不饱和算法 INT32 Q格式转Q格式算法************************************/
//!<以INT32为基准Q格式转Q格式算法(Q1到Q31)
#define LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
/****************************不饱和算法 UINT32 UQ格式转UQ格式算法************************************/
//!<以UINT32为基准UQ格式转UQ格式算法(UQ1到UQ31)
#define LQ_UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,Lq_Error)  (Q_A>Q_B)?(A>>(Q_A-Q_B)):(A<<(Q_B-Q_A))
#endif
//!<不饱和算法:任意到指定Q格式 内联展开
#if LQ_UNSATURATION_Q_FORMAT_TO_Q_FORMAT_LOADING_MODE==1
/**@brief 不饱和算法:INT8Q格式到Q格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息\n
* @param[in] LQ_I_8BIT      A              输入Q格式数
* @param[in] LQ_UI_8BIT        Q_A            输入待转换Q值
* @param[in] LQ_UI_8BIT        Q_B            输入转换后Q值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER 在不饱和算法INT8中Q格式 到Q格式转换中整形正向溢出\n
*                        UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER 在不饱和算法INT8中Q格式 到Q格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT  不饱和算法:INT8中Q格式到Q格式转换\n
*/
LQ_INLINE LQ_I_8BIT LQ_UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT(LQ_I_8BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_16BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_16BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER;
        return   (LQ_I_8BIT)tmp;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER;
        return   (LQ_I_8BIT)tmp;
    }
    return   (LQ_I_8BIT)tmp;
}
/**@brief 不饱和算法:UINT8UQ格式到UQ格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息。\n
* @param[in] LQ_UI_8BIT      A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A          输入待转换的UQ值
* @param[in] LQ_UI_8BIT         Q_B          输入转换后的UQ值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER 在不饱和算法UINT8中UQ格式到UQ格式转换中整形正向溢出\n
*                        UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER 在不饱和算法UINT8中UQ格式到UQ格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT  不饱和算法:INT8中UQ格式到UQ格式转换\n
*/
LQ_INLINE LQ_UI_8BIT LQ_UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_8BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_16BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_16BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER;
        return   (LQ_UI_8BIT)tmp;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER;
        return   (LQ_UI_8BIT)tmp;
    }
    return   (LQ_UI_8BIT)tmp;
}
/**@brief 不饱和算法:INT16Q格式到Q格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息\n
* @param[in] LQ_I_16BIT      A              输入Q格式数
* @param[in] LQ_UI_8BIT        Q_A            输入待转换Q值
* @param[in] LQ_UI_8BIT        Q_B            输入转换后Q值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER 在不饱和算法INT16中Q格 式到Q格式转换中整形正向溢出\n
*                        UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER 在不饱和算法INT16中Q格 式到Q格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT  不饱和算法:INT16中Q格式到Q格式转换\n
*/
LQ_INLINE LQ_I_16BIT LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(LQ_I_16BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_32BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_32BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER;
        return   (LQ_I_16BIT)tmp;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER;
        return   (LQ_I_16BIT)tmp;
    }
    return   (LQ_I_16BIT)tmp;
}
/**@brief 不饱和算法:UINT16UQ格式到UQ格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息。\n
* @param[in] LQ_UI_16BIT      A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A          输入待转换的UQ值
* @param[in] LQ_UI_8BIT         Q_B          输入转换后的UQ值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER 在不饱和算法UINT16中UQ格式到UQ格式转换中整形正向溢出\n
*                        UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER 在不饱和算法UINT16中UQ格式到UQ格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT  不饱和算法:INT16中UQ格式到UQ格式转换\n
*/
LQ_INLINE LQ_UI_16BIT LQ_UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_16BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_32BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_32BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER;
        return   (LQ_UI_16BIT)tmp;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER;
        return   (LQ_UI_16BIT)tmp;
    }
    return   (LQ_UI_16BIT)tmp;
}
/**@brief 不饱和算法:INT32Q格式到Q格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息\n
* @param[in] LQ_I_32BIT      A              输入Q格式数
* @param[in] LQ_UI_8BIT        Q_A            输入待转换Q值
* @param[in] LQ_UI_8BIT        Q_B            输入转换后Q值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER 在不饱和算法INT32中Q格 式到Q格式转换中整形正向溢出\n
*                        UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER 在不饱和算法INT32中Q格 式到Q格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT  不饱和算法:INT32中Q格式到Q格式转换\n
*/
LQ_INLINE LQ_I_32BIT LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(LQ_I_32BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_64BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_64BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT_POSITIVE_OVER;
        return   (LQ_I_32BIT)tmp;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT_NEGATIVE_OVER;
        return   (LQ_I_32BIT)tmp;
    }
    return   (LQ_I_32BIT)tmp;
}
/**@brief 不饱和算法:UINT32UQ格式到UQ格式转换
* @details 能对格式转换运算进行检查。\n
*          不饱和算法:如果待转换数值超出规定阈值则不会对其进行限制，但是会输出错误信息。\n
* @param[in] LQ_UI_32BIT      A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A          输入待转换的UQ值
* @param[in] LQ_UI_8BIT         Q_B          输入转换后的UQ值
* @param[in] LQ_ERROR*         Lq_Error       错误变量
* @return    转换后的值
* @exception NSExceptio: UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER 在不饱和算法UINT32中UQ格式到UQ格式转换中整形正向溢出\n
*                        UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER 在不饱和算法UINT32中UQ格式到UQ格式转换中整形负向溢出
* @par       转化值
* @code
*    LQ_UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT(A,Q_A,Q_B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::  LQ_UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT  不饱和算法:INT32中UQ格式到UQ格式转换\n
*/
LQ_INLINE LQ_UI_32BIT LQ_UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_32BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    if (Q_A > Q_B)
    {
        tmp = ((LQ_I_64BIT)A) >> (Q_A - Q_B);
    }
    else  
    {
        tmp = ((LQ_I_64BIT)A) << (Q_B - Q_A);
    }
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT_POSITIVE_OVER;
        return   (LQ_UI_32BIT)tmp;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT_NEGATIVE_OVER;
        return   (LQ_UI_32BIT)tmp;
    }
    return   (LQ_UI_32BIT)tmp;
}
#endif 

//!<不饱和算法:任意到指定Q格式 函数展开
#if LQ_UNSATURATION_Q_FORMAT_TO_Q_FORMAT_LOADING_MODE==0
/****************************不饱和算法 INT8 Q格式转Q格式算法************************************/
//!<以INT8为基准Q格式转Q格式算法(Q01到Q07)
LQ_I_8BIT LQ_UNSATURATION_INT8_Q_FORMAT_TO_Q_FORMAT(LQ_I_8BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);
/****************************不饱和算法 UINT8 UQ格式转UQ格式算法************************************/
//!<以UINT8为基准UQ格式转UQ格式算法(UQ01到UQ08)
LQ_UI_8BIT LQ_UNSATURATION_UINT8_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_8BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);
/****************************不饱和算法 INT16 Q格式转Q格式算法************************************/
//!<以INT16为基准Q格式转Q格式算法(Q01到Q15)
LQ_I_16BIT LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(LQ_I_16BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);
/****************************不饱和算法 UINT8 UQ格式转UQ格式算法************************************/
//!<以UINT16为基准UQ格式转UQ格式算法(UQ01到UQ16)
LQ_UI_16BIT LQ_UNSATURATION_UINT16_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_16BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);
/****************************不饱和算法 INT32 Q格式转Q格式算法************************************/
//!<以INT32为基准Q格式转Q格式算法(Q01到Q31)
LQ_I_32BIT LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(LQ_I_32BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);
/****************************不饱和算法 UINT32 UQ格式转UQ格式算法************************************/
//!<以UINT32为基准UQ格式转UQ格式算法(UQ01到UQ32)
LQ_UI_32BIT LQ_UNSATURATION_UINT32_UQ_FORMAT_TO_UQ_FORMAT(LQ_UI_32BIT A, LQ_UI_8BIT Q_A, LQ_UI_8BIT Q_B, LQ_ERROR* Lq_Error);

#endif
#endif
