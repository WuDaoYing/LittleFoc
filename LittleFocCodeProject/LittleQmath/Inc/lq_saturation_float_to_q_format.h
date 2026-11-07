#ifndef __LQ_SATURATION_FLOAT_TO_Q_FORMAT_H__
#define __LQ_SATURATION_FLOAT_TO_Q_FORMAT_H__

#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
/**@file      lq_saturation_float_to_q.h
* @brief      LittleQmath的饱和算法浮点转换到Q格式类型
* @details    管理8BIT、16BIT、32BIT的浮点到Q格式类型，包含有函数模式、内联模式、宏展开(饱和失效)。\n
*             饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。
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

//!<浮点转Q格式模式2 宏定义展开(饱和失效)
#if LQ_SATURATION_FLOAT_TO_Q_FORMAT_LOADING_MODE==2
/****************************INT8 饱和算法 浮点转Q格式************************************/
//!<以INT8为基准构建有符号Q格式(Q1到Q7)
#define LQ_SATURATION_INT8_FLOAT_TO_Q7(A,Lq_Error)   ((LQ_I_16BIT)((A)*128))
#define LQ_SATURATION_INT8_FLOAT_TO_Q6(A,Lq_Error)   ((LQ_I_16BIT)((A)*64))
#define LQ_SATURATION_INT8_FLOAT_TO_Q5(A,Lq_Error)   ((LQ_I_16BIT)((A)*32))
#define LQ_SATURATION_INT8_FLOAT_TO_Q4(A,Lq_Error)   ((LQ_I_16BIT)((A)*16))
#define LQ_SATURATION_INT8_FLOAT_TO_Q3(A,Lq_Error)   ((LQ_I_16BIT)((A)*8))
#define LQ_SATURATION_INT8_FLOAT_TO_Q2(A,Lq_Error)   ((LQ_I_16BIT)((A)*4))
#define LQ_SATURATION_INT8_FLOAT_TO_Q1(A,Lq_Error)   ((LQ_I_16BIT)((A)*2))
/****************************UINT8 饱和算法 浮点转UQ格式************************************/
//!<以UINT8为基准构建无符号UQ格式(UQ1到UQ8)
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ8(A,Lq_Error)   ((LQ_UI_16BIT)((A)*256))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ7(A,Lq_Error)   ((LQ_UI_16BIT)((A)*128))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ6(A,Lq_Error)   ((LQ_UI_16BIT)((A)*64))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ5(A,Lq_Error)   ((LQ_UI_16BIT)((A)*32))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ4(A,Lq_Error)   ((LQ_UI_16BIT)((A)*16))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ3(A,Lq_Error)   ((LQ_UI_16BIT)((A)*8))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ2(A,Lq_Error)   ((LQ_UI_16BIT)((A)*4))
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ1(A,Lq_Error)   ((LQ_UI_16BIT)((A)*2))
/****************************INT16 饱和算法 浮点转Q格式************************************/
//!<以INT16为基准构建有符号Q格式(Q1到Q15)
#define LQ_SATURATION_INT16_FLOAT_TO_Q15(A,Lq_Error)   ((LQ_I_32BIT)((A)*32768))
#define LQ_SATURATION_INT16_FLOAT_TO_Q14(A,Lq_Error)   ((LQ_I_32BIT)((A)*16384))
#define LQ_SATURATION_INT16_FLOAT_TO_Q13(A,Lq_Error)   ((LQ_I_32BIT)((A)*8192))
#define LQ_SATURATION_INT16_FLOAT_TO_Q12(A,Lq_Error)   ((LQ_I_32BIT)((A)*4096))
#define LQ_SATURATION_INT16_FLOAT_TO_Q11(A,Lq_Error)   ((LQ_I_32BIT)((A)*2048))
#define LQ_SATURATION_INT16_FLOAT_TO_Q10(A,Lq_Error)   ((LQ_I_32BIT)((A)*1024))
#define LQ_SATURATION_INT16_FLOAT_TO_Q9(A,Lq_Error)   ((LQ_I_32BIT)((A)*512))
#define LQ_SATURATION_INT16_FLOAT_TO_Q8(A,Lq_Error)   ((LQ_I_32BIT)((A)*256))
#define LQ_SATURATION_INT16_FLOAT_TO_Q7(A,Lq_Error)   ((LQ_I_32BIT)((A)*128))
#define LQ_SATURATION_INT16_FLOAT_TO_Q6(A,Lq_Error)   ((LQ_I_32BIT)((A)*64))
#define LQ_SATURATION_INT16_FLOAT_TO_Q5(A,Lq_Error)   ((LQ_I_32BIT)((A)*32))
#define LQ_SATURATION_INT16_FLOAT_TO_Q4(A,Lq_Error)   ((LQ_I_32BIT)((A)*16))
#define LQ_SATURATION_INT16_FLOAT_TO_Q3(A,Lq_Error)   ((LQ_I_32BIT)((A)*8))
#define LQ_SATURATION_INT16_FLOAT_TO_Q2(A,Lq_Error)   ((LQ_I_32BIT)((A)*4))
#define LQ_SATURATION_INT16_FLOAT_TO_Q1(A,Lq_Error)   ((LQ_I_32BIT)((A)*2))
/****************************UINT16 饱和算法 浮点转UQ格式************************************/
//!<以UINT16为基准构建无符号UQ格式(UQ1到UQ16)
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ16(A,Lq_Error)   ((LQ_UI_32BIT)((A)*65536))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ15(A,Lq_Error)   ((LQ_UI_32BIT)((A)*32768))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ14(A,Lq_Error)   ((LQ_UI_32BIT)((A)*16384))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ13(A,Lq_Error)   ((LQ_UI_32BIT)((A)*8192))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ12(A,Lq_Error)   ((LQ_UI_32BIT)((A)*4096))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ11(A,Lq_Error)   ((LQ_UI_32BIT)((A)*2048))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ10(A,Lq_Error)   ((LQ_UI_32BIT)((A)*1024))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ9(A,Lq_Error)   ((LQ_UI_32BIT)((A)*512))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ8(A,Lq_Error)   ((LQ_UI_32BIT)((A)*256))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ7(A,Lq_Error)   ((LQ_UI_32BIT)((A)*128))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ6(A,Lq_Error)   ((LQ_UI_32BIT)((A)*64))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ5(A,Lq_Error)   ((LQ_UI_32BIT)((A)*32))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ4(A,Lq_Error)   ((LQ_UI_32BIT)((A)*16))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ3(A,Lq_Error)   ((LQ_UI_32BIT)((A)*8))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ2(A,Lq_Error)   ((LQ_UI_32BIT)((A)*4))
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ1(A,Lq_Error)   ((LQ_UI_32BIT)((A)*2))
/****************************INT32 饱和算法 浮点转Q格式************************************/
//!<以INT32为基准构建有符号Q格式(Q1到Q31)
#define LQ_SATURATION_INT32_FLOAT_TO_Q31(A,Lq_Error)   ((LQ_I_64BIT)((A)*2147483648))
#define LQ_SATURATION_INT32_FLOAT_TO_Q30(A,Lq_Error)   ((LQ_I_64BIT)((A)*1073741824))
#define LQ_SATURATION_INT32_FLOAT_TO_Q29(A,Lq_Error)   ((LQ_I_64BIT)((A)*536870912))
#define LQ_SATURATION_INT32_FLOAT_TO_Q28(A,Lq_Error)   ((LQ_I_64BIT)((A)*268435456))
#define LQ_SATURATION_INT32_FLOAT_TO_Q27(A,Lq_Error)   ((LQ_I_64BIT)((A)*134217728))
#define LQ_SATURATION_INT32_FLOAT_TO_Q26(A,Lq_Error)   ((LQ_I_64BIT)((A)*67108864))
#define LQ_SATURATION_INT32_FLOAT_TO_Q25(A,Lq_Error)   ((LQ_I_64BIT)((A)*33554432))
#define LQ_SATURATION_INT32_FLOAT_TO_Q24(A,Lq_Error)   ((LQ_I_64BIT)((A)*16777216))
#define LQ_SATURATION_INT32_FLOAT_TO_Q23(A,Lq_Error)   ((LQ_I_64BIT)((A)*8388608))
#define LQ_SATURATION_INT32_FLOAT_TO_Q22(A,Lq_Error)   ((LQ_I_64BIT)((A)*4194304))
#define LQ_SATURATION_INT32_FLOAT_TO_Q21(A,Lq_Error)   ((LQ_I_64BIT)((A)*2097152))
#define LQ_SATURATION_INT32_FLOAT_TO_Q20(A,Lq_Error)   ((LQ_I_64BIT)((A)*1048576))
#define LQ_SATURATION_INT32_FLOAT_TO_Q19(A,Lq_Error)   ((LQ_I_64BIT)((A)*524288))
#define LQ_SATURATION_INT32_FLOAT_TO_Q18(A,Lq_Error)   ((LQ_I_64BIT)((A)*262144))
#define LQ_SATURATION_INT32_FLOAT_TO_Q17(A,Lq_Error)   ((LQ_I_64BIT)((A)*131072))
#define LQ_SATURATION_INT32_FLOAT_TO_Q16(A,Lq_Error)   ((LQ_I_64BIT)((A)*65536))
#define LQ_SATURATION_INT32_FLOAT_TO_Q15(A,Lq_Error)   ((LQ_I_64BIT)((A)*32768))
#define LQ_SATURATION_INT32_FLOAT_TO_Q14(A,Lq_Error)   ((LQ_I_64BIT)((A)*16384))
#define LQ_SATURATION_INT32_FLOAT_TO_Q13(A,Lq_Error)   ((LQ_I_64BIT)((A)*8192))
#define LQ_SATURATION_INT32_FLOAT_TO_Q12(A,Lq_Error)   ((LQ_I_64BIT)((A)*4096))
#define LQ_SATURATION_INT32_FLOAT_TO_Q11(A,Lq_Error)   ((LQ_I_64BIT)((A)*2048))
#define LQ_SATURATION_INT32_FLOAT_TO_Q10(A,Lq_Error)   ((LQ_I_64BIT)((A)*1024))
#define LQ_SATURATION_INT32_FLOAT_TO_Q9(A,Lq_Error)   ((LQ_I_64BIT)((A)*512))
#define LQ_SATURATION_INT32_FLOAT_TO_Q8(A,Lq_Error)   ((LQ_I_64BIT)((A)*256))
#define LQ_SATURATION_INT32_FLOAT_TO_Q7(A,Lq_Error)   ((LQ_I_64BIT)((A)*128))
#define LQ_SATURATION_INT32_FLOAT_TO_Q6(A,Lq_Error)   ((LQ_I_64BIT)((A)*64))
#define LQ_SATURATION_INT32_FLOAT_TO_Q5(A,Lq_Error)   ((LQ_I_64BIT)((A)*32))
#define LQ_SATURATION_INT32_FLOAT_TO_Q4(A,Lq_Error)   ((LQ_I_64BIT)((A)*16))
#define LQ_SATURATION_INT32_FLOAT_TO_Q3(A,Lq_Error)   ((LQ_I_64BIT)((A)*8))
#define LQ_SATURATION_INT32_FLOAT_TO_Q2(A,Lq_Error)   ((LQ_I_64BIT)((A)*4))
#define LQ_SATURATION_INT32_FLOAT_TO_Q1(A,Lq_Error)   ((LQ_I_64BIT)((A)*2))
/****************************UINT32 饱和算法 浮点转UQ格式************************************/
//!<以UINT32为基准构建无符号UQ格式(UQ1到UQ32)
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ32(A,Lq_Error)   ((LQ_UI_64BIT)((A)*4294967296))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ31(A,Lq_Error)   ((LQ_UI_64BIT)((A)*2147483648))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ30(A,Lq_Error)   ((LQ_UI_64BIT)((A)*1073741824))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ29(A,Lq_Error)   ((LQ_UI_64BIT)((A)*536870912))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ28(A,Lq_Error)   ((LQ_UI_64BIT)((A)*268435456))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ27(A,Lq_Error)   ((LQ_UI_64BIT)((A)*134217728))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ26(A,Lq_Error)   ((LQ_UI_64BIT)((A)*67108864))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ25(A,Lq_Error)   ((LQ_UI_64BIT)((A)*33554432))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ24(A,Lq_Error)   ((LQ_UI_64BIT)((A)*16777216))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ23(A,Lq_Error)   ((LQ_UI_64BIT)((A)*8388608))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ22(A,Lq_Error)   ((LQ_UI_64BIT)((A)*4194304))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ21(A,Lq_Error)   ((LQ_UI_64BIT)((A)*2097152))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ20(A,Lq_Error)   ((LQ_UI_64BIT)((A)*1048576))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ19(A,Lq_Error)   ((LQ_UI_64BIT)((A)*524288))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ18(A,Lq_Error)   ((LQ_UI_64BIT)((A)*262144))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ17(A,Lq_Error)   ((LQ_UI_64BIT)((A)*131072))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ16(A,Lq_Error)   ((LQ_UI_64BIT)((A)*65536))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ15(A,Lq_Error)   ((LQ_UI_64BIT)((A)*32768))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ14(A,Lq_Error)   ((LQ_UI_64BIT)((A)*16384))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ13(A,Lq_Error)   ((LQ_UI_64BIT)((A)*8192))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ12(A,Lq_Error)   ((LQ_UI_64BIT)((A)*4096))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ11(A,Lq_Error)   ((LQ_UI_64BIT)((A)*2048))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ10(A,Lq_Error)   ((LQ_UI_64BIT)((A)*1024))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ9(A,Lq_Error)   ((LQ_UI_64BIT)((A)*512))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ8(A,Lq_Error)   ((LQ_UI_64BIT)((A)*256))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ7(A,Lq_Error)   ((LQ_UI_64BIT)((A)*128))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ6(A,Lq_Error)   ((LQ_UI_64BIT)((A)*64))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ5(A,Lq_Error)   ((LQ_UI_64BIT)((A)*32))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ4(A,Lq_Error)   ((LQ_UI_64BIT)((A)*16))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ3(A,Lq_Error)   ((LQ_UI_64BIT)((A)*8))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ2(A,Lq_Error)   ((LQ_UI_64BIT)((A)*4))
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ1(A,Lq_Error)   ((LQ_UI_64BIT)((A)*2))

