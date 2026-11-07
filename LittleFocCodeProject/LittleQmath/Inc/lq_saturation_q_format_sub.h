#ifndef __LQ_SATURATION_Q_FORMAT_SUB__
#define __LQ_SATURATION_Q_FORMAT_SUB__
#include "lq_mode.h"
#include "lq_error.h"
#include "lq_type.h"
/**@file      lq_saturation_q_sub.h
* @brief      LittleQmath饱和算法Q格式减法
* @details    饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
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
* <tr><td>2024/07/07  <td>2.0      <td>尹冠华    <td>重新架构
* </table>
*
**********************************************************************************
*/
//!<饱和算法:Q格式类型减法 宏定义模式（饱和失效）
#if LQ_SATURATION_Q_FORMAT_SUB_LOADING_MODE == 2
/****************************饱和算法 INT8  Q格式减法************************************/
//!<以INT8为基准Q格式类型减法(Q1到Q7)
#define LQ_SATURATION_INT8_Q7_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q7) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q7) LQ_I_8BIT_MIN : (LQ_INT8_Q7)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q6_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q6) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q6) LQ_I_8BIT_MIN : (LQ_INT8_Q6)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q5_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q5) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q5) LQ_I_8BIT_MIN : (LQ_INT8_Q5)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q4_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q4) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q4) LQ_I_8BIT_MIN : (LQ_INT8_Q4)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q3_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q3) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q3) LQ_I_8BIT_MIN : (LQ_INT8_Q3)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q2_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q2) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q2) LQ_I_8BIT_MIN : (LQ_INT8_Q2)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
#define LQ_SATURATION_INT8_Q1_SUB(A,B,Lq_Error)  (((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)) > LQ_I_8BIT_MAX ? (LQ_INT8_Q1) LQ_I_8BIT_MAX : (LQ_I_16BIT)(A) - (LQ_I_16BIT)(B) < LQ_I_8BIT_MIN ? (LQ_INT8_Q1) LQ_I_8BIT_MIN : (LQ_INT8_Q1)((LQ_I_16BIT)(A) - (LQ_I_16BIT)(B)))
/****************************饱和算法 UINT8  UQ格式减法***********************************/
//!<以UINT8为基准UQ格式类型减法(Q1到Q8)
#define LQ_SATURATION_UINT8_Q8_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q8)0 : (LQ_UINT8_Q8)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q7_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q7)0 : (LQ_UINT8_Q7)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q6_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q6)0 : (LQ_UINT8_Q6)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q5_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q5)0 : (LQ_UINT8_Q5)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q4_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q4)0 : (LQ_UINT8_Q4)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q3_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q3)0 : (LQ_UINT8_Q3)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q2_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q2)0 : (LQ_UINT8_Q2)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
#define LQ_SATURATION_UINT8_Q1_SUB(A,B,Lq_Error)  (((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)) > LQ_UI_8BIT_MAX ? (LQ_UINT8_Q1)0 : (LQ_UINT8_Q1)((LQ_UI_16BIT)(A) - (LQ_UI_16BIT)(B)))
/****************************饱和算法 INT16 Q格式减法************************************/
//!<以INT16为基准Q格式类型减法(Q1到Q15)
#define LQ_SATURATION_INT16_Q15_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q15) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q15) LQ_I_16BIT_MIN : (LQ_INT16_Q15)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q14_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q14) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q14) LQ_I_16BIT_MIN : (LQ_INT16_Q14)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q13_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q13) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q13) LQ_I_16BIT_MIN : (LQ_INT16_Q13)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q12_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q12) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q12) LQ_I_16BIT_MIN : (LQ_INT16_Q12)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q11_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q11) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q11) LQ_I_16BIT_MIN : (LQ_INT16_Q11)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q10_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q10) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q10) LQ_I_16BIT_MIN : (LQ_INT16_Q10)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q9_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q9) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q9) LQ_I_16BIT_MIN : (LQ_INT16_Q9)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q8_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q8) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q8) LQ_I_16BIT_MIN : (LQ_INT16_Q8)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q7_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q7) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q7) LQ_I_16BIT_MIN : (LQ_INT16_Q7)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q6_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q6) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q6) LQ_I_16BIT_MIN : (LQ_INT16_Q6)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q5_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q5) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q5) LQ_I_16BIT_MIN : (LQ_INT16_Q5)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q4_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q4) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q4) LQ_I_16BIT_MIN : (LQ_INT16_Q4)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q3_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q3) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q3) LQ_I_16BIT_MIN : (LQ_INT16_Q3)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q2_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q2) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q2) LQ_I_16BIT_MIN : (LQ_INT16_Q2)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
#define LQ_SATURATION_INT16_Q1_SUB(A,B,Lq_Error)  (((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)) > LQ_I_16BIT_MAX ? (LQ_INT16_Q1) LQ_I_16BIT_MAX : (LQ_I_32BIT)(A) - (LQ_I_32BIT)(B) < LQ_I_16BIT_MIN ? (LQ_INT16_Q1) LQ_I_16BIT_MIN : (LQ_INT16_Q1)((LQ_I_32BIT)(A) - (LQ_I_32BIT)(B)))
/****************************饱和算法 UINT16 UQ格式减法***********************************/
//!<以UINT16为基准UQ格式类型减法(Q1到Q16)
#define LQ_SATURATION_UINT16_Q16_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q16)0 : (LQ_UINT16_Q16)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q15_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q15)0 : (LQ_UINT16_Q15)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q14_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q14)0 : (LQ_UINT16_Q14)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q13_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q13)0 : (LQ_UINT16_Q13)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q12_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q12)0 : (LQ_UINT16_Q12)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q11_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q11)0 : (LQ_UINT16_Q11)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q10_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q10)0 : (LQ_UINT16_Q10)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q9_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q9)0 : (LQ_UINT16_Q9)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q8_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q8)0 : (LQ_UINT16_Q8)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q7_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q7)0 : (LQ_UINT16_Q7)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q6_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q6)0 : (LQ_UINT16_Q6)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q5_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q5)0 : (LQ_UINT16_Q5)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q4_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q4)0 : (LQ_UINT16_Q4)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q3_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q3)0 : (LQ_UINT16_Q3)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q2_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q2)0 : (LQ_UINT16_Q2)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
#define LQ_SATURATION_UINT16_Q1_SUB(A,B,Lq_Error)  (((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)) > LQ_UI_16BIT_MAX ? (LQ_UINT16_Q1)0 : (LQ_UINT16_Q1)((LQ_UI_32BIT)(A) - (LQ_UI_32BIT)(B)))
/****************************饱和算法 INT32 Q格式减法************************************/
//!<以INT32为基准Q格式类型减法(Q1到Q31)
#define LQ_SATURATION_INT32_Q31_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q31) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q31) LQ_I_32BIT_MIN : (LQ_INT32_Q31)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q30_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q30) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q30) LQ_I_32BIT_MIN : (LQ_INT32_Q30)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q29_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q29) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q29) LQ_I_32BIT_MIN : (LQ_INT32_Q29)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q28_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q28) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q28) LQ_I_32BIT_MIN : (LQ_INT32_Q28)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q27_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q27) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q27) LQ_I_32BIT_MIN : (LQ_INT32_Q27)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q26_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q26) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q26) LQ_I_32BIT_MIN : (LQ_INT32_Q26)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q25_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q25) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q25) LQ_I_32BIT_MIN : (LQ_INT32_Q25)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q24_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q24) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q24) LQ_I_32BIT_MIN : (LQ_INT32_Q24)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q23_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q23) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q23) LQ_I_32BIT_MIN : (LQ_INT32_Q23)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q22_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q22) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q22) LQ_I_32BIT_MIN : (LQ_INT32_Q22)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q21_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q21) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q21) LQ_I_32BIT_MIN : (LQ_INT32_Q21)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q20_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q20) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q20) LQ_I_32BIT_MIN : (LQ_INT32_Q20)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q19_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q19) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q19) LQ_I_32BIT_MIN : (LQ_INT32_Q19)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q18_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q18) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q18) LQ_I_32BIT_MIN : (LQ_INT32_Q18)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q17_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q17) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q17) LQ_I_32BIT_MIN : (LQ_INT32_Q17)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q16_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q16) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q16) LQ_I_32BIT_MIN : (LQ_INT32_Q16)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q15_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q15) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q15) LQ_I_32BIT_MIN : (LQ_INT32_Q15)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q14_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q14) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q14) LQ_I_32BIT_MIN : (LQ_INT32_Q14)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q13_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q13) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q13) LQ_I_32BIT_MIN : (LQ_INT32_Q13)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q12_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q12) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q12) LQ_I_32BIT_MIN : (LQ_INT32_Q12)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q11_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q11) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q11) LQ_I_32BIT_MIN : (LQ_INT32_Q11)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q10_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q10) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q10) LQ_I_32BIT_MIN : (LQ_INT32_Q10)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q9_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q9) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q9) LQ_I_32BIT_MIN : (LQ_INT32_Q9)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q8_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q8) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q8) LQ_I_32BIT_MIN : (LQ_INT32_Q8)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q7_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q7) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q7) LQ_I_32BIT_MIN : (LQ_INT32_Q7)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q6_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q6) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q6) LQ_I_32BIT_MIN : (LQ_INT32_Q6)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q5_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q5) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q5) LQ_I_32BIT_MIN : (LQ_INT32_Q5)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q4_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q4) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q4) LQ_I_32BIT_MIN : (LQ_INT32_Q4)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q3_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q3) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q3) LQ_I_32BIT_MIN : (LQ_INT32_Q3)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q2_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q2) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q2) LQ_I_32BIT_MIN : (LQ_INT32_Q2)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
#define LQ_SATURATION_INT32_Q1_SUB(A,B,Lq_Error)  (((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)) > LQ_I_32BIT_MAX ? (LQ_INT32_Q1) LQ_I_32BIT_MAX : (LQ_I_64BIT)(A) - (LQ_I_64BIT)(B) < LQ_I_32BIT_MIN ? (LQ_INT32_Q1) LQ_I_32BIT_MIN : (LQ_INT32_Q1)((LQ_I_64BIT)(A) - (LQ_I_64BIT)(B)))
/****************************饱和算法 UINT32 UQ格式减法***********************************/
//!<以UINT32为基准UQ格式类型减法(Q1到Q32)
#define LQ_SATURATION_UINT32_Q32_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q32)0 : (LQ_UINT32_Q32)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q31_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q31)0 : (LQ_UINT32_Q31)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q30_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q30)0 : (LQ_UINT32_Q30)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q29_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q29)0 : (LQ_UINT32_Q29)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q28_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q28)0 : (LQ_UINT32_Q28)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q27_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q27)0 : (LQ_UINT32_Q27)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q26_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q26)0 : (LQ_UINT32_Q26)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q25_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q25)0 : (LQ_UINT32_Q25)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q24_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q24)0 : (LQ_UINT32_Q24)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q23_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q23)0 : (LQ_UINT32_Q23)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q22_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q22)0 : (LQ_UINT32_Q22)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q21_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q21)0 : (LQ_UINT32_Q21)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q20_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q20)0 : (LQ_UINT32_Q20)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q19_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q19)0 : (LQ_UINT32_Q19)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q18_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q18)0 : (LQ_UINT32_Q18)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q17_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q17)0 : (LQ_UINT32_Q17)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q16_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q16)0 : (LQ_UINT32_Q16)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q15_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q15)0 : (LQ_UINT32_Q15)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q14_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q14)0 : (LQ_UINT32_Q14)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q13_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q13)0 : (LQ_UINT32_Q13)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q12_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q12)0 : (LQ_UINT32_Q12)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q11_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q11)0 : (LQ_UINT32_Q11)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q10_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q10)0 : (LQ_UINT32_Q10)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q9_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q9)0 : (LQ_UINT32_Q9)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q8_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q8)0 : (LQ_UINT32_Q8)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q7_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q7)0 : (LQ_UINT32_Q7)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q6_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q6)0 : (LQ_UINT32_Q6)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q5_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q5)0 : (LQ_UINT32_Q5)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q4_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q4)0 : (LQ_UINT32_Q4)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q3_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q3)0 : (LQ_UINT32_Q3)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q2_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q2)0 : (LQ_UINT32_Q2)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
#define LQ_SATURATION_UINT32_Q1_SUB(A,B,Lq_Error)  (((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)) > LQ_UI_32BIT_MAX ? (LQ_UINT32_Q1)0 : (LQ_UINT32_Q1)((LQ_UI_64BIT)(A) - (LQ_UI_64BIT)(B)))
/****************************通用饱和算法 INT8  Q格式减法(任意)**************************/
#define LQ_SATURATION_INT8_Q_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_I_16BIT)((Q_A) > (Q_C) ? ((LQ_I_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_16BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_16BIT)((Q_B) > (Q_C) ? ((LQ_I_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_16BIT)(B) << ((Q_C) - (Q_B)))) \
       > LQ_I_8BIT_MAX ? (LQ_I_8BIT)LQ_I_8BIT_MAX : \
       (LQ_I_16BIT)((Q_A) > (Q_C) ? ((LQ_I_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_16BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_16BIT)((Q_B) > (Q_C) ? ((LQ_I_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_16BIT)(B) << ((Q_C) - (Q_B)))) \
       < LQ_I_8BIT_MIN ? (LQ_I_8BIT)LQ_I_8BIT_MIN : \
       (LQ_I_8BIT)((LQ_I_16BIT)((Q_A) > (Q_C) ? ((LQ_I_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_16BIT)(A) << ((Q_C) - (Q_A)))) - \
                   (LQ_I_16BIT)((Q_B) > (Q_C) ? ((LQ_I_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_16BIT)(B) << ((Q_C) - (Q_B))))))
/****************************通用饱和算法 UINT8  UQ格式减法(任意)************************/
#define LQ_SATURATION_UINT8_UQ_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_UI_16BIT)((Q_A) > (Q_C) ? ((LQ_UI_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_16BIT)(A) << ((Q_C) - (Q_A)))) >= \
      (LQ_UI_16BIT)((Q_B) > (Q_C) ? ((LQ_UI_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_16BIT)(B) << ((Q_C) - (Q_B)))) ? \
        (((LQ_UI_16BIT)((Q_A) > (Q_C) ? ((LQ_UI_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_16BIT)(A) << ((Q_C) - (Q_A)))) - \
          (LQ_UI_16BIT)((Q_B) > (Q_C) ? ((LQ_UI_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_16BIT)(B) << ((Q_C) - (Q_B))))) > LQ_UI_8BIT_MAX ? \
          (LQ_UI_8BIT)LQ_UI_8BIT_MAX : \
          (LQ_UI_16BIT)((LQ_UI_16BIT)((Q_A) > (Q_C) ? ((LQ_UI_16BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_16BIT)(A) << ((Q_C) - (Q_A)))) - \
                       (LQ_UI_16BIT)((Q_B) > (Q_C) ? ((LQ_UI_16BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_8BIT)(B) << ((Q_C) - (Q_B)))))) : \
        (LQ_UI_16BIT)0)
