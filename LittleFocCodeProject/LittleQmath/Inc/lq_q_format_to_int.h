#ifndef __LQ_Q_FORMAT_TO_INT_H__
#define __LQ_Q_FORMAT_TO_INT_H__

#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
/**@file      lq_q_to_int.h
* @brief      LittleQmath的q格式转整形格式
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
//!<Q格式转化整形类型宏定义展开
#if LQ_Q_FORMAT_TO_INT_LOADING_MODE == 2
/****************************INT8 Q格式转整形************************************/
//!<以INT8为基准翻译有符号Q格式(Q1到Q7)
#define LQ_INT8_Q7_TO_INT(A,Lq_Error)   (LQ_INT8_Q7)((A)*7.812500000000000000000000E-03f)
#define LQ_INT8_Q6_TO_INT(A,Lq_Error)   (LQ_INT8_Q6)((A)*1.562500000000000000000000E-02f)
#define LQ_INT8_Q5_TO_INT(A,Lq_Error)   (LQ_INT8_Q5)((A)*3.125000000000000000000000E-02f)
#define LQ_INT8_Q4_TO_INT(A,Lq_Error)   (LQ_INT8_Q4)((A)*6.250000000000000000000000E-02f)
#define LQ_INT8_Q3_TO_INT(A,Lq_Error)   (LQ_INT8_Q3)((A)*1.250000000000000000000000E-01f)
#define LQ_INT8_Q2_TO_INT(A,Lq_Error)   (LQ_INT8_Q2)((A)*2.500000000000000000000000E-01f)
#define LQ_INT8_Q1_TO_INT(A,Lq_Error)   (LQ_INT8_Q1)((A)*5.000000000000000000000000E-01f)
/****************************UINT8 UQ格式转整形************************************/
//!<以UINT8为基准翻译无符号UQ格式(UQ1到UQ8)
#define LQ_UINT8_UQ8_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ8)((A)*3.906250000000000000000000E-03f)
#define LQ_UINT8_UQ7_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ7)((A)*7.812500000000000000000000E-03f)
#define LQ_UINT8_UQ6_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ6)((A)*1.562500000000000000000000E-02f)
#define LQ_UINT8_UQ5_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ5)((A)*3.125000000000000000000000E-02f)
#define LQ_UINT8_UQ4_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ4)((A)*6.250000000000000000000000E-02f)
#define LQ_UINT8_UQ3_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ3)((A)*1.250000000000000000000000E-01f)
#define LQ_UINT8_UQ2_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ2)((A)*2.500000000000000000000000E-01f)
#define LQ_UINT8_UQ1_TO_INT(A,Lq_Error)   (LQ_UINT8_UQ1)((A)*5.000000000000000000000000E-01f)
/****************************INT16 Q格式转整形************************************/
//!<以INT16为基准翻译有符号Q格式(Q1到Q15)
#define LQ_INT16_Q15_TO_INT(A,Lq_Error)   (LQ_INT16_Q15)((A)*3.051757812500000000000000E-05f)
#define LQ_INT16_Q14_TO_INT(A,Lq_Error)   (LQ_INT16_Q14)((A)*6.103515625000000000000000E-05f)
#define LQ_INT16_Q13_TO_INT(A,Lq_Error)   (LQ_INT16_Q13)((A)*1.220703125000000000000000E-04f)
#define LQ_INT16_Q12_TO_INT(A,Lq_Error)   (LQ_INT16_Q12)((A)*2.441406250000000000000000E-04f)
#define LQ_INT16_Q11_TO_INT(A,Lq_Error)   (LQ_INT16_Q11)((A)*4.882812500000000000000000E-04f)
#define LQ_INT16_Q10_TO_INT(A,Lq_Error)   (LQ_INT16_Q10)((A)*9.765625000000000000000000E-04f)
#define LQ_INT16_Q9_TO_INT(A,Lq_Error)   (LQ_INT16_Q9)((A)*1.953125000000000000000000E-03f)
#define LQ_INT16_Q8_TO_INT(A,Lq_Error)   (LQ_INT16_Q8)((A)*3.906250000000000000000000E-03f)
#define LQ_INT16_Q7_TO_INT(A,Lq_Error)   (LQ_INT16_Q7)((A)*7.812500000000000000000000E-03f)
#define LQ_INT16_Q6_TO_INT(A,Lq_Error)   (LQ_INT16_Q6)((A)*1.562500000000000000000000E-02f)
#define LQ_INT16_Q5_TO_INT(A,Lq_Error)   (LQ_INT16_Q5)((A)*3.125000000000000000000000E-02f)
#define LQ_INT16_Q4_TO_INT(A,Lq_Error)   (LQ_INT16_Q4)((A)*6.250000000000000000000000E-02f)
#define LQ_INT16_Q3_TO_INT(A,Lq_Error)   (LQ_INT16_Q3)((A)*1.250000000000000000000000E-01f)
#define LQ_INT16_Q2_TO_INT(A,Lq_Error)   (LQ_INT16_Q2)((A)*2.500000000000000000000000E-01f)
#define LQ_INT16_Q1_TO_INT(A,Lq_Error)   (LQ_INT16_Q1)((A)*5.000000000000000000000000E-01f)
/****************************UINT16 UQ格式转整形************************************/
//!<以UINT16为基准翻译无符号UQ格式(UQ1到UQ16)
#define LQ_UINT16_UQ16_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ16)((A)*1.525878906250000000000000E-05f)
#define LQ_UINT16_UQ15_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ15)((A)*3.051757812500000000000000E-05f)
#define LQ_UINT16_UQ14_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ14)((A)*6.103515625000000000000000E-05f)
#define LQ_UINT16_UQ13_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ13)((A)*1.220703125000000000000000E-04f)
#define LQ_UINT16_UQ12_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ12)((A)*2.441406250000000000000000E-04f)
#define LQ_UINT16_UQ11_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ11)((A)*4.882812500000000000000000E-04f)
#define LQ_UINT16_UQ10_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ10)((A)*9.765625000000000000000000E-04f)
#define LQ_UINT16_UQ9_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ9)((A)*1.953125000000000000000000E-03f)
#define LQ_UINT16_UQ8_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ8)((A)*3.906250000000000000000000E-03f)
#define LQ_UINT16_UQ7_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ7)((A)*7.812500000000000000000000E-03f)
#define LQ_UINT16_UQ6_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ6)((A)*1.562500000000000000000000E-02f)
#define LQ_UINT16_UQ5_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ5)((A)*3.125000000000000000000000E-02f)
#define LQ_UINT16_UQ4_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ4)((A)*6.250000000000000000000000E-02f)
#define LQ_UINT16_UQ3_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ3)((A)*1.250000000000000000000000E-01f)
#define LQ_UINT16_UQ2_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ2)((A)*2.500000000000000000000000E-01f)
#define LQ_UINT16_UQ1_TO_INT(A,Lq_Error)   (LQ_UINT16_UQ1)((A)*5.000000000000000000000000E-01f)
/****************************INT32 Q格式转整形************************************/
//!<以INT32为基准翻译有符号Q格式(Q1到Q31)
#define LQ_INT32_Q31_TO_INT(A,Lq_Error)   (LQ_INT32_Q31)((A)*4.656612873077392578125000E-10f)
#define LQ_INT32_Q30_TO_INT(A,Lq_Error)   (LQ_INT32_Q30)((A)*9.313225746154785156250000E-10f)
#define LQ_INT32_Q29_TO_INT(A,Lq_Error)   (LQ_INT32_Q29)((A)*1.862645149230957031250000E-09f)
#define LQ_INT32_Q28_TO_INT(A,Lq_Error)   (LQ_INT32_Q28)((A)*3.725290298461914062500000E-09f)
#define LQ_INT32_Q27_TO_INT(A,Lq_Error)   (LQ_INT32_Q27)((A)*7.450580596923828125000000E-09f)
#define LQ_INT32_Q26_TO_INT(A,Lq_Error)   (LQ_INT32_Q26)((A)*1.490116119384765625000000E-08f)
#define LQ_INT32_Q25_TO_INT(A,Lq_Error)   (LQ_INT32_Q25)((A)*2.980232238769531250000000E-08f)
#define LQ_INT32_Q24_TO_INT(A,Lq_Error)   (LQ_INT32_Q24)((A)*5.960464477539062500000000E-08f)
#define LQ_INT32_Q23_TO_INT(A,Lq_Error)   (LQ_INT32_Q23)((A)*1.192092895507812500000000E-07f)
#define LQ_INT32_Q22_TO_INT(A,Lq_Error)   (LQ_INT32_Q22)((A)*2.384185791015625000000000E-07f)
#define LQ_INT32_Q21_TO_INT(A,Lq_Error)   (LQ_INT32_Q21)((A)*4.768371582031250000000000E-07f)
#define LQ_INT32_Q20_TO_INT(A,Lq_Error)   (LQ_INT32_Q20)((A)*9.536743164062500000000000E-07f)
#define LQ_INT32_Q19_TO_INT(A,Lq_Error)   (LQ_INT32_Q19)((A)*1.907348632812500000000000E-06f)
#define LQ_INT32_Q18_TO_INT(A,Lq_Error)   (LQ_INT32_Q18)((A)*3.814697265625000000000000E-06f)
#define LQ_INT32_Q17_TO_INT(A,Lq_Error)   (LQ_INT32_Q17)((A)*7.629394531250000000000000E-06f)
#define LQ_INT32_Q16_TO_INT(A,Lq_Error)   (LQ_INT32_Q16)((A)*1.525878906250000000000000E-05f)
#define LQ_INT32_Q15_TO_INT(A,Lq_Error)   (LQ_INT32_Q15)((A)*3.051757812500000000000000E-05f)
#define LQ_INT32_Q14_TO_INT(A,Lq_Error)   (LQ_INT32_Q14)((A)*6.103515625000000000000000E-05f)
#define LQ_INT32_Q13_TO_INT(A,Lq_Error)   (LQ_INT32_Q13)((A)*1.220703125000000000000000E-04f)
#define LQ_INT32_Q12_TO_INT(A,Lq_Error)   (LQ_INT32_Q12)((A)*2.441406250000000000000000E-04f)
#define LQ_INT32_Q11_TO_INT(A,Lq_Error)   (LQ_INT32_Q11)((A)*4.882812500000000000000000E-04f)
#define LQ_INT32_Q10_TO_INT(A,Lq_Error)   (LQ_INT32_Q10)((A)*9.765625000000000000000000E-04f)
#define LQ_INT32_Q9_TO_INT(A,Lq_Error)   (LQ_INT32_Q9)((A)*1.953125000000000000000000E-03f)
#define LQ_INT32_Q8_TO_INT(A,Lq_Error)   (LQ_INT32_Q8)((A)*3.906250000000000000000000E-03f)
#define LQ_INT32_Q7_TO_INT(A,Lq_Error)   (LQ_INT32_Q7)((A)*7.812500000000000000000000E-03f)
#define LQ_INT32_Q6_TO_INT(A,Lq_Error)   (LQ_INT32_Q6)((A)*1.562500000000000000000000E-02f)
#define LQ_INT32_Q5_TO_INT(A,Lq_Error)   (LQ_INT32_Q5)((A)*3.125000000000000000000000E-02f)
#define LQ_INT32_Q4_TO_INT(A,Lq_Error)   (LQ_INT32_Q4)((A)*6.250000000000000000000000E-02f)
#define LQ_INT32_Q3_TO_INT(A,Lq_Error)   (LQ_INT32_Q3)((A)*1.250000000000000000000000E-01f)
#define LQ_INT32_Q2_TO_INT(A,Lq_Error)   (LQ_INT32_Q2)((A)*2.500000000000000000000000E-01f)
#define LQ_INT32_Q1_TO_INT(A,Lq_Error)   (LQ_INT32_Q1)((A)*5.000000000000000000000000E-01f)
/****************************UINT32 UQ格式转浮点************************************/
//!<以UINT32为基准翻译无符号UQ格式(UQ1到UQ32)
#define LQ_UINT32_UQ32_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ32)((A)*2.328306436538696289062500E-10f)
#define LQ_UINT32_UQ31_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ31)((A)*4.656612873077392578125000E-10f)
#define LQ_UINT32_UQ30_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ30)((A)*9.313225746154785156250000E-10f)
#define LQ_UINT32_UQ29_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ29)((A)*1.862645149230957031250000E-09f)
#define LQ_UINT32_UQ28_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ28)((A)*3.725290298461914062500000E-09f)
#define LQ_UINT32_UQ27_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ27)((A)*7.450580596923828125000000E-09f)
#define LQ_UINT32_UQ26_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ26)((A)*1.490116119384765625000000E-08f)
#define LQ_UINT32_UQ25_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ25)((A)*2.980232238769531250000000E-08f)
#define LQ_UINT32_UQ24_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ24)((A)*5.960464477539062500000000E-08f)
#define LQ_UINT32_UQ23_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ23)((A)*1.192092895507812500000000E-07f)
#define LQ_UINT32_UQ22_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ22)((A)*2.384185791015625000000000E-07f)
#define LQ_UINT32_UQ21_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ21)((A)*4.768371582031250000000000E-07f)
#define LQ_UINT32_UQ20_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ20)((A)*9.536743164062500000000000E-07f)
#define LQ_UINT32_UQ19_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ19)((A)*1.907348632812500000000000E-06f)
#define LQ_UINT32_UQ18_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ18)((A)*3.814697265625000000000000E-06f)
#define LQ_UINT32_UQ17_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ17)((A)*7.629394531250000000000000E-06f)
#define LQ_UINT32_UQ16_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ16)((A)*1.525878906250000000000000E-05f)
#define LQ_UINT32_UQ15_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ15)((A)*3.051757812500000000000000E-05f)
#define LQ_UINT32_UQ14_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ14)((A)*6.103515625000000000000000E-05f)
#define LQ_UINT32_UQ13_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ13)((A)*1.220703125000000000000000E-04f)
#define LQ_UINT32_UQ12_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ12)((A)*2.441406250000000000000000E-04f)
#define LQ_UINT32_UQ11_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ11)((A)*4.882812500000000000000000E-04f)
#define LQ_UINT32_UQ10_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ10)((A)*9.765625000000000000000000E-04f)
#define LQ_UINT32_UQ9_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ9)((A)*1.953125000000000000000000E-03f)
#define LQ_UINT32_UQ8_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ8)((A)*3.906250000000000000000000E-03f)
#define LQ_UINT32_UQ7_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ7)((A)*7.812500000000000000000000E-03f)
#define LQ_UINT32_UQ6_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ6)((A)*1.562500000000000000000000E-02f)
#define LQ_UINT32_UQ5_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ5)((A)*3.125000000000000000000000E-02f)
#define LQ_UINT32_UQ4_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ4)((A)*6.250000000000000000000000E-02f)
#define LQ_UINT32_UQ3_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ3)((A)*1.250000000000000000000000E-01f)
#define LQ_UINT32_UQ2_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ2)((A)*2.500000000000000000000000E-01f)
#define LQ_UINT32_UQ1_TO_INT(A,Lq_Error)   (LQ_UINT32_UQ1)((A)*5.000000000000000000000000E-01f)
/****************************INT8 Q格式转整形(任意Q格式)************************************/
//!<以INT8为基准翻译有符号Q格式(Q1到Q7)
#define LQ_INT8_Q_FORMAT_TO_INT(A,Q_A,Lq_Error)   ((LQ_INT8_Q)((A)*(1.0f/((LQ_UI_8BIT)1<<Q_A))))
/****************************UINT8 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT8为基准翻译有符号UQ格式(UQ1到UQ8)
#define LQ_UINT8_UQ_FORMAT_TO_INT(A,Q_A,Lq_Error)    ((LQ_UINT8_UQ)((A)*(1.0f/((LQ_UI_8BIT)1<<Q_A))))
/****************************INT16 Q格式转整形(任意Q格式)************************************/
//!<以INT16为基准翻译有符号Q格式(Q1到Q15)
#define LQ_INT16_Q_FORMAT_TO_INT(A,Q_A,Lq_Error)   ((LQ_INT16_Q)((A)*(1.0f/((LQ_UI_16BIT)1<<Q_A))))
/****************************UINT16 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT16为基准翻译有符号UQ格式(UQ1到UQ16)
#define LQ_UINT16_UQ_FORMAT_TO_INT(A,Q_A,Lq_Error)    ((LQ_UINT16_UQ)((A)*(1.0f/((LQ_UI_16BIT)1<<Q_A))))
/****************************INT32 Q格式转整形(任意Q格式)************************************/
//!<以INT32为基准翻译有符号Q格式(Q1到Q31)
#define LQ_INT32_Q_FORMAT_TO_INT(A,Q_A,Lq_Error)   ((LQ_INT32_Q)((A)*(1.0f/((LQ_UI_32BIT)1<<Q_A))))
/****************************UINT32 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT32为基准翻译有符号UQ格式(UQ1到UQ32)
#define LQ_UINT32_UQ_FORMAT_TO_INT(A,Q_A,Lq_Error)    ((LQ_UINT32_UQ)((A)*(1.0f/((LQ_UI_32BIT)1<<Q_A))))
#endif

 

#if LQ_Q_FORMAT_TO_INT_LOADING_MODE == 1
/**@brief (直接转换)INT8类型Q7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q7     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q7 LQ_INT8_Q7_TO_INT(LQ_INT8_Q7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)INT8类型Q6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q6     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q6 LQ_INT8_Q6_TO_INT(LQ_INT8_Q6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)INT8类型Q5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q5     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q5 LQ_INT8_Q5_TO_INT(LQ_INT8_Q5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)INT8类型Q4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q4     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q4 LQ_INT8_Q4_TO_INT(LQ_INT8_Q4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)INT8类型Q3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q3     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q3 LQ_INT8_Q3_TO_INT(LQ_INT8_Q3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)INT8类型Q2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q2     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q2 LQ_INT8_Q2_TO_INT(LQ_INT8_Q2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)INT8类型Q1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q1     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT8_Q1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q7_TO_INT  直接转换方式INT8的Q7转化整形类型
* @see :: LQ_INT8_Q6_TO_INT  直接转换方式INT8的Q6转化整形类型
* @see :: LQ_INT8_Q5_TO_INT  直接转换方式INT8的Q5转化整形类型
* @see :: LQ_INT8_Q4_TO_INT  直接转换方式INT8的Q4转化整形类型
* @see :: LQ_INT8_Q3_TO_INT  直接转换方式INT8的Q3转化整形类型
* @see :: LQ_INT8_Q2_TO_INT  直接转换方式INT8的Q2转化整形类型
* @see :: LQ_INT8_Q1_TO_INT  直接转换方式INT8的Q1转化整形类型
*/
LQ_INLINE LQ_INT8_Q1 LQ_INT8_Q1_TO_INT(LQ_INT8_Q1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT8_Q1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)UINT8类型UQ8格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q8     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ8_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ8 LQ_UINT8_UQ8_TO_INT(LQ_UINT8_UQ8 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ8)((A) * 3.906250000000000000000000E-03f);
}
/**@brief (直接转换)UINT8类型UQ7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q7     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ7 LQ_UINT8_UQ7_TO_INT(LQ_UINT8_UQ7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)UINT8类型UQ6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q6     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ6 LQ_UINT8_UQ6_TO_INT(LQ_UINT8_UQ6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)UINT8类型UQ5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q5     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ5 LQ_UINT8_UQ5_TO_INT(LQ_UINT8_UQ5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)UINT8类型UQ4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q4     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ4 LQ_UINT8_UQ4_TO_INT(LQ_UINT8_UQ4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)UINT8类型UQ3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q3     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ3 LQ_UINT8_UQ3_TO_INT(LQ_UINT8_UQ3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)UINT8类型UQ2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q2     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ2 LQ_UINT8_UQ2_TO_INT(LQ_UINT8_UQ2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)UINT8类型UQ1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_Q1     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT8_UQ1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ7_TO_INT  直接转换方式UINT8的UQ7转化整形类型
* @see :: LQ_UINT8_UQ6_TO_INT  直接转换方式UINT8的UQ6转化整形类型
* @see :: LQ_UINT8_UQ5_TO_INT  直接转换方式UINT8的UQ5转化整形类型
* @see :: LQ_UINT8_UQ4_TO_INT  直接转换方式UINT8的UQ4转化整形类型
* @see :: LQ_UINT8_UQ3_TO_INT  直接转换方式UINT8的UQ3转化整形类型
* @see :: LQ_UINT8_UQ2_TO_INT  直接转换方式UINT8的UQ2转化整形类型
* @see :: LQ_UINT8_UQ1_TO_INT  直接转换方式UINT8的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ1 LQ_UINT8_UQ1_TO_INT(LQ_UINT8_UQ1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT8_UQ1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)INT16类型Q15格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q15     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q15_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q15 LQ_INT16_Q15_TO_INT(LQ_INT16_Q15 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q15)((A) * 3.051757812500000000000000E-05f);
}
/**@brief (直接转换)INT16类型Q14格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q14     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q14_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q14 LQ_INT16_Q14_TO_INT(LQ_INT16_Q14 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q14)((A) * 6.103515625000000000000000E-05f);
}
/**@brief (直接转换)INT16类型Q13格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q13     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q13_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q13 LQ_INT16_Q13_TO_INT(LQ_INT16_Q13 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q13)((A) * 1.220703125000000000000000E-04f);
}
/**@brief (直接转换)INT16类型Q12格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q12     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q12_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q12 LQ_INT16_Q12_TO_INT(LQ_INT16_Q12 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q12)((A) * 2.441406250000000000000000E-04f);
}
/**@brief (直接转换)INT16类型Q11格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q11     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q11_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q11 LQ_INT16_Q11_TO_INT(LQ_INT16_Q11 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q11)((A) * 4.882812500000000000000000E-04f);
}
/**@brief (直接转换)INT16类型Q10格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q10     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q10_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q10 LQ_INT16_Q10_TO_INT(LQ_INT16_Q10 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q10)((A) * 9.765625000000000000000000E-04f);
}
/**@brief (直接转换)INT16类型Q9格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q9     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q9_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q9 LQ_INT16_Q9_TO_INT(LQ_INT16_Q9 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q9)((A) * 1.953125000000000000000000E-03f);
}
/**@brief (直接转换)INT16类型Q8格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q8     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q8_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q8 LQ_INT16_Q8_TO_INT(LQ_INT16_Q8 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q8)((A) * 3.906250000000000000000000E-03f);
}
/**@brief (直接转换)INT16类型Q7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q7     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q7 LQ_INT16_Q7_TO_INT(LQ_INT16_Q7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)INT16类型Q6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q6     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q6 LQ_INT16_Q6_TO_INT(LQ_INT16_Q6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)INT16类型Q5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q5     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q5 LQ_INT16_Q5_TO_INT(LQ_INT16_Q5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)INT16类型Q4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q4     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q4 LQ_INT16_Q4_TO_INT(LQ_INT16_Q4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)INT16类型Q3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q3     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q3 LQ_INT16_Q3_TO_INT(LQ_INT16_Q3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)INT16类型Q2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q2     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q2 LQ_INT16_Q2_TO_INT(LQ_INT16_Q2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)INT16类型Q1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q1     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT16_Q1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q15_TO_INT  直接转换方式INT16的Q15转化整形类型
* @see :: LQ_INT16_Q14_TO_INT  直接转换方式INT16的Q14转化整形类型
* @see :: LQ_INT16_Q13_TO_INT  直接转换方式INT16的Q13转化整形类型
* @see :: LQ_INT16_Q12_TO_INT  直接转换方式INT16的Q12转化整形类型
* @see :: LQ_INT16_Q11_TO_INT  直接转换方式INT16的Q11转化整形类型
* @see :: LQ_INT16_Q10_TO_INT  直接转换方式INT16的Q10转化整形类型
* @see :: LQ_INT16_Q9_TO_INT  直接转换方式INT16的Q9转化整形类型
* @see :: LQ_INT16_Q8_TO_INT  直接转换方式INT16的Q8转化整形类型
* @see :: LQ_INT16_Q7_TO_INT  直接转换方式INT16的Q7转化整形类型
* @see :: LQ_INT16_Q6_TO_INT  直接转换方式INT16的Q6转化整形类型
* @see :: LQ_INT16_Q5_TO_INT  直接转换方式INT16的Q5转化整形类型
* @see :: LQ_INT16_Q4_TO_INT  直接转换方式INT16的Q4转化整形类型
* @see :: LQ_INT16_Q3_TO_INT  直接转换方式INT16的Q3转化整形类型
* @see :: LQ_INT16_Q2_TO_INT  直接转换方式INT16的Q2转化整形类型
* @see :: LQ_INT16_Q1_TO_INT  直接转换方式INT16的Q1转化整形类型
*/
LQ_INLINE LQ_INT16_Q1 LQ_INT16_Q1_TO_INT(LQ_INT16_Q1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT16_Q1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)UINT16类型UQ16格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q16     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ16_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ16 LQ_UINT16_UQ16_TO_INT(LQ_UINT16_UQ16 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ16)((A) * 1.525878906250000000000000E-05f);
}
/**@brief (直接转换)UINT16类型UQ15格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q15     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ15_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ15 LQ_UINT16_UQ15_TO_INT(LQ_UINT16_UQ15 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ15)((A) * 3.051757812500000000000000E-05f);
}
/**@brief (直接转换)UINT16类型UQ14格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q14     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ14_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ14 LQ_UINT16_UQ14_TO_INT(LQ_UINT16_UQ14 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ14)((A) * 6.103515625000000000000000E-05f);
}
/**@brief (直接转换)UINT16类型UQ13格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q13     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ13_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ13 LQ_UINT16_UQ13_TO_INT(LQ_UINT16_UQ13 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ13)((A) * 1.220703125000000000000000E-04f);
}
/**@brief (直接转换)UINT16类型UQ12格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q12     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ12_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ12 LQ_UINT16_UQ12_TO_INT(LQ_UINT16_UQ12 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ12)((A) * 2.441406250000000000000000E-04f);
}
/**@brief (直接转换)UINT16类型UQ11格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q11     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ11_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ11 LQ_UINT16_UQ11_TO_INT(LQ_UINT16_UQ11 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ11)((A) * 4.882812500000000000000000E-04f);
}
/**@brief (直接转换)UINT16类型UQ10格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q10     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ10_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ10 LQ_UINT16_UQ10_TO_INT(LQ_UINT16_UQ10 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ10)((A) * 9.765625000000000000000000E-04f);
}
/**@brief (直接转换)UINT16类型UQ9格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q9     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ9_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ9 LQ_UINT16_UQ9_TO_INT(LQ_UINT16_UQ9 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ9)((A) * 1.953125000000000000000000E-03f);
}
/**@brief (直接转换)UINT16类型UQ8格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q8     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ8_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ8 LQ_UINT16_UQ8_TO_INT(LQ_UINT16_UQ8 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ8)((A) * 3.906250000000000000000000E-03f);
}
/**@brief (直接转换)UINT16类型UQ7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q7     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ7 LQ_UINT16_UQ7_TO_INT(LQ_UINT16_UQ7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)UINT16类型UQ6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q6     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ6 LQ_UINT16_UQ6_TO_INT(LQ_UINT16_UQ6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)UINT16类型UQ5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q5     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ5 LQ_UINT16_UQ5_TO_INT(LQ_UINT16_UQ5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)UINT16类型UQ4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q4     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ4 LQ_UINT16_UQ4_TO_INT(LQ_UINT16_UQ4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)UINT16类型UQ3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q3     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ3 LQ_UINT16_UQ3_TO_INT(LQ_UINT16_UQ3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)UINT16类型UQ2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q2     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ2 LQ_UINT16_UQ2_TO_INT(LQ_UINT16_UQ2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)UINT16类型UQ1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_Q1     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT16_UQ1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ15_TO_INT  直接转换方式UINT16的UQ15转化整形类型
* @see :: LQ_UINT16_UQ14_TO_INT  直接转换方式UINT16的UQ14转化整形类型
* @see :: LQ_UINT16_UQ13_TO_INT  直接转换方式UINT16的UQ13转化整形类型
* @see :: LQ_UINT16_UQ12_TO_INT  直接转换方式UINT16的UQ12转化整形类型
* @see :: LQ_UINT16_UQ11_TO_INT  直接转换方式UINT16的UQ11转化整形类型
* @see :: LQ_UINT16_UQ10_TO_INT  直接转换方式UINT16的UQ10转化整形类型
* @see :: LQ_UINT16_UQ9_TO_INT  直接转换方式UINT16的UQ9转化整形类型
* @see :: LQ_UINT16_UQ8_TO_INT  直接转换方式UINT16的UQ8转化整形类型
* @see :: LQ_UINT16_UQ7_TO_INT  直接转换方式UINT16的UQ7转化整形类型
* @see :: LQ_UINT16_UQ6_TO_INT  直接转换方式UINT16的UQ6转化整形类型
* @see :: LQ_UINT16_UQ5_TO_INT  直接转换方式UINT16的UQ5转化整形类型
* @see :: LQ_UINT16_UQ4_TO_INT  直接转换方式UINT16的UQ4转化整形类型
* @see :: LQ_UINT16_UQ3_TO_INT  直接转换方式UINT16的UQ3转化整形类型
* @see :: LQ_UINT16_UQ2_TO_INT  直接转换方式UINT16的UQ2转化整形类型
* @see :: LQ_UINT16_UQ1_TO_INT  直接转换方式UINT16的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ1 LQ_UINT16_UQ1_TO_INT(LQ_UINT16_UQ1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT16_UQ1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)INT32类型Q31格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q31     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q31_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q31 LQ_INT32_Q31_TO_INT(LQ_INT32_Q31 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q31)((A) * 4.656612873077392578125000E-10f);
}
/**@brief (直接转换)INT32类型Q30格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q30     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q30_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q30 LQ_INT32_Q30_TO_INT(LQ_INT32_Q30 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q30)((A) * 9.313225746154785156250000E-10f);
}
/**@brief (直接转换)INT32类型Q29格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q29     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q29_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q29 LQ_INT32_Q29_TO_INT(LQ_INT32_Q29 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q29)((A) * 1.862645149230957031250000E-09f);
}
/**@brief (直接转换)INT32类型Q28格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q28     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q28_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q28 LQ_INT32_Q28_TO_INT(LQ_INT32_Q28 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q28)((A) * 3.725290298461914062500000E-09f);
}
/**@brief (直接转换)INT32类型Q27格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q27     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q27_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q27 LQ_INT32_Q27_TO_INT(LQ_INT32_Q27 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q27)((A) * 7.450580596923828125000000E-09f);
}
/**@brief (直接转换)INT32类型Q26格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q26     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q26_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q26 LQ_INT32_Q26_TO_INT(LQ_INT32_Q26 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q26)((A) * 1.490116119384765625000000E-08f);
}
/**@brief (直接转换)INT32类型Q25格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q25     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q25_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q25 LQ_INT32_Q25_TO_INT(LQ_INT32_Q25 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q25)((A) * 2.980232238769531250000000E-08f);
}
/**@brief (直接转换)INT32类型Q24格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q24     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q24_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q24 LQ_INT32_Q24_TO_INT(LQ_INT32_Q24 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q24)((A) * 5.960464477539062500000000E-08f);
}
/**@brief (直接转换)INT32类型Q23格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q23     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q23_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q23 LQ_INT32_Q23_TO_INT(LQ_INT32_Q23 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q23)((A) * 1.192092895507812500000000E-07f);
}
/**@brief (直接转换)INT32类型Q22格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q22     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q22_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q22 LQ_INT32_Q22_TO_INT(LQ_INT32_Q22 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q22)((A) * 2.384185791015625000000000E-07f);
}
/**@brief (直接转换)INT32类型Q21格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q21     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q21_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q21 LQ_INT32_Q21_TO_INT(LQ_INT32_Q21 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q21)((A) * 4.768371582031250000000000E-07f);
}
/**@brief (直接转换)INT32类型Q20格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q20     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q20_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q20 LQ_INT32_Q20_TO_INT(LQ_INT32_Q20 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q20)((A) * 9.536743164062500000000000E-07f);
}
/**@brief (直接转换)INT32类型Q19格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q19     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q19_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q19 LQ_INT32_Q19_TO_INT(LQ_INT32_Q19 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q19)((A) * 1.907348632812500000000000E-06f);
}
/**@brief (直接转换)INT32类型Q18格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q18     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q18_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q18 LQ_INT32_Q18_TO_INT(LQ_INT32_Q18 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q18)((A) * 3.814697265625000000000000E-06f);
}
/**@brief (直接转换)INT32类型Q17格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q17     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q17_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q17 LQ_INT32_Q17_TO_INT(LQ_INT32_Q17 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q17)((A) * 7.629394531250000000000000E-06f);
}
/**@brief (直接转换)INT32类型Q16格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q16     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q16_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q16 LQ_INT32_Q16_TO_INT(LQ_INT32_Q16 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q16)((A) * 1.525878906250000000000000E-05f);
}
/**@brief (直接转换)INT32类型Q15格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q15     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q15_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q15 LQ_INT32_Q15_TO_INT(LQ_INT32_Q15 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q15)((A) * 3.051757812500000000000000E-05f);
}
/**@brief (直接转换)INT32类型Q14格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q14     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q14_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q14 LQ_INT32_Q14_TO_INT(LQ_INT32_Q14 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q14)((A) * 6.103515625000000000000000E-05f);
}
/**@brief (直接转换)INT32类型Q13格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q13     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q13_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q13 LQ_INT32_Q13_TO_INT(LQ_INT32_Q13 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q13)((A) * 1.220703125000000000000000E-04f);
}
/**@brief (直接转换)INT32类型Q12格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q12     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q12_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q12 LQ_INT32_Q12_TO_INT(LQ_INT32_Q12 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q12)((A) * 2.441406250000000000000000E-04f);
}
/**@brief (直接转换)INT32类型Q11格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q11     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q11_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q11 LQ_INT32_Q11_TO_INT(LQ_INT32_Q11 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q11)((A) * 4.882812500000000000000000E-04f);
}
/**@brief (直接转换)INT32类型Q10格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q10     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q10_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q10 LQ_INT32_Q10_TO_INT(LQ_INT32_Q10 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q10)((A) * 9.765625000000000000000000E-04f);
}
/**@brief (直接转换)INT32类型Q9格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q9     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q9_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q9 LQ_INT32_Q9_TO_INT(LQ_INT32_Q9 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q9)((A) * 1.953125000000000000000000E-03f);
}
/**@brief (直接转换)INT32类型Q8格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q8     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q8_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q8 LQ_INT32_Q8_TO_INT(LQ_INT32_Q8 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q8)((A) * 3.906250000000000000000000E-03f);
}
/**@brief (直接转换)INT32类型Q7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q7     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q7 LQ_INT32_Q7_TO_INT(LQ_INT32_Q7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)INT32类型Q6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q6     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q6 LQ_INT32_Q6_TO_INT(LQ_INT32_Q6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)INT32类型Q5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q5     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q5 LQ_INT32_Q5_TO_INT(LQ_INT32_Q5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)INT32类型Q4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q4     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q4 LQ_INT32_Q4_TO_INT(LQ_INT32_Q4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)INT32类型Q3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q3     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q3 LQ_INT32_Q3_TO_INT(LQ_INT32_Q3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)INT32类型Q2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q2     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q2 LQ_INT32_Q2_TO_INT(LQ_INT32_Q2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)INT32类型Q1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q1     A         输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q格式转化为整形数
* @code
*    LQ_INT32_Q1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q31_TO_INT  直接转换方式INT32的Q31转化整形类型
* @see :: LQ_INT32_Q30_TO_INT  直接转换方式INT32的Q30转化整形类型
* @see :: LQ_INT32_Q29_TO_INT  直接转换方式INT32的Q29转化整形类型
* @see :: LQ_INT32_Q28_TO_INT  直接转换方式INT32的Q28转化整形类型
* @see :: LQ_INT32_Q27_TO_INT  直接转换方式INT32的Q27转化整形类型
* @see :: LQ_INT32_Q26_TO_INT  直接转换方式INT32的Q26转化整形类型
* @see :: LQ_INT32_Q25_TO_INT  直接转换方式INT32的Q25转化整形类型
* @see :: LQ_INT32_Q24_TO_INT  直接转换方式INT32的Q24转化整形类型
* @see :: LQ_INT32_Q23_TO_INT  直接转换方式INT32的Q23转化整形类型
* @see :: LQ_INT32_Q22_TO_INT  直接转换方式INT32的Q22转化整形类型
* @see :: LQ_INT32_Q21_TO_INT  直接转换方式INT32的Q21转化整形类型
* @see :: LQ_INT32_Q20_TO_INT  直接转换方式INT32的Q20转化整形类型
* @see :: LQ_INT32_Q19_TO_INT  直接转换方式INT32的Q19转化整形类型
* @see :: LQ_INT32_Q18_TO_INT  直接转换方式INT32的Q18转化整形类型
* @see :: LQ_INT32_Q17_TO_INT  直接转换方式INT32的Q17转化整形类型
* @see :: LQ_INT32_Q16_TO_INT  直接转换方式INT32的Q16转化整形类型
* @see :: LQ_INT32_Q15_TO_INT  直接转换方式INT32的Q15转化整形类型
* @see :: LQ_INT32_Q14_TO_INT  直接转换方式INT32的Q14转化整形类型
* @see :: LQ_INT32_Q13_TO_INT  直接转换方式INT32的Q13转化整形类型
* @see :: LQ_INT32_Q12_TO_INT  直接转换方式INT32的Q12转化整形类型
* @see :: LQ_INT32_Q11_TO_INT  直接转换方式INT32的Q11转化整形类型
* @see :: LQ_INT32_Q10_TO_INT  直接转换方式INT32的Q10转化整形类型
* @see :: LQ_INT32_Q9_TO_INT  直接转换方式INT32的Q9转化整形类型
* @see :: LQ_INT32_Q8_TO_INT  直接转换方式INT32的Q8转化整形类型
* @see :: LQ_INT32_Q7_TO_INT  直接转换方式INT32的Q7转化整形类型
* @see :: LQ_INT32_Q6_TO_INT  直接转换方式INT32的Q6转化整形类型
* @see :: LQ_INT32_Q5_TO_INT  直接转换方式INT32的Q5转化整形类型
* @see :: LQ_INT32_Q4_TO_INT  直接转换方式INT32的Q4转化整形类型
* @see :: LQ_INT32_Q3_TO_INT  直接转换方式INT32的Q3转化整形类型
* @see :: LQ_INT32_Q2_TO_INT  直接转换方式INT32的Q2转化整形类型
* @see :: LQ_INT32_Q1_TO_INT  直接转换方式INT32的Q1转化整形类型
*/
LQ_INLINE LQ_INT32_Q1 LQ_INT32_Q1_TO_INT(LQ_INT32_Q1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_INT32_Q1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)UINT32类型UQ32格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q32     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ32_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ32 LQ_UINT32_UQ32_TO_INT(LQ_UINT32_UQ32 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ32)((A) * 2.328306436538696289062500E-10f);
}
/**@brief (直接转换)UINT32类型UQ31格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q31     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ31_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ31 LQ_UINT32_UQ31_TO_INT(LQ_UINT32_UQ31 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ31)((A) * 4.656612873077392578125000E-10f);
}
/**@brief (直接转换)UINT32类型UQ30格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q30     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ30_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ30 LQ_UINT32_UQ30_TO_INT(LQ_UINT32_UQ30 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ30)((A) * 9.313225746154785156250000E-10f);
}
/**@brief (直接转换)UINT32类型UQ29格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q29     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ29_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ29 LQ_UINT32_UQ29_TO_INT(LQ_UINT32_UQ29 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ29)((A) * 1.862645149230957031250000E-09f);
}
/**@brief (直接转换)UINT32类型UQ28格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q28     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ28_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ28 LQ_UINT32_UQ28_TO_INT(LQ_UINT32_UQ28 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ28)((A) * 3.725290298461914062500000E-09f);
}
/**@brief (直接转换)UINT32类型UQ27格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q27     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ27_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ27 LQ_UINT32_UQ27_TO_INT(LQ_UINT32_UQ27 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ27)((A) * 7.450580596923828125000000E-09f);
}
/**@brief (直接转换)UINT32类型UQ26格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q26     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ26_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ26 LQ_UINT32_UQ26_TO_INT(LQ_UINT32_UQ26 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ26)((A) * 1.490116119384765625000000E-08f);
}
/**@brief (直接转换)UINT32类型UQ25格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q25     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ25_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ25 LQ_UINT32_UQ25_TO_INT(LQ_UINT32_UQ25 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ25)((A) * 2.980232238769531250000000E-08f);
}
/**@brief (直接转换)UINT32类型UQ24格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q24     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ24_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ24 LQ_UINT32_UQ24_TO_INT(LQ_UINT32_UQ24 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ24)((A) * 5.960464477539062500000000E-08f);
}
/**@brief (直接转换)UINT32类型UQ23格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q23     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ23_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ23 LQ_UINT32_UQ23_TO_INT(LQ_UINT32_UQ23 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ23)((A) * 1.192092895507812500000000E-07f);
}
/**@brief (直接转换)UINT32类型UQ22格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q22     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ22_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ22 LQ_UINT32_UQ22_TO_INT(LQ_UINT32_UQ22 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ22)((A) * 2.384185791015625000000000E-07f);
}
/**@brief (直接转换)UINT32类型UQ21格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q21     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ21_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ21 LQ_UINT32_UQ21_TO_INT(LQ_UINT32_UQ21 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ21)((A) * 4.768371582031250000000000E-07f);
}
/**@brief (直接转换)UINT32类型UQ20格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q20     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ20_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ20 LQ_UINT32_UQ20_TO_INT(LQ_UINT32_UQ20 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ20)((A) * 9.536743164062500000000000E-07f);
}
/**@brief (直接转换)UINT32类型UQ19格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q19     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ19_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ19 LQ_UINT32_UQ19_TO_INT(LQ_UINT32_UQ19 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ19)((A) * 1.907348632812500000000000E-06f);
}
/**@brief (直接转换)UINT32类型UQ18格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q18     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ18_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ18 LQ_UINT32_UQ18_TO_INT(LQ_UINT32_UQ18 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ18)((A) * 3.814697265625000000000000E-06f);
}
/**@brief (直接转换)UINT32类型UQ17格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q17     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ17_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ17 LQ_UINT32_UQ17_TO_INT(LQ_UINT32_UQ17 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ17)((A) * 7.629394531250000000000000E-06f);
}
/**@brief (直接转换)UINT32类型UQ16格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q16     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ16_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ16 LQ_UINT32_UQ16_TO_INT(LQ_UINT32_UQ16 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ16)((A) * 1.525878906250000000000000E-05f);
}
/**@brief (直接转换)UINT32类型UQ15格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q15     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ15_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ15 LQ_UINT32_UQ15_TO_INT(LQ_UINT32_UQ15 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ15)((A) * 3.051757812500000000000000E-05f);
}
/**@brief (直接转换)UINT32类型UQ14格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q14     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ14_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ14 LQ_UINT32_UQ14_TO_INT(LQ_UINT32_UQ14 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ14)((A) * 6.103515625000000000000000E-05f);
}
/**@brief (直接转换)UINT32类型UQ13格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q13     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ13_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ13 LQ_UINT32_UQ13_TO_INT(LQ_UINT32_UQ13 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ13)((A) * 1.220703125000000000000000E-04f);
}
/**@brief (直接转换)UINT32类型UQ12格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q12     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ12_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ12 LQ_UINT32_UQ12_TO_INT(LQ_UINT32_UQ12 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ12)((A) * 2.441406250000000000000000E-04f);
}
/**@brief (直接转换)UINT32类型UQ11格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q11     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ11_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ11 LQ_UINT32_UQ11_TO_INT(LQ_UINT32_UQ11 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ11)((A) * 4.882812500000000000000000E-04f);
}
/**@brief (直接转换)UINT32类型UQ10格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q10     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ10_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ10 LQ_UINT32_UQ10_TO_INT(LQ_UINT32_UQ10 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ10)((A) * 9.765625000000000000000000E-04f);
}
/**@brief (直接转换)UINT32类型UQ9格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q9     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ9_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ9 LQ_UINT32_UQ9_TO_INT(LQ_UINT32_UQ9 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ9)((A) * 1.953125000000000000000000E-03f);
}
/**@brief (直接转换)UINT32类型UQ8格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q8     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ8_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ8 LQ_UINT32_UQ8_TO_INT(LQ_UINT32_UQ8 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ8)((A) * 3.906250000000000000000000E-03f);
}
/**@brief (直接转换)UINT32类型UQ7格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q7     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ7_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ7 LQ_UINT32_UQ7_TO_INT(LQ_UINT32_UQ7 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ7)((A) * 7.812500000000000000000000E-03f);
}
/**@brief (直接转换)UINT32类型UQ6格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q6     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ6_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ6 LQ_UINT32_UQ6_TO_INT(LQ_UINT32_UQ6 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ6)((A) * 1.562500000000000000000000E-02f);
}
/**@brief (直接转换)UINT32类型UQ5格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q5     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ5_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ5 LQ_UINT32_UQ5_TO_INT(LQ_UINT32_UQ5 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ5)((A) * 3.125000000000000000000000E-02f);
}
/**@brief (直接转换)UINT32类型UQ4格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q4     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ4_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ4 LQ_UINT32_UQ4_TO_INT(LQ_UINT32_UQ4 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ4)((A) * 6.250000000000000000000000E-02f);
}
/**@brief (直接转换)UINT32类型UQ3格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q3     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ3_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ3 LQ_UINT32_UQ3_TO_INT(LQ_UINT32_UQ3 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ3)((A) * 1.250000000000000000000000E-01f);
}
/**@brief (直接转换)UINT32类型UQ2格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q2     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ2_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ2 LQ_UINT32_UQ2_TO_INT(LQ_UINT32_UQ2 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ2)((A) * 2.500000000000000000000000E-01f);
}
/**@brief (直接转换)UINT32类型UQ1格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_Q1     A              输入UQ格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将UQ格式转化为整形数
* @code
*    LQ_UINT32_UQ1_TO_INT(a,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ31_TO_INT  直接转换方式UINT32的UQ31转化整形类型
* @see :: LQ_UINT32_UQ30_TO_INT  直接转换方式UINT32的UQ30转化整形类型
* @see :: LQ_UINT32_UQ29_TO_INT  直接转换方式UINT32的UQ29转化整形类型
* @see :: LQ_UINT32_UQ28_TO_INT  直接转换方式UINT32的UQ28转化整形类型
* @see :: LQ_UINT32_UQ27_TO_INT  直接转换方式UINT32的UQ27转化整形类型
* @see :: LQ_UINT32_UQ26_TO_INT  直接转换方式UINT32的UQ26转化整形类型
* @see :: LQ_UINT32_UQ25_TO_INT  直接转换方式UINT32的UQ25转化整形类型
* @see :: LQ_UINT32_UQ24_TO_INT  直接转换方式UINT32的UQ24转化整形类型
* @see :: LQ_UINT32_UQ23_TO_INT  直接转换方式UINT32的UQ23转化整形类型
* @see :: LQ_UINT32_UQ22_TO_INT  直接转换方式UINT32的UQ22转化整形类型
* @see :: LQ_UINT32_UQ21_TO_INT  直接转换方式UINT32的UQ21转化整形类型
* @see :: LQ_UINT32_UQ20_TO_INT  直接转换方式UINT32的UQ20转化整形类型
* @see :: LQ_UINT32_UQ19_TO_INT  直接转换方式UINT32的UQ19转化整形类型
* @see :: LQ_UINT32_UQ18_TO_INT  直接转换方式UINT32的UQ18转化整形类型
* @see :: LQ_UINT32_UQ17_TO_INT  直接转换方式UINT32的UQ17转化整形类型
* @see :: LQ_UINT32_UQ16_TO_INT  直接转换方式UINT32的UQ16转化整形类型
* @see :: LQ_UINT32_UQ15_TO_INT  直接转换方式UINT32的UQ15转化整形类型
* @see :: LQ_UINT32_UQ14_TO_INT  直接转换方式UINT32的UQ14转化整形类型
* @see :: LQ_UINT32_UQ13_TO_INT  直接转换方式UINT32的UQ13转化整形类型
* @see :: LQ_UINT32_UQ12_TO_INT  直接转换方式UINT32的UQ12转化整形类型
* @see :: LQ_UINT32_UQ11_TO_INT  直接转换方式UINT32的UQ11转化整形类型
* @see :: LQ_UINT32_UQ10_TO_INT  直接转换方式UINT32的UQ10转化整形类型
* @see :: LQ_UINT32_UQ9_TO_INT  直接转换方式UINT32的UQ9转化整形类型
* @see :: LQ_UINT32_UQ8_TO_INT  直接转换方式UINT32的UQ8转化整形类型
* @see :: LQ_UINT32_UQ7_TO_INT  直接转换方式UINT32的UQ7转化整形类型
* @see :: LQ_UINT32_UQ6_TO_INT  直接转换方式UINT32的UQ6转化整形类型
* @see :: LQ_UINT32_UQ5_TO_INT  直接转换方式UINT32的UQ5转化整形类型
* @see :: LQ_UINT32_UQ4_TO_INT  直接转换方式UINT32的UQ4转化整形类型
* @see :: LQ_UINT32_UQ3_TO_INT  直接转换方式UINT32的UQ3转化整形类型
* @see :: LQ_UINT32_UQ2_TO_INT  直接转换方式UINT32的UQ2转化整形类型
* @see :: LQ_UINT32_UQ1_TO_INT  直接转换方式UINT32的UQ1转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ1 LQ_UINT32_UQ1_TO_INT(LQ_UINT32_UQ1 A, LQ_ERROR* Lq_Error)
{
    return  (LQ_UINT32_UQ1)((A) * 5.000000000000000000000000E-01f);
}
/**@brief (直接转换)INT8类型Q格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT8_Q       A              输入Q格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_INT8_Q_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT8_Q_FORMAT_TO_INT  直接转换方式INT8的Q格式转化整形类型
*/
LQ_INLINE LQ_INT8_Q LQ_INT8_Q_FORMAT_TO_INT(LQ_INT8_Q A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_INT8_Q)((A) * (1.0f / ((LQ_UI_8BIT)1 << Q_A))));
}
/**@brief (直接转换)UINT8类型UQ格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT8_UQ       A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_UINT8_UQ_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT8_UQ_FORMAT_TO_INT  直接转换方式UINT8的UQ格式转化整形类型
*/
LQ_INLINE LQ_UINT8_UQ LQ_UINT8_UQ_FORMAT_TO_INT(LQ_UINT8_UQ A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_UINT8_UQ)((A) * (1.0f / ((LQ_UI_8BIT)1 << Q_A))));
}
/**@brief (直接转换)INT16类型Q格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT16_Q       A              输入Q格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_INT16_Q_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT16_Q_FORMAT_TO_INT  直接转换方式INT16的Q格式转化整形类型
*/
LQ_INLINE LQ_INT16_Q LQ_INT16_Q_FORMAT_TO_INT(LQ_INT16_Q A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_INT16_Q)((A) * (1.0f / ((LQ_UI_16BIT)1 << Q_A))));
}
/**@brief (直接转换)UINT16类型UQ格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT16_UQ       A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_UINT16_UQ_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT16_UQ_FORMAT_TO_INT  直接转换方式UINT16的UQ格式转化整形类型
*/
LQ_INLINE LQ_UINT16_UQ LQ_UINT16_UQ_FORMAT_TO_INT(LQ_UINT16_UQ A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_UINT16_UQ)((A) * (1.0f / ((LQ_UI_16BIT)1 << Q_A))));
}
/**@brief (直接转换)INT32类型Q格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_INT32_Q       A              输入Q格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_INT32_Q_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_INT32_Q_FORMAT_TO_INT  直接转换方式INT32的Q格式转化整形类型
*/
LQ_INLINE LQ_INT32_Q LQ_INT32_Q_FORMAT_TO_INT(LQ_INT32_Q A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_INT32_Q)((A) * (1.0f / ((LQ_UI_32BIT)1 << Q_A))));
}
/**@brief (直接转换)UINT32类型UQ格式转整形
* @details 采用直接转换的方式，获取极致的性能
* @param[in] LQ_UINT32_UQ       A              输入UQ格式数
* @param[in] LQ_UI_8BIT         Q_A            输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    整形数
* @par       将Q31格式转化为整形数
* @code
*    LQ_UINT32_UQ_FORMAT_TO_INT(a,31,&lq_error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_UINT32_UQ_FORMAT_TO_INT  直接转换方式UINT32的UQ格式转化整形类型
*/
LQ_INLINE LQ_UINT32_UQ LQ_UINT32_UQ_FORMAT_TO_INT(LQ_UINT32_UQ A, LQ_UI_8BIT Q_A, LQ_ERROR* lq_error)
{
    return  ((LQ_UINT32_UQ)((A) * (1.0f / ((LQ_UI_32BIT)1 << Q_A))));
}