/****************************INT8 饱和算法 浮点转Q格式(任意Q格式)************************************/
//!<以INT8为基准构建有符号Q格式(Q1到Q7)
#define LQ_SATURATION_INT8_FLOAT_TO_Q(A,Q_A,Lq_Error)   ((LQ_I_16BIT)((A)*((LQ_UI_8BIT)1<<Q_A)))
/****************************UINT8 饱和算法 浮点转UQ格式(任意Q格式)************************************/
//!<以UINT8为基准构建无符号UQ格式(UQ1到UQ8)
#define LQ_SATURATION_UINT8_FLOAT_TO_UQ(A,Q_A,Lq_Error)   ((LQ_UI_16BIT)((A)*((LQ_UI_8BIT)1<<Q_A)))
/****************************INT16 饱和算法 浮点转Q格式(任意Q格式)************************************/
//!<以INT16为基准构建有符号Q格式(Q1到Q15)
#define LQ_SATURATION_INT16_FLOAT_TO_Q(A,Q_A,Lq_Error)   ((LQ_I_32BIT)((A)*((LQ_UI_16BIT)1<<Q_A)))
/****************************UINT16 饱和算法 浮点转UQ格式(任意Q格式)************************************/
//!<以UINT16为基准构建无符号UQ格式(UQ1到UQ16)
#define LQ_SATURATION_UINT16_FLOAT_TO_UQ(A,Q_A,Lq_Error)   ((LQ_UI_32BIT)((A)*((LQ_UI_16BIT)1<<Q_A)))
/****************************INT32 饱和算法 浮点转Q格式(任意Q格式)************************************/
//!<以INT32为基准构建有符号Q格式(Q1到Q31)
#define LQ_SATURATION_INT32_FLOAT_TO_Q(A,Q_A,Lq_Error)   ((LQ_I_64BIT)((A)*((LQ_UI_32BIT)1<<Q_A)))
/****************************UINT32 饱和算法 浮点转UQ格式(任意Q格式)************************************/
//!<以UINT32为基准构建无符号UQ格式(UQ1到UQ32)
#define LQ_SATURATION_UINT32_FLOAT_TO_UQ(A,Q_A,Lq_Error)   ((LQ_UI_64BIT)((A)*((LQ_UI_32BIT)1<<Q_A)))
#endif 




