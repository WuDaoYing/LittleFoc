#include "lq_saturation_int_to_q_format.h"
#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
/**@file      lq_saturation_int_to_q_format.c
* @brief      LittleQmath的整形转Q格式
* @details    采用直接转化的方式，获的最快的运算速度
* @author     尹冠华
* @date        2024-7-2
* @version     V2.0
* @copyright    Copyright (c ) 2018-2024  黑龙江大学A8楼514
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2024/03/28  <td>1.0      <td>尹冠华    <td>创建初始版本
* <tr><td>2024/07/02  <td>2.0      <td>尹冠华    <td>重新架构
* </table>
*
**********************************************************************************
*/
#if LQ_SATURATION_INT_TO_Q_FORMAT_LOADING_MODE == 0
/**@brief 饱和算法INT8的有符号整形转Q7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1)到(0)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q7格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q7 a=LQ_SATURATION_INT8_INT_TO_Q7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q7 LQ_SATURATION_INT8_INT_TO_Q7(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -1)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 128));
}
/**@brief 饱和算法INT8的有符号整形转Q6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2)到(1)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q6格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q6 a=LQ_SATURATION_INT8_INT_TO_Q6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q6 LQ_SATURATION_INT8_INT_TO_Q6(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -2)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 64));
}
/**@brief 饱和算法INT8的有符号整形转Q5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4)到(3)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q5格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q5 a=LQ_SATURATION_INT8_INT_TO_Q5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q5 LQ_SATURATION_INT8_INT_TO_Q5(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -4)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 32));
}
/**@brief 饱和算法INT8的有符号整形转Q4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8)到(7)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q4格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q4 a=LQ_SATURATION_INT8_INT_TO_Q4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q4 LQ_SATURATION_INT8_INT_TO_Q4(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -8)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 16));
}
/**@brief 饱和算法INT8的有符号整形转Q3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16)到(15)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q3格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q3 a=LQ_SATURATION_INT8_INT_TO_Q3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q3 LQ_SATURATION_INT8_INT_TO_Q3(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -16)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 8));
}
/**@brief 饱和算法INT8的有符号整形转Q2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32)到(31)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q2格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q2 a=LQ_SATURATION_INT8_INT_TO_Q2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q2 LQ_SATURATION_INT8_INT_TO_Q2(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -32)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 4));
}
/**@brief 饱和算法INT8的有符号整形转Q1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64)到(63)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_I_16BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q1格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q1 a=LQ_SATURATION_INT8_INT_TO_Q1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT8_INT_TO_Q7  INT8 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q6  INT8 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q5  INT8 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q4  INT8 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q3  INT8 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q2  INT8 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT8_INT_TO_Q1  INT8 整形转Q1格式,附带溢出检测\n
*/
LQ_INT8_Q1 LQ_SATURATION_INT8_INT_TO_Q1(LQ_I_16BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_8BIT_MAX;
    }
    else if (A <= -64)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 2));
}
/**@brief  饱和算法UINT8的无符号整形转UQ8格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q1格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q8 a=LQ_SATURATION_UINT8_INT_TO_UQ8(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ8 LQ_SATURATION_UINT8_INT_TO_UQ8(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 256));
}
/**@brief  饱和算法UINT8的无符号整形转UQ7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q8格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q8格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q7 a=LQ_SATURATION_UINT8_INT_TO_UQ7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ7 LQ_SATURATION_UINT8_INT_TO_UQ7(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 128));
}
/**@brief  饱和算法UINT8的无符号整形转UQ6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q7格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q6 a=LQ_SATURATION_UINT8_INT_TO_UQ6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ6 LQ_SATURATION_UINT8_INT_TO_UQ6(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 64));
}
/**@brief  饱和算法UINT8的无符号整形转UQ5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q6格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q5 a=LQ_SATURATION_UINT8_INT_TO_UQ5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ5 LQ_SATURATION_UINT8_INT_TO_UQ5(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 32));
}
/**@brief  饱和算法UINT8的无符号整形转UQ4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q5格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q4 a=LQ_SATURATION_UINT8_INT_TO_UQ4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ4 LQ_SATURATION_UINT8_INT_TO_UQ4(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 16));
}
/**@brief  饱和算法UINT8的无符号整形转UQ3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q4格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q3 a=LQ_SATURATION_UINT8_INT_TO_UQ3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ3 LQ_SATURATION_UINT8_INT_TO_UQ3(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 8));
}
/**@brief  饱和算法UINT8的无符号整形转UQ2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q3格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q2 a=LQ_SATURATION_UINT8_INT_TO_UQ2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ2 LQ_SATURATION_UINT8_INT_TO_UQ2(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 4));
}
/**@brief  饱和算法UINT8的无符号整形转UQ1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_16BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中Q2格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_Q1 a=LQ_SATURATION_UINT8_INT_TO_UQ1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ8  UINT8 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ7  UINT8 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ6  UINT8 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ5  UINT8 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ4  UINT8 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ3  UINT8 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ2  UINT8 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT8_INT_TO_UQ1  UINT8 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT8_UQ1 LQ_SATURATION_UINT8_INT_TO_UQ1(LQ_I_16BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 127)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * 2));
}
/**@brief 饱和算法INT16的有符号整形转Q15格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1)到(0)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q15格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q15_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q15格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q15_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q15格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q15 a=LQ_SATURATION_INT16_INT_TO_Q15(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q15 LQ_SATURATION_INT16_INT_TO_Q15(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q15_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -1)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q15_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 32768));
}
/**@brief 饱和算法INT16的有符号整形转Q14格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2)到(1)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q14格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q14_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q14格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q14_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q14格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q14 a=LQ_SATURATION_INT16_INT_TO_Q14(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q14 LQ_SATURATION_INT16_INT_TO_Q14(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q14_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -2)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q14_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 16384));
}
/**@brief 饱和算法INT16的有符号整形转Q13格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4)到(3)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q13格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q13_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q13格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q13_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q13格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q13 a=LQ_SATURATION_INT16_INT_TO_Q13(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q13 LQ_SATURATION_INT16_INT_TO_Q13(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q13_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -4)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q13_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 8192));
}
/**@brief 饱和算法INT16的有符号整形转Q12格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8)到(7)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q12格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q12_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q12格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q12_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q12格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q12 a=LQ_SATURATION_INT16_INT_TO_Q12(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q12 LQ_SATURATION_INT16_INT_TO_Q12(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q12_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -8)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q12_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 4096));
}
/**@brief 饱和算法INT16的有符号整形转Q11格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16)到(15)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q11格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q11_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q11格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q11_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q11格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q11 a=LQ_SATURATION_INT16_INT_TO_Q11(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q11 LQ_SATURATION_INT16_INT_TO_Q11(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q11_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -16)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q11_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 2048));
}
/**@brief 饱和算法INT16的有符号整形转Q10格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32)到(31)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q10格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q10_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q10格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q10_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q10格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q10 a=LQ_SATURATION_INT16_INT_TO_Q10(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q10 LQ_SATURATION_INT16_INT_TO_Q10(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q10_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -32)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q10_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 1024));
}
/**@brief 饱和算法INT16的有符号整形转Q9格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64)到(63)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q9格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q9_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q9格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q9_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q9格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q9 a=LQ_SATURATION_INT16_INT_TO_Q9(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q9 LQ_SATURATION_INT16_INT_TO_Q9(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q9_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -64)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q9_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 512));
}
/**@brief 饱和算法INT16的有符号整形转Q8格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128)到(127)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q8格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q8_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q8格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q8_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q8格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q8 a=LQ_SATURATION_INT16_INT_TO_Q8(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q8 LQ_SATURATION_INT16_INT_TO_Q8(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q8_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -128)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q8_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 256));
}
/**@brief 饱和算法INT16的有符号整形转Q7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256)到(255)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q7格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q7 a=LQ_SATURATION_INT16_INT_TO_Q7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q7 LQ_SATURATION_INT16_INT_TO_Q7(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -256)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 128));
}
/**@brief 饱和算法INT16的有符号整形转Q6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512)到(511)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q6格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q6 a=LQ_SATURATION_INT16_INT_TO_Q6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q6 LQ_SATURATION_INT16_INT_TO_Q6(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -512)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 64));
}
/**@brief 饱和算法INT16的有符号整形转Q5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024)到(1023)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q5格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q5 a=LQ_SATURATION_INT16_INT_TO_Q5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q5 LQ_SATURATION_INT16_INT_TO_Q5(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -1024)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 32));
}
/**@brief 饱和算法INT16的有符号整形转Q4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048)到(2047)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q4格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q4 a=LQ_SATURATION_INT16_INT_TO_Q4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q4 LQ_SATURATION_INT16_INT_TO_Q4(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -2048)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 16));
}
/**@brief 饱和算法INT16的有符号整形转Q3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096)到(4095)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q3格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q3 a=LQ_SATURATION_INT16_INT_TO_Q3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q3 LQ_SATURATION_INT16_INT_TO_Q3(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -4096)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 8));
}
/**@brief 饱和算法INT16的有符号整形转Q2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192)到(8191)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q2格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q2 a=LQ_SATURATION_INT16_INT_TO_Q2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q2 LQ_SATURATION_INT16_INT_TO_Q2(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -8192)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 4));
}
/**@brief 饱和算法INT16的有符号整形转Q1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384)到(16383)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_I_32BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q1格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q1 a=LQ_SATURATION_INT16_INT_TO_Q1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT16_INT_TO_Q15  INT16 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q14  INT16 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q13  INT16 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q12  INT16 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q11  INT16 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q10  INT16 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q9  INT16 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q8  INT16 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q7  INT16 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q6  INT16 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q5  INT16 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q4  INT16 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q3  INT16 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q2  INT16 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT16_INT_TO_Q1  INT16 整形转Q1格式,附带溢出检测\n
*/
LQ_INT16_Q1 LQ_SATURATION_INT16_INT_TO_Q1(LQ_I_32BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_16BIT_MAX;
    }
    else if (A <= -16384)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 2));
}
/**@brief  饱和算法UINT16的无符号整形转UQ16格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ16格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ16_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q1格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ16_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q16 a=LQ_SATURATION_UINT16_INT_TO_UQ16(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ16 LQ_SATURATION_UINT16_INT_TO_UQ16(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ16_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ16_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 65536));
}
/**@brief  饱和算法UINT16的无符号整形转UQ15格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ15格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ15_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q16格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ15_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q16格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q15 a=LQ_SATURATION_UINT16_INT_TO_UQ15(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ15 LQ_SATURATION_UINT16_INT_TO_UQ15(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ15_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ15_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 32768));
}
/**@brief  饱和算法UINT16的无符号整形转UQ14格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ14格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ14_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q15格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ14_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q15格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q14 a=LQ_SATURATION_UINT16_INT_TO_UQ14(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ14 LQ_SATURATION_UINT16_INT_TO_UQ14(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ14_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ14_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 16384));
}
/**@brief  饱和算法UINT16的无符号整形转UQ13格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ13格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ13_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q14格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ13_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q14格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q13 a=LQ_SATURATION_UINT16_INT_TO_UQ13(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ13 LQ_SATURATION_UINT16_INT_TO_UQ13(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ13_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ13_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 8192));
}
/**@brief  饱和算法UINT16的无符号整形转UQ12格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ12格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ12_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q13格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ12_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q13格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q12 a=LQ_SATURATION_UINT16_INT_TO_UQ12(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ12 LQ_SATURATION_UINT16_INT_TO_UQ12(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ12_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ12_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 4096));
}
/**@brief  饱和算法UINT16的无符号整形转UQ11格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ11格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ11_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q12格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ11_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q12格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q11 a=LQ_SATURATION_UINT16_INT_TO_UQ11(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ11 LQ_SATURATION_UINT16_INT_TO_UQ11(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ11_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ11_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 2048));
}
/**@brief  饱和算法UINT16的无符号整形转UQ10格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ10格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ10_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q11格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ10_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q11格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q10 a=LQ_SATURATION_UINT16_INT_TO_UQ10(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ10 LQ_SATURATION_UINT16_INT_TO_UQ10(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ10_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ10_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 1024));
}
/**@brief  饱和算法UINT16的无符号整形转UQ9格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ9格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ9_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q10格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ9_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q10格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q9 a=LQ_SATURATION_UINT16_INT_TO_UQ9(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ9 LQ_SATURATION_UINT16_INT_TO_UQ9(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 127)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ9_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ9_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 512));
}
/**@brief  饱和算法UINT16的无符号整形转UQ8格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q9格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q9格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q8 a=LQ_SATURATION_UINT16_INT_TO_UQ8(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ8 LQ_SATURATION_UINT16_INT_TO_UQ8(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 255)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 256));
}
/**@brief  饱和算法UINT16的无符号整形转UQ7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q8格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q8格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q7 a=LQ_SATURATION_UINT16_INT_TO_UQ7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ7 LQ_SATURATION_UINT16_INT_TO_UQ7(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 511)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 128));
}
/**@brief  饱和算法UINT16的无符号整形转UQ6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q7格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q6 a=LQ_SATURATION_UINT16_INT_TO_UQ6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ6 LQ_SATURATION_UINT16_INT_TO_UQ6(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 64));
}
/**@brief  饱和算法UINT16的无符号整形转UQ5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q6格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q5 a=LQ_SATURATION_UINT16_INT_TO_UQ5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ5 LQ_SATURATION_UINT16_INT_TO_UQ5(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 32));
}
/**@brief  饱和算法UINT16的无符号整形转UQ4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q5格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q4 a=LQ_SATURATION_UINT16_INT_TO_UQ4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ4 LQ_SATURATION_UINT16_INT_TO_UQ4(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 16));
}
/**@brief  饱和算法UINT16的无符号整形转UQ3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q4格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q3 a=LQ_SATURATION_UINT16_INT_TO_UQ3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ3 LQ_SATURATION_UINT16_INT_TO_UQ3(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 8));
}
/**@brief  饱和算法UINT16的无符号整形转UQ2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q3格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q2 a=LQ_SATURATION_UINT16_INT_TO_UQ2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ2 LQ_SATURATION_UINT16_INT_TO_UQ2(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 4));
}
/**@brief  饱和算法UINT16的无符号整形转UQ1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_32BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中Q2格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_Q1 a=LQ_SATURATION_UINT16_INT_TO_UQ1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ16  UINT16 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ15  UINT16 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ14  UINT16 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ13  UINT16 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ12  UINT16 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ11  UINT16 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ10  UINT16 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ9  UINT16 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ8  UINT16 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ7  UINT16 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ6  UINT16 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ5  UINT16 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ4  UINT16 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ3  UINT16 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ2  UINT16 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT16_INT_TO_UQ1  UINT16 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT16_UQ1 LQ_SATURATION_UINT16_INT_TO_UQ1(LQ_I_32BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * 2));
}
/**@brief 饱和算法INT32的有符号整形转Q31格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1)到(0)。\n
*          表达的小数精度:(0.000000000466)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q31格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q31_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q31格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q31_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q31格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q31 a=LQ_SATURATION_INT32_INT_TO_Q31(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q31 LQ_SATURATION_INT32_INT_TO_Q31(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q31_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -1)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q31_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2147483648));
}
/**@brief 饱和算法INT32的有符号整形转Q30格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2)到(1)。\n
*          表达的小数精度:(0.000000000931)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q30格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q30_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q30格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q30_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q30格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q30 a=LQ_SATURATION_INT32_INT_TO_Q30(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q30 LQ_SATURATION_INT32_INT_TO_Q30(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q30_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -2)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q30_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1073741824));
}
/**@brief 饱和算法INT32的有符号整形转Q29格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4)到(3)。\n
*          表达的小数精度:(0.000000001863)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q29格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q29_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q29格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q29_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q29格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q29 a=LQ_SATURATION_INT32_INT_TO_Q29(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q29 LQ_SATURATION_INT32_INT_TO_Q29(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q29_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -4)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q29_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 536870912));
}
/**@brief 饱和算法INT32的有符号整形转Q28格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8)到(7)。\n
*          表达的小数精度:(0.000000003725)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q28格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q28_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q28格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q28_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q28格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q28 a=LQ_SATURATION_INT32_INT_TO_Q28(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q28 LQ_SATURATION_INT32_INT_TO_Q28(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q28_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -8)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q28_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 268435456));
}
/**@brief 饱和算法INT32的有符号整形转Q27格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16)到(15)。\n
*          表达的小数精度:(0.000000007451)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q27格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q27_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q27格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q27_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q27格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q27 a=LQ_SATURATION_INT32_INT_TO_Q27(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q27 LQ_SATURATION_INT32_INT_TO_Q27(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q27_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -16)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q27_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 134217728));
}
/**@brief 饱和算法INT32的有符号整形转Q26格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32)到(31)。\n
*          表达的小数精度:(0.000000014901)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q26格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q26_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q26格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q26_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q26格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q26 a=LQ_SATURATION_INT32_INT_TO_Q26(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q26 LQ_SATURATION_INT32_INT_TO_Q26(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q26_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -32)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q26_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 67108864));
}
/**@brief 饱和算法INT32的有符号整形转Q25格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64)到(63)。\n
*          表达的小数精度:(0.000000029802)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q25格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q25_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q25格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q25_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q25格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q25 a=LQ_SATURATION_INT32_INT_TO_Q25(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q25 LQ_SATURATION_INT32_INT_TO_Q25(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q25_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -64)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q25_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 33554432));
}
/**@brief 饱和算法INT32的有符号整形转Q24格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128)到(127)。\n
*          表达的小数精度:(0.000000059605)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q24格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q24_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q24格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q24_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q24格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q24 a=LQ_SATURATION_INT32_INT_TO_Q24(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q24 LQ_SATURATION_INT32_INT_TO_Q24(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 127)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q24_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -128)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q24_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16777216));
}
/**@brief 饱和算法INT32的有符号整形转Q23格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256)到(255)。\n
*          表达的小数精度:(0.000000119209)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q23格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q23_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q23格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q23_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q23格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q23 a=LQ_SATURATION_INT32_INT_TO_Q23(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q23 LQ_SATURATION_INT32_INT_TO_Q23(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 255)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q23_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -256)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q23_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8388608));
}
/**@brief 饱和算法INT32的有符号整形转Q22格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512)到(511)。\n
*          表达的小数精度:(0.000000238419)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q22格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q22_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q22格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q22_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q22格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q22 a=LQ_SATURATION_INT32_INT_TO_Q22(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q22 LQ_SATURATION_INT32_INT_TO_Q22(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 511)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q22_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -512)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q22_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4194304));
}
/**@brief 饱和算法INT32的有符号整形转Q21格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024)到(1023)。\n
*          表达的小数精度:(0.000000476837)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q21格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q21_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q21格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q21_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q21格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q21 a=LQ_SATURATION_INT32_INT_TO_Q21(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q21 LQ_SATURATION_INT32_INT_TO_Q21(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q21_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -1024)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q21_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2097152));
}
/**@brief 饱和算法INT32的有符号整形转Q20格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048)到(2047)。\n
*          表达的小数精度:(0.000000953674)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q20格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q20_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q20格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q20_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q20格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q20 a=LQ_SATURATION_INT32_INT_TO_Q20(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q20 LQ_SATURATION_INT32_INT_TO_Q20(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q20_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -2048)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q20_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1048576));
}
/**@brief 饱和算法INT32的有符号整形转Q19格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096)到(4095)。\n
*          表达的小数精度:(0.000001907349)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q19格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q19_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q19格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q19_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q19格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q19 a=LQ_SATURATION_INT32_INT_TO_Q19(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q19 LQ_SATURATION_INT32_INT_TO_Q19(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q19_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -4096)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q19_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 524288));
}
/**@brief 饱和算法INT32的有符号整形转Q18格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192)到(8191)。\n
*          表达的小数精度:(0.000003814697)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q18格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q18_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q18格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q18_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q18格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q18 a=LQ_SATURATION_INT32_INT_TO_Q18(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q18 LQ_SATURATION_INT32_INT_TO_Q18(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q18_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -8192)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q18_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 262144));
}
/**@brief 饱和算法INT32的有符号整形转Q17格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384)到(16383)。\n
*          表达的小数精度:(0.000007629395)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q17格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q17_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q17格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q17_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q17格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q17 a=LQ_SATURATION_INT32_INT_TO_Q17(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q17 LQ_SATURATION_INT32_INT_TO_Q17(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q17_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -16384)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q17_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 131072));
}
/**@brief 饱和算法INT32的有符号整形转Q16格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32768)到(32767)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q16格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q16_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q16格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q16_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q16格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q16 a=LQ_SATURATION_INT32_INT_TO_Q16(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q16 LQ_SATURATION_INT32_INT_TO_Q16(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q16_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -32768)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q16_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 65536));
}
/**@brief 饱和算法INT32的有符号整形转Q15格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-65536)到(65535)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q15格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q15_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q15格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q15_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q15格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q15 a=LQ_SATURATION_INT32_INT_TO_Q15(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q15 LQ_SATURATION_INT32_INT_TO_Q15(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 65535)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q15_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -65536)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q15_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 32768));
}
/**@brief 饱和算法INT32的有符号整形转Q14格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-131072)到(131071)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q14格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q14_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q14格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q14_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q14格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q14 a=LQ_SATURATION_INT32_INT_TO_Q14(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q14 LQ_SATURATION_INT32_INT_TO_Q14(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 131071)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q14_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -131072)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q14_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16384));
}
/**@brief 饱和算法INT32的有符号整形转Q13格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-262144)到(262143)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q13格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q13_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q13格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q13_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q13格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q13 a=LQ_SATURATION_INT32_INT_TO_Q13(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q13 LQ_SATURATION_INT32_INT_TO_Q13(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 262143)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q13_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -262144)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q13_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8192));
}
/**@brief 饱和算法INT32的有符号整形转Q12格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-524288)到(524287)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q12格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q12_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q12格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q12_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q12格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q12 a=LQ_SATURATION_INT32_INT_TO_Q12(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q12 LQ_SATURATION_INT32_INT_TO_Q12(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 524287)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q12_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -524288)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q12_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4096));
}
/**@brief 饱和算法INT32的有符号整形转Q11格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1048576)到(1048575)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q11格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q11_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q11格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q11_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q11格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q11 a=LQ_SATURATION_INT32_INT_TO_Q11(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q11 LQ_SATURATION_INT32_INT_TO_Q11(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1048575)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q11_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -1048576)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q11_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2048));
}
/**@brief 饱和算法INT32的有符号整形转Q10格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2097152)到(2097151)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q10格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q10_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q10格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q10_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q10格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q10 a=LQ_SATURATION_INT32_INT_TO_Q10(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q10 LQ_SATURATION_INT32_INT_TO_Q10(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 2097151)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q10_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -2097152)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q10_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1024));
}
/**@brief 饱和算法INT32的有符号整形转Q9格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4194304)到(4194303)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q9格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q9_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q9格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q9_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q9格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q9 a=LQ_SATURATION_INT32_INT_TO_Q9(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q9 LQ_SATURATION_INT32_INT_TO_Q9(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 4194303)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q9_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -4194304)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q9_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 512));
}
/**@brief 饱和算法INT32的有符号整形转Q8格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8388608)到(8388607)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q8格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q8_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q8格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q8_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q8格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q8 a=LQ_SATURATION_INT32_INT_TO_Q8(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q8 LQ_SATURATION_INT32_INT_TO_Q8(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 8388607)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q8_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -8388608)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q8_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 256));
}
/**@brief 饱和算法INT32的有符号整形转Q7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16777216)到(16777215)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q7格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q7格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q7 a=LQ_SATURATION_INT32_INT_TO_Q7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q7 LQ_SATURATION_INT32_INT_TO_Q7(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 16777215)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -16777216)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 128));
}
/**@brief 饱和算法INT32的有符号整形转Q6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-33554432)到(33554431)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q6格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q6格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q6 a=LQ_SATURATION_INT32_INT_TO_Q6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q6 LQ_SATURATION_INT32_INT_TO_Q6(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 33554431)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -33554432)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 64));
}
/**@brief 饱和算法INT32的有符号整形转Q5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-67108864)到(67108863)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q5格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q5格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q5 a=LQ_SATURATION_INT32_INT_TO_Q5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q5 LQ_SATURATION_INT32_INT_TO_Q5(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 67108863)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -67108864)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 32));
}
/**@brief 饱和算法INT32的有符号整形转Q4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-134217728)到(134217727)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q4格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q4格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q4 a=LQ_SATURATION_INT32_INT_TO_Q4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q4 LQ_SATURATION_INT32_INT_TO_Q4(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 134217727)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -134217728)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16));
}
/**@brief 饱和算法INT32的有符号整形转Q3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-268435456)到(268435455)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q3格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q3格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q3 a=LQ_SATURATION_INT32_INT_TO_Q3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q3 LQ_SATURATION_INT32_INT_TO_Q3(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 268435455)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -268435456)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8));
}
/**@brief 饱和算法INT32的有符号整形转Q2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-536870912)到(536870911)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q2格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q2格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q2 a=LQ_SATURATION_INT32_INT_TO_Q2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q2 LQ_SATURATION_INT32_INT_TO_Q2(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 536870911)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -536870912)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4));
}
/**@brief 饱和算法INT32的有符号整形转Q1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1073741824)到(1073741823)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_I_64BIT   A              输入整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q1格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q1格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q1 a=LQ_SATURATION_INT32_INT_TO_Q1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_INT32_INT_TO_Q31  INT32 整形转Q31格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q30  INT32 整形转Q30格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q29  INT32 整形转Q29格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q28  INT32 整形转Q28格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q27  INT32 整形转Q27格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q26  INT32 整形转Q26格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q25  INT32 整形转Q25格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q24  INT32 整形转Q24格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q23  INT32 整形转Q23格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q22  INT32 整形转Q22格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q21  INT32 整形转Q21格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q20  INT32 整形转Q20格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q19  INT32 整形转Q19格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q18  INT32 整形转Q18格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q17  INT32 整形转Q17格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q16  INT32 整形转Q16格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q15  INT32 整形转Q15格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q14  INT32 整形转Q14格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q13  INT32 整形转Q13格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q12  INT32 整形转Q12格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q11  INT32 整形转Q11格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q10  INT32 整形转Q10格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q9  INT32 整形转Q9格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q8  INT32 整形转Q8格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q7  INT32 整形转Q7格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q6  INT32 整形转Q6格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q5  INT32 整形转Q5格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q4  INT32 整形转Q4格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q3  INT32 整形转Q3格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q2  INT32 整形转Q2格式,附带溢出检测\n
*     LQ_SATURATION_INT32_INT_TO_Q1  INT32 整形转Q1格式,附带溢出检测\n
*/
LQ_INT32_Q1 LQ_SATURATION_INT32_INT_TO_Q1(LQ_I_64BIT A, LQ_ERROR* Lq_Error)
{
    if (A >= 1073741823)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return  LQ_I_32BIT_MAX;
    }
    else if (A <= -1073741824)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2));
}
/**@brief  饱和算法UINT32的无符号整形转UQ32格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ32格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ32_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q1格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ32_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q1格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q32 a=LQ_SATURATION_UINT32_INT_TO_UQ32(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ32 LQ_SATURATION_UINT32_INT_TO_UQ32(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 0)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ32_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ32_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4294967296));
}
/**@brief  饱和算法UINT32的无符号整形转UQ31格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ31格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ31_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q32格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ31_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q32格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q31 a=LQ_SATURATION_UINT32_INT_TO_UQ31(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ31 LQ_SATURATION_UINT32_INT_TO_UQ31(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ31_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ31_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2147483648));
}
/**@brief  饱和算法UINT32的无符号整形转UQ30格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ30格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ30_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q31格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ30_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q31格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q30 a=LQ_SATURATION_UINT32_INT_TO_UQ30(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ30 LQ_SATURATION_UINT32_INT_TO_UQ30(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 3)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ30_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ30_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1073741824));
}
/**@brief  饱和算法UINT32的无符号整形转UQ29格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ29格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ29_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q30格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ29_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q30格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q29 a=LQ_SATURATION_UINT32_INT_TO_UQ29(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ29 LQ_SATURATION_UINT32_INT_TO_UQ29(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 7)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ29_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ29_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 536870912));
}
/**@brief  饱和算法UINT32的无符号整形转UQ28格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ28格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ28_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q29格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ28_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q29格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q28 a=LQ_SATURATION_UINT32_INT_TO_UQ28(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ28 LQ_SATURATION_UINT32_INT_TO_UQ28(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 15)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ28_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ28_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 268435456));
}
/**@brief  饱和算法UINT32的无符号整形转UQ27格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ27格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ27_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q28格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ27_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q28格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q27 a=LQ_SATURATION_UINT32_INT_TO_UQ27(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ27 LQ_SATURATION_UINT32_INT_TO_UQ27(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 31)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ27_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ27_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 134217728));
}
/**@brief  饱和算法UINT32的无符号整形转UQ26格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ26格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ26_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q27格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ26_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q27格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q26 a=LQ_SATURATION_UINT32_INT_TO_UQ26(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ26 LQ_SATURATION_UINT32_INT_TO_UQ26(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 63)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ26_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ26_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 67108864));
}
/**@brief  饱和算法UINT32的无符号整形转UQ25格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ25格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ25_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q26格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ25_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q26格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q25 a=LQ_SATURATION_UINT32_INT_TO_UQ25(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ25 LQ_SATURATION_UINT32_INT_TO_UQ25(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 127)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ25_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ25_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 33554432));
}
/**@brief  饱和算法UINT32的无符号整形转UQ24格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ24格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ24_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q25格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ24_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q25格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q24 a=LQ_SATURATION_UINT32_INT_TO_UQ24(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ24 LQ_SATURATION_UINT32_INT_TO_UQ24(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 255)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ24_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ24_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16777216));
}
/**@brief  饱和算法UINT32的无符号整形转UQ23格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ23格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ23_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q24格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ23_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q24格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q23 a=LQ_SATURATION_UINT32_INT_TO_UQ23(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ23 LQ_SATURATION_UINT32_INT_TO_UQ23(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 511)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ23_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ23_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8388608));
}
/**@brief  饱和算法UINT32的无符号整形转UQ22格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ22格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ22_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q23格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ22_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q23格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q22 a=LQ_SATURATION_UINT32_INT_TO_UQ22(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ22 LQ_SATURATION_UINT32_INT_TO_UQ22(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1023)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ22_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ22_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4194304));
}
/**@brief  饱和算法UINT32的无符号整形转UQ21格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ21格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ21_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q22格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ21_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q22格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q21 a=LQ_SATURATION_UINT32_INT_TO_UQ21(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ21 LQ_SATURATION_UINT32_INT_TO_UQ21(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 2047)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ21_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ21_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2097152));
}
/**@brief  饱和算法UINT32的无符号整形转UQ20格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ20格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ20_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q21格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ20_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q21格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q20 a=LQ_SATURATION_UINT32_INT_TO_UQ20(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ20 LQ_SATURATION_UINT32_INT_TO_UQ20(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 4095)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ20_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ20_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1048576));
}
/**@brief  饱和算法UINT32的无符号整形转UQ19格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ19格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ19_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q20格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ19_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q20格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q19 a=LQ_SATURATION_UINT32_INT_TO_UQ19(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ19 LQ_SATURATION_UINT32_INT_TO_UQ19(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 8191)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ19_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ19_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 524288));
}
/**@brief  饱和算法UINT32的无符号整形转UQ18格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ18格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ18_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q19格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ18_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q19格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q18 a=LQ_SATURATION_UINT32_INT_TO_UQ18(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ18 LQ_SATURATION_UINT32_INT_TO_UQ18(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 16383)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ18_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ18_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 262144));
}
/**@brief  饱和算法UINT32的无符号整形转UQ17格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ17格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ17_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q18格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ17_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q18格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q17 a=LQ_SATURATION_UINT32_INT_TO_UQ17(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ17 LQ_SATURATION_UINT32_INT_TO_UQ17(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 32767)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ17_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ17_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 131072));
}
/**@brief  饱和算法UINT32的无符号整形转UQ16格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(65535)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ16格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ16_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q17格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ16_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q17格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q16 a=LQ_SATURATION_UINT32_INT_TO_UQ16(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ16 LQ_SATURATION_UINT32_INT_TO_UQ16(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 65535)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ16_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ16_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 65536));
}
/**@brief  饱和算法UINT32的无符号整形转UQ15格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(131071)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ15格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ15_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q16格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ15_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q16格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q15 a=LQ_SATURATION_UINT32_INT_TO_UQ15(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ15 LQ_SATURATION_UINT32_INT_TO_UQ15(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 131071)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ15_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ15_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 32768));
}
/**@brief  饱和算法UINT32的无符号整形转UQ14格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(262143)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ14格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ14_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q15格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ14_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q15格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q14 a=LQ_SATURATION_UINT32_INT_TO_UQ14(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ14 LQ_SATURATION_UINT32_INT_TO_UQ14(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 262143)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ14_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ14_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16384));
}
/**@brief  饱和算法UINT32的无符号整形转UQ13格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(524287)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ13格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ13_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q14格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ13_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q14格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q13 a=LQ_SATURATION_UINT32_INT_TO_UQ13(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ13 LQ_SATURATION_UINT32_INT_TO_UQ13(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 524287)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ13_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ13_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8192));
}
/**@brief  饱和算法UINT32的无符号整形转UQ12格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1048575)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ12格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ12_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q13格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ12_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q13格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q12 a=LQ_SATURATION_UINT32_INT_TO_UQ12(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ12 LQ_SATURATION_UINT32_INT_TO_UQ12(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1048575)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ12_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ12_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4096));
}
/**@brief  饱和算法UINT32的无符号整形转UQ11格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2097151)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ11格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ11_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q12格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ11_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q12格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q11 a=LQ_SATURATION_UINT32_INT_TO_UQ11(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ11 LQ_SATURATION_UINT32_INT_TO_UQ11(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 2097151)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ11_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ11_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2048));
}
/**@brief  饱和算法UINT32的无符号整形转UQ10格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4194303)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ10格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ10_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q11格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ10_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q11格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q10 a=LQ_SATURATION_UINT32_INT_TO_UQ10(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ10 LQ_SATURATION_UINT32_INT_TO_UQ10(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 4194303)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ10_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ10_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 1024));
}
/**@brief  饱和算法UINT32的无符号整形转UQ9格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8388607)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ9格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ9_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q10格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ9_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q10格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q9 a=LQ_SATURATION_UINT32_INT_TO_UQ9(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ9 LQ_SATURATION_UINT32_INT_TO_UQ9(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 8388607)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ9_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ9_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 512));
}
/**@brief  饱和算法UINT32的无符号整形转UQ8格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16777215)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ8格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q9格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q9格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q8 a=LQ_SATURATION_UINT32_INT_TO_UQ8(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ8 LQ_SATURATION_UINT32_INT_TO_UQ8(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 16777215)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ8_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ8_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 256));
}
/**@brief  饱和算法UINT32的无符号整形转UQ7格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(33554431)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ7格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q8格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q8格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q7 a=LQ_SATURATION_UINT32_INT_TO_UQ7(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ7 LQ_SATURATION_UINT32_INT_TO_UQ7(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 33554431)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ7_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ7_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 128));
}
/**@brief  饱和算法UINT32的无符号整形转UQ6格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(67108863)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ6格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q7格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q7格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q6 a=LQ_SATURATION_UINT32_INT_TO_UQ6(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ6 LQ_SATURATION_UINT32_INT_TO_UQ6(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 67108863)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ6_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ6_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 64));
}
/**@brief  饱和算法UINT32的无符号整形转UQ5格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(134217727)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ5格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q6格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q6格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q5 a=LQ_SATURATION_UINT32_INT_TO_UQ5(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ5 LQ_SATURATION_UINT32_INT_TO_UQ5(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 134217727)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ5_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ5_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 32));
}
/**@brief  饱和算法UINT32的无符号整形转UQ4格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(268435455)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ4格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q5格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q5格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q4 a=LQ_SATURATION_UINT32_INT_TO_UQ4(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ4 LQ_SATURATION_UINT32_INT_TO_UQ4(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 268435455)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ4_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ4_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 16));
}
/**@brief  饱和算法UINT32的无符号整形转UQ3格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(536870911)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ3格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q4格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q4格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q3 a=LQ_SATURATION_UINT32_INT_TO_UQ3(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ3 LQ_SATURATION_UINT32_INT_TO_UQ3(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 536870911)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ3_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ3_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 8));
}
/**@brief  饱和算法UINT32的无符号整形转UQ2格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1073741823)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ2格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q3格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q3格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q2 a=LQ_SATURATION_UINT32_INT_TO_UQ2(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ2 LQ_SATURATION_UINT32_INT_TO_UQ2(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 1073741823)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ2_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ2_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 4));
}
/**@brief  饱和算法UINT32的无符号整形转UQ1格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2147483647)。\n
*          表达的小数精度:(0.000000000000)。\n
* @param[in] LQ_I_64BIT   A              输入无符号整形
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    UQ1格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中Q2格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中Q2格式中整形负向溢出
* @par     转换1到Q格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_Q1 a=LQ_SATURATION_UINT32_INT_TO_UQ1(1,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ32  UINT32 整形转UQ32格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ31  UINT32 整形转UQ31格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ30  UINT32 整形转UQ30格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ29  UINT32 整形转UQ29格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ28  UINT32 整形转UQ28格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ27  UINT32 整形转UQ27格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ26  UINT32 整形转UQ26格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ25  UINT32 整形转UQ25格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ24  UINT32 整形转UQ24格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ23  UINT32 整形转UQ23格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ22  UINT32 整形转UQ22格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ21  UINT32 整形转UQ21格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ20  UINT32 整形转UQ20格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ19  UINT32 整形转UQ19格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ18  UINT32 整形转UQ18格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ17  UINT32 整形转UQ17格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ16  UINT32 整形转UQ16格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ15  UINT32 整形转UQ15格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ14  UINT32 整形转UQ14格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ13  UINT32 整形转UQ13格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ12  UINT32 整形转UQ12格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ11  UINT32 整形转UQ11格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ10  UINT32 整形转UQ10格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ9  UINT32 整形转UQ9格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ8  UINT32 整形转UQ8格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ7  UINT32 整形转UQ7格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ6  UINT32 整形转UQ6格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ5  UINT32 整形转UQ5格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ4  UINT32 整形转UQ4格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ3  UINT32 整形转UQ3格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ2  UINT32 整形转UQ2格式,附带溢出检测\n
*     LQ_SATURATION_UINT32_INT_TO_UQ1  UINT32 整形转UQ1格式,附带溢出检测\n
*/
LQ_UINT32_UQ1 LQ_SATURATION_UINT32_INT_TO_UQ1(LQ_I_64BIT   A, LQ_ERROR* Lq_Error)
{
    if (A >= 2147483647)        //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ1_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回最大正值
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)    //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ1_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回最大负值
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * 2));
}
/**@brief 饱和算法INT8的有符号整形转Q格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_I_16BIT     A              输入整形数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT8_INT_TO_Q_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT8中Q格式中整形正向溢出\n
*                        SATURATION_INT8_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT8中Q格式中整形负向溢出\n
* @par     转换1到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT8_Q a=LQ_SATURATION_INT8_INT_TO_Q(1,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_INT_TO_Q  INT8 整形转Q格式,附带溢出检测\n
*/
LQ_INT8_Q LQ_SATURATION_INT8_INT_TO_Q(LQ_I_16BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (LQ_UI_8BIT)(((LQ_UI_8BIT)1 << (7 - Q_A)) - (1.0f / ((LQ_UI_8BIT)1 << (Q_A)))))      //!<判断整形是否正向溢 出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MAX;
    }
    else if (A <= -((LQ_I_8BIT)1 << (7 - Q_A))) //!<判断整形是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT8_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_8BIT)((LQ_I_8BIT)(A) * ((LQ_UI_8BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT8的有符号整形转UQ格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT8_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT8中UQ格式中整形正向溢出\n
