#ifndef __LFOC_ABNORMAL_CHECK__
#define __LFOC_ABNORMAL_CHECK__


#include "lfoc_port.h"                         //!<LFOC存放运算核心文件的头文件



/**
 * @brief  通用浮点异常检测宏（全局算术错误+正无穷+负无穷+NaN），检测到异常直接返回指定错误码
 * @param  f_val             待检测的浮点数值
 * @param  err_code_var      错误码变量（直接写变量名/结构体成员）
 * @param  err_state_var     错误状态变量（直接写变量名/结构体成员）
 * @param  arith_err_var     全局浮点算术错误标志变量
 * @param  u8_base_err       基准错误号：4种异常对应 基准号、基准号+1、基准号+2、基准号+3
 * @param  return_value      检测到异常时返回的错误码
 * @note   仅能在有返回值的函数内调用，检测到异常会直接return
 */
#define LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(f_val, err_code_var, err_state_var, arith_err_var, u8_base_err, return_value) \
do {                                                                                                                          \
    /* 全局算术错误检测 */                                                                                                      \
    if ((arith_err_var) != LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS)                                     \
    {                                                                                                                         \
        (err_code_var)   = (u8_base_err);                                                                                    \
        (err_state_var)  = 1;                                                                                                \
        (arith_err_var) = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;                                      \
        return (return_value);                                                                                                \
    }                                                                                                                         \
    /* 正无穷检测 */                                                                                                          \
    if (LFOC_GLOBAL__FLOAT_ISINF((f_val)) == 1)                                                                              \
    {                                                                                                                         \
        (err_code_var)   = (u8_base_err) + 1;                                                                                \
        (err_state_var)  = 1;                                                                                                \
        return (return_value);                                                                                                \
    }                                                                                                                         \
    /* 负无穷检测 */                                                                                                          \
    else if (LFOC_GLOBAL__FLOAT_ISINF((f_val)) == -1)                                                                        \
    {                                                                                                                         \
        (err_code_var)   = (u8_base_err) + 2;                                                                                \
        (err_state_var)  = 1;                                                                                                \
        return (return_value);                                                                                                \
    }                                                                                                                         \
    /* NaN检测 */                                                                                                             \
    if (LFOC_GLOBAL__FLOAT_ISNAN((f_val)) != 0)                                                                              \
    {                                                                                                                         \
        (err_code_var)   = (u8_base_err) + 3;                                                                                \
        (err_state_var)  = 1;                                                                                                \
        return (return_value);                                                                                                \
    }                                                                                                                         \
} while(0)
#if LFOC_Q_ENABLE == 0
 /**
  * @brief  FOQX浮点异常检测宏（全局算术错误+正无穷+负无穷+NaN），检测到异常直接返回指定错误码
  * @param  fq_val            待检测的浮点数值
  * @param  err_code_var      错误码变量（直接写变量名/结构体成员）
  * @param  err_state_var     错误状态变量（直接写变量名/结构体成员）
  * @param  arith_err_var     FOQX全局算术错误标志变量
  * @param  u8_base_err       基准错误号：4种异常对应 基准号、基准号+1、基准号+2、基准号+3
  * @param  return_value      检测到异常时返回的错误码
  * @note   仅能在有返回值的函数内调用，检测到异常会直接return
  *         错误码映射：算术错误=基准号 / 正无穷=基准号+1 / 负无穷=基准号+2 / NaN=基准号+3
  */
#define LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(fq_val, err_code_var, err_state_var, arith_err_var, u8_base_err, return_value)   \
do {                                                                                                              \
    /* 全局算术错误检测 */                                                                                          \
    if ((arith_err_var) != LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS)                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err);                                                                          \
        (err_state_var) = 1;                                                                                      \
        (arith_err_var) = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;                                   \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 正无穷检测 */                                                                                                \
    if (LFOC_GLOBAL__FLOAT_ISINF((fq_val)) == 1)                                                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 1;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 负无穷检测 */                                                                                                \
    else if (LFOC_GLOBAL__FLOAT_ISINF((fq_val)) == -1)                                                            \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 2;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* NaN检测 */                                                                                                   \
    if (LFOC_GLOBAL__FLOAT_ISNAN((fq_val)) != 0)                                                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 3;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
} while(0)