#if LQ_SATURATION_FLOAT_TO_Q_FORMAT_LOADING_MODE ==1
/**@brief 饱和算法INT8的有符号浮点转Q7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q7格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q7格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q7 a=LQ_SATURATION_INT8_FLOAT_TO_Q7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q7 LQ_SATURATION_INT8_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -1.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 128);
}
/**@brief 饱和算法INT8的有符号浮点转Q6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q6格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q6格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q6 a=LQ_SATURATION_INT8_FLOAT_TO_Q6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q6 LQ_SATURATION_INT8_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -2.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 64);
}
/**@brief 饱和算法INT8的有符号浮点转Q5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q5格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q5格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q5 a=LQ_SATURATION_INT8_FLOAT_TO_Q5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q5 LQ_SATURATION_INT8_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -4.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 32);
}
/**@brief 饱和算法INT8的有符号浮点转Q4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q4格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q4格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q4 a=LQ_SATURATION_INT8_FLOAT_TO_Q4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q4 LQ_SATURATION_INT8_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -8.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 16);
}
/**@brief 饱和算法INT8的有符号浮点转Q3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q3格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q3格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q3 a=LQ_SATURATION_INT8_FLOAT_TO_Q3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q3 LQ_SATURATION_INT8_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -16.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 8);
}
/**@brief 饱和算法INT8的有符号浮点转Q2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q2格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q2格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q2 a=LQ_SATURATION_INT8_FLOAT_TO_Q2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q2 LQ_SATURATION_INT8_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -32.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 4);
}
/**@brief 饱和算法INT8的有符号浮点转Q1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q1格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q1格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q1 a=LQ_SATURATION_INT8_FLOAT_TO_Q1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q7  INT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q6  INT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q5  INT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q4  INT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q3  INT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q2  INT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_FLOAT_TO_Q1  INT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q1 LQ_SATURATION_INT8_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -64.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_8BIT)((A) * 2);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ8格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q8 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ8(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ8 LQ_SATURATION_UINT8_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.996093750000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 256);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q7 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ7 LQ_SATURATION_UINT8_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 128);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q6 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ6 LQ_SATURATION_UINT8_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 64);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q5 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ5 LQ_SATURATION_UINT8_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 32);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q4 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ4 LQ_SATURATION_UINT8_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 16);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q3 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ3 LQ_SATURATION_UINT8_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 8);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q2 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ2 LQ_SATURATION_UINT8_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 4);
}
/**@brief  饱和算法UINT8的无符号浮点转UQ1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q1 a=LQ_SATURATION_UINT8_FLOAT_TO_UQ1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ8  UINT8 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ7  UINT8 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ6  UINT8 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ5  UINT8 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ4  UINT8 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ3  UINT8 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ2  UINT8 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_FLOAT_TO_UQ1  UINT8 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ1 LQ_SATURATION_UINT8_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_8BIT)((A) * 2);
}
/**@brief 饱和算法INT16的有符号浮点转Q15格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q15格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q15_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q15格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q15_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q15格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q15 a=LQ_SATURATION_INT16_FLOAT_TO_Q15(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q15 LQ_SATURATION_INT16_FLOAT_TO_Q15(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.999969482422f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q15_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -1.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q15_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 32768);
}
/**@brief 饱和算法INT16的有符号浮点转Q14格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q14格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q14_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q14格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q14_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q14格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q14 a=LQ_SATURATION_INT16_FLOAT_TO_Q14(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q14 LQ_SATURATION_INT16_FLOAT_TO_Q14(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.999938964844f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q14_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -2.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q14_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 16384);
}
/**@brief 饱和算法INT16的有符号浮点转Q13格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q13格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q13_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q13格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q13_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q13格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q13 a=LQ_SATURATION_INT16_FLOAT_TO_Q13(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q13 LQ_SATURATION_INT16_FLOAT_TO_Q13(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.999877929688f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q13_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -4.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q13_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 8192);
}
/**@brief 饱和算法INT16的有符号浮点转Q12格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q12格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q12_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q12格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q12_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q12格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q12 a=LQ_SATURATION_INT16_FLOAT_TO_Q12(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q12 LQ_SATURATION_INT16_FLOAT_TO_Q12(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.999755859375f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q12_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -8.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q12_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 4096);
}
/**@brief 饱和算法INT16的有符号浮点转Q11格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q11格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q11_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q11格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q11_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q11格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q11 a=LQ_SATURATION_INT16_FLOAT_TO_Q11(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q11 LQ_SATURATION_INT16_FLOAT_TO_Q11(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.999511718750f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q11_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -16.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q11_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 2048);
}
/**@brief 饱和算法INT16的有符号浮点转Q10格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q10格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q10_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q10格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q10_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q10格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q10 a=LQ_SATURATION_INT16_FLOAT_TO_Q10(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q10 LQ_SATURATION_INT16_FLOAT_TO_Q10(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.999023437500f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q10_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -32.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q10_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 1024);
}
/**@brief 饱和算法INT16的有符号浮点转Q9格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q9格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q9_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q9格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q9_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q9格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q9 a=LQ_SATURATION_INT16_FLOAT_TO_Q9(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q9 LQ_SATURATION_INT16_FLOAT_TO_Q9(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.998046875000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q9_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -64.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q9_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 512);
}
/**@brief 饱和算法INT16的有符号浮点转Q8格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128.000000000000)到(127.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q8格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q8_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q8格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q8_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q8格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q8 a=LQ_SATURATION_INT16_FLOAT_TO_Q8(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q8 LQ_SATURATION_INT16_FLOAT_TO_Q8(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127.996093750000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q8_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -128.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q8_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 256);
}
/**@brief 饱和算法INT16的有符号浮点转Q7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256.000000000000)到(255.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q7格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q7格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q7 a=LQ_SATURATION_INT16_FLOAT_TO_Q7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q7 LQ_SATURATION_INT16_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -256.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 128);
}
/**@brief 饱和算法INT16的有符号浮点转Q6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512.000000000000)到(511.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q6格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q6格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q6 a=LQ_SATURATION_INT16_FLOAT_TO_Q6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q6 LQ_SATURATION_INT16_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -512.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 64);
}
/**@brief 饱和算法INT16的有符号浮点转Q5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024.000000000000)到(1023.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q5格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q5格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q5 a=LQ_SATURATION_INT16_FLOAT_TO_Q5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q5 LQ_SATURATION_INT16_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -1024.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 32);
}
/**@brief 饱和算法INT16的有符号浮点转Q4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048.000000000000)到(2047.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q4格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q4格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q4 a=LQ_SATURATION_INT16_FLOAT_TO_Q4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q4 LQ_SATURATION_INT16_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -2048.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 16);
}
/**@brief 饱和算法INT16的有符号浮点转Q3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096.000000000000)到(4095.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q3格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q3格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q3 a=LQ_SATURATION_INT16_FLOAT_TO_Q3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q3 LQ_SATURATION_INT16_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -4096.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 8);
}
/**@brief 饱和算法INT16的有符号浮点转Q2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192.000000000000)到(8191.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q2格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q2格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q2 a=LQ_SATURATION_INT16_FLOAT_TO_Q2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q2 LQ_SATURATION_INT16_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -8192.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 4);
}
/**@brief 饱和算法INT16的有符号浮点转Q1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384.000000000000)到(16383.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16中Q1格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16中Q1格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q1 a=LQ_SATURATION_INT16_FLOAT_TO_Q1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q15  INT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q14  INT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q13  INT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q12  INT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q11  INT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q10  INT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q9  INT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q8  INT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q7  INT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q6  INT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q5  INT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q4  INT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q3  INT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q2  INT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_FLOAT_TO_Q1  INT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q1 LQ_SATURATION_INT16_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -16384.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_16BIT)((A) * 2);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ16格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.999984741211)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ16格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ16_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ16_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q16 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ16(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ16 LQ_SATURATION_UINT16_FLOAT_TO_UQ16(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.999984741211f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ16_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ16_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 65536);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ15格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ15格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ15_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ15_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q15 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ15(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ15 LQ_SATURATION_UINT16_FLOAT_TO_UQ15(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.999969482422f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ15_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ15_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 32768);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ14格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ14格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ14_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ14_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q14 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ14(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ14 LQ_SATURATION_UINT16_FLOAT_TO_UQ14(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.999938964844f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ14_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ14_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 16384);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ13格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ13格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ13_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ13_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q13 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ13(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ13 LQ_SATURATION_UINT16_FLOAT_TO_UQ13(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.999877929688f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ13_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ13_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 8192);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ12格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ12格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ12_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ12_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q12 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ12(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ12 LQ_SATURATION_UINT16_FLOAT_TO_UQ12(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.999755859375f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ12_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ12_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 4096);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ11格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ11格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ11_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ11_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q11 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ11(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ11 LQ_SATURATION_UINT16_FLOAT_TO_UQ11(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.999511718750f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ11_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ11_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 2048);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ10格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ10格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ10_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ10_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q10 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ10(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ10 LQ_SATURATION_UINT16_FLOAT_TO_UQ10(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.999023437500f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ10_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ10_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 1024);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ9格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ9格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ9_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ9_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q9 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ9(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ9 LQ_SATURATION_UINT16_FLOAT_TO_UQ9(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127.998046875000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ9_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ9_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 512);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ8格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q8 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ8(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ8 LQ_SATURATION_UINT16_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255.996093750000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 256);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q7 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ7 LQ_SATURATION_UINT16_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 128);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q6 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ6 LQ_SATURATION_UINT16_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 64);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q5 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ5 LQ_SATURATION_UINT16_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 32);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q4 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ4 LQ_SATURATION_UINT16_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 16);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q3 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ3 LQ_SATURATION_UINT16_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 8);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q2 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ2 LQ_SATURATION_UINT16_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 4);
}
/**@brief  饱和算法UINT16的无符号浮点转UQ1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q1 a=LQ_SATURATION_UINT16_FLOAT_TO_UQ1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ16  UINT16 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ15  UINT16 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ14  UINT16 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ13  UINT16 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ12  UINT16 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ11  UINT16 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ10  UINT16 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ9  UINT16 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ8  UINT16 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ7  UINT16 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ6  UINT16 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ5  UINT16 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ4  UINT16 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ3  UINT16 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ2  UINT16 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_FLOAT_TO_UQ1  UINT16 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ1 LQ_SATURATION_UINT16_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_16BIT)((A) * 2);
}
/**@brief 饱和算法INT32的有符号浮点转Q31格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.999999999534)。\n
*          表达的小数精度:(0.000000000466)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q31格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q31_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q31格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q31_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q31格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q31 a=LQ_SATURATION_INT32_FLOAT_TO_Q31(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q31 LQ_SATURATION_INT32_FLOAT_TO_Q31(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.999999999534f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q31_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -1.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q31_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 2147483648);
}
/**@brief 饱和算法INT32的有符号浮点转Q30格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.999999999069)。\n
*          表达的小数精度:(0.000000000931)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q30格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q30_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q30格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q30_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q30格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q30 a=LQ_SATURATION_INT32_FLOAT_TO_Q30(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q30 LQ_SATURATION_INT32_FLOAT_TO_Q30(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.999999999069f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q30_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -2.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q30_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 1073741824);
}
/**@brief 饱和算法INT32的有符号浮点转Q29格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.999999998137)。\n
*          表达的小数精度:(0.000000001863)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q29格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q29_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q29格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q29_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q29格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q29 a=LQ_SATURATION_INT32_FLOAT_TO_Q29(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q29 LQ_SATURATION_INT32_FLOAT_TO_Q29(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.999999998137f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q29_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -4.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q29_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 536870912);
}
/**@brief 饱和算法INT32的有符号浮点转Q28格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.999999996275)。\n
*          表达的小数精度:(0.000000003725)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q28格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q28_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q28格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q28_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q28格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q28 a=LQ_SATURATION_INT32_FLOAT_TO_Q28(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q28 LQ_SATURATION_INT32_FLOAT_TO_Q28(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.999999996275f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q28_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -8.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q28_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 268435456);
}
/**@brief 饱和算法INT32的有符号浮点转Q27格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.999999992549)。\n
*          表达的小数精度:(0.000000007451)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q27格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q27_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q27格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q27_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q27格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q27 a=LQ_SATURATION_INT32_FLOAT_TO_Q27(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q27 LQ_SATURATION_INT32_FLOAT_TO_Q27(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.999999992549f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q27_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -16.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q27_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 134217728);
}
/**@brief 饱和算法INT32的有符号浮点转Q26格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.999999985099)。\n
*          表达的小数精度:(0.000000014901)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q26格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q26_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q26格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q26_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q26格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q26 a=LQ_SATURATION_INT32_FLOAT_TO_Q26(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q26 LQ_SATURATION_INT32_FLOAT_TO_Q26(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.999999985099f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q26_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -32.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q26_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 67108864);
}
/**@brief 饱和算法INT32的有符号浮点转Q25格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.999999970198)。\n
*          表达的小数精度:(0.000000029802)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q25格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q25_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q25格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q25_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q25格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q25 a=LQ_SATURATION_INT32_FLOAT_TO_Q25(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q25 LQ_SATURATION_INT32_FLOAT_TO_Q25(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.999999970198f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q25_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -64.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q25_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 33554432);
}
/**@brief 饱和算法INT32的有符号浮点转Q24格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128.000000000000)到(127.999999940395)。\n
*          表达的小数精度:(0.000000059605)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q24格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q24_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q24格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q24_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q24格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q24 a=LQ_SATURATION_INT32_FLOAT_TO_Q24(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q24 LQ_SATURATION_INT32_FLOAT_TO_Q24(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127.999999940395f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q24_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -128.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q24_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 16777216);
}
/**@brief 饱和算法INT32的有符号浮点转Q23格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256.000000000000)到(255.999999880791)。\n
*          表达的小数精度:(0.000000119209)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q23格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q23_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q23格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q23_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q23格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q23 a=LQ_SATURATION_INT32_FLOAT_TO_Q23(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q23 LQ_SATURATION_INT32_FLOAT_TO_Q23(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255.999999880791f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q23_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -256.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q23_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 8388608);
}
/**@brief 饱和算法INT32的有符号浮点转Q22格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512.000000000000)到(511.999999761581)。\n
*          表达的小数精度:(0.000000238419)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q22格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q22_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q22格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q22_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q22格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q22 a=LQ_SATURATION_INT32_FLOAT_TO_Q22(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q22 LQ_SATURATION_INT32_FLOAT_TO_Q22(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511.999999761581f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q22_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -512.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q22_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 4194304);
}
/**@brief 饱和算法INT32的有符号浮点转Q21格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024.000000000000)到(1023.999999523163)。\n
*          表达的小数精度:(0.000000476837)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q21格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q21_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q21格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q21_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q21格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q21 a=LQ_SATURATION_INT32_FLOAT_TO_Q21(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q21 LQ_SATURATION_INT32_FLOAT_TO_Q21(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023.999999523163f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q21_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -1024.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q21_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 2097152);
}
/**@brief 饱和算法INT32的有符号浮点转Q20格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048.000000000000)到(2047.999999046326)。\n
*          表达的小数精度:(0.000000953674)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q20格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q20_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q20格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q20_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q20格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q20 a=LQ_SATURATION_INT32_FLOAT_TO_Q20(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q20 LQ_SATURATION_INT32_FLOAT_TO_Q20(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047.999999046326f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q20_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -2048.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q20_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 1048576);
}
/**@brief 饱和算法INT32的有符号浮点转Q19格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096.000000000000)到(4095.999998092651)。\n
*          表达的小数精度:(0.000001907349)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q19格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q19_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q19格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q19_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q19格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q19 a=LQ_SATURATION_INT32_FLOAT_TO_Q19(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q19 LQ_SATURATION_INT32_FLOAT_TO_Q19(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095.999998092651f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q19_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -4096.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q19_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 524288);
}
/**@brief 饱和算法INT32的有符号浮点转Q18格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192.000000000000)到(8191.999996185303)。\n
*          表达的小数精度:(0.000003814697)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q18格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q18_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q18格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q18_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q18格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q18 a=LQ_SATURATION_INT32_FLOAT_TO_Q18(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q18 LQ_SATURATION_INT32_FLOAT_TO_Q18(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191.999996185303f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q18_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -8192.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q18_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 262144);
}
/**@brief 饱和算法INT32的有符号浮点转Q17格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384.000000000000)到(16383.999992370605)。\n
*          表达的小数精度:(0.000007629395)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q17格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q17_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q17格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q17_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q17格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q17 a=LQ_SATURATION_INT32_FLOAT_TO_Q17(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q17 LQ_SATURATION_INT32_FLOAT_TO_Q17(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383.999992370605f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q17_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -16384.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q17_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 131072);
}
/**@brief 饱和算法INT32的有符号浮点转Q16格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32768.000000000000)到(32767.999984741211)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q16格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q16_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q16格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q16_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q16格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q16 a=LQ_SATURATION_INT32_FLOAT_TO_Q16(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q16 LQ_SATURATION_INT32_FLOAT_TO_Q16(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767.999984741211f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q16_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -32768.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q16_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 65536);
}
/**@brief 饱和算法INT32的有符号浮点转Q15格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-65536.000000000000)到(65535.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q15格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q15_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q15格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q15_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q15格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q15 a=LQ_SATURATION_INT32_FLOAT_TO_Q15(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q15 LQ_SATURATION_INT32_FLOAT_TO_Q15(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 65535.999969482422f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q15_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -65536.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q15_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 32768);
}
/**@brief 饱和算法INT32的有符号浮点转Q14格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-131072.000000000000)到(131071.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q14格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q14_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q14格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q14_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q14格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q14 a=LQ_SATURATION_INT32_FLOAT_TO_Q14(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q14 LQ_SATURATION_INT32_FLOAT_TO_Q14(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 131071.999938964844f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q14_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -131072.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q14_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 16384);
}
/**@brief 饱和算法INT32的有符号浮点转Q13格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-262144.000000000000)到(262143.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q13格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q13_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q13格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q13_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q13格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q13 a=LQ_SATURATION_INT32_FLOAT_TO_Q13(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q13 LQ_SATURATION_INT32_FLOAT_TO_Q13(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 262143.999877929688f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q13_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -262144.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q13_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 8192);
}
/**@brief 饱和算法INT32的有符号浮点转Q12格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-524288.000000000000)到(524287.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q12格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q12_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q12格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q12_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q12格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q12 a=LQ_SATURATION_INT32_FLOAT_TO_Q12(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q12 LQ_SATURATION_INT32_FLOAT_TO_Q12(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 524287.999755859375f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q12_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -524288.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q12_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 4096);
}
/**@brief 饱和算法INT32的有符号浮点转Q11格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1048576.000000000000)到(1048575.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q11格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q11_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q11格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q11_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q11格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q11 a=LQ_SATURATION_INT32_FLOAT_TO_Q11(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q11 LQ_SATURATION_INT32_FLOAT_TO_Q11(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1048575.999511718750f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q11_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -1048576.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q11_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 2048);
}
/**@brief 饱和算法INT32的有符号浮点转Q10格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2097152.000000000000)到(2097151.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q10格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q10_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q10格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q10_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q10格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q10 a=LQ_SATURATION_INT32_FLOAT_TO_Q10(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q10 LQ_SATURATION_INT32_FLOAT_TO_Q10(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2097151.999023437500f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q10_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -2097152.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q10_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 1024);
}
/**@brief 饱和算法INT32的有符号浮点转Q9格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4194304.000000000000)到(4194303.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q9格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q9_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q9格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q9_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q9格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q9 a=LQ_SATURATION_INT32_FLOAT_TO_Q9(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q9 LQ_SATURATION_INT32_FLOAT_TO_Q9(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4194303.998046875000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q9_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -4194304.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q9_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 512);
}
/**@brief 饱和算法INT32的有符号浮点转Q8格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8388608.000000000000)到(8388607.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q8格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q8_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q8格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q8_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q8格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q8 a=LQ_SATURATION_INT32_FLOAT_TO_Q8(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q8 LQ_SATURATION_INT32_FLOAT_TO_Q8(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8388607.996093750000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q8_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -8388608.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q8_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 256);
}
/**@brief 饱和算法INT32的有符号浮点转Q7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16777216.000000000000)到(16777215.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q7格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q7格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q7 a=LQ_SATURATION_INT32_FLOAT_TO_Q7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q7 LQ_SATURATION_INT32_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16777215.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -16777216.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 128);
}
/**@brief 饱和算法INT32的有符号浮点转Q6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-33554432.000000000000)到(33554431.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q6格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q6格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q6 a=LQ_SATURATION_INT32_FLOAT_TO_Q6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q6 LQ_SATURATION_INT32_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 33554431.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -33554432.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 64);
}
/**@brief 饱和算法INT32的有符号浮点转Q5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-67108864.000000000000)到(67108863.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q5格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q5格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q5 a=LQ_SATURATION_INT32_FLOAT_TO_Q5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q5 LQ_SATURATION_INT32_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 67108863.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -67108864.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 32);
}
/**@brief 饱和算法INT32的有符号浮点转Q4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-134217728.000000000000)到(134217727.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q4格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q4格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q4 a=LQ_SATURATION_INT32_FLOAT_TO_Q4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q4 LQ_SATURATION_INT32_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 134217727.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -134217728.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 16);
}
/**@brief 饱和算法INT32的有符号浮点转Q3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-268435456.000000000000)到(268435455.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q3格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q3格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q3 a=LQ_SATURATION_INT32_FLOAT_TO_Q3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q3 LQ_SATURATION_INT32_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 268435455.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -268435456.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 8);
}
/**@brief 饱和算法INT32的有符号浮点转Q2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-536870912.000000000000)到(536870911.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q2格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q2格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q2 a=LQ_SATURATION_INT32_FLOAT_TO_Q2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q2 LQ_SATURATION_INT32_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 536870911.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -536870912.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 4);
}
/**@brief 饱和算法INT32的有符号浮点转Q1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1073741824.000000000000)到(1073741823.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32中Q1格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32中Q1格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q1 a=LQ_SATURATION_INT32_FLOAT_TO_Q1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q31  INT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q30  INT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q29  INT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q28  INT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q27  INT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q26  INT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q25  INT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q24  INT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q23  INT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q22  INT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q21  INT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q20  INT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q19  INT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q18  INT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q17  INT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q16  INT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q15  INT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q14  INT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q13  INT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q12  INT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q11  INT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q10  INT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q9  INT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q8  INT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q7  INT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q6  INT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q5  INT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q4  INT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q3  INT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q2  INT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_FLOAT_TO_Q1  INT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q1 LQ_SATURATION_INT32_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1073741823.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -1073741824.000000000000f)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_I_32BIT)((A) * 2);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ32格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.999999999767)。\n
*          表达的小数精度:(0.000000000233)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ32格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ32_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ32_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q32 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ32(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ32 LQ_SATURATION_UINT32_FLOAT_TO_UQ32(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0.999999999767f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ32_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ32_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 4294967296);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ31格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.999999999534)。\n
*          表达的小数精度:(0.000000000466)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ31格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ31_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ31_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q31 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ31(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ31 LQ_SATURATION_UINT32_FLOAT_TO_UQ31(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1.999999999534f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ31_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ31_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 2147483648);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ30格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.999999999069)。\n
*          表达的小数精度:(0.000000000931)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ30格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ30_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ30_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q30 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ30(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ30 LQ_SATURATION_UINT32_FLOAT_TO_UQ30(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3.999999999069f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ30_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ30_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 1073741824);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ29格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.999999998137)。\n
*          表达的小数精度:(0.000000001863)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ29格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ29_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ29_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q29 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ29(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ29 LQ_SATURATION_UINT32_FLOAT_TO_UQ29(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7.999999998137f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ29_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ29_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 536870912);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ28格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.999999996275)。\n
*          表达的小数精度:(0.000000003725)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ28格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ28_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ28_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q28 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ28(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ28 LQ_SATURATION_UINT32_FLOAT_TO_UQ28(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15.999999996275f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ28_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ28_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 268435456);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ27格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.999999992549)。\n
*          表达的小数精度:(0.000000007451)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ27格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ27_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ27_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q27 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ27(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ27 LQ_SATURATION_UINT32_FLOAT_TO_UQ27(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31.999999992549f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ27_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ27_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 134217728);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ26格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.999999985099)。\n
*          表达的小数精度:(0.000000014901)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ26格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ26_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ26_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q26 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ26(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ26 LQ_SATURATION_UINT32_FLOAT_TO_UQ26(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63.999999985099f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ26_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ26_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 67108864);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ25格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.999999970198)。\n
*          表达的小数精度:(0.000000029802)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ25格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ25_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ25_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q25 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ25(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ25 LQ_SATURATION_UINT32_FLOAT_TO_UQ25(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127.999999970198f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ25_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ25_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 33554432);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ24格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255.999999940395)。\n
*          表达的小数精度:(0.000000059605)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ24格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ24_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ24_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q24 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ24(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ24 LQ_SATURATION_UINT32_FLOAT_TO_UQ24(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255.999999940395f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ24_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ24_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 16777216);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ23格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511.999999880791)。\n
*          表达的小数精度:(0.000000119209)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ23格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ23_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ23_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q23 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ23(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ23 LQ_SATURATION_UINT32_FLOAT_TO_UQ23(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511.999999880791f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ23_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ23_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 8388608);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ22格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023.999999761581)。\n
*          表达的小数精度:(0.000000238419)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ22格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ22_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ22_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q22 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ22(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ22 LQ_SATURATION_UINT32_FLOAT_TO_UQ22(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023.999999761581f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ22_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ22_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 4194304);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ21格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047.999999523163)。\n
*          表达的小数精度:(0.000000476837)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ21格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ21_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ21_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q21 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ21(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ21 LQ_SATURATION_UINT32_FLOAT_TO_UQ21(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047.999999523163f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ21_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ21_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 2097152);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ20格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095.999999046326)。\n
*          表达的小数精度:(0.000000953674)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ20格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ20_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ20_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q20 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ20(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ20 LQ_SATURATION_UINT32_FLOAT_TO_UQ20(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095.999999046326f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ20_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ20_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 1048576);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ19格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191.999998092651)。\n
*          表达的小数精度:(0.000001907349)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ19格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ19_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ19_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q19 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ19(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ19 LQ_SATURATION_UINT32_FLOAT_TO_UQ19(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191.999998092651f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ19_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ19_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 524288);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ18格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383.999996185303)。\n
*          表达的小数精度:(0.000003814697)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ18格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ18_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ18_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q18 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ18(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ18 LQ_SATURATION_UINT32_FLOAT_TO_UQ18(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383.999996185303f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ18_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ18_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 262144);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ17格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767.999992370605)。\n
*          表达的小数精度:(0.000007629395)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ17格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ17_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ17_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q17 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ17(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ17 LQ_SATURATION_UINT32_FLOAT_TO_UQ17(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767.999992370605f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ17_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ17_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 131072);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ16格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(65535.999984741211)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ16格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ16_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ16_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q16 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ16(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ16 LQ_SATURATION_UINT32_FLOAT_TO_UQ16(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 65535.999984741211f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ16_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ16_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 65536);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ15格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(131071.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ15格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ15_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ15_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q15 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ15(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ15 LQ_SATURATION_UINT32_FLOAT_TO_UQ15(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 131071.999969482422f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ15_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ15_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 32768);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ14格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(262143.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ14格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ14_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ14_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q14 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ14(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ14 LQ_SATURATION_UINT32_FLOAT_TO_UQ14(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 262143.999938964844f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ14_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ14_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 16384);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ13格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(524287.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ13格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ13_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ13_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q13 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ13(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ13 LQ_SATURATION_UINT32_FLOAT_TO_UQ13(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 524287.999877929688f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ13_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ13_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 8192);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ12格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1048575.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ12格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ12_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ12_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q12 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ12(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ12 LQ_SATURATION_UINT32_FLOAT_TO_UQ12(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1048575.999755859375f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ12_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ12_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 4096);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ11格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2097151.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ11格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ11_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ11_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q11 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ11(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ11 LQ_SATURATION_UINT32_FLOAT_TO_UQ11(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2097151.999511718750f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ11_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ11_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 2048);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ10格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4194303.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ10格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ10_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ10_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q10 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ10(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ10 LQ_SATURATION_UINT32_FLOAT_TO_UQ10(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4194303.999023437500f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ10_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ10_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 1024);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ9格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8388607.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ9格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ9_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ9_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q9 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ9(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ9 LQ_SATURATION_UINT32_FLOAT_TO_UQ9(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8388607.998046875000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ9_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ9_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 512);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ8格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16777215.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q8 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ8(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ8 LQ_SATURATION_UINT32_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16777215.996093750000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ8_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ8_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 256);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ7格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(33554431.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q7 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ7(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ7 LQ_SATURATION_UINT32_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 33554431.992187500000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ7_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ7_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 128);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ6格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(67108863.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q6 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ6(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ6 LQ_SATURATION_UINT32_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 67108863.984375000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ6_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ6_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 64);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ5格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(134217727.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q5 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ5(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ5 LQ_SATURATION_UINT32_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 134217727.968750000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ5_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ5_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 32);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ4格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(268435455.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q4 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ4(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ4 LQ_SATURATION_UINT32_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 268435455.937500000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ4_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ4_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 16);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ3格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(536870911.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q3 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ3(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ3 LQ_SATURATION_UINT32_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 536870911.875000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ3_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ3_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 8);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ2格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1073741823.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q2 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ2(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ2 LQ_SATURATION_UINT32_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1073741823.750000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ2_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ2_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 4);
}
/**@brief  饱和算法UINT32的无符号浮点转UQ1格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2147483647.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q1 a=LQ_SATURATION_UINT32_FLOAT_TO_UQ1(0.7,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ32  UINT32 浮点转Q32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ31  UINT32 浮点转Q31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ30  UINT32 浮点转Q30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ29  UINT32 浮点转Q29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ28  UINT32 浮点转Q28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ27  UINT32 浮点转Q27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ26  UINT32 浮点转Q26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ25  UINT32 浮点转Q25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ24  UINT32 浮点转Q24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ23  UINT32 浮点转Q23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ22  UINT32 浮点转Q22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ21  UINT32 浮点转Q21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ20  UINT32 浮点转Q20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ19  UINT32 浮点转Q19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ18  UINT32 浮点转Q18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ17  UINT32 浮点转Q17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ16  UINT32 浮点转Q16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ15  UINT32 浮点转Q15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ14  UINT32 浮点转Q14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ13  UINT32 浮点转Q13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ12  UINT32 浮点转Q12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ11  UINT32 浮点转Q11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ10  UINT32 浮点转Q10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ9  UINT32 浮点转Q9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ8  UINT32 浮点转Q8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ7  UINT32 浮点转Q7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ6  UINT32 浮点转Q6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ5  UINT32 浮点转Q5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ4  UINT32 浮点转Q4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ3  UINT32 浮点转Q3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ2  UINT32 浮点转Q2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_FLOAT_TO_UQ1  UINT32 浮点转Q1格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ1 LQ_SATURATION_UINT32_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2147483647.500000000000f)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ1_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ1_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return (LQ_UI_32BIT)((A) * 2);
}
/**@brief 饱和算法INT8的有符号浮点转Q格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT8_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT8中Q格式中浮点正向溢出\n
*                        SATURATION_INT8_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT8中Q格式中浮点负向溢出\n
* @par     转换0.7到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q a=LQ_SATURATION_INT8_FLOAT_TO_Q(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_FLOAT_TO_Q  INT8 浮点转Q格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT8_Q LQ_SATURATION_INT8_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_8BIT)1 << (7 - Q_A)) - (1.0f / ((LQ_UI_8BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -((LQ_I_8BIT)1 << (7 - Q_A))) //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((A) * ((LQ_UI_8BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT8的有符号浮点转UQ格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT8_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT8_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT8中UQ格式中浮点负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_UQ a=LQ_SATURATION_UINT8_FLOAT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_FLOAT_TO_UQ  UINT8 浮点转UQ格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT8_UQ LQ_SATURATION_UINT8_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_8BIT)1 << (8 - Q_A)) - (1.0f / ((LQ_UI_8BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_8BIT)((A) * ((LQ_UI_8BIT)1 << (Q_A))));
}
/**@brief 饱和算法INT16的有符号浮点转Q格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT16_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT16 中Q格式中浮点正向溢出\n
*                        SATURATION_INT16_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT16 中Q格式中浮点负向溢出\n
* @par     转换0.7到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q a=LQ_SATURATION_INT16_FLOAT_TO_Q(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_FLOAT_TO_Q  INT8 浮点转Q格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT16_Q LQ_SATURATION_INT16_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_16BIT)1 << (15 - Q_A)) - (1.0f / ((LQ_UI_16BIT)1 << (Q_A)))))       //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -((LQ_I_16BIT)1 << (15 - Q_A)))       //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((A) * ((LQ_UI_16BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT16的有符号浮点转UQ格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT16_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT16_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT16中UQ格式中浮点负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_UQ a=LQ_SATURATION_UINT16_FLOAT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_FLOAT_TO_UQ  UINT8 浮点转UQ格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT16_UQ LQ_SATURATION_UINT16_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_16BIT)1 << (16 - Q_A)) - (1.0f / ((LQ_UI_16BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_16BIT)((A) * ((LQ_UI_16BIT)1 << (Q_A))));
}
/**@brief 饱和算法INT32的有符号浮点转Q格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT32_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转INT32 中Q格式中浮点正向溢出\n
*                        SATURATION_INT32_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转INT32 中Q格式中浮点负向溢出\n
* @par     转换0.7到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q a=LQ_SATURATION_INT32_FLOAT_TO_Q(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_FLOAT_TO_Q  INT8 浮点转Q格式,附带溢出检测\n
*/
LQ_INLINE LQ_INT32_Q LQ_SATURATION_INT32_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_32BIT)1 << (31 - Q_A)) - (1.0f / ((LQ_UI_32BIT)1 << (Q_A)))))       //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -((LQ_I_32BIT)1 << (31 - Q_A)))       //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_FLOAT_TO_Q_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((A) * ((LQ_UI_32BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT32的有符号浮点转UQ格式
* @details 能对输入浮点进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT32_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点正向溢出\n
*                        SATURATION_UINT32_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER 在饱和算法浮点转UINT32中UQ格式中浮点负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_UQ a=LQ_SATURATION_UINT32_FLOAT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_FLOAT_TO_UQ  UINT8 浮点转UQ格式,附带溢出检测\n
*/
LQ_INLINE LQ_UINT32_UQ LQ_SATURATION_UINT32_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_32BIT)1 << (32 - Q_A)) - (1.0f / ((LQ_UI_32BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ_FORMAT_FLOAT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_FLOAT_TO_UQ_FORMAT_FLOAT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_32BIT)((A) * ((LQ_UI_32BIT)1 << (Q_A))));
}