*                        SATURATION_UINT8_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT8中UQ格式中整形负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT8_UQ a=LQ_SATURATION_UINT8_INT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT8_INT_TO_UQ  UINT8 整形转UQ格式,附带溢出检测\n
*/
LQ_UINT8_UQ LQ_SATURATION_UINT8_INT_TO_UQ(LQ_I_16BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_8BIT)1 << (8 - Q_A)) - (1.0f / ((LQ_UI_8BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_8BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT8_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_8BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_8BIT)((LQ_UI_8BIT)(A) * ((LQ_UI_8BIT)1 << (Q_A))));
}
/**@brief 饱和算法INT16的有符号整形转Q格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_I_32BIT     A              输入整形数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT16_INT_TO_Q_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT16中Q格式中整形正向溢出\n
*                        SATURATION_INT16_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT16中Q格式中整形负向溢出\n
* @par     转换1到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT16_Q a=LQ_SATURATION_INT16_INT_TO_Q(1,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_INT_TO_Q  INT8 整形转Q格式,附带溢出检测\n
*/
LQ_INT16_Q LQ_SATURATION_INT16_INT_TO_Q(LQ_I_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (LQ_UI_16BIT)(((LQ_UI_16BIT)1 << (15 - Q_A)) - (1.0f / ((LQ_UI_16BIT)1 << (Q_A)))))  //!<判断整形是否正向溢 出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MAX;
    }
    else if (A <= -((LQ_I_16BIT)1 << (15 - Q_A)))       //!<判断整形是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT16_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_16BIT)((LQ_I_16BIT)(A) * ((LQ_UI_16BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT16的有符号整形转UQ格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT16_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT16中UQ格式中整形正向溢出\n