/****************************通用饱和算法 INT16 Q格式减法(任意)**************************/
#define LQ_SATURATION_INT16_Q_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_I_32BIT)((Q_A) > (Q_C) ? ((LQ_I_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_32BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_32BIT)((Q_B) > (Q_C) ? ((LQ_I_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_32BIT)(B) << ((Q_C) - (Q_B)))) \
       > LQ_I_16BIT_MAX ? (LQ_I_16BIT)LQ_I_16BIT_MAX : \
       (LQ_I_32BIT)((Q_A) > (Q_C) ? ((LQ_I_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_32BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_32BIT)((Q_B) > (Q_C) ? ((LQ_I_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_32BIT)(B) << ((Q_C) - (Q_B)))) \
       < LQ_I_16BIT_MIN ? (LQ_I_16BIT)LQ_I_16BIT_MIN : \
       (LQ_I_16BIT)((LQ_I_32BIT)((Q_A) > (Q_C) ? ((LQ_I_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_32BIT)(A) << ((Q_C) - (Q_A)))) - \
                   (LQ_I_32BIT)((Q_B) > (Q_C) ? ((LQ_I_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_32BIT)(B) << ((Q_C) - (Q_B))))))
/****************************通用饱和算法 UINT16 UQ格式减法(任意)************************/
#define LQ_SATURATION_UINT16_UQ_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_UI_32BIT)((Q_A) > (Q_C) ? ((LQ_UI_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_32BIT)(A) << ((Q_C) - (Q_A)))) >= \
      (LQ_UI_32BIT)((Q_B) > (Q_C) ? ((LQ_UI_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_32BIT)(B) << ((Q_C) - (Q_B)))) ? \
        (((LQ_UI_32BIT)((Q_A) > (Q_C) ? ((LQ_UI_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_32BIT)(A) << ((Q_C) - (Q_A)))) - \
          (LQ_UI_32BIT)((Q_B) > (Q_C) ? ((LQ_UI_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_32BIT)(B) << ((Q_C) - (Q_B))))) > LQ_UI_16BIT_MAX ? \
          (LQ_UI_16BIT)LQ_UI_16BIT_MAX : \
          (LQ_UI_32BIT)((LQ_UI_32BIT)((Q_A) > (Q_C) ? ((LQ_UI_32BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_32BIT)(A) << ((Q_C) - (Q_A)))) - \
                       (LQ_UI_32BIT)((Q_B) > (Q_C) ? ((LQ_UI_32BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_16BIT)(B) << ((Q_C) - (Q_B)))))) : \
        (LQ_UI_32BIT)0)
/****************************通用饱和算法 INT32 Q格式减法(任意)**************************/
#define LQ_SATURATION_INT32_Q_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_I_64BIT)((Q_A) > (Q_C) ? ((LQ_I_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_64BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_64BIT)((Q_B) > (Q_C) ? ((LQ_I_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_64BIT)(B) << ((Q_C) - (Q_B)))) \
       > LQ_I_32BIT_MAX ? (LQ_I_32BIT)LQ_I_32BIT_MAX : \
       (LQ_I_64BIT)((Q_A) > (Q_C) ? ((LQ_I_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_64BIT)(A) << ((Q_C) - (Q_A)))) - \
       (LQ_I_64BIT)((Q_B) > (Q_C) ? ((LQ_I_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_64BIT)(B) << ((Q_C) - (Q_B)))) \
       < LQ_I_32BIT_MIN ? (LQ_I_32BIT)LQ_I_32BIT_MIN : \
       (LQ_I_32BIT)((LQ_I_64BIT)((Q_A) > (Q_C) ? ((LQ_I_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_I_64BIT)(A) << ((Q_C) - (Q_A)))) - \
                   (LQ_I_64BIT)((Q_B) > (Q_C) ? ((LQ_I_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_I_64BIT)(B) << ((Q_C) - (Q_B))))))
/****************************通用饱和算法 UINT32 UQ格式减法(任意)************************/
#define LQ_SATURATION_UINT32_UQ_SUB(A, Q_A, B, Q_B, Q_C ,Lq_Error) \
     ((LQ_UI_64BIT)((Q_A) > (Q_C) ? ((LQ_UI_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_64BIT)(A) << ((Q_C) - (Q_A)))) >= \
      (LQ_UI_64BIT)((Q_B) > (Q_C) ? ((LQ_UI_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_64BIT)(B) << ((Q_C) - (Q_B)))) ? \
        (((LQ_UI_64BIT)((Q_A) > (Q_C) ? ((LQ_UI_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_64BIT)(A) << ((Q_C) - (Q_A)))) - \
          (LQ_UI_64BIT)((Q_B) > (Q_C) ? ((LQ_UI_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_64BIT)(B) << ((Q_C) - (Q_B))))) > LQ_UI_32BIT_MAX ? \
          (LQ_UI_32BIT)LQ_UI_32BIT_MAX : \
          (LQ_UI_64BIT)((LQ_UI_64BIT)((Q_A) > (Q_C) ? ((LQ_UI_64BIT)(A) >> ((Q_A) - (Q_C))) : ((LQ_UI_64BIT)(A) << ((Q_C) - (Q_A)))) - \
                       (LQ_UI_64BIT)((Q_B) > (Q_C) ? ((LQ_UI_64BIT)(B) >> ((Q_B) - (Q_C))) : ((LQ_UI_32BIT)(B) << ((Q_C) - (Q_B)))))) : \
        (LQ_UI_64BIT)0)