#endif



#if LQ_SATURATION_FLOAT_TO_Q_FORMAT_LOADING_MODE == 0
/****************************INT8 饱和算法 浮点转Q格式************************************/
//!<以INT8为基准构建有符号Q格式(Q1到Q7)
LQ_INT8_Q7 LQ_SATURATION_INT8_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q6 LQ_SATURATION_INT8_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q5 LQ_SATURATION_INT8_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q4 LQ_SATURATION_INT8_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q3 LQ_SATURATION_INT8_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q2 LQ_SATURATION_INT8_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT8_Q1 LQ_SATURATION_INT8_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************UINT8 饱和算法 浮点转UQ格式************************************/
//!<以UINT8为基准构建无符号UQ格式(UQ1到UQ8)
LQ_UINT8_UQ8 LQ_SATURATION_UINT8_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ7 LQ_SATURATION_UINT8_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ6 LQ_SATURATION_UINT8_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ5 LQ_SATURATION_UINT8_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ4 LQ_SATURATION_UINT8_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ3 LQ_SATURATION_UINT8_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ2 LQ_SATURATION_UINT8_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ1 LQ_SATURATION_UINT8_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************INT16 饱和算法 浮点转Q格式************************************/
//!<以INT16为基准构建有符号Q格式(Q1到Q15)
LQ_INT16_Q15 LQ_SATURATION_INT16_FLOAT_TO_Q15(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q14 LQ_SATURATION_INT16_FLOAT_TO_Q14(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q13 LQ_SATURATION_INT16_FLOAT_TO_Q13(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q12 LQ_SATURATION_INT16_FLOAT_TO_Q12(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q11 LQ_SATURATION_INT16_FLOAT_TO_Q11(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q10 LQ_SATURATION_INT16_FLOAT_TO_Q10(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q9 LQ_SATURATION_INT16_FLOAT_TO_Q9(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q8 LQ_SATURATION_INT16_FLOAT_TO_Q8(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q7 LQ_SATURATION_INT16_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q6 LQ_SATURATION_INT16_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q5 LQ_SATURATION_INT16_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q4 LQ_SATURATION_INT16_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q3 LQ_SATURATION_INT16_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q2 LQ_SATURATION_INT16_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT16_Q1 LQ_SATURATION_INT16_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************UINT16饱和算法 浮点转UQ格式************************************/
//!<以UINT16为基准构建无符号UQ格式(UQ1到UQ16)
LQ_UINT16_UQ16 LQ_SATURATION_UINT16_FLOAT_TO_UQ16(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ15 LQ_SATURATION_UINT16_FLOAT_TO_UQ15(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ14 LQ_SATURATION_UINT16_FLOAT_TO_UQ14(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ13 LQ_SATURATION_UINT16_FLOAT_TO_UQ13(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ12 LQ_SATURATION_UINT16_FLOAT_TO_UQ12(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ11 LQ_SATURATION_UINT16_FLOAT_TO_UQ11(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ10 LQ_SATURATION_UINT16_FLOAT_TO_UQ10(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ9 LQ_SATURATION_UINT16_FLOAT_TO_UQ9(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ8 LQ_SATURATION_UINT16_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ7 LQ_SATURATION_UINT16_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ6 LQ_SATURATION_UINT16_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ5 LQ_SATURATION_UINT16_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ4 LQ_SATURATION_UINT16_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ3 LQ_SATURATION_UINT16_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ2 LQ_SATURATION_UINT16_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ1 LQ_SATURATION_UINT16_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************INT32 饱和算法 浮点转Q格式************************************/
//!<以INT32为基准构建有符号Q格式(Q1到Q31)
LQ_INT32_Q31 LQ_SATURATION_INT32_FLOAT_TO_Q31(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q30 LQ_SATURATION_INT32_FLOAT_TO_Q30(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q29 LQ_SATURATION_INT32_FLOAT_TO_Q29(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q28 LQ_SATURATION_INT32_FLOAT_TO_Q28(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q27 LQ_SATURATION_INT32_FLOAT_TO_Q27(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q26 LQ_SATURATION_INT32_FLOAT_TO_Q26(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q25 LQ_SATURATION_INT32_FLOAT_TO_Q25(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q24 LQ_SATURATION_INT32_FLOAT_TO_Q24(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q23 LQ_SATURATION_INT32_FLOAT_TO_Q23(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q22 LQ_SATURATION_INT32_FLOAT_TO_Q22(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q21 LQ_SATURATION_INT32_FLOAT_TO_Q21(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q20 LQ_SATURATION_INT32_FLOAT_TO_Q20(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q19 LQ_SATURATION_INT32_FLOAT_TO_Q19(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q18 LQ_SATURATION_INT32_FLOAT_TO_Q18(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q17 LQ_SATURATION_INT32_FLOAT_TO_Q17(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q16 LQ_SATURATION_INT32_FLOAT_TO_Q16(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q15 LQ_SATURATION_INT32_FLOAT_TO_Q15(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q14 LQ_SATURATION_INT32_FLOAT_TO_Q14(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q13 LQ_SATURATION_INT32_FLOAT_TO_Q13(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q12 LQ_SATURATION_INT32_FLOAT_TO_Q12(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q11 LQ_SATURATION_INT32_FLOAT_TO_Q11(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q10 LQ_SATURATION_INT32_FLOAT_TO_Q10(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q9 LQ_SATURATION_INT32_FLOAT_TO_Q9(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q8 LQ_SATURATION_INT32_FLOAT_TO_Q8(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q7 LQ_SATURATION_INT32_FLOAT_TO_Q7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q6 LQ_SATURATION_INT32_FLOAT_TO_Q6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q5 LQ_SATURATION_INT32_FLOAT_TO_Q5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q4 LQ_SATURATION_INT32_FLOAT_TO_Q4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q3 LQ_SATURATION_INT32_FLOAT_TO_Q3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q2 LQ_SATURATION_INT32_FLOAT_TO_Q2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_INT32_Q1 LQ_SATURATION_INT32_FLOAT_TO_Q1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************UINT32 饱和算法 浮点转UQ格式************************************/
//!<以UINT32为基准构建无符号UQ格式(UQ1到UQ32)
LQ_UINT32_UQ32 LQ_SATURATION_UINT32_FLOAT_TO_UQ32(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ31 LQ_SATURATION_UINT32_FLOAT_TO_UQ31(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ30 LQ_SATURATION_UINT32_FLOAT_TO_UQ30(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ29 LQ_SATURATION_UINT32_FLOAT_TO_UQ29(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ28 LQ_SATURATION_UINT32_FLOAT_TO_UQ28(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ27 LQ_SATURATION_UINT32_FLOAT_TO_UQ27(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ26 LQ_SATURATION_UINT32_FLOAT_TO_UQ26(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ25 LQ_SATURATION_UINT32_FLOAT_TO_UQ25(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ24 LQ_SATURATION_UINT32_FLOAT_TO_UQ24(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ23 LQ_SATURATION_UINT32_FLOAT_TO_UQ23(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ22 LQ_SATURATION_UINT32_FLOAT_TO_UQ22(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ21 LQ_SATURATION_UINT32_FLOAT_TO_UQ21(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ20 LQ_SATURATION_UINT32_FLOAT_TO_UQ20(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ19 LQ_SATURATION_UINT32_FLOAT_TO_UQ19(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ18 LQ_SATURATION_UINT32_FLOAT_TO_UQ18(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ17 LQ_SATURATION_UINT32_FLOAT_TO_UQ17(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ16 LQ_SATURATION_UINT32_FLOAT_TO_UQ16(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ15 LQ_SATURATION_UINT32_FLOAT_TO_UQ15(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ14 LQ_SATURATION_UINT32_FLOAT_TO_UQ14(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ13 LQ_SATURATION_UINT32_FLOAT_TO_UQ13(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ12 LQ_SATURATION_UINT32_FLOAT_TO_UQ12(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ11 LQ_SATURATION_UINT32_FLOAT_TO_UQ11(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ10 LQ_SATURATION_UINT32_FLOAT_TO_UQ10(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ9 LQ_SATURATION_UINT32_FLOAT_TO_UQ9(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ8 LQ_SATURATION_UINT32_FLOAT_TO_UQ8(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ7 LQ_SATURATION_UINT32_FLOAT_TO_UQ7(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ6 LQ_SATURATION_UINT32_FLOAT_TO_UQ6(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ5 LQ_SATURATION_UINT32_FLOAT_TO_UQ5(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ4 LQ_SATURATION_UINT32_FLOAT_TO_UQ4(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ3 LQ_SATURATION_UINT32_FLOAT_TO_UQ3(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ2 LQ_SATURATION_UINT32_FLOAT_TO_UQ2(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ1 LQ_SATURATION_UINT32_FLOAT_TO_UQ1(LQ_F_32BIT A, LQ_ERROR* Lq_Error);
/****************************INT8 饱和算法 浮点转Q格式************************************/
//!<以INT8为基准构建有符号Q格式(Q1到Q7)
LQ_INT8_Q LQ_SATURATION_INT8_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A ,LQ_ERROR* Lq_Error);
/****************************UINT8 饱和算法 浮点转UQ格式************************************/
//!<以UINT8为基准构建无符号UQ格式(UQ1到UQ8)
LQ_UINT8_UQ LQ_SATURATION_UINT8_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error);
/****************************INT16 饱和算法 浮点转Q格式************************************/
//!<以INT16为基准构建有符号Q格式(Q1到Q15)
LQ_INT16_Q LQ_SATURATION_INT16_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A ,LQ_ERROR* Lq_Error);
/****************************UINT16饱和算法 浮点转UQ格式************************************/
//!<以UINT16为基准构建无符号UQ格式(UQ1到UQ16)
LQ_UINT16_UQ LQ_SATURATION_UINT16_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error);
/****************************INT32 饱和算法 浮点转Q格式************************************/
//!<以INT32为基准构建有符号Q格式(Q1到Q31)
LQ_INT32_Q LQ_SATURATION_INT32_FLOAT_TO_Q(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error);
/****************************UINT32 饱和算法 浮点转UQ格式************************************/
//!<以UINT32为基准构建无符号UQ格式(UQ1到UQ32)
LQ_UINT32_UQ LQ_SATURATION_UINT32_FLOAT_TO_UQ(LQ_F_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error);
#endif

#endif