#else
 /**
  * @brief  FOQX定点异常检测宏（全局算术错误+最大值越界+最小值越界），检测到异常直接返回指定错误码
  * @param  fq_val            待检测的定点数值
  * @param  err_code_var      错误码变量（直接写变量名/结构体成员）
  * @param  err_state_var     错误状态变量（直接写变量名/结构体成员）
  * @param  arith_err_var     FOQX全局算术错误标志变量
  * @param  u8_base_err       基准错误号：3种异常对应 基准号、基准号+1、基准号+2
  * @param  return_value      检测到异常时返回的错误码
  * @note   仅能在有返回值的函数内调用，检测到异常会直接return
  *         错误码映射：算术错误=基准号+4 / 最大值越界=基准号+5 / 最小值越界=基准号+6
  */
#define LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(fq_val, err_code_var, err_state_var, arith_err_var, u8_base_err, return_value)   \
do {                                                                                                              \
    /* 全局算术错误检测 */                                                                                          \
    if ((arith_err_var) != LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS)                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 4;                                                                          \
        (err_state_var) = 1;                                                                                      \
        (arith_err_var) = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;                                   \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 最大值越界检测 */                                                                                            \
    if ((fq_val) == LFOC_GLOBAL__FOQX_DATA_TYPE_MAX)                                                              \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 5;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 最小值越界检测 */                                                                                            \
    else if ((fq_val) == LFOC_GLOBAL__FOQX_DATA_TYPE_MIN)                                                         \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 6;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
} while(0)
#endif


#if LFOC_Q_ENABLE == 0
  /**
   * @brief  FOQX浮点异常检测宏（全局算术错误+正无穷+负无穷+NaN），检测到异常直接返回指定错误码
   * @param  fq_val            待检测的浮点数值
   * @param  err_code_var      错误码变量（直接写变量名/结构体成员）
   * @param  err_state_var     错误状态变量（直接写变量名/结构体成员）
   * @param  arith_err_var     FOQX全局算术错误标志变量
   * @param  u8_base_err       基准错误号：4种异常对应 基准号、基准号+1、基准号+2、基准号+3
   * @param  return_value      检测到异常时返回的错误码
   * @note   仅能在有返回值的函数内调用，检测到异常会直接return
   *         错误码映射：算术错误=基准号 / 正无穷=基准号+1 / 负无穷=基准号+2 / NaN=基准号+3
   */
#define LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(fq_val, err_code_var, err_state_var, arith_err_var, u8_base_err, return_value)   \
do {                                                                                                              \
    /* 全局算术错误检测 */                                                                                          \
    if ((arith_err_var) != LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS)                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err);                                                                          \
        (err_state_var) = 1;                                                                                      \
        (arith_err_var) = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;                                   \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 正无穷检测 */                                                                                                \
    if (LFOC_GLOBAL__FLOAT_ISINF((fq_val)) == 1)                                                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 1;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* 负无穷检测 */                                                                                                \
    else if (LFOC_GLOBAL__FLOAT_ISINF((fq_val)) == -1)                                                            \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 2;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
    /* NaN检测 */                                                                                                   \
    if (LFOC_GLOBAL__FLOAT_ISNAN((fq_val)) != 0)                                                                  \
    {                                                                                                             \
        (err_code_var)  = (u8_base_err) + 3;                                                                      \
        (err_state_var) = 1;                                                                                      \
        return (return_value);                                                                                    \
    }                                                                                                             \
} while(0)

#else
  /**
   * @brief  FOQX定点异常检测宏（全局算术错误+最大值越界+最小值越界），检测到异常直接返回指定错误码
   * @param  fq_val            待检测的定点数值
   * @param  err_code_var      错误码变量（直接写变量名/结构体成员）
   * @param  err_state_var     错误状态变量（直接写变量名/结构体成员）
   * @param  arith_err_var     FOQX全局算术错误标志变量
   * @param  u8_base_err       基准错误号：3种异常对应 基准号、基准号+1、基准号+2
   * @param  return_value      检测到异常时返回的错误码
   * @note   仅能在有返回值的函数内调用，检测到异常会直接return
   *         错误码映射：算术错误=基准号+4 /
   */
#define LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(fq_val, err_code_var, err_state_var, arith_err_var, u8_base_err, return_value)   
#endif

#endif