#endif
//!<饱和算法:Q格式类型减法 内联算法
#if LQ_SATURATION_Q_FORMAT_SUB_LOADING_MODE == 1
/**@brief 饱和算法:INT8类型Q7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.992187500000)。\n
*          表达的小数精度:(0.007812500000)。
* @param[in] LQ_INT8_Q7     A              输入Q格式数
* @param[in] LQ_INT8_Q7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q7_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q7格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q7 LQ_SATURATION_INT8_Q7_SUB(LQ_INT8_Q7 A, LQ_INT8_Q7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q7_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q7)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q7)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q7)tmp;
}
/**@brief 饱和算法:INT8类型Q6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.984375000000)。\n
*          表达的小数精度:(0.015625000000)。
* @param[in] LQ_INT8_Q6     A              输入Q格式数
* @param[in] LQ_INT8_Q6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q6_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q6格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q6 LQ_SATURATION_INT8_Q6_SUB(LQ_INT8_Q6 A, LQ_INT8_Q6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q6_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q6)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q6)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q6)tmp;
}
/**@brief 饱和算法:INT8类型Q5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.968750000000)。\n
*          表达的小数精度:(0.031250000000)。
* @param[in] LQ_INT8_Q5     A              输入Q格式数
* @param[in] LQ_INT8_Q5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q5_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q5格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q5 LQ_SATURATION_INT8_Q5_SUB(LQ_INT8_Q5 A, LQ_INT8_Q5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q5_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q5)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q5)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q5)tmp;
}
/**@brief 饱和算法:INT8类型Q4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.937500000000)。\n
*          表达的小数精度:(0.062500000000)。
* @param[in] LQ_INT8_Q4     A              输入Q格式数
* @param[in] LQ_INT8_Q4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q4_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q4格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q4 LQ_SATURATION_INT8_Q4_SUB(LQ_INT8_Q4 A, LQ_INT8_Q4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q4_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q4)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q4)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q4)tmp;
}
/**@brief 饱和算法:INT8类型Q3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.875000000000)。\n
*          表达的小数精度:(0.125000000000)。
* @param[in] LQ_INT8_Q3     A              输入Q格式数
* @param[in] LQ_INT8_Q3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q3_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q3格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q3 LQ_SATURATION_INT8_Q3_SUB(LQ_INT8_Q3 A, LQ_INT8_Q3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q3_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q3)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q3)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q3)tmp;
}
/**@brief 饱和算法:INT8类型Q2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.750000000000)。\n
*          表达的小数精度:(0.250000000000)。
* @param[in] LQ_INT8_Q2     A              输入Q格式数
* @param[in] LQ_INT8_Q2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q2_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q2格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q2 LQ_SATURATION_INT8_Q2_SUB(LQ_INT8_Q2 A, LQ_INT8_Q2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q2_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q2)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q2)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q2)tmp;
}
/**@brief 饱和算法:INT8类型Q1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.500000000000)。\n
*          表达的小数精度:(0.500000000000)。
* @param[in] LQ_INT8_Q1     A              输入Q格式数
* @param[in] LQ_INT8_Q1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q1_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q1格式减法中整形正向溢出\n
*                        SATURATION_INT8_Q1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q7_SUB  饱和算法:INT8的Q7格式减法\n
*   LQ_SATURATION_INT8_Q6_SUB  饱和算法:INT8的Q6格式减法\n
*   LQ_SATURATION_INT8_Q5_SUB  饱和算法:INT8的Q5格式减法\n
*   LQ_SATURATION_INT8_Q4_SUB  饱和算法:INT8的Q4格式减法\n
*   LQ_SATURATION_INT8_Q3_SUB  饱和算法:INT8的Q3格式减法\n
*   LQ_SATURATION_INT8_Q2_SUB  饱和算法:INT8的Q2格式减法\n
*   LQ_SATURATION_INT8_Q1_SUB  饱和算法:INT8的Q1格式减法\n
*/
LQ_INLINE LQ_INT8_Q1 LQ_SATURATION_INT8_Q1_SUB(LQ_INT8_Q1 A, LQ_INT8_Q1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q1_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q1)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q1)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q1)tmp;
}
/**@brief 饱和算法:UINT8类型UQ8格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_UINT8_UQ8     A              输入Q格式数
* @param[in] LQ_UINT8_UQ8     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ8_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ8格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ8_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ8 LQ_SATURATION_UINT8_UQ8_SUB(LQ_UINT8_UQ8 A, LQ_UINT8_UQ8 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ8_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ8)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ8)tmp;
}
/**@brief 饱和算法:UINT8类型UQ7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_UINT8_UQ7     A              输入Q格式数
* @param[in] LQ_UINT8_UQ7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ7 LQ_SATURATION_UINT8_UQ7_SUB(LQ_UINT8_UQ7 A, LQ_UINT8_UQ7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ7)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ7)tmp;
}
/**@brief 饱和算法:UINT8类型UQ6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_UINT8_UQ6     A              输入Q格式数
* @param[in] LQ_UINT8_UQ6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ6 LQ_SATURATION_UINT8_UQ6_SUB(LQ_UINT8_UQ6 A, LQ_UINT8_UQ6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ6)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ6)tmp;
}
/**@brief 饱和算法:UINT8类型UQ5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_UINT8_UQ5     A              输入Q格式数
* @param[in] LQ_UINT8_UQ5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ5 LQ_SATURATION_UINT8_UQ5_SUB(LQ_UINT8_UQ5 A, LQ_UINT8_UQ5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ5)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ5)tmp;
}
/**@brief 饱和算法:UINT8类型UQ4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_UINT8_UQ4     A              输入Q格式数
* @param[in] LQ_UINT8_UQ4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ4 LQ_SATURATION_UINT8_UQ4_SUB(LQ_UINT8_UQ4 A, LQ_UINT8_UQ4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ4)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ4)tmp;
}
/**@brief 饱和算法:UINT8类型UQ3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_UINT8_UQ3     A              输入Q格式数
* @param[in] LQ_UINT8_UQ3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ3 LQ_SATURATION_UINT8_UQ3_SUB(LQ_UINT8_UQ3 A, LQ_UINT8_UQ3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ3)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ3)tmp;
}
/**@brief 饱和算法:UINT8类型UQ2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_UINT8_UQ2     A              输入Q格式数
* @param[in] LQ_UINT8_UQ2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ2 LQ_SATURATION_UINT8_UQ2_SUB(LQ_UINT8_UQ2 A, LQ_UINT8_UQ2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ2)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ2)tmp;
}
/**@brief 饱和算法:UINT8类型UQ1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_UINT8_UQ1     A              输入Q格式数
* @param[in] LQ_UINT8_UQ1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ7_SUB  饱和算法:UINT8的UQ7格式减法\n
*   LQ_SATURATION_UINT8_UQ6_SUB  饱和算法:UINT8的UQ6格式减法\n
*   LQ_SATURATION_UINT8_UQ5_SUB  饱和算法:UINT8的UQ5格式减法\n
*   LQ_SATURATION_UINT8_UQ4_SUB  饱和算法:UINT8的UQ4格式减法\n
*   LQ_SATURATION_UINT8_UQ3_SUB  饱和算法:UINT8的UQ3格式减法\n
*   LQ_SATURATION_UINT8_UQ2_SUB  饱和算法:UINT8的UQ2格式减法\n
*   LQ_SATURATION_UINT8_UQ1_SUB  饱和算法:UINT8的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT8_UQ1 LQ_SATURATION_UINT8_UQ1_SUB(LQ_UINT8_UQ1 A, LQ_UINT8_UQ1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    tmp = (LQ_I_16BIT)(A)-(LQ_I_16BIT)(B);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ1)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ1)tmp;
}
/**@brief 饱和算法:INT16类型Q15格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.999969482422)。\n
*          表达的小数精度:(0.000030517578)。
* @param[in] LQ_INT16_Q15     A              输入Q格式数
* @param[in] LQ_INT16_Q15     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q15_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q15格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q15_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q15格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q15_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q15 LQ_SATURATION_INT16_Q15_SUB(LQ_INT16_Q15 A, LQ_INT16_Q15 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q15_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q15)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q15_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q15)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q15)tmp;
}
/**@brief 饱和算法:INT16类型Q14格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.999938964844)。\n
*          表达的小数精度:(0.000061035156)。
* @param[in] LQ_INT16_Q14     A              输入Q格式数
* @param[in] LQ_INT16_Q14     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q14_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q14格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q14_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q14格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q14_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q14 LQ_SATURATION_INT16_Q14_SUB(LQ_INT16_Q14 A, LQ_INT16_Q14 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q14_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q14)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q14_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q14)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q14)tmp;
}
/**@brief 饱和算法:INT16类型Q13格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.999877929688)。\n
*          表达的小数精度:(0.000122070312)。
* @param[in] LQ_INT16_Q13     A              输入Q格式数
* @param[in] LQ_INT16_Q13     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q13_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q13格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q13_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q13格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q13_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q13 LQ_SATURATION_INT16_Q13_SUB(LQ_INT16_Q13 A, LQ_INT16_Q13 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q13_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q13)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q13_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q13)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q13)tmp;
}
/**@brief 饱和算法:INT16类型Q12格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.999755859375)。\n
*          表达的小数精度:(0.000244140625)。
* @param[in] LQ_INT16_Q12     A              输入Q格式数
* @param[in] LQ_INT16_Q12     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q12_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q12格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q12_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q12格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q12_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q12 LQ_SATURATION_INT16_Q12_SUB(LQ_INT16_Q12 A, LQ_INT16_Q12 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q12_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q12)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q12_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q12)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q12)tmp;
}
/**@brief 饱和算法:INT16类型Q11格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.999511718750)。\n
*          表达的小数精度:(0.000488281250)。
* @param[in] LQ_INT16_Q11     A              输入Q格式数
* @param[in] LQ_INT16_Q11     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q11_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q11格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q11_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q11格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q11_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q11 LQ_SATURATION_INT16_Q11_SUB(LQ_INT16_Q11 A, LQ_INT16_Q11 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q11_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q11)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q11_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q11)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q11)tmp;
}
/**@brief 饱和算法:INT16类型Q10格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.999023437500)。\n
*          表达的小数精度:(0.000976562500)。
* @param[in] LQ_INT16_Q10     A              输入Q格式数
* @param[in] LQ_INT16_Q10     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q10_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q10格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q10_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q10格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q10_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q10 LQ_SATURATION_INT16_Q10_SUB(LQ_INT16_Q10 A, LQ_INT16_Q10 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q10_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q10)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q10_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q10)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q10)tmp;
}
/**@brief 饱和算法:INT16类型Q9格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.998046875000)。\n
*          表达的小数精度:(0.001953125000)。
* @param[in] LQ_INT16_Q9     A              输入Q格式数
* @param[in] LQ_INT16_Q9     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q9_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q9格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q9_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q9格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q9_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q9 LQ_SATURATION_INT16_Q9_SUB(LQ_INT16_Q9 A, LQ_INT16_Q9 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q9_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q9)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q9_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q9)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q9)tmp;
}
/**@brief 饱和算法:INT16类型Q8格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128.000000000000)到(127.996093750000)。\n
*          表达的小数精度:(0.003906250000)。
* @param[in] LQ_INT16_Q8     A              输入Q格式数
* @param[in] LQ_INT16_Q8     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q8_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q8格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q8_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q8格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q8_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q8 LQ_SATURATION_INT16_Q8_SUB(LQ_INT16_Q8 A, LQ_INT16_Q8 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q8_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q8)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q8_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q8)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q8)tmp;
}
/**@brief 饱和算法:INT16类型Q7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256.000000000000)到(255.992187500000)。\n
*          表达的小数精度:(0.007812500000)。
* @param[in] LQ_INT16_Q7     A              输入Q格式数
* @param[in] LQ_INT16_Q7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q7_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q7格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q7 LQ_SATURATION_INT16_Q7_SUB(LQ_INT16_Q7 A, LQ_INT16_Q7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q7_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q7)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q7)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q7)tmp;
}
/**@brief 饱和算法:INT16类型Q6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512.000000000000)到(511.984375000000)。\n
*          表达的小数精度:(0.015625000000)。
* @param[in] LQ_INT16_Q6     A              输入Q格式数
* @param[in] LQ_INT16_Q6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q6_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q6格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q6 LQ_SATURATION_INT16_Q6_SUB(LQ_INT16_Q6 A, LQ_INT16_Q6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q6_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q6)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q6)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q6)tmp;
}
/**@brief 饱和算法:INT16类型Q5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024.000000000000)到(1023.968750000000)。\n
*          表达的小数精度:(0.031250000000)。
* @param[in] LQ_INT16_Q5     A              输入Q格式数
* @param[in] LQ_INT16_Q5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q5_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q5格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q5 LQ_SATURATION_INT16_Q5_SUB(LQ_INT16_Q5 A, LQ_INT16_Q5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q5_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q5)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q5)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q5)tmp;
}
/**@brief 饱和算法:INT16类型Q4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048.000000000000)到(2047.937500000000)。\n
*          表达的小数精度:(0.062500000000)。
* @param[in] LQ_INT16_Q4     A              输入Q格式数
* @param[in] LQ_INT16_Q4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q4_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q4格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q4 LQ_SATURATION_INT16_Q4_SUB(LQ_INT16_Q4 A, LQ_INT16_Q4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q4_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q4)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q4)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q4)tmp;
}
/**@brief 饱和算法:INT16类型Q3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096.000000000000)到(4095.875000000000)。\n
*          表达的小数精度:(0.125000000000)。
* @param[in] LQ_INT16_Q3     A              输入Q格式数
* @param[in] LQ_INT16_Q3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q3_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q3格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q3 LQ_SATURATION_INT16_Q3_SUB(LQ_INT16_Q3 A, LQ_INT16_Q3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q3_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q3)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q3)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q3)tmp;
}
/**@brief 饱和算法:INT16类型Q2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192.000000000000)到(8191.750000000000)。\n
*          表达的小数精度:(0.250000000000)。
* @param[in] LQ_INT16_Q2     A              输入Q格式数
* @param[in] LQ_INT16_Q2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q2_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q2格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q2 LQ_SATURATION_INT16_Q2_SUB(LQ_INT16_Q2 A, LQ_INT16_Q2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q2_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q2)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q2)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q2)tmp;
}
/**@brief 饱和算法:INT16类型Q1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384.000000000000)到(16383.500000000000)。\n
*          表达的小数精度:(0.500000000000)。
* @param[in] LQ_INT16_Q1     A              输入Q格式数
* @param[in] LQ_INT16_Q1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q1_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q1格式减法中整形正向溢出\n
*                        SATURATION_INT16_Q1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q15_SUB  饱和算法:INT16的Q15格式减法\n
*   LQ_SATURATION_INT16_Q14_SUB  饱和算法:INT16的Q14格式减法\n
*   LQ_SATURATION_INT16_Q13_SUB  饱和算法:INT16的Q13格式减法\n
*   LQ_SATURATION_INT16_Q12_SUB  饱和算法:INT16的Q12格式减法\n
*   LQ_SATURATION_INT16_Q11_SUB  饱和算法:INT16的Q11格式减法\n
*   LQ_SATURATION_INT16_Q10_SUB  饱和算法:INT16的Q10格式减法\n
*   LQ_SATURATION_INT16_Q9_SUB  饱和算法:INT16的Q9格式减法\n
*   LQ_SATURATION_INT16_Q8_SUB  饱和算法:INT16的Q8格式减法\n
*   LQ_SATURATION_INT16_Q7_SUB  饱和算法:INT16的Q7格式减法\n
*   LQ_SATURATION_INT16_Q6_SUB  饱和算法:INT16的Q6格式减法\n
*   LQ_SATURATION_INT16_Q5_SUB  饱和算法:INT16的Q5格式减法\n
*   LQ_SATURATION_INT16_Q4_SUB  饱和算法:INT16的Q4格式减法\n
*   LQ_SATURATION_INT16_Q3_SUB  饱和算法:INT16的Q3格式减法\n
*   LQ_SATURATION_INT16_Q2_SUB  饱和算法:INT16的Q2格式减法\n
*   LQ_SATURATION_INT16_Q1_SUB  饱和算法:INT16的Q1格式减法\n
*/
LQ_INLINE LQ_INT16_Q1 LQ_SATURATION_INT16_Q1_SUB(LQ_INT16_Q1 A, LQ_INT16_Q1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q1_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q1)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q1)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q1)tmp;
}
/**@brief 饱和算法:UINT16类型UQ16格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.999984741211)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_UINT16_UQ16     A              输入Q格式数
* @param[in] LQ_UINT16_UQ16     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ16_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ16格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ16_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ16 LQ_SATURATION_UINT16_UQ16_SUB(LQ_UINT16_UQ16 A, LQ_UINT16_UQ16 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ16_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ16)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ16)tmp;
}
/**@brief 饱和算法:UINT16类型UQ15格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_UINT16_UQ15     A              输入Q格式数
* @param[in] LQ_UINT16_UQ15     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ15_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ15格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ15_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ15 LQ_SATURATION_UINT16_UQ15_SUB(LQ_UINT16_UQ15 A, LQ_UINT16_UQ15 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ15_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ15)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ15)tmp;
}
/**@brief 饱和算法:UINT16类型UQ14格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_UINT16_UQ14     A              输入Q格式数
* @param[in] LQ_UINT16_UQ14     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ14_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ14格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ14_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ14 LQ_SATURATION_UINT16_UQ14_SUB(LQ_UINT16_UQ14 A, LQ_UINT16_UQ14 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ14_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ14)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ14)tmp;
}
/**@brief 饱和算法:UINT16类型UQ13格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_UINT16_UQ13     A              输入Q格式数
* @param[in] LQ_UINT16_UQ13     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ13_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ13格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ13_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ13 LQ_SATURATION_UINT16_UQ13_SUB(LQ_UINT16_UQ13 A, LQ_UINT16_UQ13 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ13_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ13)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ13)tmp;
}
/**@brief 饱和算法:UINT16类型UQ12格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_UINT16_UQ12     A              输入Q格式数
* @param[in] LQ_UINT16_UQ12     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ12_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ12格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ12_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ12 LQ_SATURATION_UINT16_UQ12_SUB(LQ_UINT16_UQ12 A, LQ_UINT16_UQ12 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ12_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ12)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ12)tmp;
}
/**@brief 饱和算法:UINT16类型UQ11格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_UINT16_UQ11     A              输入Q格式数
* @param[in] LQ_UINT16_UQ11     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ11_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ11格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ11_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ11 LQ_SATURATION_UINT16_UQ11_SUB(LQ_UINT16_UQ11 A, LQ_UINT16_UQ11 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ11_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ11)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ11)tmp;
}
/**@brief 饱和算法:UINT16类型UQ10格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_UINT16_UQ10     A              输入Q格式数
* @param[in] LQ_UINT16_UQ10     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ10_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ10格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ10_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ10 LQ_SATURATION_UINT16_UQ10_SUB(LQ_UINT16_UQ10 A, LQ_UINT16_UQ10 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ10_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ10)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ10)tmp;
}
/**@brief 饱和算法:UINT16类型UQ9格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_UINT16_UQ9     A              输入Q格式数
* @param[in] LQ_UINT16_UQ9     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ9_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ9格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ9_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ9 LQ_SATURATION_UINT16_UQ9_SUB(LQ_UINT16_UQ9 A, LQ_UINT16_UQ9 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ9_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ9)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ9)tmp;
}
/**@brief 饱和算法:UINT16类型UQ8格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_UINT16_UQ8     A              输入Q格式数
* @param[in] LQ_UINT16_UQ8     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ8_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ8格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ8_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ8 LQ_SATURATION_UINT16_UQ8_SUB(LQ_UINT16_UQ8 A, LQ_UINT16_UQ8 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ8_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ8)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ8)tmp;
}
/**@brief 饱和算法:UINT16类型UQ7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_UINT16_UQ7     A              输入Q格式数
* @param[in] LQ_UINT16_UQ7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ7 LQ_SATURATION_UINT16_UQ7_SUB(LQ_UINT16_UQ7 A, LQ_UINT16_UQ7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ7)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ7)tmp;
}
/**@brief 饱和算法:UINT16类型UQ6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_UINT16_UQ6     A              输入Q格式数
* @param[in] LQ_UINT16_UQ6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ6 LQ_SATURATION_UINT16_UQ6_SUB(LQ_UINT16_UQ6 A, LQ_UINT16_UQ6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ6)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ6)tmp;
}
/**@brief 饱和算法:UINT16类型UQ5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_UINT16_UQ5     A              输入Q格式数
* @param[in] LQ_UINT16_UQ5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ5 LQ_SATURATION_UINT16_UQ5_SUB(LQ_UINT16_UQ5 A, LQ_UINT16_UQ5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ5)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ5)tmp;
}
/**@brief 饱和算法:UINT16类型UQ4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_UINT16_UQ4     A              输入Q格式数
* @param[in] LQ_UINT16_UQ4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ4 LQ_SATURATION_UINT16_UQ4_SUB(LQ_UINT16_UQ4 A, LQ_UINT16_UQ4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ4)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ4)tmp;
}
/**@brief 饱和算法:UINT16类型UQ3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_UINT16_UQ3     A              输入Q格式数
* @param[in] LQ_UINT16_UQ3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ3 LQ_SATURATION_UINT16_UQ3_SUB(LQ_UINT16_UQ3 A, LQ_UINT16_UQ3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ3)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ3)tmp;
}
/**@brief 饱和算法:UINT16类型UQ2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_UINT16_UQ2     A              输入Q格式数
* @param[in] LQ_UINT16_UQ2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ2 LQ_SATURATION_UINT16_UQ2_SUB(LQ_UINT16_UQ2 A, LQ_UINT16_UQ2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ2)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ2)tmp;
}
/**@brief 饱和算法:UINT16类型UQ1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_UINT16_UQ1     A              输入Q格式数
* @param[in] LQ_UINT16_UQ1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ15_SUB  饱和算法:UINT16的UQ15格式减法\n
*   LQ_SATURATION_UINT16_UQ14_SUB  饱和算法:UINT16的UQ14格式减法\n
*   LQ_SATURATION_UINT16_UQ13_SUB  饱和算法:UINT16的UQ13格式减法\n
*   LQ_SATURATION_UINT16_UQ12_SUB  饱和算法:UINT16的UQ12格式减法\n
*   LQ_SATURATION_UINT16_UQ11_SUB  饱和算法:UINT16的UQ11格式减法\n
*   LQ_SATURATION_UINT16_UQ10_SUB  饱和算法:UINT16的UQ10格式减法\n
*   LQ_SATURATION_UINT16_UQ9_SUB  饱和算法:UINT16的UQ9格式减法\n
*   LQ_SATURATION_UINT16_UQ8_SUB  饱和算法:UINT16的UQ8格式减法\n
*   LQ_SATURATION_UINT16_UQ7_SUB  饱和算法:UINT16的UQ7格式减法\n
*   LQ_SATURATION_UINT16_UQ6_SUB  饱和算法:UINT16的UQ6格式减法\n
*   LQ_SATURATION_UINT16_UQ5_SUB  饱和算法:UINT16的UQ5格式减法\n
*   LQ_SATURATION_UINT16_UQ4_SUB  饱和算法:UINT16的UQ4格式减法\n
*   LQ_SATURATION_UINT16_UQ3_SUB  饱和算法:UINT16的UQ3格式减法\n
*   LQ_SATURATION_UINT16_UQ2_SUB  饱和算法:UINT16的UQ2格式减法\n
*   LQ_SATURATION_UINT16_UQ1_SUB  饱和算法:UINT16的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT16_UQ1 LQ_SATURATION_UINT16_UQ1_SUB(LQ_UINT16_UQ1 A, LQ_UINT16_UQ1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    tmp = (LQ_I_32BIT)(A)-(LQ_I_32BIT)(B);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ1)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ1)tmp;
}
/**@brief 饱和算法:INT32类型Q31格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1.000000000000)到(0.999999999534)。\n
*          表达的小数精度:(0.000000000466)。
* @param[in] LQ_INT32_Q31     A              输入Q格式数
* @param[in] LQ_INT32_Q31     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q31_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q31格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q31_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q31格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q31_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q31 LQ_SATURATION_INT32_Q31_SUB(LQ_INT32_Q31 A, LQ_INT32_Q31 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q31_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q31)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q31_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q31)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q31)tmp;
}
/**@brief 饱和算法:INT32类型Q30格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2.000000000000)到(1.999999999069)。\n
*          表达的小数精度:(0.000000000931)。
* @param[in] LQ_INT32_Q30     A              输入Q格式数
* @param[in] LQ_INT32_Q30     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q30_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q30格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q30_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q30格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q30_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q30 LQ_SATURATION_INT32_Q30_SUB(LQ_INT32_Q30 A, LQ_INT32_Q30 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q30_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q30)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q30_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q30)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q30)tmp;
}
/**@brief 饱和算法:INT32类型Q29格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4.000000000000)到(3.999999998137)。\n
*          表达的小数精度:(0.000000001863)。
* @param[in] LQ_INT32_Q29     A              输入Q格式数
* @param[in] LQ_INT32_Q29     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q29_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q29格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q29_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q29格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q29_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q29 LQ_SATURATION_INT32_Q29_SUB(LQ_INT32_Q29 A, LQ_INT32_Q29 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q29_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q29)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q29_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q29)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q29)tmp;
}
/**@brief 饱和算法:INT32类型Q28格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8.000000000000)到(7.999999996275)。\n
*          表达的小数精度:(0.000000003725)。
* @param[in] LQ_INT32_Q28     A              输入Q格式数
* @param[in] LQ_INT32_Q28     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q28_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q28格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q28_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q28格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q28_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q28 LQ_SATURATION_INT32_Q28_SUB(LQ_INT32_Q28 A, LQ_INT32_Q28 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q28_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q28)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q28_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q28)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q28)tmp;
}
/**@brief 饱和算法:INT32类型Q27格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16.000000000000)到(15.999999992549)。\n
*          表达的小数精度:(0.000000007451)。
* @param[in] LQ_INT32_Q27     A              输入Q格式数
* @param[in] LQ_INT32_Q27     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q27_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q27格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q27_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q27格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q27_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q27 LQ_SATURATION_INT32_Q27_SUB(LQ_INT32_Q27 A, LQ_INT32_Q27 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q27_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q27)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q27_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q27)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q27)tmp;
}
/**@brief 饱和算法:INT32类型Q26格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32.000000000000)到(31.999999985099)。\n
*          表达的小数精度:(0.000000014901)。
* @param[in] LQ_INT32_Q26     A              输入Q格式数
* @param[in] LQ_INT32_Q26     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q26_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q26格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q26_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q26格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q26_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q26 LQ_SATURATION_INT32_Q26_SUB(LQ_INT32_Q26 A, LQ_INT32_Q26 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q26_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q26)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q26_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q26)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q26)tmp;
}
/**@brief 饱和算法:INT32类型Q25格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-64.000000000000)到(63.999999970198)。\n
*          表达的小数精度:(0.000000029802)。
* @param[in] LQ_INT32_Q25     A              输入Q格式数
* @param[in] LQ_INT32_Q25     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q25_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q25格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q25_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q25格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q25_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q25 LQ_SATURATION_INT32_Q25_SUB(LQ_INT32_Q25 A, LQ_INT32_Q25 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q25_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q25)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q25_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q25)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q25)tmp;
}
/**@brief 饱和算法:INT32类型Q24格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-128.000000000000)到(127.999999940395)。\n
*          表达的小数精度:(0.000000059605)。
* @param[in] LQ_INT32_Q24     A              输入Q格式数
* @param[in] LQ_INT32_Q24     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q24_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q24格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q24_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q24格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q24_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q24 LQ_SATURATION_INT32_Q24_SUB(LQ_INT32_Q24 A, LQ_INT32_Q24 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q24_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q24)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q24_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q24)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q24)tmp;
}
/**@brief 饱和算法:INT32类型Q23格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-256.000000000000)到(255.999999880791)。\n
*          表达的小数精度:(0.000000119209)。
* @param[in] LQ_INT32_Q23     A              输入Q格式数
* @param[in] LQ_INT32_Q23     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q23_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q23格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q23_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q23格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q23_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q23 LQ_SATURATION_INT32_Q23_SUB(LQ_INT32_Q23 A, LQ_INT32_Q23 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q23_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q23)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q23_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q23)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q23)tmp;
}
/**@brief 饱和算法:INT32类型Q22格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-512.000000000000)到(511.999999761581)。\n
*          表达的小数精度:(0.000000238419)。
* @param[in] LQ_INT32_Q22     A              输入Q格式数
* @param[in] LQ_INT32_Q22     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q22_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q22格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q22_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q22格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q22_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q22 LQ_SATURATION_INT32_Q22_SUB(LQ_INT32_Q22 A, LQ_INT32_Q22 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q22_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q22)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q22_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q22)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q22)tmp;
}
/**@brief 饱和算法:INT32类型Q21格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1024.000000000000)到(1023.999999523163)。\n
*          表达的小数精度:(0.000000476837)。
* @param[in] LQ_INT32_Q21     A              输入Q格式数
* @param[in] LQ_INT32_Q21     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q21_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q21格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q21_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q21格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q21_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q21 LQ_SATURATION_INT32_Q21_SUB(LQ_INT32_Q21 A, LQ_INT32_Q21 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q21_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q21)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q21_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q21)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q21)tmp;
}
/**@brief 饱和算法:INT32类型Q20格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2048.000000000000)到(2047.999999046326)。\n
*          表达的小数精度:(0.000000953674)。
* @param[in] LQ_INT32_Q20     A              输入Q格式数
* @param[in] LQ_INT32_Q20     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q20_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q20格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q20_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q20格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q20_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q20 LQ_SATURATION_INT32_Q20_SUB(LQ_INT32_Q20 A, LQ_INT32_Q20 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q20_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q20)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q20_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q20)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q20)tmp;
}
/**@brief 饱和算法:INT32类型Q19格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4096.000000000000)到(4095.999998092651)。\n
*          表达的小数精度:(0.000001907349)。
* @param[in] LQ_INT32_Q19     A              输入Q格式数
* @param[in] LQ_INT32_Q19     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q19_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q19格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q19_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q19格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q19_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q19 LQ_SATURATION_INT32_Q19_SUB(LQ_INT32_Q19 A, LQ_INT32_Q19 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q19_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q19)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q19_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q19)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q19)tmp;
}
/**@brief 饱和算法:INT32类型Q18格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8192.000000000000)到(8191.999996185303)。\n
*          表达的小数精度:(0.000003814697)。
* @param[in] LQ_INT32_Q18     A              输入Q格式数
* @param[in] LQ_INT32_Q18     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q18_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q18格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q18_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q18格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q18_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q18 LQ_SATURATION_INT32_Q18_SUB(LQ_INT32_Q18 A, LQ_INT32_Q18 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q18_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q18)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q18_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q18)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q18)tmp;
}
/**@brief 饱和算法:INT32类型Q17格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16384.000000000000)到(16383.999992370605)。\n
*          表达的小数精度:(0.000007629395)。
* @param[in] LQ_INT32_Q17     A              输入Q格式数
* @param[in] LQ_INT32_Q17     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q17_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q17格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q17_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q17格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q17_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q17 LQ_SATURATION_INT32_Q17_SUB(LQ_INT32_Q17 A, LQ_INT32_Q17 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q17_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q17)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q17_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q17)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q17)tmp;
}
/**@brief 饱和算法:INT32类型Q16格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-32768.000000000000)到(32767.999984741211)。\n
*          表达的小数精度:(0.000015258789)。
* @param[in] LQ_INT32_Q16     A              输入Q格式数
* @param[in] LQ_INT32_Q16     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q16_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q16格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q16_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q16格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q16_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q16 LQ_SATURATION_INT32_Q16_SUB(LQ_INT32_Q16 A, LQ_INT32_Q16 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q16_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q16)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q16_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q16)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q16)tmp;
}
/**@brief 饱和算法:INT32类型Q15格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-65536.000000000000)到(65535.999969482422)。\n
*          表达的小数精度:(0.000030517578)。
* @param[in] LQ_INT32_Q15     A              输入Q格式数
* @param[in] LQ_INT32_Q15     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q15_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q15格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q15_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q15格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q15_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q15 LQ_SATURATION_INT32_Q15_SUB(LQ_INT32_Q15 A, LQ_INT32_Q15 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q15_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q15)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q15_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q15)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q15)tmp;
}
/**@brief 饱和算法:INT32类型Q14格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-131072.000000000000)到(131071.999938964844)。\n
*          表达的小数精度:(0.000061035156)。
* @param[in] LQ_INT32_Q14     A              输入Q格式数
* @param[in] LQ_INT32_Q14     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q14_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q14格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q14_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q14格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q14_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q14 LQ_SATURATION_INT32_Q14_SUB(LQ_INT32_Q14 A, LQ_INT32_Q14 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q14_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q14)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q14_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q14)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q14)tmp;
}
/**@brief 饱和算法:INT32类型Q13格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-262144.000000000000)到(262143.999877929688)。\n
*          表达的小数精度:(0.000122070312)。
* @param[in] LQ_INT32_Q13     A              输入Q格式数
* @param[in] LQ_INT32_Q13     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q13_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q13格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q13_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q13格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q13_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q13 LQ_SATURATION_INT32_Q13_SUB(LQ_INT32_Q13 A, LQ_INT32_Q13 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q13_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q13)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q13_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q13)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q13)tmp;
}
/**@brief 饱和算法:INT32类型Q12格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-524288.000000000000)到(524287.999755859375)。\n
*          表达的小数精度:(0.000244140625)。
* @param[in] LQ_INT32_Q12     A              输入Q格式数
* @param[in] LQ_INT32_Q12     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q12_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q12格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q12_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q12格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q12_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q12 LQ_SATURATION_INT32_Q12_SUB(LQ_INT32_Q12 A, LQ_INT32_Q12 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q12_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q12)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q12_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q12)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q12)tmp;
}
/**@brief 饱和算法:INT32类型Q11格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1048576.000000000000)到(1048575.999511718750)。\n
*          表达的小数精度:(0.000488281250)。
* @param[in] LQ_INT32_Q11     A              输入Q格式数
* @param[in] LQ_INT32_Q11     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q11_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q11格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q11_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q11格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q11_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q11 LQ_SATURATION_INT32_Q11_SUB(LQ_INT32_Q11 A, LQ_INT32_Q11 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q11_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q11)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q11_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q11)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q11)tmp;
}
/**@brief 饱和算法:INT32类型Q10格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-2097152.000000000000)到(2097151.999023437500)。\n
*          表达的小数精度:(0.000976562500)。
* @param[in] LQ_INT32_Q10     A              输入Q格式数
* @param[in] LQ_INT32_Q10     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q10_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q10格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q10_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q10格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q10_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q10 LQ_SATURATION_INT32_Q10_SUB(LQ_INT32_Q10 A, LQ_INT32_Q10 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q10_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q10)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q10_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q10)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q10)tmp;
}
/**@brief 饱和算法:INT32类型Q9格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-4194304.000000000000)到(4194303.998046875000)。\n
*          表达的小数精度:(0.001953125000)。
* @param[in] LQ_INT32_Q9     A              输入Q格式数
* @param[in] LQ_INT32_Q9     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q9_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q9格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q9_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q9格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q9_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q9 LQ_SATURATION_INT32_Q9_SUB(LQ_INT32_Q9 A, LQ_INT32_Q9 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q9_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q9)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q9_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q9)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q9)tmp;
}
/**@brief 饱和算法:INT32类型Q8格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-8388608.000000000000)到(8388607.996093750000)。\n
*          表达的小数精度:(0.003906250000)。
* @param[in] LQ_INT32_Q8     A              输入Q格式数
* @param[in] LQ_INT32_Q8     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q8_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q8格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q8_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q8格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q8_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q8 LQ_SATURATION_INT32_Q8_SUB(LQ_INT32_Q8 A, LQ_INT32_Q8 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q8_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q8)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q8_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q8)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q8)tmp;
}
/**@brief 饱和算法:INT32类型Q7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-16777216.000000000000)到(16777215.992187500000)。\n
*          表达的小数精度:(0.007812500000)。
* @param[in] LQ_INT32_Q7     A              输入Q格式数
* @param[in] LQ_INT32_Q7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q7_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q7格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q7 LQ_SATURATION_INT32_Q7_SUB(LQ_INT32_Q7 A, LQ_INT32_Q7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q7_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q7)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q7)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q7)tmp;
}
/**@brief 饱和算法:INT32类型Q6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-33554432.000000000000)到(33554431.984375000000)。\n
*          表达的小数精度:(0.015625000000)。
* @param[in] LQ_INT32_Q6     A              输入Q格式数
* @param[in] LQ_INT32_Q6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q6_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q6格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q6 LQ_SATURATION_INT32_Q6_SUB(LQ_INT32_Q6 A, LQ_INT32_Q6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q6_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q6)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q6)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q6)tmp;
}
/**@brief 饱和算法:INT32类型Q5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-67108864.000000000000)到(67108863.968750000000)。\n
*          表达的小数精度:(0.031250000000)。
* @param[in] LQ_INT32_Q5     A              输入Q格式数
* @param[in] LQ_INT32_Q5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q5_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q5格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q5 LQ_SATURATION_INT32_Q5_SUB(LQ_INT32_Q5 A, LQ_INT32_Q5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q5_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q5)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q5)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q5)tmp;
}
/**@brief 饱和算法:INT32类型Q4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-134217728.000000000000)到(134217727.937500000000)。\n
*          表达的小数精度:(0.062500000000)。
* @param[in] LQ_INT32_Q4     A              输入Q格式数
* @param[in] LQ_INT32_Q4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q4_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q4格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q4 LQ_SATURATION_INT32_Q4_SUB(LQ_INT32_Q4 A, LQ_INT32_Q4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q4_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q4)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q4)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q4)tmp;
}
/**@brief 饱和算法:INT32类型Q3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-268435456.000000000000)到(268435455.875000000000)。\n
*          表达的小数精度:(0.125000000000)。
* @param[in] LQ_INT32_Q3     A              输入Q格式数
* @param[in] LQ_INT32_Q3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q3_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q3格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q3 LQ_SATURATION_INT32_Q3_SUB(LQ_INT32_Q3 A, LQ_INT32_Q3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q3_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q3)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q3)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q3)tmp;
}
/**@brief 饱和算法:INT32类型Q2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-536870912.000000000000)到(536870911.750000000000)。\n
*          表达的小数精度:(0.250000000000)。
* @param[in] LQ_INT32_Q2     A              输入Q格式数
* @param[in] LQ_INT32_Q2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q2_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q2格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q2 LQ_SATURATION_INT32_Q2_SUB(LQ_INT32_Q2 A, LQ_INT32_Q2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q2_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q2)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q2)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q2)tmp;
}
/**@brief 饱和算法:INT32类型Q1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(-1073741824.000000000000)到(1073741823.500000000000)。\n
*          表达的小数精度:(0.500000000000)。
* @param[in] LQ_INT32_Q1     A              输入Q格式数
* @param[in] LQ_INT32_Q1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q1_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q1格式减法中整形正向溢出\n
*                        SATURATION_INT32_Q1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q31_SUB  饱和算法:INT32的Q31格式减法\n
*   LQ_SATURATION_INT32_Q30_SUB  饱和算法:INT32的Q30格式减法\n
*   LQ_SATURATION_INT32_Q29_SUB  饱和算法:INT32的Q29格式减法\n
*   LQ_SATURATION_INT32_Q28_SUB  饱和算法:INT32的Q28格式减法\n
*   LQ_SATURATION_INT32_Q27_SUB  饱和算法:INT32的Q27格式减法\n
*   LQ_SATURATION_INT32_Q26_SUB  饱和算法:INT32的Q26格式减法\n
*   LQ_SATURATION_INT32_Q25_SUB  饱和算法:INT32的Q25格式减法\n
*   LQ_SATURATION_INT32_Q24_SUB  饱和算法:INT32的Q24格式减法\n
*   LQ_SATURATION_INT32_Q23_SUB  饱和算法:INT32的Q23格式减法\n
*   LQ_SATURATION_INT32_Q22_SUB  饱和算法:INT32的Q22格式减法\n
*   LQ_SATURATION_INT32_Q21_SUB  饱和算法:INT32的Q21格式减法\n
*   LQ_SATURATION_INT32_Q20_SUB  饱和算法:INT32的Q20格式减法\n
*   LQ_SATURATION_INT32_Q19_SUB  饱和算法:INT32的Q19格式减法\n
*   LQ_SATURATION_INT32_Q18_SUB  饱和算法:INT32的Q18格式减法\n
*   LQ_SATURATION_INT32_Q17_SUB  饱和算法:INT32的Q17格式减法\n
*   LQ_SATURATION_INT32_Q16_SUB  饱和算法:INT32的Q16格式减法\n
*   LQ_SATURATION_INT32_Q15_SUB  饱和算法:INT32的Q15格式减法\n
*   LQ_SATURATION_INT32_Q14_SUB  饱和算法:INT32的Q14格式减法\n
*   LQ_SATURATION_INT32_Q13_SUB  饱和算法:INT32的Q13格式减法\n
*   LQ_SATURATION_INT32_Q12_SUB  饱和算法:INT32的Q12格式减法\n
*   LQ_SATURATION_INT32_Q11_SUB  饱和算法:INT32的Q11格式减法\n
*   LQ_SATURATION_INT32_Q10_SUB  饱和算法:INT32的Q10格式减法\n
*   LQ_SATURATION_INT32_Q9_SUB  饱和算法:INT32的Q9格式减法\n
*   LQ_SATURATION_INT32_Q8_SUB  饱和算法:INT32的Q8格式减法\n
*   LQ_SATURATION_INT32_Q7_SUB  饱和算法:INT32的Q7格式减法\n
*   LQ_SATURATION_INT32_Q6_SUB  饱和算法:INT32的Q6格式减法\n
*   LQ_SATURATION_INT32_Q5_SUB  饱和算法:INT32的Q5格式减法\n
*   LQ_SATURATION_INT32_Q4_SUB  饱和算法:INT32的Q4格式减法\n
*   LQ_SATURATION_INT32_Q3_SUB  饱和算法:INT32的Q3格式减法\n
*   LQ_SATURATION_INT32_Q2_SUB  饱和算法:INT32的Q2格式减法\n
*   LQ_SATURATION_INT32_Q1_SUB  饱和算法:INT32的Q1格式减法\n
*/
LQ_INLINE LQ_INT32_Q1 LQ_SATURATION_INT32_Q1_SUB(LQ_INT32_Q1 A, LQ_INT32_Q1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q1_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q1)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q1)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q1)tmp;
}
/**@brief 饱和算法:UINT32类型UQ32格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(0.999999999767)。\n
*          表达的小数精度:(0.000000000233)。\n
* @param[in] LQ_UINT32_UQ32     A              输入Q格式数
* @param[in] LQ_UINT32_UQ32     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ32_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ32格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ32_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ32 LQ_SATURATION_UINT32_UQ32_SUB(LQ_UINT32_UQ32 A, LQ_UINT32_UQ32 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ32_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ32)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ32)tmp;
}
/**@brief 饱和算法:UINT32类型UQ31格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1.999999999534)。\n
*          表达的小数精度:(0.000000000466)。\n
* @param[in] LQ_UINT32_UQ31     A              输入Q格式数
* @param[in] LQ_UINT32_UQ31     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ31_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ31格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ31_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ31 LQ_SATURATION_UINT32_UQ31_SUB(LQ_UINT32_UQ31 A, LQ_UINT32_UQ31 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ31_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ31)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ31)tmp;
}
/**@brief 饱和算法:UINT32类型UQ30格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(3.999999999069)。\n
*          表达的小数精度:(0.000000000931)。\n
* @param[in] LQ_UINT32_UQ30     A              输入Q格式数
* @param[in] LQ_UINT32_UQ30     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ30_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ30格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ30_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ30 LQ_SATURATION_UINT32_UQ30_SUB(LQ_UINT32_UQ30 A, LQ_UINT32_UQ30 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ30_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ30)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ30)tmp;
}
/**@brief 饱和算法:UINT32类型UQ29格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(7.999999998137)。\n
*          表达的小数精度:(0.000000001863)。\n
* @param[in] LQ_UINT32_UQ29     A              输入Q格式数
* @param[in] LQ_UINT32_UQ29     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ29_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ29格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ29_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ29 LQ_SATURATION_UINT32_UQ29_SUB(LQ_UINT32_UQ29 A, LQ_UINT32_UQ29 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ29_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ29)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ29)tmp;
}
/**@brief 饱和算法:UINT32类型UQ28格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(15.999999996275)。\n
*          表达的小数精度:(0.000000003725)。\n
* @param[in] LQ_UINT32_UQ28     A              输入Q格式数
* @param[in] LQ_UINT32_UQ28     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ28_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ28格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ28_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ28 LQ_SATURATION_UINT32_UQ28_SUB(LQ_UINT32_UQ28 A, LQ_UINT32_UQ28 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ28_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ28)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ28)tmp;
}
/**@brief 饱和算法:UINT32类型UQ27格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(31.999999992549)。\n
*          表达的小数精度:(0.000000007451)。\n
* @param[in] LQ_UINT32_UQ27     A              输入Q格式数
* @param[in] LQ_UINT32_UQ27     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ27_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ27格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ27_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ27 LQ_SATURATION_UINT32_UQ27_SUB(LQ_UINT32_UQ27 A, LQ_UINT32_UQ27 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ27_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ27)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ27)tmp;
}
/**@brief 饱和算法:UINT32类型UQ26格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(63.999999985099)。\n
*          表达的小数精度:(0.000000014901)。\n
* @param[in] LQ_UINT32_UQ26     A              输入Q格式数
* @param[in] LQ_UINT32_UQ26     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ26_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ26格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ26_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ26 LQ_SATURATION_UINT32_UQ26_SUB(LQ_UINT32_UQ26 A, LQ_UINT32_UQ26 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ26_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ26)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ26)tmp;
}
/**@brief 饱和算法:UINT32类型UQ25格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(127.999999970198)。\n
*          表达的小数精度:(0.000000029802)。\n
* @param[in] LQ_UINT32_UQ25     A              输入Q格式数
* @param[in] LQ_UINT32_UQ25     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ25_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ25格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ25_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ25 LQ_SATURATION_UINT32_UQ25_SUB(LQ_UINT32_UQ25 A, LQ_UINT32_UQ25 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ25_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ25)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ25)tmp;
}
/**@brief 饱和算法:UINT32类型UQ24格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(255.999999940395)。\n
*          表达的小数精度:(0.000000059605)。\n
* @param[in] LQ_UINT32_UQ24     A              输入Q格式数
* @param[in] LQ_UINT32_UQ24     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ24_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ24格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ24_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ24 LQ_SATURATION_UINT32_UQ24_SUB(LQ_UINT32_UQ24 A, LQ_UINT32_UQ24 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ24_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ24)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ24)tmp;
}
/**@brief 饱和算法:UINT32类型UQ23格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(511.999999880791)。\n
*          表达的小数精度:(0.000000119209)。\n
* @param[in] LQ_UINT32_UQ23     A              输入Q格式数
* @param[in] LQ_UINT32_UQ23     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ23_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ23格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ23_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ23 LQ_SATURATION_UINT32_UQ23_SUB(LQ_UINT32_UQ23 A, LQ_UINT32_UQ23 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ23_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ23)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ23)tmp;
}
/**@brief 饱和算法:UINT32类型UQ22格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1023.999999761581)。\n
*          表达的小数精度:(0.000000238419)。\n
* @param[in] LQ_UINT32_UQ22     A              输入Q格式数
* @param[in] LQ_UINT32_UQ22     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ22_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ22格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ22_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ22 LQ_SATURATION_UINT32_UQ22_SUB(LQ_UINT32_UQ22 A, LQ_UINT32_UQ22 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ22_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ22)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ22)tmp;
}
/**@brief 饱和算法:UINT32类型UQ21格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2047.999999523163)。\n
*          表达的小数精度:(0.000000476837)。\n
* @param[in] LQ_UINT32_UQ21     A              输入Q格式数
* @param[in] LQ_UINT32_UQ21     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ21_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ21格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ21_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ21 LQ_SATURATION_UINT32_UQ21_SUB(LQ_UINT32_UQ21 A, LQ_UINT32_UQ21 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ21_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ21)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ21)tmp;
}
/**@brief 饱和算法:UINT32类型UQ20格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4095.999999046326)。\n
*          表达的小数精度:(0.000000953674)。\n
* @param[in] LQ_UINT32_UQ20     A              输入Q格式数
* @param[in] LQ_UINT32_UQ20     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ20_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ20格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ20_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ20 LQ_SATURATION_UINT32_UQ20_SUB(LQ_UINT32_UQ20 A, LQ_UINT32_UQ20 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ20_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ20)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ20)tmp;
}
/**@brief 饱和算法:UINT32类型UQ19格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8191.999998092651)。\n
*          表达的小数精度:(0.000001907349)。\n
* @param[in] LQ_UINT32_UQ19     A              输入Q格式数
* @param[in] LQ_UINT32_UQ19     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ19_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ19格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ19_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ19 LQ_SATURATION_UINT32_UQ19_SUB(LQ_UINT32_UQ19 A, LQ_UINT32_UQ19 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ19_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ19)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ19)tmp;
}
/**@brief 饱和算法:UINT32类型UQ18格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16383.999996185303)。\n
*          表达的小数精度:(0.000003814697)。\n
* @param[in] LQ_UINT32_UQ18     A              输入Q格式数
* @param[in] LQ_UINT32_UQ18     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ18_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ18格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ18_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ18 LQ_SATURATION_UINT32_UQ18_SUB(LQ_UINT32_UQ18 A, LQ_UINT32_UQ18 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ18_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ18)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ18)tmp;
}
/**@brief 饱和算法:UINT32类型UQ17格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(32767.999992370605)。\n
*          表达的小数精度:(0.000007629395)。\n
* @param[in] LQ_UINT32_UQ17     A              输入Q格式数
* @param[in] LQ_UINT32_UQ17     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ17_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ17格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ17_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ17 LQ_SATURATION_UINT32_UQ17_SUB(LQ_UINT32_UQ17 A, LQ_UINT32_UQ17 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ17_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ17)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ17)tmp;
}
/**@brief 饱和算法:UINT32类型UQ16格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(65535.999984741211)。\n
*          表达的小数精度:(0.000015258789)。\n
* @param[in] LQ_UINT32_UQ16     A              输入Q格式数
* @param[in] LQ_UINT32_UQ16     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ16_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ16格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ16_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ16 LQ_SATURATION_UINT32_UQ16_SUB(LQ_UINT32_UQ16 A, LQ_UINT32_UQ16 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ16_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ16)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ16)tmp;
}
/**@brief 饱和算法:UINT32类型UQ15格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(131071.999969482422)。\n
*          表达的小数精度:(0.000030517578)。\n
* @param[in] LQ_UINT32_UQ15     A              输入Q格式数
* @param[in] LQ_UINT32_UQ15     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ15_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ15格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ15_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ15 LQ_SATURATION_UINT32_UQ15_SUB(LQ_UINT32_UQ15 A, LQ_UINT32_UQ15 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ15_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ15)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ15)tmp;
}
/**@brief 饱和算法:UINT32类型UQ14格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(262143.999938964844)。\n
*          表达的小数精度:(0.000061035156)。\n
* @param[in] LQ_UINT32_UQ14     A              输入Q格式数
* @param[in] LQ_UINT32_UQ14     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ14_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ14格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ14_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ14 LQ_SATURATION_UINT32_UQ14_SUB(LQ_UINT32_UQ14 A, LQ_UINT32_UQ14 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ14_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ14)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ14)tmp;
}
/**@brief 饱和算法:UINT32类型UQ13格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(524287.999877929688)。\n
*          表达的小数精度:(0.000122070312)。\n
* @param[in] LQ_UINT32_UQ13     A              输入Q格式数
* @param[in] LQ_UINT32_UQ13     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ13_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ13格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ13_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ13 LQ_SATURATION_UINT32_UQ13_SUB(LQ_UINT32_UQ13 A, LQ_UINT32_UQ13 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ13_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ13)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ13)tmp;
}
/**@brief 饱和算法:UINT32类型UQ12格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1048575.999755859375)。\n
*          表达的小数精度:(0.000244140625)。\n
* @param[in] LQ_UINT32_UQ12     A              输入Q格式数
* @param[in] LQ_UINT32_UQ12     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ12_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ12格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ12_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ12 LQ_SATURATION_UINT32_UQ12_SUB(LQ_UINT32_UQ12 A, LQ_UINT32_UQ12 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ12_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ12)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ12)tmp;
}
/**@brief 饱和算法:UINT32类型UQ11格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2097151.999511718750)。\n
*          表达的小数精度:(0.000488281250)。\n
* @param[in] LQ_UINT32_UQ11     A              输入Q格式数
* @param[in] LQ_UINT32_UQ11     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ11_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ11格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ11_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ11 LQ_SATURATION_UINT32_UQ11_SUB(LQ_UINT32_UQ11 A, LQ_UINT32_UQ11 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ11_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ11)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ11)tmp;
}
/**@brief 饱和算法:UINT32类型UQ10格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(4194303.999023437500)。\n
*          表达的小数精度:(0.000976562500)。\n
* @param[in] LQ_UINT32_UQ10     A              输入Q格式数
* @param[in] LQ_UINT32_UQ10     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ10_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ10格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ10_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ10 LQ_SATURATION_UINT32_UQ10_SUB(LQ_UINT32_UQ10 A, LQ_UINT32_UQ10 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ10_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ10)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ10)tmp;
}
/**@brief 饱和算法:UINT32类型UQ9格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(8388607.998046875000)。\n
*          表达的小数精度:(0.001953125000)。\n
* @param[in] LQ_UINT32_UQ9     A              输入Q格式数
* @param[in] LQ_UINT32_UQ9     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ9_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ9格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ9_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ9 LQ_SATURATION_UINT32_UQ9_SUB(LQ_UINT32_UQ9 A, LQ_UINT32_UQ9 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ9_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ9)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ9)tmp;
}
/**@brief 饱和算法:UINT32类型UQ8格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(16777215.996093750000)。\n
*          表达的小数精度:(0.003906250000)。\n
* @param[in] LQ_UINT32_UQ8     A              输入Q格式数
* @param[in] LQ_UINT32_UQ8     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ8_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ8格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ8_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ8 LQ_SATURATION_UINT32_UQ8_SUB(LQ_UINT32_UQ8 A, LQ_UINT32_UQ8 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ8_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ8)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ8)tmp;
}
/**@brief 饱和算法:UINT32类型UQ7格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(33554431.992187500000)。\n
*          表达的小数精度:(0.007812500000)。\n
* @param[in] LQ_UINT32_UQ7     A              输入Q格式数
* @param[in] LQ_UINT32_UQ7     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ7_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ7格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ7_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ7 LQ_SATURATION_UINT32_UQ7_SUB(LQ_UINT32_UQ7 A, LQ_UINT32_UQ7 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ7_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ7)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ7)tmp;
}
/**@brief 饱和算法:UINT32类型UQ6格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(67108863.984375000000)。\n
*          表达的小数精度:(0.015625000000)。\n
* @param[in] LQ_UINT32_UQ6     A              输入Q格式数
* @param[in] LQ_UINT32_UQ6     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ6_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ6格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ6_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ6 LQ_SATURATION_UINT32_UQ6_SUB(LQ_UINT32_UQ6 A, LQ_UINT32_UQ6 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ6_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ6)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ6)tmp;
}
/**@brief 饱和算法:UINT32类型UQ5格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(134217727.968750000000)。\n
*          表达的小数精度:(0.031250000000)。\n
* @param[in] LQ_UINT32_UQ5     A              输入Q格式数
* @param[in] LQ_UINT32_UQ5     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ5_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ5格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ5_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ5 LQ_SATURATION_UINT32_UQ5_SUB(LQ_UINT32_UQ5 A, LQ_UINT32_UQ5 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ5_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ5)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ5)tmp;
}
/**@brief 饱和算法:UINT32类型UQ4格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(268435455.937500000000)。\n
*          表达的小数精度:(0.062500000000)。\n
* @param[in] LQ_UINT32_UQ4     A              输入Q格式数
* @param[in] LQ_UINT32_UQ4     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ4_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ4格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ4_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ4 LQ_SATURATION_UINT32_UQ4_SUB(LQ_UINT32_UQ4 A, LQ_UINT32_UQ4 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ4_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ4)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ4)tmp;
}
/**@brief 饱和算法:UINT32类型UQ3格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(536870911.875000000000)。\n
*          表达的小数精度:(0.125000000000)。\n
* @param[in] LQ_UINT32_UQ3     A              输入Q格式数
* @param[in] LQ_UINT32_UQ3     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ3_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ3格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ3_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ3 LQ_SATURATION_UINT32_UQ3_SUB(LQ_UINT32_UQ3 A, LQ_UINT32_UQ3 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ3_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ3)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ3)tmp;
}
/**@brief 饱和算法:UINT32类型UQ2格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(1073741823.750000000000)。\n
*          表达的小数精度:(0.250000000000)。\n
* @param[in] LQ_UINT32_UQ2     A              输入Q格式数
* @param[in] LQ_UINT32_UQ2     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ2_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ2格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ2_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ2 LQ_SATURATION_UINT32_UQ2_SUB(LQ_UINT32_UQ2 A, LQ_UINT32_UQ2 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ2_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ2)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ2)tmp;
}
/**@brief 饱和算法:UINT32类型UQ1格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
*          输入的浮点范围:(0)到(2147483647.500000000000)。\n
*          表达的小数精度:(0.500000000000)。\n
* @param[in] LQ_UINT32_UQ1     A              输入Q格式数
* @param[in] LQ_UINT32_UQ1     B              输入Q格式数
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ1_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ1格式减法中整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ1_SUB(A,B,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ31_SUB  饱和算法:UINT32的UQ31格式减法\n
*   LQ_SATURATION_UINT32_UQ30_SUB  饱和算法:UINT32的UQ30格式减法\n
*   LQ_SATURATION_UINT32_UQ29_SUB  饱和算法:UINT32的UQ29格式减法\n
*   LQ_SATURATION_UINT32_UQ28_SUB  饱和算法:UINT32的UQ28格式减法\n
*   LQ_SATURATION_UINT32_UQ27_SUB  饱和算法:UINT32的UQ27格式减法\n
*   LQ_SATURATION_UINT32_UQ26_SUB  饱和算法:UINT32的UQ26格式减法\n
*   LQ_SATURATION_UINT32_UQ25_SUB  饱和算法:UINT32的UQ25格式减法\n
*   LQ_SATURATION_UINT32_UQ24_SUB  饱和算法:UINT32的UQ24格式减法\n
*   LQ_SATURATION_UINT32_UQ23_SUB  饱和算法:UINT32的UQ23格式减法\n
*   LQ_SATURATION_UINT32_UQ22_SUB  饱和算法:UINT32的UQ22格式减法\n
*   LQ_SATURATION_UINT32_UQ21_SUB  饱和算法:UINT32的UQ21格式减法\n
*   LQ_SATURATION_UINT32_UQ20_SUB  饱和算法:UINT32的UQ20格式减法\n
*   LQ_SATURATION_UINT32_UQ19_SUB  饱和算法:UINT32的UQ19格式减法\n
*   LQ_SATURATION_UINT32_UQ18_SUB  饱和算法:UINT32的UQ18格式减法\n
*   LQ_SATURATION_UINT32_UQ17_SUB  饱和算法:UINT32的UQ17格式减法\n
*   LQ_SATURATION_UINT32_UQ16_SUB  饱和算法:UINT32的UQ16格式减法\n
*   LQ_SATURATION_UINT32_UQ15_SUB  饱和算法:UINT32的UQ15格式减法\n
*   LQ_SATURATION_UINT32_UQ14_SUB  饱和算法:UINT32的UQ14格式减法\n
*   LQ_SATURATION_UINT32_UQ13_SUB  饱和算法:UINT32的UQ13格式减法\n
*   LQ_SATURATION_UINT32_UQ12_SUB  饱和算法:UINT32的UQ12格式减法\n
*   LQ_SATURATION_UINT32_UQ11_SUB  饱和算法:UINT32的UQ11格式减法\n
*   LQ_SATURATION_UINT32_UQ10_SUB  饱和算法:UINT32的UQ10格式减法\n
*   LQ_SATURATION_UINT32_UQ9_SUB  饱和算法:UINT32的UQ9格式减法\n
*   LQ_SATURATION_UINT32_UQ8_SUB  饱和算法:UINT32的UQ8格式减法\n
*   LQ_SATURATION_UINT32_UQ7_SUB  饱和算法:UINT32的UQ7格式减法\n
*   LQ_SATURATION_UINT32_UQ6_SUB  饱和算法:UINT32的UQ6格式减法\n
*   LQ_SATURATION_UINT32_UQ5_SUB  饱和算法:UINT32的UQ5格式减法\n
*   LQ_SATURATION_UINT32_UQ4_SUB  饱和算法:UINT32的UQ4格式减法\n
*   LQ_SATURATION_UINT32_UQ3_SUB  饱和算法:UINT32的UQ3格式减法\n
*   LQ_SATURATION_UINT32_UQ2_SUB  饱和算法:UINT32的UQ2格式减法\n
*   LQ_SATURATION_UINT32_UQ1_SUB  饱和算法:UINT32的UQ1格式减法\n
*/
LQ_INLINE LQ_UINT32_UQ1 LQ_SATURATION_UINT32_UQ1_SUB(LQ_UINT32_UQ1 A, LQ_UINT32_UQ1 B, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    tmp = (LQ_I_64BIT)(A)-(LQ_I_64BIT)(B);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ1_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ1)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ1)tmp;
}
/**@brief 饱和算法:INT8类型Q格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_INT8_Q         A              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_A             输入Q格式值
* @param[in] LQ_INT8_Q         B              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT          Q_C             输入Q格式值
* @param[in] LQ_ERROR*         Lq_Error          错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT8_Q_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT8中Q格式减法中整形正 向溢出\n
*                        SATURATION_INT8_Q_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT8中Q格式减法中整形负 向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT8_Q_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT8_Q_SUB  饱和算法:INT8的Q格式减法\n
*/
LQ_INLINE LQ_INT8_Q LQ_SATURATION_INT8_Q_SUB(LQ_INT8_Q A, LQ_UI_8BIT Q_A, LQ_INT8_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    LQ_I_16BIT A_Buff;
    LQ_I_16BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_16BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_16BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_16BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_16BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_16BIT)(A_Buff)-(LQ_I_16BIT)(B_Buff);
    if (tmp > LQ_I_8BIT_MAX)
    {
        *Lq_Error = SATURATION_INT8_Q_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT8_Q)LQ_I_8BIT_MAX;
    }
    else if (tmp < LQ_I_8BIT_MIN)
    {
        *Lq_Error = SATURATION_INT8_Q_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT8_Q)LQ_I_8BIT_MIN;
    }
    return   (LQ_INT8_Q)tmp;
}
/**@brief 饱和算法:UINT8类型UQ格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_UINT8_UQ         A              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_A             输入Q格式值
* @param[in] LQ_UINT8_UQ         B              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT            Q_C             输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT8_UQ_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT8中UQ格式减法中整 形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT8_UQ_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT8_UQ_SUB  饱和算法:UINT8的UQ格式减法
*/
LQ_INLINE LQ_UINT8_UQ LQ_SATURATION_UINT8_UQ_SUB(LQ_UINT8_UQ A, LQ_UI_8BIT Q_A, LQ_UINT8_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_16BIT tmp;
    LQ_I_16BIT A_Buff;
    LQ_I_16BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_16BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_16BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_16BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_16BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_16BIT)(A_Buff)-(LQ_I_16BIT)(B_Buff);
    if (tmp < LQ_UI_8BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT8_UQ_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT8_UQ)LQ_UI_8BIT_MIN;
    }
    return   (LQ_UINT8_UQ)tmp;
}
/**@brief 饱和算法:INT16类型Q格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_INT16_Q         A              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_A             输入Q格式值
* @param[in] LQ_INT16_Q         B              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT          Q_C             输入Q格式值
* @param[in] LQ_ERROR*         Lq_Error          错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT16_Q_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT16中Q格式减法中整形 正向溢出\n
*                        SATURATION_INT16_Q_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT16中Q格式减法中整形 负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT16_Q_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT16_Q_SUB  饱和算法:INT16的Q格式减法\n
*/
LQ_INLINE LQ_INT16_Q LQ_SATURATION_INT16_Q_SUB(LQ_INT16_Q A, LQ_UI_8BIT Q_A, LQ_INT16_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    LQ_I_32BIT A_Buff;
    LQ_I_32BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_32BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_32BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_32BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_32BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_32BIT)(A_Buff)-(LQ_I_32BIT)(B_Buff);
    if (tmp > LQ_I_16BIT_MAX)
    {
        *Lq_Error = SATURATION_INT16_Q_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT16_Q)LQ_I_16BIT_MAX;
    }
    else if (tmp < LQ_I_16BIT_MIN)
    {
        *Lq_Error = SATURATION_INT16_Q_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT16_Q)LQ_I_16BIT_MIN;
    }
    return   (LQ_INT16_Q)tmp;
}
/**@brief 饱和算法:UINT16类型UQ格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_UINT16_UQ         A              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_A             输入Q格式值
* @param[in] LQ_UINT16_UQ         B              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT            Q_C             输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT16_UQ_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT16中UQ格式减法中 整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT16_UQ_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT16_UQ_SUB  饱和算法:UINT16的UQ格式减法
*/
LQ_INLINE LQ_UINT16_UQ LQ_SATURATION_UINT16_UQ_SUB(LQ_UINT16_UQ A, LQ_UI_8BIT Q_A, LQ_UINT16_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_32BIT tmp;
    LQ_I_32BIT A_Buff;
    LQ_I_32BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_32BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_32BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_32BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_32BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_32BIT)(A_Buff)-(LQ_I_32BIT)(B_Buff);
    if (tmp < LQ_UI_16BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT16_UQ_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT16_UQ)LQ_UI_16BIT_MIN;
    }
    return   (LQ_UINT16_UQ)tmp;
}
/**@brief 饱和算法:INT32类型Q格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_INT32_Q         A              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_A             输入Q格式值
* @param[in] LQ_INT32_Q         B              输入Q格式数
* @param[in] LQ_UI_8BIT          Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT          Q_C             输入Q格式值
* @param[in] LQ_ERROR*         Lq_Error          错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_INT32_Q_FORMAT_SUB_POSITIVE_OVER 在饱和算法INT32中Q格式减法中整形 正向溢出\n
*                        SATURATION_INT32_Q_FORMAT_SUB_NEGATIVE_OVER 在饱和算法INT32中Q格式减法中整形 负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_INT32_Q_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_INT32_Q_SUB  饱和算法:INT32的Q格式减法\n
*/
LQ_INLINE LQ_INT32_Q LQ_SATURATION_INT32_Q_SUB(LQ_INT32_Q A, LQ_UI_8BIT Q_A, LQ_INT32_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    LQ_I_64BIT A_Buff;
    LQ_I_64BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_64BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_64BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_64BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_64BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_64BIT)(A_Buff)-(LQ_I_64BIT)(B_Buff);
    if (tmp > LQ_I_32BIT_MAX)
    {
        *Lq_Error = SATURATION_INT32_Q_FORMAT_SUB_POSITIVE_OVER;
        return   (LQ_INT32_Q)LQ_I_32BIT_MAX;
    }
    else if (tmp < LQ_I_32BIT_MIN)
    {
        *Lq_Error = SATURATION_INT32_Q_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_INT32_Q)LQ_I_32BIT_MIN;
    }
    return   (LQ_INT32_Q)tmp;
}
/**@brief 饱和算法:UINT32类型UQ格式减法
* @details 能对减法运算进行检查。\n
*          饱和算法:如果待转换数值超出规定阈值则输出数据将会限制在最大最小值。\n
* @param[in] LQ_UINT32_UQ         A              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_A             输入Q格式值
* @param[in] LQ_UINT32_UQ         B              输入Q格式数
* @param[in] LQ_UI_8BIT            Q_B             输入Q格式值
* @param[in] LQ_UI_8BIT            Q_C             输入Q格式值
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    A-B的值
* @exception NSExceptio: SATURATION_UINT32_UQ_FORMAT_SUB_NEGATIVE_OVER 在饱和算法UINT32中UQ格式减法中 整形负向溢出
* @par       计算A-B的值
* @code
*    LQ_SATURATION_UINT32_UQ_SUB(A,Q_A,B,Q_B,Q_C,&Lq_Error);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无需更改
* @see :: LQ_SATURATION_UINT32_UQ_SUB  饱和算法:UINT32的UQ格式减法
*/
LQ_INLINE LQ_UINT32_UQ LQ_SATURATION_UINT32_UQ_SUB(LQ_UINT32_UQ A, LQ_UI_8BIT Q_A, LQ_UINT32_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error)
{
    LQ_I_64BIT tmp;
    LQ_I_64BIT A_Buff;
    LQ_I_64BIT B_Buff;
    if (Q_A > Q_C)
    {
        A_Buff = (LQ_I_64BIT)A >> (Q_A - Q_C);
    }
    else
    {
        A_Buff = (LQ_I_64BIT)A << (Q_C - Q_A);
    }
    if (Q_B > Q_C)
    {
        B_Buff = (LQ_I_64BIT)B >> (Q_B - Q_C);
    }
    else
    {
        B_Buff = (LQ_I_64BIT)B << (Q_C - Q_B);
    }
    tmp = (LQ_I_64BIT)(A_Buff)-(LQ_I_64BIT)(B_Buff);
    if (tmp < LQ_UI_32BIT_MIN)
    {
        *Lq_Error = SATURATION_UINT32_UQ_FORMAT_SUB_NEGATIVE_OVER;
        return   (LQ_UINT32_UQ)LQ_UI_32BIT_MIN;
    }
    return   (LQ_UINT32_UQ)tmp;
}
#endif

