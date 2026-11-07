#include "lq_sqrt_newton_iteration.h"
#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
/**@file      lq_ti_q_format_to_float.c
* @brief      LittleQmath的ti算法的q格式转浮点格式
* @details    采用指数偏移方式将Q格式转换为浮点
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

#if LQ_SQRT_NEWTON_ITERATION_LOADING_MODE==0
/**@brief LQ_INT8_Q7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q7     A              输入Q格式数
* @param[in] LQ_INT8_Q7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q7_SQRT_NEWTON_ITERATION(LQ_INT8_Q7 A, LQ_INT8_Q7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q7)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000040)) >> 7)) + ((LQ_INT8_Q7)(((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000040)) >> 7))) << 7) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q6     A              输入Q格式数
* @param[in] LQ_INT8_Q6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q6_SQRT_NEWTON_ITERATION(LQ_INT8_Q6 A, LQ_INT8_Q6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q6)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000020)) >> 6)) + ((LQ_INT8_Q6)(((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000020)) >> 6))) << 6) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q5     A              输入Q格式数
* @param[in] LQ_INT8_Q5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q5_SQRT_NEWTON_ITERATION(LQ_INT8_Q5 A, LQ_INT8_Q5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q5)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000010)) >> 5)) + ((LQ_INT8_Q5)(((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000010)) >> 5))) << 5) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q4     A              输入Q格式数
* @param[in] LQ_INT8_Q4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q4_SQRT_NEWTON_ITERATION(LQ_INT8_Q4 A, LQ_INT8_Q4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q4)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000008)) >> 4)) + ((LQ_INT8_Q4)(((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000008)) >> 4))) << 4) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q3     A              输入Q格式数
* @param[in] LQ_INT8_Q3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q3_SQRT_NEWTON_ITERATION(LQ_INT8_Q3 A, LQ_INT8_Q3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q3)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000004)) >> 3)) + ((LQ_INT8_Q3)(((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000004)) >> 3))) << 3) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q2     A              输入Q格式数
* @param[in] LQ_INT8_Q2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q2_SQRT_NEWTON_ITERATION(LQ_INT8_Q2 A, LQ_INT8_Q2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q2)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000002)) >> 2)) + ((LQ_INT8_Q2)(((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000002)) >> 2))) << 2) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q1     A              输入Q格式数
* @param[in] LQ_INT8_Q1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q1_SQRT_NEWTON_ITERATION(LQ_INT8_Q1 A, LQ_INT8_Q1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q1)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(0x00000001)) >> 1)) + ((LQ_INT8_Q1)(((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(0x00000001)) >> 1))) << 1) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ8 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ8     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ8     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ8_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ8_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ8 A, LQ_UINT8_UQ8 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ8)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000080)) >> 8)) + ((LQ_UINT8_UQ8)(((LQ_UI_16BIT)(((LQ_UINT8_UQ8)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000080)) >> 8))) << 8) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ7     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ7_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ7 A, LQ_UINT8_UQ7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 
    while (1)
    {

        next_guess = ((LQ_UINT8_UQ7)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000040)) >> 7)) + ((LQ_UINT8_UQ7)(((LQ_UI_16BIT)(((LQ_UINT8_UQ7)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000040)) >> 7))) << 7) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ6     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ6_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ6 A, LQ_UINT8_UQ6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ6)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000020)) >> 6)) + ((LQ_UINT8_UQ6)(((LQ_UI_16BIT)(((LQ_UINT8_UQ6)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000020)) >> 6))) << 6) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ5     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ5_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ5 A, LQ_UINT8_UQ5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ5)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000010)) >> 5)) + ((LQ_UINT8_UQ5)(((LQ_UI_16BIT)(((LQ_UINT8_UQ5)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000010)) >> 5))) << 5) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ4     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ4_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ4 A, LQ_UINT8_UQ4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ4)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000008)) >> 4)) + ((LQ_UINT8_UQ4)(((LQ_UI_16BIT)(((LQ_UINT8_UQ4)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000008)) >> 4))) << 4) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ3     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ3_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ3 A, LQ_UINT8_UQ3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ3)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000004)) >> 3)) + ((LQ_UINT8_UQ3)(((LQ_UI_16BIT)(((LQ_UINT8_UQ3)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000004)) >> 3))) << 3) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ2     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ2_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ2 A, LQ_UINT8_UQ2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 
    while (1)
    {

        next_guess = ((LQ_UINT8_UQ2)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000002)) >> 2)) + ((LQ_UINT8_UQ2)(((LQ_UI_16BIT)(((LQ_UINT8_UQ2)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000002)) >> 2))) << 2) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT8_UQ1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_UQ1     A              输入UQ格式数
* @param[in] LQ_UINT8_UQ1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_UQ1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_UQ1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ1_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ1 A, LQ_UINT8_UQ1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_UINT8_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ1)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(0x00000001)) >> 1)) + ((LQ_UINT8_UQ1)(((LQ_UI_16BIT)(((LQ_UINT8_UQ1)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(0x00000001)) >> 1))) << 1) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q15 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q15     A              输入Q格式数
* @param[in] LQ_INT16_Q15     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q15_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q15_SQRT_NEWTON_ITERATION(LQ_INT16_Q15 A, LQ_INT16_Q15 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q15)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00004000)) >> 15)) + ((LQ_INT16_Q15)(((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00004000)) >> 15))) << 15) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q14 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q14     A              输入Q格式数
* @param[in] LQ_INT16_Q14     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q14_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q14_SQRT_NEWTON_ITERATION(LQ_INT16_Q14 A, LQ_INT16_Q14 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q14)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00002000)) >> 14)) + ((LQ_INT16_Q14)(((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00002000)) >> 14))) << 14) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q13 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q13     A              输入Q格式数
* @param[in] LQ_INT16_Q13     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q13_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q13_SQRT_NEWTON_ITERATION(LQ_INT16_Q13 A, LQ_INT16_Q13 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q13)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00001000)) >> 13)) + ((LQ_INT16_Q13)(((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00001000)) >> 13))) << 13) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q12 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q12     A              输入Q格式数
* @param[in] LQ_INT16_Q12     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q12_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q12_SQRT_NEWTON_ITERATION(LQ_INT16_Q12 A, LQ_INT16_Q12 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q12)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000800)) >> 12)) + ((LQ_INT16_Q12)(((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000800)) >> 12))) << 12) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q11 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q11     A              输入Q格式数
* @param[in] LQ_INT16_Q11     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q11_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q11_SQRT_NEWTON_ITERATION(LQ_INT16_Q11 A, LQ_INT16_Q11 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q11)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000400)) >> 11)) + ((LQ_INT16_Q11)(((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000400)) >> 11))) << 11) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q10 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q10     A              输入Q格式数
* @param[in] LQ_INT16_Q10     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q10_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q10_SQRT_NEWTON_ITERATION(LQ_INT16_Q10 A, LQ_INT16_Q10 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q10)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000200)) >> 10)) + ((LQ_INT16_Q10)(((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000200)) >> 10))) << 10) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q9 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q9     A              输入Q格式数
* @param[in] LQ_INT16_Q9     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q9_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q9_SQRT_NEWTON_ITERATION(LQ_INT16_Q9 A, LQ_INT16_Q9 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q9)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000100)) >> 9)) + ((LQ_INT16_Q9)(((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000100)) >> 9))) << 9) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q8 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q8     A              输入Q格式数
* @param[in] LQ_INT16_Q8     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q8_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q8_SQRT_NEWTON_ITERATION(LQ_INT16_Q8 A, LQ_INT16_Q8 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q8)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000080)) >> 8)) + ((LQ_INT16_Q8)(((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000080)) >> 8))) << 8) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q7     A              输入Q格式数
* @param[in] LQ_INT16_Q7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q7_SQRT_NEWTON_ITERATION(LQ_INT16_Q7 A, LQ_INT16_Q7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q7)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000040)) >> 7)) + ((LQ_INT16_Q7)(((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000040)) >> 7))) << 7) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q6     A              输入Q格式数
* @param[in] LQ_INT16_Q6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q6_SQRT_NEWTON_ITERATION(LQ_INT16_Q6 A, LQ_INT16_Q6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q6)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000020)) >> 6)) + ((LQ_INT16_Q6)(((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000020)) >> 6))) << 6) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q5     A              输入Q格式数
* @param[in] LQ_INT16_Q5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q5_SQRT_NEWTON_ITERATION(LQ_INT16_Q5 A, LQ_INT16_Q5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q5)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000010)) >> 5)) + ((LQ_INT16_Q5)(((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000010)) >> 5))) << 5) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q4     A              输入Q格式数
* @param[in] LQ_INT16_Q4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q4_SQRT_NEWTON_ITERATION(LQ_INT16_Q4 A, LQ_INT16_Q4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q4)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000008)) >> 4)) + ((LQ_INT16_Q4)(((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000008)) >> 4))) << 4) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q3     A              输入Q格式数
* @param[in] LQ_INT16_Q3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q3_SQRT_NEWTON_ITERATION(LQ_INT16_Q3 A, LQ_INT16_Q3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q3)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000004)) >> 3)) + ((LQ_INT16_Q3)(((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000004)) >> 3))) << 3) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q2     A              输入Q格式数
* @param[in] LQ_INT16_Q2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q2_SQRT_NEWTON_ITERATION(LQ_INT16_Q2 A, LQ_INT16_Q2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q2)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000002)) >> 2)) + ((LQ_INT16_Q2)(((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000002)) >> 2))) << 2) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT16_Q1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT16_Q1     A              输入Q格式数
* @param[in] LQ_INT16_Q1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT16_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT16_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT16_Q1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q1_SQRT_NEWTON_ITERATION(LQ_INT16_Q1 A, LQ_INT16_Q1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q1)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(0x00000001)) >> 1)) + ((LQ_INT16_Q1)(((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(0x00000001)) >> 1))) << 1) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ16 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ16     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ16     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ16_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ16_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ16_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ16 A, LQ_UINT16_UQ16 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ16)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00008000)) >> 16)) + ((LQ_UINT16_UQ16)(((LQ_UI_32BIT)(((LQ_UINT16_UQ16)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00008000)) >> 16))) << 16) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
   
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ15 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ15     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ15     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ15_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ15_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ15 A, LQ_UINT16_UQ15 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ15)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00004000)) >> 15)) + ((LQ_UINT16_UQ15)(((LQ_UI_32BIT)(((LQ_UINT16_UQ15)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00004000)) >> 15))) << 15) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ14 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ14     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ14     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ14_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ14_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ14 A, LQ_UINT16_UQ14 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ14)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00002000)) >> 14)) + ((LQ_UINT16_UQ14)(((LQ_UI_32BIT)(((LQ_UINT16_UQ14)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00002000)) >> 14))) << 14) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ13 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ13     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ13     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ13_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ13_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ13 A, LQ_UINT16_UQ13 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ13)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00001000)) >> 13)) + ((LQ_UINT16_UQ13)(((LQ_UI_32BIT)(((LQ_UINT16_UQ13)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00001000)) >> 13))) << 13) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ12 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ12     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ12     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ12_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ12_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ12 A, LQ_UINT16_UQ12 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ12)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000800)) >> 12)) + ((LQ_UINT16_UQ12)(((LQ_UI_32BIT)(((LQ_UINT16_UQ12)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000800)) >> 12))) << 12) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ11 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ11     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ11     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ11_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ11_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ11 A, LQ_UINT16_UQ11 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ11)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000400)) >> 11)) + ((LQ_UINT16_UQ11)(((LQ_UI_32BIT)(((LQ_UINT16_UQ11)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000400)) >> 11))) << 11) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ10 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ10     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ10     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ10_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ10_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ10 A, LQ_UINT16_UQ10 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ10)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000200)) >> 10)) + ((LQ_UINT16_UQ10)(((LQ_UI_32BIT)(((LQ_UINT16_UQ10)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000200)) >> 10))) << 10) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ9 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ9     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ9     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ9_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ9_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ9 A, LQ_UINT16_UQ9 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ9)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000100)) >> 9)) + ((LQ_UINT16_UQ9)(((LQ_UI_32BIT)(((LQ_UINT16_UQ9)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000100)) >> 9))) << 9) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ8 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ8     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ8     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ8_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ8_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ8 A, LQ_UINT16_UQ8 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ8)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000080)) >> 8)) + ((LQ_UINT16_UQ8)(((LQ_UI_32BIT)(((LQ_UINT16_UQ8)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000080)) >> 8))) << 8) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ7     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ7_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ7 A, LQ_UINT16_UQ7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 
    while (1)
    {

        next_guess = ((LQ_UINT16_UQ7)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000040)) >> 7)) + ((LQ_UINT16_UQ7)(((LQ_UI_32BIT)(((LQ_UINT16_UQ7)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000040)) >> 7))) << 7) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ6     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ6_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ6 A, LQ_UINT16_UQ6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ6)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000020)) >> 6)) + ((LQ_UINT16_UQ6)(((LQ_UI_32BIT)(((LQ_UINT16_UQ6)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000020)) >> 6))) << 6) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ5     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ5_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ5 A, LQ_UINT16_UQ5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ5)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000010)) >> 5)) + ((LQ_UINT16_UQ5)(((LQ_UI_32BIT)(((LQ_UINT16_UQ5)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000010)) >> 5))) << 5) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ4     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ4_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ4 A, LQ_UINT16_UQ4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ4)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000008)) >> 4)) + ((LQ_UINT16_UQ4)(((LQ_UI_32BIT)(((LQ_UINT16_UQ4)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000008)) >> 4))) << 4) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ3     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ3_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ3 A, LQ_UINT16_UQ3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ3)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000004)) >> 3)) + ((LQ_UINT16_UQ3)(((LQ_UI_32BIT)(((LQ_UINT16_UQ3)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000004)) >> 3))) << 3) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ2     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ2_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ2 A, LQ_UINT16_UQ2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 
    while (1)
    {

        next_guess = ((LQ_UINT16_UQ2)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000002)) >> 2)) + ((LQ_UINT16_UQ2)(((LQ_UI_32BIT)(((LQ_UINT16_UQ2)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000002)) >> 2))) << 2) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT16_UQ1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT16_UQ1     A              输入UQ格式数
* @param[in] LQ_UINT16_UQ1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT16_UQ1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT16_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT16_UQ1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ1_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ1 A, LQ_UINT16_UQ1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_UINT16_UQ error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ1)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(0x00000001)) >> 1)) + ((LQ_UINT16_UQ1)(((LQ_UI_32BIT)(((LQ_UINT16_UQ1)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(0x00000001)) >> 1))) << 1) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q31 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q31     A              输入Q格式数
* @param[in] LQ_INT32_Q31     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q31_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q31_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q31_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q31_SQRT_NEWTON_ITERATION(LQ_INT32_Q31 A, LQ_INT32_Q31 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q31_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q31)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x40000000)) >> 31)) + ((LQ_INT32_Q31)(((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x40000000)) >> 31))) << 31) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q31_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q30 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q30     A              输入Q格式数
* @param[in] LQ_INT32_Q30     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q30_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q30_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q30_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q30_SQRT_NEWTON_ITERATION(LQ_INT32_Q30 A, LQ_INT32_Q30 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q30_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q30)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x20000000)) >> 30)) + ((LQ_INT32_Q30)(((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x20000000)) >> 30))) << 30) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q30_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q29 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q29     A              输入Q格式数
* @param[in] LQ_INT32_Q29     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q29_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q29_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q29_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q29_SQRT_NEWTON_ITERATION(LQ_INT32_Q29 A, LQ_INT32_Q29 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q29_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q29)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x10000000)) >> 29)) + ((LQ_INT32_Q29)(((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x10000000)) >> 29))) << 29) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q29_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q28 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q28     A              输入Q格式数
* @param[in] LQ_INT32_Q28     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q28_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q28_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q28_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q28_SQRT_NEWTON_ITERATION(LQ_INT32_Q28 A, LQ_INT32_Q28 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q28_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q28)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x08000000)) >> 28)) + ((LQ_INT32_Q28)(((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x08000000)) >> 28))) << 28) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q28_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q27 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q27     A              输入Q格式数
* @param[in] LQ_INT32_Q27     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q27_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q27_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q27_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q27_SQRT_NEWTON_ITERATION(LQ_INT32_Q27 A, LQ_INT32_Q27 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q27_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q27)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x04000000)) >> 27)) + ((LQ_INT32_Q27)(((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x04000000)) >> 27))) << 27) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q27_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q26 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q26     A              输入Q格式数
* @param[in] LQ_INT32_Q26     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q26_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q26_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q26_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q26_SQRT_NEWTON_ITERATION(LQ_INT32_Q26 A, LQ_INT32_Q26 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q26_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q26)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x02000000)) >> 26)) + ((LQ_INT32_Q26)(((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x02000000)) >> 26))) << 26) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q26_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q25 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q25     A              输入Q格式数
* @param[in] LQ_INT32_Q25     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q25_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q25_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q25_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q25_SQRT_NEWTON_ITERATION(LQ_INT32_Q25 A, LQ_INT32_Q25 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q25_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q25)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x01000000)) >> 25)) + ((LQ_INT32_Q25)(((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x01000000)) >> 25))) << 25) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q25_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q24 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q24     A              输入Q格式数
* @param[in] LQ_INT32_Q24     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q24_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q24_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q24_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q24_SQRT_NEWTON_ITERATION(LQ_INT32_Q24 A, LQ_INT32_Q24 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q24_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q24)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00800000)) >> 24)) + ((LQ_INT32_Q24)(((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00800000)) >> 24))) << 24) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q24_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q23 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q23     A              输入Q格式数
* @param[in] LQ_INT32_Q23     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q23_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q23_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q23_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q23_SQRT_NEWTON_ITERATION(LQ_INT32_Q23 A, LQ_INT32_Q23 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q23_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q23)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00400000)) >> 23)) + ((LQ_INT32_Q23)(((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00400000)) >> 23))) << 23) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q23_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q22 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q22     A              输入Q格式数
* @param[in] LQ_INT32_Q22     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q22_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q22_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q22_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q22_SQRT_NEWTON_ITERATION(LQ_INT32_Q22 A, LQ_INT32_Q22 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q22_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q22)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00200000)) >> 22)) + ((LQ_INT32_Q22)(((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00200000)) >> 22))) << 22) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q22_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q21 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q21     A              输入Q格式数
* @param[in] LQ_INT32_Q21     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q21_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q21_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q21_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q21_SQRT_NEWTON_ITERATION(LQ_INT32_Q21 A, LQ_INT32_Q21 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q21_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q21)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00100000)) >> 21)) + ((LQ_INT32_Q21)(((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00100000)) >> 21))) << 21) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q21_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q20 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q20     A              输入Q格式数
* @param[in] LQ_INT32_Q20     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q20_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q20_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q20_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q20_SQRT_NEWTON_ITERATION(LQ_INT32_Q20 A, LQ_INT32_Q20 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q20_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q20)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00080000)) >> 20)) + ((LQ_INT32_Q20)(((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00080000)) >> 20))) << 20) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q20_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q19 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q19     A              输入Q格式数
* @param[in] LQ_INT32_Q19     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q19_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q19_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q19_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q19_SQRT_NEWTON_ITERATION(LQ_INT32_Q19 A, LQ_INT32_Q19 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q19_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q19)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00040000)) >> 19)) + ((LQ_INT32_Q19)(((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00040000)) >> 19))) << 19) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q19_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q18 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q18     A              输入Q格式数
* @param[in] LQ_INT32_Q18     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q18_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q18_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q18_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q18_SQRT_NEWTON_ITERATION(LQ_INT32_Q18 A, LQ_INT32_Q18 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q18_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q18)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00020000)) >> 18)) + ((LQ_INT32_Q18)(((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00020000)) >> 18))) << 18) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q18_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q17 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q17     A              输入Q格式数
* @param[in] LQ_INT32_Q17     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q17_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q17_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q17_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q17_SQRT_NEWTON_ITERATION(LQ_INT32_Q17 A, LQ_INT32_Q17 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q17_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q17)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00010000)) >> 17)) + ((LQ_INT32_Q17)(((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00010000)) >> 17))) << 17) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q17_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q16 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q16     A              输入Q格式数
* @param[in] LQ_INT32_Q16     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q16_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q16_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q16_SQRT_NEWTON_ITERATION(LQ_INT32_Q16 A, LQ_INT32_Q16 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q16_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q16)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00008000)) >> 16)) + ((LQ_INT32_Q16)(((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00008000)) >> 16))) << 16) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q15 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q15     A              输入Q格式数
* @param[in] LQ_INT32_Q15     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q15_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q15_SQRT_NEWTON_ITERATION(LQ_INT32_Q15 A, LQ_INT32_Q15 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q15)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00004000)) >> 15)) + ((LQ_INT32_Q15)(((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00004000)) >> 15))) << 15) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q14 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q14     A              输入Q格式数
* @param[in] LQ_INT32_Q14     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q14_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q14_SQRT_NEWTON_ITERATION(LQ_INT32_Q14 A, LQ_INT32_Q14 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q14)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00002000)) >> 14)) + ((LQ_INT32_Q14)(((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00002000)) >> 14))) << 14) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q13 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q13     A              输入Q格式数
* @param[in] LQ_INT32_Q13     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q13_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q13_SQRT_NEWTON_ITERATION(LQ_INT32_Q13 A, LQ_INT32_Q13 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q13)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00001000)) >> 13)) + ((LQ_INT32_Q13)(((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00001000)) >> 13))) << 13) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q12 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q12     A              输入Q格式数
* @param[in] LQ_INT32_Q12     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q12_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q12_SQRT_NEWTON_ITERATION(LQ_INT32_Q12 A, LQ_INT32_Q12 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q12)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000800)) >> 12)) + ((LQ_INT32_Q12)(((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000800)) >> 12))) << 12) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q11 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q11     A              输入Q格式数
* @param[in] LQ_INT32_Q11     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q11_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q11_SQRT_NEWTON_ITERATION(LQ_INT32_Q11 A, LQ_INT32_Q11 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q11)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000400)) >> 11)) + ((LQ_INT32_Q11)(((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000400)) >> 11))) << 11) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q10 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q10     A              输入Q格式数
* @param[in] LQ_INT32_Q10     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q10_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q10_SQRT_NEWTON_ITERATION(LQ_INT32_Q10 A, LQ_INT32_Q10 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q10)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000200)) >> 10)) + ((LQ_INT32_Q10)(((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000200)) >> 10))) << 10) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q9 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q9     A              输入Q格式数
* @param[in] LQ_INT32_Q9     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q9_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q9_SQRT_NEWTON_ITERATION(LQ_INT32_Q9 A, LQ_INT32_Q9 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q9)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000100)) >> 9)) + ((LQ_INT32_Q9)(((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000100)) >> 9))) << 9) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q8 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q8     A              输入Q格式数
* @param[in] LQ_INT32_Q8     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q8_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q8_SQRT_NEWTON_ITERATION(LQ_INT32_Q8 A, LQ_INT32_Q8 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q8)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000080)) >> 8)) + ((LQ_INT32_Q8)(((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000080)) >> 8))) << 8) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q7     A              输入Q格式数
* @param[in] LQ_INT32_Q7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q7_SQRT_NEWTON_ITERATION(LQ_INT32_Q7 A, LQ_INT32_Q7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q7)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000040)) >> 7)) + ((LQ_INT32_Q7)(((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000040)) >> 7))) << 7) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q6     A              输入Q格式数
* @param[in] LQ_INT32_Q6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q6_SQRT_NEWTON_ITERATION(LQ_INT32_Q6 A, LQ_INT32_Q6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q6)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000020)) >> 6)) + ((LQ_INT32_Q6)(((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000020)) >> 6))) << 6) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q5     A              输入Q格式数
* @param[in] LQ_INT32_Q5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q5_SQRT_NEWTON_ITERATION(LQ_INT32_Q5 A, LQ_INT32_Q5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q5)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000010)) >> 5)) + ((LQ_INT32_Q5)(((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000010)) >> 5))) << 5) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q4     A              输入Q格式数
* @param[in] LQ_INT32_Q4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q4_SQRT_NEWTON_ITERATION(LQ_INT32_Q4 A, LQ_INT32_Q4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q4)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000008)) >> 4)) + ((LQ_INT32_Q4)(((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000008)) >> 4))) << 4) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q3     A              输入Q格式数
* @param[in] LQ_INT32_Q3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q3_SQRT_NEWTON_ITERATION(LQ_INT32_Q3 A, LQ_INT32_Q3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q3)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000004)) >> 3)) + ((LQ_INT32_Q3)(((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000004)) >> 3))) << 3) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q2     A              输入Q格式数
* @param[in] LQ_INT32_Q2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q2_SQRT_NEWTON_ITERATION(LQ_INT32_Q2 A, LQ_INT32_Q2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q2)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000002)) >> 2)) + ((LQ_INT32_Q2)(((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000002)) >> 2))) << 2) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT32_Q1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT32_Q1     A              输入Q格式数
* @param[in] LQ_INT32_Q1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT32_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT32_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT32_Q1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q1_SQRT_NEWTON_ITERATION(LQ_INT32_Q1 A, LQ_INT32_Q1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q1)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(0x00000001)) >> 1)) + ((LQ_INT32_Q1)(((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(0x00000001)) >> 1))) << 1) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ32 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ32     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ32     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ32_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ32_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ32_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ32_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ32 A, LQ_UINT32_UQ32 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ32)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x80000000)) >> 32)) + ((LQ_UINT32_UQ32)(((LQ_UI_64BIT)(((LQ_UINT32_UQ32)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x80000000)) >> 32))) << 32) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
       
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ32_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ31 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ31     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ31     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ31_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ31_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ31_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ31_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ31 A, LQ_UINT32_UQ31 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ31)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x40000000)) >> 31)) + ((LQ_UINT32_UQ31)(((LQ_UI_64BIT)(((LQ_UINT32_UQ31)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x40000000)) >> 31))) << 31) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ31_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ30 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ30     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ30     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ30_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ30_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ30_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ30_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ30 A, LQ_UINT32_UQ30 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ30)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x20000000)) >> 30)) + ((LQ_UINT32_UQ30)(((LQ_UI_64BIT)(((LQ_UINT32_UQ30)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x20000000)) >> 30))) << 30) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ30_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ29 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ29     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ29     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ29_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ29_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ29_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ29_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ29 A, LQ_UINT32_UQ29 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ29)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x10000000)) >> 29)) + ((LQ_UINT32_UQ29)(((LQ_UI_64BIT)(((LQ_UINT32_UQ29)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x10000000)) >> 29))) << 29) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ29_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ28 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ28     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ28     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ28_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ28_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ28_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ28_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ28 A, LQ_UINT32_UQ28 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ28)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x08000000)) >> 28)) + ((LQ_UINT32_UQ28)(((LQ_UI_64BIT)(((LQ_UINT32_UQ28)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x08000000)) >> 28))) << 28) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ28_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ27 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ27     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ27     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ27_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ27_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ27_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ27_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ27 A, LQ_UINT32_UQ27 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ27)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x04000000)) >> 27)) + ((LQ_UINT32_UQ27)(((LQ_UI_64BIT)(((LQ_UINT32_UQ27)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x04000000)) >> 27))) << 27) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ27_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ26 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ26     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ26     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ26_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ26_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ26_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ26_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ26 A, LQ_UINT32_UQ26 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ26)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x02000000)) >> 26)) + ((LQ_UINT32_UQ26)(((LQ_UI_64BIT)(((LQ_UINT32_UQ26)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x02000000)) >> 26))) << 26) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ26_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ25 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ25     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ25     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ25_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ25_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ25_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ25_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ25 A, LQ_UINT32_UQ25 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ25)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x01000000)) >> 25)) + ((LQ_UINT32_UQ25)(((LQ_UI_64BIT)(((LQ_UINT32_UQ25)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x01000000)) >> 25))) << 25) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ25_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ24 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ24     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ24     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ24_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ24_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ24_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ24_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ24 A, LQ_UINT32_UQ24 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 
    while (1)
    {

        next_guess = ((LQ_UINT32_UQ24)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00800000)) >> 24)) + ((LQ_UINT32_UQ24)(((LQ_UI_64BIT)(((LQ_UINT32_UQ24)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00800000)) >> 24))) << 24) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ24_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ23 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ23     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ23     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ23_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ23_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ23_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ23_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ23 A, LQ_UINT32_UQ23 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ23)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00400000)) >> 23)) + ((LQ_UINT32_UQ23)(((LQ_UI_64BIT)(((LQ_UINT32_UQ23)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00400000)) >> 23))) << 23) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ23_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ22 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ22     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ22     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ22_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ22_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ22_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ22_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ22 A, LQ_UINT32_UQ22 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 
    while (1)
    {

        next_guess = ((LQ_UINT32_UQ22)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00200000)) >> 22)) + ((LQ_UINT32_UQ22)(((LQ_UI_64BIT)(((LQ_UINT32_UQ22)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00200000)) >> 22))) << 22) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ22_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ21 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ21     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ21     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ21_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ21_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ21_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ21_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ21 A, LQ_UINT32_UQ21 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ21)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00100000)) >> 21)) + ((LQ_UINT32_UQ21)(((LQ_UI_64BIT)(((LQ_UINT32_UQ21)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00100000)) >> 21))) << 21) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ21_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ20 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ20     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ20     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ20_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ20_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ20_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ20_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ20 A, LQ_UINT32_UQ20 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 
    while (1)
    {

        next_guess = ((LQ_UINT32_UQ20)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00080000)) >> 20)) + ((LQ_UINT32_UQ20)(((LQ_UI_64BIT)(((LQ_UINT32_UQ20)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00080000)) >> 20))) << 20) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ20_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ19 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ19     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ19     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ19_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ19_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ19_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ19_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ19 A, LQ_UINT32_UQ19 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
   

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ19)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00040000)) >> 19)) + ((LQ_UINT32_UQ19)(((LQ_UI_64BIT)(((LQ_UINT32_UQ19)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00040000)) >> 19))) << 19) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ19_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ18 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ18     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ18     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ18_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ18_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ18_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ18_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ18 A, LQ_UINT32_UQ18 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ18)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00020000)) >> 18)) + ((LQ_UINT32_UQ18)(((LQ_UI_64BIT)(((LQ_UINT32_UQ18)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00020000)) >> 18))) << 18) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ18_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ17 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ17     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ17     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ17_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ17_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ17_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ17_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ17 A, LQ_UINT32_UQ17 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ17)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00010000)) >> 17)) + ((LQ_UINT32_UQ17)(((LQ_UI_64BIT)(((LQ_UINT32_UQ17)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00010000)) >> 17))) << 17) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ17_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ16 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ16     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ16     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ16_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ16_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ16_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ16 A, LQ_UINT32_UQ16 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ16)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00008000)) >> 16)) + ((LQ_UINT32_UQ16)(((LQ_UI_64BIT)(((LQ_UINT32_UQ16)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00008000)) >> 16))) << 16) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ16_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ15 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ15     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ15     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ15_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ15_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ15_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ15 A, LQ_UINT32_UQ15 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ15)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00004000)) >> 15)) + ((LQ_UINT32_UQ15)(((LQ_UI_64BIT)(((LQ_UINT32_UQ15)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00004000)) >> 15))) << 15) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ15_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ14 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ14     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ14     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ14_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ14_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ14_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ14 A, LQ_UINT32_UQ14 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ14)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00002000)) >> 14)) + ((LQ_UINT32_UQ14)(((LQ_UI_64BIT)(((LQ_UINT32_UQ14)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00002000)) >> 14))) << 14) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ14_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ13 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ13     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ13     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ13_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ13_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ13_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ13 A, LQ_UINT32_UQ13 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ13)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00001000)) >> 13)) + ((LQ_UINT32_UQ13)(((LQ_UI_64BIT)(((LQ_UINT32_UQ13)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00001000)) >> 13))) << 13) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ13_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ12 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ12     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ12     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ12_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ12_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ12_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ12 A, LQ_UINT32_UQ12 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ12)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000800)) >> 12)) + ((LQ_UINT32_UQ12)(((LQ_UI_64BIT)(((LQ_UINT32_UQ12)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000800)) >> 12))) << 12) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ12_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ11 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ11     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ11     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ11_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ11_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ11_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ11 A, LQ_UINT32_UQ11 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ11)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000400)) >> 11)) + ((LQ_UINT32_UQ11)(((LQ_UI_64BIT)(((LQ_UINT32_UQ11)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000400)) >> 11))) << 11) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ11_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ10 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ10     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ10     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ10_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ10_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ10_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ10 A, LQ_UINT32_UQ10 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ10)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000200)) >> 10)) + ((LQ_UINT32_UQ10)(((LQ_UI_64BIT)(((LQ_UINT32_UQ10)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000200)) >> 10))) << 10) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ10_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ9 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ9     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ9     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ9_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ9_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ9_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ9 A, LQ_UINT32_UQ9 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ9)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000100)) >> 9)) + ((LQ_UINT32_UQ9)(((LQ_UI_64BIT)(((LQ_UINT32_UQ9)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000100)) >> 9))) << 9) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ9_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ8 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ8     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ8     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ8_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ8_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ8_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ8 A, LQ_UINT32_UQ8 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
  

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ8)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000080)) >> 8)) + ((LQ_UINT32_UQ8)(((LQ_UI_64BIT)(((LQ_UINT32_UQ8)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000080)) >> 8))) << 8) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ8_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ7 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ7     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ7     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ7_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ7_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ7_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ7 A, LQ_UINT32_UQ7 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ7)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000040)) >> 7)) + ((LQ_UINT32_UQ7)(((LQ_UI_64BIT)(((LQ_UINT32_UQ7)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000040)) >> 7))) << 7) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ7_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ6 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ6     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ6     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ6_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ6_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ6_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ6 A, LQ_UINT32_UQ6 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ6)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000020)) >> 6)) + ((LQ_UINT32_UQ6)(((LQ_UI_64BIT)(((LQ_UINT32_UQ6)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000020)) >> 6))) << 6) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ6_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ5 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ5     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ5     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ5_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ5_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ5_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ5 A, LQ_UINT32_UQ5 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 
    while (1)
    {

        next_guess = ((LQ_UINT32_UQ5)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000010)) >> 5)) + ((LQ_UINT32_UQ5)(((LQ_UI_64BIT)(((LQ_UINT32_UQ5)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000010)) >> 5))) << 5) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ5_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ4 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ4     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ4     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ4_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ4_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ4_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ4 A, LQ_UINT32_UQ4 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ4)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000008)) >> 4)) + ((LQ_UINT32_UQ4)(((LQ_UI_64BIT)(((LQ_UINT32_UQ4)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000008)) >> 4))) << 4) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ4_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ3 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ3     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ3     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ3_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ3_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ3_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ3 A, LQ_UINT32_UQ3 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ3)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000004)) >> 3)) + ((LQ_UINT32_UQ3)(((LQ_UI_64BIT)(((LQ_UINT32_UQ3)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000004)) >> 3))) << 3) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ3_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ2 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ2     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ2     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ2_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ2_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ2_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ2 A, LQ_UINT32_UQ2 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ2)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000002)) >> 2)) + ((LQ_UINT32_UQ2)(((LQ_UI_64BIT)(((LQ_UINT32_UQ2)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000002)) >> 2))) << 2) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ2_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_UINT32_UQ1 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT32_UQ1     A              输入UQ格式数
* @param[in] LQ_UINT32_UQ1     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT32_UQ1_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT32_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT32_UQ1_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ1_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ1 A, LQ_UINT32_UQ1 Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ1)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(0x00000001)) >> 1)) + ((LQ_UINT32_UQ1)(((LQ_UI_64BIT)(((LQ_UINT32_UQ1)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(0x00000001)) >> 1))) << 1) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
    
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ1_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}


/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_Q     A              输入Q格式数
* @param[in] LQ_UINT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT8_Q LQ_INT8_Q_SQRT_NEWTON_ITERATION(LQ_INT8_Q A, LQ_UI_8BIT Q_A, LQ_INT8_Q Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q guess = A;
    LQ_INT8_Q next_guess;
    LQ_INT8_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT8_Q)(((LQ_I_16BIT)(guess) * (LQ_I_16BIT)(((LQ_I_16BIT)((0.5f) * ((LQ_UI_8BIT)1 << Q_A))))) >> Q_A)) + ((LQ_INT8_Q)(((LQ_I_16BIT)(((LQ_INT8_Q)(((LQ_I_16BIT)(A) * (LQ_I_16BIT)(((LQ_I_16BIT)((0.5f) * ((LQ_UI_8BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_I_16BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}

/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q     A              输入Q格式数
* @param[in] LQ_INT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT8_UQ LQ_UINT8_UQ_SQRT_NEWTON_ITERATION(LQ_UINT8_UQ A, LQ_UI_8BIT Q_A, LQ_UINT8_UQ Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT8_UQ guess = A;
    LQ_UINT8_UQ next_guess;
    LQ_INT8_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT8_UQ)(((LQ_UI_16BIT)(guess) * (LQ_UI_16BIT)(((LQ_UI_16BIT)((0.5f) * ((LQ_UI_8BIT)1 << Q_A))))) >> Q_A)) + ((LQ_UINT8_UQ)(((LQ_UI_16BIT)(((LQ_UINT8_UQ)(((LQ_UI_16BIT)(A) * (LQ_UI_16BIT)(((LQ_UI_16BIT)((0.5f) * ((LQ_UI_8BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_UI_16BIT)(guess)));
        error = next_guess - guess;
        
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT8_UQ_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}

/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_Q     A              输入Q格式数
* @param[in] LQ_UINT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT16_Q LQ_INT16_Q_SQRT_NEWTON_ITERATION(LQ_INT16_Q A, LQ_UI_8BIT Q_A, LQ_INT16_Q Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q guess = A;
    LQ_INT16_Q next_guess;
    LQ_INT16_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT16_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT16_Q)(((LQ_I_32BIT)(guess) * (LQ_I_32BIT)(((LQ_I_32BIT)((0.5f) * ((LQ_UI_16BIT)1 << Q_A))))) >> Q_A)) + ((LQ_INT16_Q)(((LQ_I_32BIT)(((LQ_INT16_Q)(((LQ_I_32BIT)(A) * (LQ_I_32BIT)(((LQ_I_32BIT)((0.5f) * ((LQ_UI_16BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_I_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT16_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}

/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q     A              输入Q格式数
* @param[in] LQ_INT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT16_UQ LQ_UINT16_UQ_SQRT_NEWTON_ITERATION(LQ_UINT16_UQ A, LQ_UI_8BIT Q_A, LQ_UINT16_UQ Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT16_UQ guess = A;
    LQ_UINT16_UQ next_guess;
    LQ_INT16_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT16_UQ)(((LQ_UI_32BIT)(guess) * (LQ_UI_32BIT)(((LQ_UI_32BIT)((0.5f) * ((LQ_UI_16BIT)1 << Q_A))))) >> Q_A)) + ((LQ_UINT16_UQ)(((LQ_UI_32BIT)(((LQ_UINT16_UQ)(((LQ_UI_32BIT)(A) * (LQ_UI_32BIT)(((LQ_UI_32BIT)((0.5f) * ((LQ_UI_16BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_UI_32BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT16_UQ_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_UINT8_Q     A              输入Q格式数
* @param[in] LQ_UINT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_UINT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_UINT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_UINT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_INT32_Q LQ_INT32_Q_SQRT_NEWTON_ITERATION(LQ_INT32_Q A, LQ_UI_8BIT Q_A, LQ_INT32_Q Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q guess = A;
    LQ_INT32_Q next_guess;
    LQ_INT32_Q error;
    if (A < 0)
    {
        (*Lq_Error) = LQ_INT32_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE;
        return 0;
    }

    while (1)
    {

        next_guess = ((LQ_INT32_Q)(((LQ_I_64BIT)(guess) * (LQ_I_64BIT)(((LQ_I_64BIT)((0.5f) * ((LQ_UI_32BIT)1 << Q_A))))) >> Q_A)) + ((LQ_INT32_Q)(((LQ_I_64BIT)(((LQ_INT32_Q)(((LQ_I_64BIT)(A) * (LQ_I_64BIT)(((LQ_I_64BIT)((0.5f) * ((LQ_UI_32BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_I_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_INT32_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
/**@brief LQ_INT8_Q 开根 牛顿迭代法
* @details 采用牛顿迭代法进行开跟，最多运算五次，保证速度
* @param[in] LQ_INT8_Q     A              输入Q格式数
* @param[in] LQ_INT8_Q     Error_Range    迭代误差范围
* @param[in] LQ_ERROR*      Lq_Error         错误变量
* @return    sqrtA的值
* @exception NSExceptio: LQ_INT8_Q_SQRT_NEWTON_ITERATION_INPUT_VALUE_IS_NEGATIVE 错误:输入数值是负数\n
*                        LQ_INT8_Q_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW  错误:精度范围太低，无差异性
* @par       计算sqrt(A)的值
* @code
*    LQ_INT8_Q_SQRT_NEWTON_ITERATION(A, Error_Range, &lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
*/
LQ_UINT32_UQ LQ_UINT32_UQ_SQRT_NEWTON_ITERATION(LQ_UINT32_UQ A, LQ_UI_8BIT Q_A, LQ_UINT32_UQ Error_Range, LQ_ERROR* Lq_Error)
{
    LQ_UINT32_UQ guess = A;
    LQ_UINT32_UQ next_guess;
    LQ_INT32_Q error;
 

    while (1)
    {

        next_guess = ((LQ_UINT32_UQ)(((LQ_UI_64BIT)(guess) * (LQ_UI_64BIT)(((LQ_UI_64BIT)((0.5f) * ((LQ_UI_32BIT)1 << Q_A))))) >> Q_A)) + ((LQ_UINT32_UQ)(((LQ_UI_64BIT)(((LQ_UINT32_UQ)(((LQ_UI_64BIT)(A) * (LQ_UI_64BIT)(((LQ_UI_64BIT)((0.5f) * ((LQ_UI_32BIT)1 << Q_A))))) >> Q_A))) << Q_A) / (LQ_UI_64BIT)(guess)));
        error = next_guess - guess;
        if (error < 0)error = -error;
        if (error < Error_Range)
        {
            return next_guess;
        }
        else if (error == 0)
        {
            (*Lq_Error) = LQ_UINT32_UQ_SQRT_NEWTON_ITERATION_THE_RANGE_IS_TOO_LOW;
            return 0;
        }
        guess = next_guess;

    }
}
#endif