#endif

#if LQ_Q_FORMAT_TO_INT_LOADING_MODE == 0
/****************************INT8 Q格式转整形************************************/
//!<以INT8为基准翻译有符号Q格式(Q1到Q7)
LQ_INT8_Q7 LQ_INT8_Q7_TO_INT(LQ_INT8_Q7 A, LQ_ERROR* lq_error);
LQ_INT8_Q6 LQ_INT8_Q6_TO_INT(LQ_INT8_Q6 A, LQ_ERROR* lq_error);
LQ_INT8_Q5 LQ_INT8_Q5_TO_INT(LQ_INT8_Q5 A, LQ_ERROR* lq_error);
LQ_INT8_Q4 LQ_INT8_Q4_TO_INT(LQ_INT8_Q4 A, LQ_ERROR* lq_error);
LQ_INT8_Q3 LQ_INT8_Q3_TO_INT(LQ_INT8_Q3 A, LQ_ERROR* lq_error);
LQ_INT8_Q2 LQ_INT8_Q2_TO_INT(LQ_INT8_Q2 A, LQ_ERROR* lq_error);
LQ_INT8_Q1 LQ_INT8_Q1_TO_INT(LQ_INT8_Q1 A, LQ_ERROR* lq_error);
/****************************UINT8 UQ格式转整形************************************/
//!<以UINT8为基准翻译无符号UQ格式(UQ1到UQ8)
LQ_UINT8_UQ8 LQ_UINT8_UQ8_TO_INT(LQ_UINT8_UQ8 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ7 LQ_UINT8_UQ7_TO_INT(LQ_UINT8_UQ7 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ6 LQ_UINT8_UQ6_TO_INT(LQ_UINT8_UQ6 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ5 LQ_UINT8_UQ5_TO_INT(LQ_UINT8_UQ5 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ4 LQ_UINT8_UQ4_TO_INT(LQ_UINT8_UQ4 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ3 LQ_UINT8_UQ3_TO_INT(LQ_UINT8_UQ3 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ2 LQ_UINT8_UQ2_TO_INT(LQ_UINT8_UQ2 A, LQ_ERROR* lq_error);
LQ_UINT8_UQ1 LQ_UINT8_UQ1_TO_INT(LQ_UINT8_UQ1 A, LQ_ERROR* lq_error);
/****************************INT16 Q格式转整形************************************/
//!<以INT16为基准翻译有符号Q格式(Q1到Q15)
LQ_INT16_Q15 LQ_INT16_Q15_TO_INT(LQ_INT16_Q15 A, LQ_ERROR* lq_error);
LQ_INT16_Q14 LQ_INT16_Q14_TO_INT(LQ_INT16_Q14 A, LQ_ERROR* lq_error);
LQ_INT16_Q13 LQ_INT16_Q13_TO_INT(LQ_INT16_Q13 A, LQ_ERROR* lq_error);
LQ_INT16_Q12 LQ_INT16_Q12_TO_INT(LQ_INT16_Q12 A, LQ_ERROR* lq_error);
LQ_INT16_Q11 LQ_INT16_Q11_TO_INT(LQ_INT16_Q11 A, LQ_ERROR* lq_error);
LQ_INT16_Q10 LQ_INT16_Q10_TO_INT(LQ_INT16_Q10 A, LQ_ERROR* lq_error);
LQ_INT16_Q9 LQ_INT16_Q9_TO_INT(LQ_INT16_Q9 A, LQ_ERROR* lq_error);
LQ_INT16_Q8 LQ_INT16_Q8_TO_INT(LQ_INT16_Q8 A, LQ_ERROR* lq_error);
LQ_INT16_Q7 LQ_INT16_Q7_TO_INT(LQ_INT16_Q7 A, LQ_ERROR* lq_error);
LQ_INT16_Q6 LQ_INT16_Q6_TO_INT(LQ_INT16_Q6 A, LQ_ERROR* lq_error);
LQ_INT16_Q5 LQ_INT16_Q5_TO_INT(LQ_INT16_Q5 A, LQ_ERROR* lq_error);
LQ_INT16_Q4 LQ_INT16_Q4_TO_INT(LQ_INT16_Q4 A, LQ_ERROR* lq_error);
LQ_INT16_Q3 LQ_INT16_Q3_TO_INT(LQ_INT16_Q3 A, LQ_ERROR* lq_error);
LQ_INT16_Q2 LQ_INT16_Q2_TO_INT(LQ_INT16_Q2 A, LQ_ERROR* lq_error);
LQ_INT16_Q1 LQ_INT16_Q1_TO_INT(LQ_INT16_Q1 A, LQ_ERROR* lq_error);
/****************************UINT16 UQ格式转整形************************************/
//!<以UINT16为基准翻译无符号UQ格式(UQ1到UQ16)
LQ_UINT16_UQ16 LQ_UINT16_UQ16_TO_INT(LQ_UINT16_UQ16 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ15 LQ_UINT16_UQ15_TO_INT(LQ_UINT16_UQ15 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ14 LQ_UINT16_UQ14_TO_INT(LQ_UINT16_UQ14 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ13 LQ_UINT16_UQ13_TO_INT(LQ_UINT16_UQ13 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ12 LQ_UINT16_UQ12_TO_INT(LQ_UINT16_UQ12 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ11 LQ_UINT16_UQ11_TO_INT(LQ_UINT16_UQ11 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ10 LQ_UINT16_UQ10_TO_INT(LQ_UINT16_UQ10 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ9 LQ_UINT16_UQ9_TO_INT(LQ_UINT16_UQ9 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ8 LQ_UINT16_UQ8_TO_INT(LQ_UINT16_UQ8 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ7 LQ_UINT16_UQ7_TO_INT(LQ_UINT16_UQ7 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ6 LQ_UINT16_UQ6_TO_INT(LQ_UINT16_UQ6 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ5 LQ_UINT16_UQ5_TO_INT(LQ_UINT16_UQ5 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ4 LQ_UINT16_UQ4_TO_INT(LQ_UINT16_UQ4 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ3 LQ_UINT16_UQ3_TO_INT(LQ_UINT16_UQ3 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ2 LQ_UINT16_UQ2_TO_INT(LQ_UINT16_UQ2 A, LQ_ERROR* lq_error);
LQ_UINT16_UQ1 LQ_UINT16_UQ1_TO_INT(LQ_UINT16_UQ1 A, LQ_ERROR* lq_error);
/****************************INT32 Q格式转整形************************************/
//!<以INT32为基准翻译有符号Q格式(Q1到Q31)
LQ_INT32_Q31 LQ_INT32_Q31_TO_INT(LQ_INT32_Q31 A, LQ_ERROR* lq_error);
LQ_INT32_Q30 LQ_INT32_Q30_TO_INT(LQ_INT32_Q30 A, LQ_ERROR* lq_error);
LQ_INT32_Q29 LQ_INT32_Q29_TO_INT(LQ_INT32_Q29 A, LQ_ERROR* lq_error);
LQ_INT32_Q28 LQ_INT32_Q28_TO_INT(LQ_INT32_Q28 A, LQ_ERROR* lq_error);
LQ_INT32_Q27 LQ_INT32_Q27_TO_INT(LQ_INT32_Q27 A, LQ_ERROR* lq_error);
LQ_INT32_Q26 LQ_INT32_Q26_TO_INT(LQ_INT32_Q26 A, LQ_ERROR* lq_error);
LQ_INT32_Q25 LQ_INT32_Q25_TO_INT(LQ_INT32_Q25 A, LQ_ERROR* lq_error);
LQ_INT32_Q24 LQ_INT32_Q24_TO_INT(LQ_INT32_Q24 A, LQ_ERROR* lq_error);
LQ_INT32_Q23 LQ_INT32_Q23_TO_INT(LQ_INT32_Q23 A, LQ_ERROR* lq_error);
LQ_INT32_Q22 LQ_INT32_Q22_TO_INT(LQ_INT32_Q22 A, LQ_ERROR* lq_error);
LQ_INT32_Q21 LQ_INT32_Q21_TO_INT(LQ_INT32_Q21 A, LQ_ERROR* lq_error);
LQ_INT32_Q20 LQ_INT32_Q20_TO_INT(LQ_INT32_Q20 A, LQ_ERROR* lq_error);
LQ_INT32_Q19 LQ_INT32_Q19_TO_INT(LQ_INT32_Q19 A, LQ_ERROR* lq_error);
LQ_INT32_Q18 LQ_INT32_Q18_TO_INT(LQ_INT32_Q18 A, LQ_ERROR* lq_error);
LQ_INT32_Q17 LQ_INT32_Q17_TO_INT(LQ_INT32_Q17 A, LQ_ERROR* lq_error);
LQ_INT32_Q16 LQ_INT32_Q16_TO_INT(LQ_INT32_Q16 A, LQ_ERROR* lq_error);
LQ_INT32_Q15 LQ_INT32_Q15_TO_INT(LQ_INT32_Q15 A, LQ_ERROR* lq_error);
LQ_INT32_Q14 LQ_INT32_Q14_TO_INT(LQ_INT32_Q14 A, LQ_ERROR* lq_error);
LQ_INT32_Q13 LQ_INT32_Q13_TO_INT(LQ_INT32_Q13 A, LQ_ERROR* lq_error);
LQ_INT32_Q12 LQ_INT32_Q12_TO_INT(LQ_INT32_Q12 A, LQ_ERROR* lq_error);
LQ_INT32_Q11 LQ_INT32_Q11_TO_INT(LQ_INT32_Q11 A, LQ_ERROR* lq_error);
LQ_INT32_Q10 LQ_INT32_Q10_TO_INT(LQ_INT32_Q10 A, LQ_ERROR* lq_error);
LQ_INT32_Q9 LQ_INT32_Q9_TO_INT(LQ_INT32_Q9 A, LQ_ERROR* lq_error);
LQ_INT32_Q8 LQ_INT32_Q8_TO_INT(LQ_INT32_Q8 A, LQ_ERROR* lq_error);
LQ_INT32_Q7 LQ_INT32_Q7_TO_INT(LQ_INT32_Q7 A, LQ_ERROR* lq_error);
LQ_INT32_Q6 LQ_INT32_Q6_TO_INT(LQ_INT32_Q6 A, LQ_ERROR* lq_error);
LQ_INT32_Q5 LQ_INT32_Q5_TO_INT(LQ_INT32_Q5 A, LQ_ERROR* lq_error);
LQ_INT32_Q4 LQ_INT32_Q4_TO_INT(LQ_INT32_Q4 A, LQ_ERROR* lq_error);
LQ_INT32_Q3 LQ_INT32_Q3_TO_INT(LQ_INT32_Q3 A, LQ_ERROR* lq_error);
LQ_INT32_Q2 LQ_INT32_Q2_TO_INT(LQ_INT32_Q2 A, LQ_ERROR* lq_error);
LQ_INT32_Q1 LQ_INT32_Q1_TO_INT(LQ_INT32_Q1 A, LQ_ERROR* lq_error);
/****************************UINT32 UQ格式转整形************************************/
//!<以UINT32为基准翻译无符号UQ格式(UQ1到UQ32)
LQ_UINT32_UQ32 LQ_UINT32_UQ32_TO_INT(LQ_UINT32_UQ32 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ31 LQ_UINT32_UQ31_TO_INT(LQ_UINT32_UQ31 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ30 LQ_UINT32_UQ30_TO_INT(LQ_UINT32_UQ30 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ29 LQ_UINT32_UQ29_TO_INT(LQ_UINT32_UQ29 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ28 LQ_UINT32_UQ28_TO_INT(LQ_UINT32_UQ28 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ27 LQ_UINT32_UQ27_TO_INT(LQ_UINT32_UQ27 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ26 LQ_UINT32_UQ26_TO_INT(LQ_UINT32_UQ26 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ25 LQ_UINT32_UQ25_TO_INT(LQ_UINT32_UQ25 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ24 LQ_UINT32_UQ24_TO_INT(LQ_UINT32_UQ24 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ23 LQ_UINT32_UQ23_TO_INT(LQ_UINT32_UQ23 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ22 LQ_UINT32_UQ22_TO_INT(LQ_UINT32_UQ22 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ21 LQ_UINT32_UQ21_TO_INT(LQ_UINT32_UQ21 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ20 LQ_UINT32_UQ20_TO_INT(LQ_UINT32_UQ20 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ19 LQ_UINT32_UQ19_TO_INT(LQ_UINT32_UQ19 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ18 LQ_UINT32_UQ18_TO_INT(LQ_UINT32_UQ18 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ17 LQ_UINT32_UQ17_TO_INT(LQ_UINT32_UQ17 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ16 LQ_UINT32_UQ16_TO_INT(LQ_UINT32_UQ16 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ15 LQ_UINT32_UQ15_TO_INT(LQ_UINT32_UQ15 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ14 LQ_UINT32_UQ14_TO_INT(LQ_UINT32_UQ14 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ13 LQ_UINT32_UQ13_TO_INT(LQ_UINT32_UQ13 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ12 LQ_UINT32_UQ12_TO_INT(LQ_UINT32_UQ12 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ11 LQ_UINT32_UQ11_TO_INT(LQ_UINT32_UQ11 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ10 LQ_UINT32_UQ10_TO_INT(LQ_UINT32_UQ10 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ9 LQ_UINT32_UQ9_TO_INT(LQ_UINT32_UQ9 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ8 LQ_UINT32_UQ8_TO_INT(LQ_UINT32_UQ8 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ7 LQ_UINT32_UQ7_TO_INT(LQ_UINT32_UQ7 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ6 LQ_UINT32_UQ6_TO_INT(LQ_UINT32_UQ6 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ5 LQ_UINT32_UQ5_TO_INT(LQ_UINT32_UQ5 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ4 LQ_UINT32_UQ4_TO_INT(LQ_UINT32_UQ4 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ3 LQ_UINT32_UQ3_TO_INT(LQ_UINT32_UQ3 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ2 LQ_UINT32_UQ2_TO_INT(LQ_UINT32_UQ2 A, LQ_ERROR* lq_error);
LQ_UINT32_UQ1 LQ_UINT32_UQ1_TO_INT(LQ_UINT32_UQ1 A, LQ_ERROR* lq_error);
/****************************INT8 Q格式转整形(任意Q格式)************************************/
//!<以INT8为基准翻译有符号Q格式(Q1到Q7)
LQ_INT8_Q LQ_INT8_Q_FORMAT_TO_INT(LQ_INT8_Q A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
/****************************UINT8 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT8为基准翻译有符号UQ格式(UQ1到UQ8)
LQ_INT8_Q LQ_UINT8_UQ_FORMAT_TO_INT(LQ_UINT8_UQ A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
/****************************INT16 Q格式转整形(任意Q格式)************************************/
//!<以INT16为基准翻译有符号Q格式(Q1到Q15)
 LQ_INT16_Q LQ_INT16_Q_FORMAT_TO_INT(LQ_INT16_Q A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
/****************************UINT16 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT16为基准翻译有符号UQ格式(UQ1到UQ16)
LQ_INT16_Q LQ_UINT16_UQ_FORMAT_TO_INT(LQ_UINT16_UQ A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
/****************************INT32 Q格式转整形(任意Q格式)************************************/
//!<以INT32为基准翻译有符号Q格式(Q1到Q31)
LQ_INT32_Q LQ_INT32_Q_FORMAT_TO_INT(LQ_INT32_Q A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
/****************************UINT32 UQ格式转整形(任意UQ格式)************************************/
//!<以UINT32为基准翻译有符号UQ格式(UQ1到UQ32)
LQ_INT32_Q LQ_UINT32_UQ_FORMAT_TO_INT(LQ_UINT32_UQ A,LQ_UI_8BIT Q_A, LQ_ERROR * lq_error);
#endif
#endif