//!<饱和算法:Q格式类型减法 函数算法
#if LQ_SATURATION_Q_FORMAT_SUB_LOADING_MODE == 0
/****************************INT8 饱和算法 Q格式减法************************************/
//!<以INT8为基准有符号Q格式饱和减法(Q1到Q7)
LQ_INT8_Q7 LQ_SATURATION_INT8_Q7_SUB(LQ_INT8_Q7 A, LQ_INT8_Q7 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q6 LQ_SATURATION_INT8_Q6_SUB(LQ_INT8_Q6 A, LQ_INT8_Q6 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q5 LQ_SATURATION_INT8_Q5_SUB(LQ_INT8_Q5 A, LQ_INT8_Q5 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q4 LQ_SATURATION_INT8_Q4_SUB(LQ_INT8_Q4 A, LQ_INT8_Q4 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q3 LQ_SATURATION_INT8_Q3_SUB(LQ_INT8_Q3 A, LQ_INT8_Q3 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q2 LQ_SATURATION_INT8_Q2_SUB(LQ_INT8_Q2 A, LQ_INT8_Q2 B, LQ_ERROR* Lq_Error);
LQ_INT8_Q1 LQ_SATURATION_INT8_Q1_SUB(LQ_INT8_Q1 A, LQ_INT8_Q1 B, LQ_ERROR* Lq_Error);
/****************************UINT8 饱和算法 UQ格式减法************************************/
//!<以UINT8为基准无符号Q格式饱和减法(UQ1到UQ08)
LQ_UINT8_UQ8 LQ_SATURATION_UINT8_UQ8_SUB(LQ_UINT8_UQ8 A, LQ_UINT8_UQ8 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ7 LQ_SATURATION_UINT8_UQ7_SUB(LQ_UINT8_UQ7 A, LQ_UINT8_UQ7 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ6 LQ_SATURATION_UINT8_UQ6_SUB(LQ_UINT8_UQ6 A, LQ_UINT8_UQ6 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ5 LQ_SATURATION_UINT8_UQ5_SUB(LQ_UINT8_UQ5 A, LQ_UINT8_UQ5 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ4 LQ_SATURATION_UINT8_UQ4_SUB(LQ_UINT8_UQ4 A, LQ_UINT8_UQ4 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ3 LQ_SATURATION_UINT8_UQ3_SUB(LQ_UINT8_UQ3 A, LQ_UINT8_UQ3 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ2 LQ_SATURATION_UINT8_UQ2_SUB(LQ_UINT8_UQ2 A, LQ_UINT8_UQ2 B, LQ_ERROR* Lq_Error);
LQ_UINT8_UQ1 LQ_SATURATION_UINT8_UQ1_SUB(LQ_UINT8_UQ1 A, LQ_UINT8_UQ1 B, LQ_ERROR* Lq_Error);
/****************************INT16 饱和算法 Q格式减法************************************/
//!<以INT16为基准有符号Q格式饱和减法(Q1到Q15)
LQ_INT16_Q15 LQ_SATURATION_INT16_Q15_SUB(LQ_INT16_Q15 A, LQ_INT16_Q15 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q14 LQ_SATURATION_INT16_Q14_SUB(LQ_INT16_Q14 A, LQ_INT16_Q14 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q13 LQ_SATURATION_INT16_Q13_SUB(LQ_INT16_Q13 A, LQ_INT16_Q13 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q12 LQ_SATURATION_INT16_Q12_SUB(LQ_INT16_Q12 A, LQ_INT16_Q12 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q11 LQ_SATURATION_INT16_Q11_SUB(LQ_INT16_Q11 A, LQ_INT16_Q11 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q10 LQ_SATURATION_INT16_Q10_SUB(LQ_INT16_Q10 A, LQ_INT16_Q10 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q9 LQ_SATURATION_INT16_Q9_SUB(LQ_INT16_Q9 A, LQ_INT16_Q9 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q8 LQ_SATURATION_INT16_Q8_SUB(LQ_INT16_Q8 A, LQ_INT16_Q8 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q7 LQ_SATURATION_INT16_Q7_SUB(LQ_INT16_Q7 A, LQ_INT16_Q7 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q6 LQ_SATURATION_INT16_Q6_SUB(LQ_INT16_Q6 A, LQ_INT16_Q6 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q5 LQ_SATURATION_INT16_Q5_SUB(LQ_INT16_Q5 A, LQ_INT16_Q5 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q4 LQ_SATURATION_INT16_Q4_SUB(LQ_INT16_Q4 A, LQ_INT16_Q4 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q3 LQ_SATURATION_INT16_Q3_SUB(LQ_INT16_Q3 A, LQ_INT16_Q3 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q2 LQ_SATURATION_INT16_Q2_SUB(LQ_INT16_Q2 A, LQ_INT16_Q2 B, LQ_ERROR* Lq_Error);
LQ_INT16_Q1 LQ_SATURATION_INT16_Q1_SUB(LQ_INT16_Q1 A, LQ_INT16_Q1 B, LQ_ERROR* Lq_Error);
/****************************UINT16 饱和算法 UQ格式减法************************************/
//!<以UINT16为基准无符号Q格式饱和减法(UQ1到UQ16)
LQ_UINT16_UQ16 LQ_SATURATION_UINT16_UQ16_SUB(LQ_UINT16_UQ16 A, LQ_UINT16_UQ16 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ15 LQ_SATURATION_UINT16_UQ15_SUB(LQ_UINT16_UQ15 A, LQ_UINT16_UQ15 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ14 LQ_SATURATION_UINT16_UQ14_SUB(LQ_UINT16_UQ14 A, LQ_UINT16_UQ14 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ13 LQ_SATURATION_UINT16_UQ13_SUB(LQ_UINT16_UQ13 A, LQ_UINT16_UQ13 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ12 LQ_SATURATION_UINT16_UQ12_SUB(LQ_UINT16_UQ12 A, LQ_UINT16_UQ12 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ11 LQ_SATURATION_UINT16_UQ11_SUB(LQ_UINT16_UQ11 A, LQ_UINT16_UQ11 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ10 LQ_SATURATION_UINT16_UQ10_SUB(LQ_UINT16_UQ10 A, LQ_UINT16_UQ10 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ9 LQ_SATURATION_UINT16_UQ9_SUB(LQ_UINT16_UQ9 A, LQ_UINT16_UQ9 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ8 LQ_SATURATION_UINT16_UQ8_SUB(LQ_UINT16_UQ8 A, LQ_UINT16_UQ8 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ7 LQ_SATURATION_UINT16_UQ7_SUB(LQ_UINT16_UQ7 A, LQ_UINT16_UQ7 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ6 LQ_SATURATION_UINT16_UQ6_SUB(LQ_UINT16_UQ6 A, LQ_UINT16_UQ6 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ5 LQ_SATURATION_UINT16_UQ5_SUB(LQ_UINT16_UQ5 A, LQ_UINT16_UQ5 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ4 LQ_SATURATION_UINT16_UQ4_SUB(LQ_UINT16_UQ4 A, LQ_UINT16_UQ4 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ3 LQ_SATURATION_UINT16_UQ3_SUB(LQ_UINT16_UQ3 A, LQ_UINT16_UQ3 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ2 LQ_SATURATION_UINT16_UQ2_SUB(LQ_UINT16_UQ2 A, LQ_UINT16_UQ2 B, LQ_ERROR* Lq_Error);
LQ_UINT16_UQ1 LQ_SATURATION_UINT16_UQ1_SUB(LQ_UINT16_UQ1 A, LQ_UINT16_UQ1 B, LQ_ERROR* Lq_Error);
/****************************INT32 饱和算法 Q格式减法************************************/
//!<以INT32为基准有符号Q格式饱和减法(Q1到Q31)
LQ_INT32_Q31 LQ_SATURATION_INT32_Q31_SUB(LQ_INT32_Q31 A, LQ_INT32_Q31 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q30 LQ_SATURATION_INT32_Q30_SUB(LQ_INT32_Q30 A, LQ_INT32_Q30 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q29 LQ_SATURATION_INT32_Q29_SUB(LQ_INT32_Q29 A, LQ_INT32_Q29 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q28 LQ_SATURATION_INT32_Q28_SUB(LQ_INT32_Q28 A, LQ_INT32_Q28 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q27 LQ_SATURATION_INT32_Q27_SUB(LQ_INT32_Q27 A, LQ_INT32_Q27 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q26 LQ_SATURATION_INT32_Q26_SUB(LQ_INT32_Q26 A, LQ_INT32_Q26 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q25 LQ_SATURATION_INT32_Q25_SUB(LQ_INT32_Q25 A, LQ_INT32_Q25 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q24 LQ_SATURATION_INT32_Q24_SUB(LQ_INT32_Q24 A, LQ_INT32_Q24 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q23 LQ_SATURATION_INT32_Q23_SUB(LQ_INT32_Q23 A, LQ_INT32_Q23 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q22 LQ_SATURATION_INT32_Q22_SUB(LQ_INT32_Q22 A, LQ_INT32_Q22 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q21 LQ_SATURATION_INT32_Q21_SUB(LQ_INT32_Q21 A, LQ_INT32_Q21 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q20 LQ_SATURATION_INT32_Q20_SUB(LQ_INT32_Q20 A, LQ_INT32_Q20 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q19 LQ_SATURATION_INT32_Q19_SUB(LQ_INT32_Q19 A, LQ_INT32_Q19 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q18 LQ_SATURATION_INT32_Q18_SUB(LQ_INT32_Q18 A, LQ_INT32_Q18 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q17 LQ_SATURATION_INT32_Q17_SUB(LQ_INT32_Q17 A, LQ_INT32_Q17 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q16 LQ_SATURATION_INT32_Q16_SUB(LQ_INT32_Q16 A, LQ_INT32_Q16 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q15 LQ_SATURATION_INT32_Q15_SUB(LQ_INT32_Q15 A, LQ_INT32_Q15 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q14 LQ_SATURATION_INT32_Q14_SUB(LQ_INT32_Q14 A, LQ_INT32_Q14 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q13 LQ_SATURATION_INT32_Q13_SUB(LQ_INT32_Q13 A, LQ_INT32_Q13 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q12 LQ_SATURATION_INT32_Q12_SUB(LQ_INT32_Q12 A, LQ_INT32_Q12 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q11 LQ_SATURATION_INT32_Q11_SUB(LQ_INT32_Q11 A, LQ_INT32_Q11 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q10 LQ_SATURATION_INT32_Q10_SUB(LQ_INT32_Q10 A, LQ_INT32_Q10 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q9 LQ_SATURATION_INT32_Q9_SUB(LQ_INT32_Q9 A, LQ_INT32_Q9 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q8 LQ_SATURATION_INT32_Q8_SUB(LQ_INT32_Q8 A, LQ_INT32_Q8 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q7 LQ_SATURATION_INT32_Q7_SUB(LQ_INT32_Q7 A, LQ_INT32_Q7 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q6 LQ_SATURATION_INT32_Q6_SUB(LQ_INT32_Q6 A, LQ_INT32_Q6 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q5 LQ_SATURATION_INT32_Q5_SUB(LQ_INT32_Q5 A, LQ_INT32_Q5 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q4 LQ_SATURATION_INT32_Q4_SUB(LQ_INT32_Q4 A, LQ_INT32_Q4 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q3 LQ_SATURATION_INT32_Q3_SUB(LQ_INT32_Q3 A, LQ_INT32_Q3 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q2 LQ_SATURATION_INT32_Q2_SUB(LQ_INT32_Q2 A, LQ_INT32_Q2 B, LQ_ERROR* Lq_Error);
LQ_INT32_Q1 LQ_SATURATION_INT32_Q1_SUB(LQ_INT32_Q1 A, LQ_INT32_Q1 B, LQ_ERROR* Lq_Error);
/****************************UINT32 饱和算法 UQ格式减法************************************/
//!<以UINT32为基准无符号Q格式饱和减法(UQ1到UQ32)
LQ_UINT32_UQ32 LQ_SATURATION_UINT32_UQ32_SUB(LQ_UINT32_UQ32 A, LQ_UINT32_UQ32 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ31 LQ_SATURATION_UINT32_UQ31_SUB(LQ_UINT32_UQ31 A, LQ_UINT32_UQ31 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ30 LQ_SATURATION_UINT32_UQ30_SUB(LQ_UINT32_UQ30 A, LQ_UINT32_UQ30 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ29 LQ_SATURATION_UINT32_UQ29_SUB(LQ_UINT32_UQ29 A, LQ_UINT32_UQ29 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ28 LQ_SATURATION_UINT32_UQ28_SUB(LQ_UINT32_UQ28 A, LQ_UINT32_UQ28 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ27 LQ_SATURATION_UINT32_UQ27_SUB(LQ_UINT32_UQ27 A, LQ_UINT32_UQ27 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ26 LQ_SATURATION_UINT32_UQ26_SUB(LQ_UINT32_UQ26 A, LQ_UINT32_UQ26 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ25 LQ_SATURATION_UINT32_UQ25_SUB(LQ_UINT32_UQ25 A, LQ_UINT32_UQ25 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ24 LQ_SATURATION_UINT32_UQ24_SUB(LQ_UINT32_UQ24 A, LQ_UINT32_UQ24 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ23 LQ_SATURATION_UINT32_UQ23_SUB(LQ_UINT32_UQ23 A, LQ_UINT32_UQ23 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ22 LQ_SATURATION_UINT32_UQ22_SUB(LQ_UINT32_UQ22 A, LQ_UINT32_UQ22 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ21 LQ_SATURATION_UINT32_UQ21_SUB(LQ_UINT32_UQ21 A, LQ_UINT32_UQ21 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ20 LQ_SATURATION_UINT32_UQ20_SUB(LQ_UINT32_UQ20 A, LQ_UINT32_UQ20 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ19 LQ_SATURATION_UINT32_UQ19_SUB(LQ_UINT32_UQ19 A, LQ_UINT32_UQ19 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ18 LQ_SATURATION_UINT32_UQ18_SUB(LQ_UINT32_UQ18 A, LQ_UINT32_UQ18 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ17 LQ_SATURATION_UINT32_UQ17_SUB(LQ_UINT32_UQ17 A, LQ_UINT32_UQ17 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ16 LQ_SATURATION_UINT32_UQ16_SUB(LQ_UINT32_UQ16 A, LQ_UINT32_UQ16 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ15 LQ_SATURATION_UINT32_UQ15_SUB(LQ_UINT32_UQ15 A, LQ_UINT32_UQ15 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ14 LQ_SATURATION_UINT32_UQ14_SUB(LQ_UINT32_UQ14 A, LQ_UINT32_UQ14 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ13 LQ_SATURATION_UINT32_UQ13_SUB(LQ_UINT32_UQ13 A, LQ_UINT32_UQ13 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ12 LQ_SATURATION_UINT32_UQ12_SUB(LQ_UINT32_UQ12 A, LQ_UINT32_UQ12 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ11 LQ_SATURATION_UINT32_UQ11_SUB(LQ_UINT32_UQ11 A, LQ_UINT32_UQ11 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ10 LQ_SATURATION_UINT32_UQ10_SUB(LQ_UINT32_UQ10 A, LQ_UINT32_UQ10 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ9 LQ_SATURATION_UINT32_UQ9_SUB(LQ_UINT32_UQ9 A, LQ_UINT32_UQ9 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ8 LQ_SATURATION_UINT32_UQ8_SUB(LQ_UINT32_UQ8 A, LQ_UINT32_UQ8 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ7 LQ_SATURATION_UINT32_UQ7_SUB(LQ_UINT32_UQ7 A, LQ_UINT32_UQ7 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ6 LQ_SATURATION_UINT32_UQ6_SUB(LQ_UINT32_UQ6 A, LQ_UINT32_UQ6 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ5 LQ_SATURATION_UINT32_UQ5_SUB(LQ_UINT32_UQ5 A, LQ_UINT32_UQ5 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ4 LQ_SATURATION_UINT32_UQ4_SUB(LQ_UINT32_UQ4 A, LQ_UINT32_UQ4 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ3 LQ_SATURATION_UINT32_UQ3_SUB(LQ_UINT32_UQ3 A, LQ_UINT32_UQ3 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ2 LQ_SATURATION_UINT32_UQ2_SUB(LQ_UINT32_UQ2 A, LQ_UINT32_UQ2 B, LQ_ERROR* Lq_Error);
LQ_UINT32_UQ1 LQ_SATURATION_UINT32_UQ1_SUB(LQ_UINT32_UQ1 A, LQ_UINT32_UQ1 B, LQ_ERROR* Lq_Error);

/****************************INT8 饱和算法 减法(任意)************************************/
//!<以INT8为基准符号Q格式饱和减法(Q1到Q7)
LQ_INT8_Q LQ_SATURATION_INT8_Q_SUB(LQ_INT8_Q A, LQ_UI_8BIT Q_A, LQ_INT8_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
/****************************UINT8 饱和算法 减法(任意)************************************/
//!<以UINT8为基准无符号UQ格式饱和减法(UQ1到UQ8)
LQ_UINT8_UQ LQ_SATURATION_UINT8_UQ_SUB(LQ_UINT8_UQ A, LQ_UI_8BIT Q_A, LQ_UINT8_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
/****************************INT16 饱和算法 减法(任意)************************************/
//!<以INT16为基准符号Q格式饱和减法(Q1到Q15)
LQ_INT16_Q LQ_SATURATION_INT16_Q_SUB(LQ_INT16_Q A, LQ_UI_8BIT Q_A, LQ_INT16_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
/****************************UINT16 饱和算法 减法(任意)************************************/
//!<以UINT16为基准无符号UQ格式饱和减法(UQ1到UQ16)
LQ_UINT16_UQ LQ_SATURATION_UINT16_UQ_SUB(LQ_UINT16_UQ A, LQ_UI_8BIT Q_A, LQ_UINT16_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
/****************************INT32 饱和算法 减法(任意)************************************/
//!<以INT32为基准符号Q格式饱和减法(Q1到Q31)
LQ_INT32_Q LQ_SATURATION_INT32_Q_SUB(LQ_INT32_Q A, LQ_UI_8BIT Q_A, LQ_INT32_Q B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
/****************************UINT32 饱和算法 减法(任意)************************************/
//!<以UINT32为基准无符号UQ格式饱和减法(UQ1到UQ32)
LQ_UINT32_UQ LQ_SATURATION_UINT32_UQ_SUB(LQ_UINT32_UQ A, LQ_UI_8BIT Q_A, LQ_UINT32_UQ B, LQ_UI_8BIT Q_B, LQ_UI_8BIT Q_C, LQ_ERROR* Lq_Error);
#endif
#endif