*                        SATURATION_UINT16_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT16中UQ格式中整形负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT16_UQ a=LQ_SATURATION_UINT16_INT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT16_INT_TO_UQ  UINT8 整形转UQ格式,附带溢出检测\n
*/
LQ_UINT16_UQ LQ_SATURATION_UINT16_INT_TO_UQ(LQ_I_32BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_16BIT)1 << (16 - Q_A)) - (1.0f / ((LQ_UI_16BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_16BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT16_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_16BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_16BIT)((LQ_UI_16BIT)(A) * ((LQ_UI_16BIT)1 << (Q_A))));
}
/**@brief 饱和算法INT32的有符号整形转Q格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_I_64BIT     A              输入整形数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_INT32_INT_TO_Q_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转INT32中Q格式中整形正向溢出\n
*                        SATURATION_INT32_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转INT32中Q格式中整形负向溢出\n
* @par     转换1到Q13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_INT32_Q a=LQ_SATURATION_INT32_INT_TO_Q(1,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_INT_TO_Q  INT8 整形转Q格式,附带溢出检测\n
*/
LQ_INT32_Q LQ_SATURATION_INT32_INT_TO_Q(LQ_I_64BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (LQ_UI_32BIT)(((LQ_UI_32BIT)1 << (31 - Q_A)) - (1.0f / ((LQ_UI_32BIT)1 << (Q_A)))))  //!<判断整形是否正向溢 出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MAX;
    }
    else if (A <= -((LQ_I_32BIT)1 << (31 - Q_A)))       //!<判断整形是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_INT32_INT_TO_Q_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_I_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_I_32BIT)((LQ_I_32BIT)(A) * ((LQ_UI_32BIT)1 << (Q_A))));
}
/**@brief 饱和算法UINT32的有符号整形转UQ格式
* @details 能对输入整形进行检查。\n
*          饱和算法:如果带转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_F_32BIT     A              输入浮点数
* @param[in] LQ_UI_8BIT     Q_B            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    Q格式的数
* @exception NSExceptio: SATURATION_UINT32_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER 在饱和算法整形转UINT32中UQ格式中整形正向溢出\n
*                        SATURATION_UINT32_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER 在饱和算法整形转UINT32中UQ格式中整形负向溢出\n
* @par     转换0.7到UQ13格式中
* @code
*    LQ_ERROR lq_error=LQ_SUCCESS;
*    LQ_UINT32_UQ a=LQ_SATURATION_UINT32_INT_TO_UQ(0.7,13,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see ::LQ_SATURATION_UINT32_INT_TO_UQ  UINT8 整形转UQ格式,附带溢出检测\n
*/
LQ_UINT32_UQ LQ_SATURATION_UINT32_INT_TO_UQ(LQ_I_64BIT A, LQ_UI_8BIT Q_A, LQ_ERROR* Lq_Error)
{
    if (A >= (((LQ_UI_32BIT)1 << (32 - Q_A)) - (1.0f / ((LQ_UI_32BIT)1 << (Q_A)))))  //!<判断浮点是否正向溢出
    {
        //!<出现正向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ_FORMAT_INT_POSITIVE_OVER;
        //!<直接返回
        return LQ_UI_32BIT_MAX;
    }
    else if (A <= 0)        //!<判断浮点是否负向溢出
    {
        //!<出现负向溢出则报错误
        (*Lq_Error) = SATURATION_UINT32_INT_TO_UQ_FORMAT_INT_NEGATIVE_OVER;
        //!<直接返回
        return LQ_UI_32BIT_MIN;
    }
    //!<未溢出则返回转化后的值
    return ((LQ_UI_32BIT)((LQ_UI_32BIT)(A) * ((LQ_UI_32BIT)1 << (Q_A))));
}
#endif
