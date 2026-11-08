#ifndef __LFOC_PORT_H__
#define __LFOC_PORT_H__

/**@file      lfoc_port.h
* @brief      LFOC的接口核心文件(头文件)
* @details    运算中枢的管理核心
* @author     尹冠华
* @date       2026-1-27
* @version    V1.0
* @copyright    Copyright (c ) 2018-20226  黑龙江大学A8楼706
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* 仿真平台:只支持SIMULINK进行仿真验证\n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2026/01/27  <td>1.0      <td>尹冠华    <td>创建正式版本(发行版本)
* </table>
*
**********************************************************************************
*/
/*************************所引用的头文件*********************************/
#include "lfoc_error.h"             //!<LFOC存放错误信息的头文件
#include "lfoc_type.h"              //!<LFOC存放变量类型的头文件
#include "lfoc_math.h"              //!<LFOC存放统一模板数学库的头文件
#include "lfoc_malloc_port.h"       //!<LFOC存放空间管理的头文件
#include "lq_includes.h"            //!<LFOC引用定点运算库的头文件
/*************************对平台进行编码*********************************/
#define MCU                1                              //!<微控制器平台
#define MATLAB_SIMULINK    2                              //!<MATLAB仿真平台
/*************************SIMULINK仿真数据*********************************/
#define MATLAB_SIMULINK_DATA_LENGTH        1000           //!<MATLAB仿真平台数据长度
#define MATLAB_SIMULINK_LSE_DATA_LENGTH    100            //!<MATLAB仿真平台最小二乘法数据最大长度
#define MATLAB_SIMULINK_LSE_CASCADE_LENGTH 100            //!<MATLAB仿真平台最小二乘法级联最大数
/*************************对运算格式进行编码*********************************/
#define FLOAT_FORMAT       1                              //!<浮点运算格式
#define FLOAT_PU_FORMAT    2                              //!<浮点标幺运算格式
#define Q15_PU_FORMAT      3                              //!<Q15标幺运算格式
#define Q31_PU_FORMAT      4                              //!<Q31标幺运算格式
#define QfPLIB_FORMAT      5                              //!<QFPLIB浮点运算格式
#define QfPLIB_PU_FORMAT   6                              //!<QFPLIB库的浮点标幺运算格式
/*************************对日志输出进行编码*********************************/
#define LOG_O0_ENABLE               1                     //!<日志输出O0优化等级使能
#define LOG_O1_ENABLE               2                     //!<日志输出01优化等级使能
#define LOG_BUILT_IN_TEXT_PRINTF    1                     //!<日志输出内置文本
#define LOG_FAULT_CODE_PRINTF       0                     //!<日志输出故障码 
#define LOG_BUFF_DEPTH              32                    //!<环形缓冲区深度（单次待输出最大日志条数）
/*************************对内存分配进行编码*********************************/
#define MEM_MANAGE_LFOC             0                     //!<内存管理LFOC自带的
#define MEM_MANAGE_SYSTEM           1                     //!<内存管理系统本身的
/*************************预编译所选项*********************************/
#define LFOC_USE_PLATFORM        MATLAB_SIMULINK                      //!<选择所使用的平台
#define LFOC_GLOBAL_FORMAT       Q15_PU_FORMAT          //!<选择所使用的运算格式
#define LFOC_LOG_LEVEL           LOG_O0_ENABLE            //!<选择日志输出的优化等级
#define LFOC_LOG_PRINTF_MODE     LOG_BUILT_IN_TEXT_PRINTF //!<日志文本输出
#define LFOC_MEM_MANAGE_MODE     MEM_MANAGE_LFOC          //!<内存管理模式

#if LFOC_GLOBAL_FORMAT == FLOAT_FORMAT                    //!<浮点运算格式
/////////////////////////////////////定义全局变量类型/////////////////////////////////////
#define LFOC_GLOBAL__DATA_TYPE                                                                                  LFOC_F_32BIT                    //<! 全局变量数据格式
#define LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                                                          LFOC_UI_8BIT                    //<! 全局变量Q值数据格式
/////////////////////////////////////定义LittleFOC基本类型/////////////////////////////////////
//!<ADC原始数据类型
#define LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                   //!<电流ADC的数据格式
#define LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                   //!<电压ADC的数据格式
//!<ADC有符号数据类型
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                    //!<电流ADC的有符号数据格式
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                    //!<电压ADC的有符号数据格式
//!<ADC有符号数据类型最大值和最小值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX                                                             INT16_MAX                       //!<电流ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MAX                                                             INT16_MAX                       //!<电压ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MIN                                                             INT16_MIN                       //!<电流ADC的有符号数据格式最小值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MIN                                                             INT16_MIN                       //!<电压ADC的有符号数据格式最小值
//!<输入输出数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE                                                                       LFOC_GLOBAL__DATA_TYPE          //!<输入输出的数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE                                                               0                               //!<输入输出的q值
//!<无感数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE                                                               LFOC_GLOBAL__DATA_TYPE          //!<无感SIN COS数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE_Q_VALUE                                                       0                               //!<无感SIN COS数据类型Q值
//!<缓冲数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_DATA_TYPE                                                                  LFOC_GLOBAL__DATA_TYPE          //!<缓冲数据的数据类型（当出现大于输入和输出格式时启用）
#define LFOC_GLOBAL__FOQX_ARITHMETIC_Q_VALUE_DATA_TYPE                                                          LFOC_GLOBAL__Q_VALUE_DATA_TYPE  //!<缓冲数据的q值类型（当出现大于输入和输出格式时启用）
//!<SVPWM所用定时器数据类型
#define LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE                                                                       LFOC_UI_32BIT                   //!<定时器32位接口
//!<编码器所用定时器数据类型
#define LFOC_GLOBAL__ENCODER_TIME_DATA_TYPE                                                                     LFOC_UI_32BIT                   //!<定时器32位接口
//!<通用浮点数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE                                                         LFOC_F_32BIT                    //!<通用浮点数据类型
/////////////////////////////////////定义LittleFoc运算错误信息/////////////////////////////////////
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE                                                            int                             //!<数据运算错误的数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                                    0                               //!<数据运算成功标志
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE                                                   int                             //!<数据运算错误的数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                           0                               //!<数据运算成功标志
#define LFOC_GLOBAL__SIN_COS_DATA_TYPE                                                                          LFOC_F_32BIT                    //!<参与运算的SIN_COS数据类型
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MAX                                                                         0                               //!<此为定点运算饱和运算的最大值
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MIN                                                                         0                               //!<此为定点运算饱和运算的最小值
/////////////////////////////////////定义输入与输出数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                    A+B                             //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                    A-B                             //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                    A*B                             //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                    A/B                             //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                           A*B                             //<!< 输入输出数据的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                  A+B                             //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                  A-B                             //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                  A*B                             //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                         A*B                             //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                  A/B                             //<!< 输入输出数据的除法运算
/////////////////////////////////////定义全局变量的数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                               A+B                             //<!< 全局变量的加法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                               A-B                             //<!< 全局变量的减法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                               A*B                             //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                               A/B                             //<!< 全局变量的除法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                          A*B                             //<!< 全局变量的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                             A+B                             //<!< 全局变量的加法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                             A-B                             //<!< 全局变量的减法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                             A*B                             //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                             A/B                             //<!< 全局变量的除法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                        A*B                             //<!< 全局变量的乘法运算
/////////////////////////////////////常用浮点格式运算/////////////////////////////////////
#define LFOC_GLOBAL__GENERAL_FLOAT__ADD(A,B,ERR)                                                                A+B                             //<!< 全局浮点变量的加法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SUB(A,B,ERR)                                                                A-B                             //<!< 全局浮点变量的减法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__MUL(A,B,ERR)                                                                A*B                             //<!< 全局浮点变量的乘法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__DIV(A,B,ERR)                                                                A/B                             //<!< 全局浮点变量的除法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SQRT(A,ERR)                                                                (float)sqrt(A)                   //<!< 全局浮点变量的开根运算
#define LFOC_GLOBAL__GENERAL_FLOAT__EXP(A,ERR)                                                                 (float)exp(A)                    //<!< 全局浮点变量的开根运算
/////////////////////////////////////浮点转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                             A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                           A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                            A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                          A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////整形转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                               A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                             A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                              A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                            A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转浮点/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT(A,ERR)                                                        A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_FLOAT(A,Q_A,ERR)                                                       A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转整形/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_INT(A,ERR)                                                          A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_INT(A,Q_A,ERR)                                                         A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////Q格式转换/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                        A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                      A                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////数学库映射/////////////////////////////////////
//!<定义SIN COS运算所指定的Q格式
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SIN_COS(A,SIN,COS,ERR)                                                    SIN_COS(A,SIN,COS,ERR)           //!<具有标幺运算能力的cos运算 浮点类型直接进行cos运算
//!<定义开根算法
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SQRT(A,ERROR_RANGE,Lq_Error)                                              sqrt(A)                          //<!< 开根运算
#define LFOC_GLOBAL__GENERAL_FOQ__SQRT(A,Q_A,ERROR_RANGE,Lq_Error)                                             sqrt(A)                          //<!< 开根运算
//!<获取Q值
#define LFOC_GLOBAL__GENERAL_FOQ__FLOAT_TO_Q_VALUE_DATA_TYPE(A,EER)                                            1                                //<!< 获取Q值
//!<反正切运算
#define LFOC_GLOBAL__SENSORLESS_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                               ARCTAN2F(Dy,Dx,Lq_Error)         //<!< arctan2运算
#define LFOC_GLOBAL__IN_AND_OUT_FOQ_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                           ARCTAN2F(Dy,Dx,Lq_Error)         //<!< arctan2运算

#endif

#if LFOC_GLOBAL_FORMAT == FLOAT_PU_FORMAT                    //!<浮点运算格式
/////////////////////////////////////定义全局变量类型/////////////////////////////////////
#define LFOC_GLOBAL__DATA_TYPE                                                                                  LFOC_F_32BIT                  //<! 全局变量数据格式
#define LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                                                          LFOC_UI_8BIT                  //<! 全局变量Q值数据格式
/////////////////////////////////////定义LittleFOC基本类型/////////////////////////////////////
//!<ADC原始数据类型
#define LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                 //!<电流ADC的数据格式
#define LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                 //!<电压ADC的数据格式
//!<ADC有符号数据类型
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                  //!<电流ADC的有符号数据格式
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                  //!<电压ADC的有符号数据格式
//!<ADC有符号数据类型最大值和最小值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX                                                             INT16_MAX                     //!<电流ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MAX                                                             INT16_MAX                     //!<电压ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MIN                                                             INT16_MIN                     //!<电流ADC的有符号数据格式最小值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MIN                                                             INT16_MIN                     //!<电压ADC的有符号数据格式最小值
//!<输入输出数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE                                                                       LFOC_GLOBAL__DATA_TYPE        //!<输入输出的数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE                                                               0                             //!<输入输出的q值
//!<无感数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE                                                               LFOC_GLOBAL__DATA_TYPE        //!<无感SIN COS数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE_Q_VALUE                                                       0                             //!<无感SIN COS数据类型Q值
//!<缓冲数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_DATA_TYPE                                                                  LFOC_GLOBAL__DATA_TYPE        //!<缓冲数据的数据类型（当出现大于输入和输出格式时启用）
#define LFOC_GLOBAL__FOQX_ARITHMETIC_Q_VALUE_DATA_TYPE                                                          LFOC_GLOBAL__Q_VALUE_DATA_TYPE//!<缓冲数据的q值类型（当出现大于输入和输出格式时启用）
//!<SVPWM所用定时器数据类型
#define LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE                                                                       LFOC_UI_32BIT                 //!<定时器32位接口
//!<编码器所用定时器数据类型
#define LFOC_GLOBAL__ENCODER_TIME_DATA_TYPE                                                                     LFOC_UI_32BIT                 //!<定时器32位接口
//!<通用浮点数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE                                                         LFOC_F_32BIT                  //!<通用浮点数据类型
/////////////////////////////////////定义LittleFoc运算错误信息/////////////////////////////////////
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE                                                            int                           //!<数据运算错误的数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                                    0                             //!<数据运算成功标志
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE                                                   int                           //!<数据运算错误的数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                           0                             //!<数据运算成功标志
#define LFOC_GLOBAL__SIN_COS_DATA_TYPE                                                                          LFOC_F_32BIT                  //!<参与运算的SIN_COS数据类型
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MAX                                                                         0                             //!<此为定点运算饱和运算的最大值
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MIN                                                                         0                             //!<此为定点运算饱和运算的最小值
/////////////////////////////////////定义输入与输出数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                    A+B                           //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                    A-B                           //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                    A*B                           //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                    A/B                           //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                           A*B                           //<!< 输入输出数据的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                  A+B                           //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                  A-B                           //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                  A*B                           //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                         A*B                           //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                  A/B                           //<!< 输入输出数据的除法运算
/////////////////////////////////////定义全局变量的数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                               A+B                           //<!< 全局变量的加法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                               A-B                           //<!< 全局变量的减法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                               A*B                           //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                               A/B                           //<!< 全局变量的除法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                          A*B                           //<!< 全局变量的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                             A+B                           //<!< 全局变量的加法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                             A-B                           //<!< 全局变量的减法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                             A*B                           //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                             A/B                           //<!< 全局变量的除法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                        A*B                           //<!< 全局变量的乘法运算
/////////////////////////////////////常用浮点格式运算/////////////////////////////////////
#define LFOC_GLOBAL__GENERAL_FLOAT__ADD(A,B,ERR)                                                                A+B                           //<!< 全局浮点变量的加法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SUB(A,B,ERR)                                                                A-B                           //<!< 全局浮点变量的减法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__MUL(A,B,ERR)                                                                A*B                           //<!< 全局浮点变量的乘法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__DIV(A,B,ERR)                                                                A/B                           //<!< 全局浮点变量的除法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SQRT(A,ERR)                                                                (float)sqrt(A)                 //<!< 全局浮点变量的开根运算
#define LFOC_GLOBAL__GENERAL_FLOAT__EXP(A,ERR)                                                                 (float)exp(A)                  //<!< 全局浮点变量的开根运算
/////////////////////////////////////浮点转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                             A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                           A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                            A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                          A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////整形转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                               A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                             A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                              A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                            A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转浮点/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT(A,ERR)                                                        A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_FLOAT(A,Q_A,ERR)                                                       A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转整形/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_INT(A,ERR)                                                          A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_INT(A,Q_A,ERR)                                                         A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////Q格式转换/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                        A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                      A                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////数学库映射/////////////////////////////////////
//!<定义SIN COS运算所指定的Q格式
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SIN_COS(A,SIN,COS,ERR)                                                    SIN_COS_PU(A,SIN,COS,ERR)      //!<具有标幺运算能力的cos运算 浮点类型直接进行cos运算
//!<定义开根算法
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SQRT(A,ERROR_RANGE,Lq_Error)                                              sqrt(A)                        //<!< 开根运算
#define LFOC_GLOBAL__GENERAL_FOQ__SQRT(A,Q_A,ERROR_RANGE,Lq_Error)                                             sqrt(A)                        //<!< 开根运算
//!<获取Q值
#define LFOC_GLOBAL__GENERAL_FOQ__FLOAT_TO_Q_VALUE_DATA_TYPE(A,EER)                                            1                              //<!< 获取Q值
//!<反正切运算
#define LFOC_GLOBAL__SENSORLESS_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                               ARCTAN2F_PU(Dy,Dx,Lq_Error)    //<!< arctan2运算
#define LFOC_GLOBAL__IN_AND_OUT_FOQ_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                           ARCTAN2F_PU(Dy,Dx,Lq_Error)    //<!< arctan2运算

#endif

#if LFOC_GLOBAL_FORMAT == Q15_PU_FORMAT                    //!<浮点运算格式
/////////////////////////////////////定义全局变量类型/////////////////////////////////////
#define LFOC_GLOBAL__DATA_TYPE                                                                                  LQ_INT16_Q                                                              //<! 全局变量数据格式
#define LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                                                          LFOC_UI_8BIT                                                            //<! 全局变量Q值数据格式
/////////////////////////////////////定义LittleFOC基本类型/////////////////////////////////////
//!<ADC原始数据类型
#define LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                                                           //!<电流ADC的数据格式
#define LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                                                           //!<电压ADC的数据格式
//!<ADC有符号数据类型
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                                                            //!<电流ADC的有符号数据格式
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                                                            //!<电压ADC的有符号数据格式
//!<ADC有符号数据类型最大值和最小值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX                                                             INT16_MAX                                                               //!<电流ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MAX                                                             INT16_MAX                                                               //!<电压ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MIN                                                             INT16_MIN                                                               //!<电流ADC的有符号数据格式最小值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MIN                                                             INT16_MIN                                                               //!<电压ADC的有符号数据格式最小值
//!<输入输出数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE                                                                       LFOC_GLOBAL__DATA_TYPE                                                  //!<输入输出的数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE                                                               15                                                                      //!<输入输出的q值
//!<无感数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE                                                               LFOC_GLOBAL__DATA_TYPE                                                  //!<无感SIN COS数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE_Q_VALUE                                                       14                                                                      //!<无感SIN COS数据类型Q值
//!<缓冲数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_DATA_TYPE                                                                  LFOC_GLOBAL__DATA_TYPE                                                  //!<缓冲数据的数据类型（当出现大于输入和输出格式时启用）
#define LFOC_GLOBAL__FOQX_ARITHMETIC_Q_VALUE_DATA_TYPE                                                          LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                          //!<缓冲数据的q值类型（当出现大于输入和输出格式时启用）
//!<SVPWM所用定时器数据类型
#define LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE                                                                       LFOC_UI_32BIT                                                           //!<定时器32位接口
//!<编码器所用定时器数据类型
#define LFOC_GLOBAL__ENCODER_TIME_DATA_TYPE                                                                     LFOC_UI_32BIT                                                           //!<定时器32位接口
//!<通用浮点数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE                                                         LFOC_F_32BIT                                                            //!<通用浮点数据类型
/////////////////////////////////////定义LittleFoc运算错误信息/////////////////////////////////////
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE                                                            LQ_ERROR                                                                //!<数据运算错误的数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                                    LQ_SUCCESS                                                              //!<数据运算成功标志
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE                                                   int                                                                     //!<数据运算错误的数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                           0                                                                       //!<数据运算成功标志
#define LFOC_GLOBAL__SIN_COS_DATA_TYPE                                                                          LQ_INT16_Q                                                              //!<参与运算的SIN_COS数据类型
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MAX                                                                         LQ_I_16BIT_MAX                                                          //!<此为定点运算饱和运算的最大值
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MIN                                                                         LQ_I_16BIT_MIN                                                          //!<此为定点运算饱和运算的最小值
/////////////////////////////////////定义输入与输出数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                    LQ_SATURATION_INT16_Q15_ADD(A,B,ERR)                                    //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                    LQ_SATURATION_INT16_Q15_SUB(A,B,ERR)                                    //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                    LQ_SATURATION_INT16_Q15_MUL(A,B,ERR)                                    //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                    LQ_SATURATION_INT16_Q15_DIV(A,B,ERR)                                    //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                           LQ_SATURATION_INT16_Q_MUL(A,Q_A,B,Q_B,15,ERR)                           //<!< 输入输出数据的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                  LQ_UNSATURATION_INT16_Q15_ADD(A,B,ERR)                                  //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                  LQ_UNSATURATION_INT16_Q15_SUB(A,B,ERR)                                  //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                  LQ_UNSATURATION_INT16_Q15_MUL(A,B,ERR)                                  //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                  LQ_UNSATURATION_INT16_Q15_DIV(A,B,ERR)                                  //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                         LQ_UNSATURATION_INT16_Q_MUL(A,Q_A,B,Q_B,15,ERR)                         //<!< 输入输出数据的乘法运算
/////////////////////////////////////定义全局变量的数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT16_Q_ADD(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的加法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT16_Q_SUB(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的减法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT16_Q_MUL(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT16_Q_DIV(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的除法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                          LQ_SATURATION_INT16_Q_MUL(A,Q_A,B,Q_B,Q_C,ERR)                          //<!< 全局变量的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT16_Q_ADD(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的加法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT16_Q_SUB(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的减法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT16_Q_MUL(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT16_Q_DIV(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的除法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                        LQ_UNSATURATION_INT16_Q_MUL(A,Q_A,B,Q_B,Q_C,ERR)                        //<!< 全局变量的乘法运算
/////////////////////////////////////常用浮点格式运算/////////////////////////////////////
#define LFOC_GLOBAL__GENERAL_FLOAT__ADD(A,B,ERR)                                                                A+B                                                                     //<!< 全局浮点变量的加法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SUB(A,B,ERR)                                                                A-B                                                                     //<!< 全局浮点变量的减法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__MUL(A,B,ERR)                                                                A*B                                                                     //<!< 全局浮点变量的乘法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__DIV(A,B,ERR)                                                                A/B                                                                     //<!< 全局浮点变量的除法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SQRT(A,ERR)                                                                (float)sqrt(A)                                                           //<!< 全局浮点变量的开根运算
#define LFOC_GLOBAL__GENERAL_FLOAT__EXP(A,ERR)                                                                 (float)exp(A)                                                            //<!< 全局浮点变量的开根运算
/////////////////////////////////////浮点转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                             LQ_SATURATION_INT16_FLOAT_TO_Q15(A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                           LQ_UNSATURATION_INT16_FLOAT_TO_Q15(A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                            LQ_SATURATION_INT16_FLOAT_TO_Q(A,Q_A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                          LQ_UNSATURATION_INT16_FLOAT_TO_Q(A,Q_A,ERR)                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////整形转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                               LQ_SATURATION_INT16_INT_TO_Q15(A,ERR)                                   //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                             LQ_UNSATURATION_INT16_INT_TO_Q15(A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                              LQ_SATURATION_INT16_INT_TO_Q(A,Q_A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                            LQ_UNSATURATION_INT16_INT_TO_Q(A,Q_A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转浮点/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT(A,ERR)                                                        LQ_INT16_Q15_TO_FLOAT(A,ERR)                                            //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_FLOAT(A,Q_A,ERR)                                                       LQ_INT16_Q_FORMAT_TO_FLOAT(A,Q_A,ERR)                                   //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转整形/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_INT(A,ERR)                                                          LQ_INT16_Q15_TO_INT(A,ERR)                                              //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_INT(A,Q_A,ERR)                                                         LQ_INT16_Q_FORMAT_TO_INT(A,Q_A,ERR)                                     //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////Q格式转换/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                        LQ_SATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,EER)                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                      LQ_UNSATURATION_INT16_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,EER)               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////数学库映射/////////////////////////////////////
//!<定义SIN COS运算所指定的Q格式
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SIN_COS(A,SIN,COS,ERR)                                                     LQ_INT16_Q15_SIN_COS_PU_14_CORDIC_DEPTH(A,SIN,COS,ERR)                  //!<具有标幺运算能力的cos运算 浮点类型直接进行cos运算
//!<定义开根算法
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SQRT(A,ERROR_RANGE,Lq_Error)                                               LQ_INT16_Q15_SQRT_NEWTON_ITERATION(A,ERROR_RANGE,Lq_Error)              //<!< 开根运算
#define LFOC_GLOBAL__GENERAL_FOQ__SQRT(A,Q_A,ERROR_RANGE,Lq_Error)                                              LQ_INT16_Q_SQRT_NEWTON_ITERATION(A,Q_A,ERROR_RANGE,Lq_Error)            //<!< 开根运算
//!<获取Q值
#define LFOC_GLOBAL__GENERAL_FOQ__FLOAT_TO_Q_VALUE_DATA_TYPE(A,EER)                                             LQ_INT16_Q_FLOAT_TO_Q_VALUE_TYPE(A)                                     //<!< 获取Q值
//!<反正切运算
#define LFOC_GLOBAL__SENSORLESS_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                                LQ_INT16_Q14_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,Lq_Error)               //<!< arctan2运算
#define LFOC_GLOBAL__IN_AND_OUT_FOQ_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                            LQ_INT16_Q15_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,Lq_Error)               //<!< arctan2运算

#endif

#if LFOC_GLOBAL_FORMAT == Q31_PU_FORMAT                    //!<浮点运算格式
/////////////////////////////////////定义全局变量类型/////////////////////////////////////
#define LFOC_GLOBAL__DATA_TYPE                                                                                  LQ_INT32_Q                                                              //<! 全局变量数据格式
#define LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                                                          LFOC_UI_8BIT                                                            //<! 全局变量Q值数据格式
/////////////////////////////////////定义LittleFOC基本类型/////////////////////////////////////
//!<ADC原始数据类型
#define LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                                                           //!<电流ADC的数据格式
#define LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE                                                                      LFOC_UI_16BIT                                                           //!<电压ADC的数据格式
//!<ADC有符号数据类型
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                                                            //!<电流ADC的有符号数据格式
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE                                                                 LFOC_I_16BIT                                                            //!<电压ADC的有符号数据格式
//!<ADC有符号数据类型最大值和最小值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX                                                             INT16_MAX                                                               //!<电流ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MAX                                                             INT16_MAX                                                               //!<电压ADC的有符号数据格式最大值
#define LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MIN                                                             INT16_MIN                                                               //!<电流ADC的有符号数据格式最小值
#define LFOC_GLOBAL__SIGN_VOLTAGE_ADC_DATA_TYPE_MIN                                                             INT16_MIN                                                               //!<电压ADC的有符号数据格式最小值
//!<输入输出数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE                                                                       LFOC_GLOBAL__DATA_TYPE                                                  //!<输入输出的数据类型
#define LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE                                                               31                                                                      //!<输入输出的q值
//!<无感数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE                                                               LFOC_GLOBAL__DATA_TYPE                                                  //!<无感SIN COS数据类型
#define LFOC_GLOBAL__SENSORLESS_SIN_COS_DATA_TYPE_Q_VALUE                                                       30                                                                      //!<无感SIN COS数据类型Q值
//!<缓冲数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_DATA_TYPE                                                                  LFOC_GLOBAL__DATA_TYPE                                                  //!<缓冲数据的数据类型（当出现大于输入和输出格式时启用）
#define LFOC_GLOBAL__FOQX_ARITHMETIC_Q_VALUE_DATA_TYPE                                                          LFOC_GLOBAL__Q_VALUE_DATA_TYPE                                          //!<缓冲数据的q值类型（当出现大于输入和输出格式时启用）
//!<SVPWM所用定时器数据类型
#define LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE                                                                       LFOC_UI_32BIT                                                           //!<定时器32位接口
//!<编码器所用定时器数据类型
#define LFOC_GLOBAL__ENCODER_TIME_DATA_TYPE                                                                     LFOC_UI_32BIT                                                           //!<定时器32位接口
//!<通用浮点数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE                                                         LFOC_F_32BIT                                                            //!<通用浮点数据类型
/////////////////////////////////////定义LittleFoc运算错误信息/////////////////////////////////////
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE                                                            LQ_ERROR                                                                //!<数据运算错误的数据类型
#define LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                                    LQ_SUCCESS                                                              //!<数据运算成功标志
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE                                                   int                                                                     //!<数据运算错误的数据类型
#define LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS                                           0                                                                       //!<数据运算成功标志
#define LFOC_GLOBAL__SIN_COS_DATA_TYPE                                                                          LQ_INT16_Q                                                              //!<参与运算的SIN_COS数据类型
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MAX                                                                         LQ_I_32BIT_MAX                                                          //!<此为定点运算饱和运算的最大值
#define LFOC_GLOBAL__FOQX_DATA_TYPE_MIN                                                                         LQ_I_32BIT_MIN                                                          //!<此为定点运算饱和运算的最小值
/////////////////////////////////////定义输入与输出数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                    LQ_SATURATION_INT32_Q31_ADD(A,B,ERR)                                    //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                    LQ_SATURATION_INT32_Q31_SUB(A,B,ERR)                                    //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                    LQ_SATURATION_INT32_Q31_MUL(A,B,ERR)                                    //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                    LQ_SATURATION_INT32_Q31_DIV(A,B,ERR)                                    //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                           LQ_SATURATION_INT32_Q_MUL(A,Q_A,B,Q_B,31,ERR)                           //<!< 输入输出数据的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__ADD(A,B,ERR)                                                  LQ_UNSATURATION_INT32_Q31_ADD(A,B,ERR)                                  //<!< 输入输出数据的加法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__SUB(A,B,ERR)                                                  LQ_UNSATURATION_INT32_Q31_SUB(A,B,ERR)                                  //<!< 输入输出数据的减法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__MUL(A,B,ERR)                                                  LQ_UNSATURATION_INT32_Q31_MUL(A,B,ERR)                                  //<!< 输入输出数据的乘法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__DIV(A,B,ERR)                                                  LQ_UNSATURATION_INT32_Q31_DIV(A,B,ERR)                                  //<!< 输入输出数据的除法运算
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__XMUL(A,Q_A,B,Q_B,ERR)                                         LQ_UNSATURATION_INT32_Q_MUL(A,Q_A,B,Q_B,31,ERR)                         //<!< 输入输出数据的乘法运算
/////////////////////////////////////定义全局变量的数据运算操作/////////////////////////////////////
//!<映射饱和运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT32_Q_ADD(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的加法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT32_Q_SUB(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的减法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT32_Q_MUL(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                               LQ_SATURATION_INT32_Q_DIV(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)              //<!< 全局变量的除法运算
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                          LQ_SATURATION_INT32_Q_MUL(A,Q_A,B,Q_B,Q_C,ERR)                          //<!< 全局变量的乘法运算
//!<映射不饱和运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__ADD(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT32_Q_ADD(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的加法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__SUB(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT32_Q_SUB(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的减法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__MUL(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT32_Q_MUL(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的乘法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__DIV(A,B,Q_VALUE,ERR)                                             LQ_UNSATURATION_INT32_Q_DIV(A,Q_VALUE,B,Q_VALUE,Q_VALUE,ERR)            //<!< 全局变量的除法运算
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__XMUL(A,Q_A,B,Q_B,Q_C,ERR)                                        LQ_UNSATURATION_INT32_Q_MUL(A,Q_A,B,Q_B,Q_C,ERR)                        //<!< 全局变量的乘法运算
/////////////////////////////////////常用浮点格式运算/////////////////////////////////////
#define LFOC_GLOBAL__GENERAL_FLOAT__ADD(A,B,ERR)                                                                A+B                                                                     //<!< 全局浮点变量的加法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SUB(A,B,ERR)                                                                A-B                                                                     //<!< 全局浮点变量的减法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__MUL(A,B,ERR)                                                                A*B                                                                     //<!< 全局浮点变量的乘法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__DIV(A,B,ERR)                                                                A/B                                                                     //<!< 全局浮点变量的除法运算
#define LFOC_GLOBAL__GENERAL_FLOAT__SQRT(A,ERR)                                                                (float)sqrt(A)                                                           //<!< 全局浮点变量的开根运算
#define LFOC_GLOBAL__GENERAL_FLOAT__EXP(A,ERR)                                                                 (float)exp(A)                                                            //<!< 全局浮点变量的开根运算
/////////////////////////////////////浮点转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                             LQ_SATURATION_INT32_FLOAT_TO_Q31(A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ(A,ERR)                                           LQ_UNSATURATION_INT32_FLOAT_TO_Q31(A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                            LQ_SATURATION_INT32_FLOAT_TO_Q(A,Q_A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FLOAT_TO_FOQ(A,Q_A,ERR)                                          LQ_UNSATURATION_INT32_FLOAT_TO_Q(A,Q_A,ERR)                             //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////整形转Q格式/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                               LQ_SATURATION_INT32_INT_TO_Q31(A,ERR)                                   //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__INT_TO_FOQ(A,ERR)                                             LQ_UNSATURATION_INT32_INT_TO_Q31(A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                              LQ_SATURATION_INT32_INT_TO_Q(A,Q_A,ERR)                                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__INT_TO_FOQ(A,Q_A,ERR)                                            LQ_UNSATURATION_INT32_INT_TO_Q(A,Q_A,ERR)                               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转浮点/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT(A,ERR)                                                        LQ_INT32_Q31_TO_FLOAT(A,ERR)                                            //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_FLOAT(A,Q_A,ERR)                                                       LQ_INT32_Q_FORMAT_TO_FLOAT(A,Q_A,ERR)                                   //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////定义Q格式转整形/////////////////////////////////////
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_INT(A,ERR)                                                          LQ_INT32_Q31_TO_INT(A,ERR)                                              //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__GENERAL_FOQ__FOQ_TO_INT(A,Q_A,ERR)                                                         LQ_INT32_Q_FORMAT_TO_INT(A,Q_A,ERR)                                     //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////Q格式转换/////////////////////////////////////
#define LFOC_GLOBAL__SATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                        LQ_SATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,EER)                 //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
#define LFOC_GLOBAL__UNSATURATION_GENERAL_FOQ__FOQX_TO_FOQX(A,Q_A,Q_B,EER)                                      LQ_UNSATURATION_INT32_Q_FORMAT_TO_Q_FORMAT(A,Q_A,Q_B,EER)               //<!< 针对Q格式的运算、如果使用浮点型运算则不需要进行任何操作
/////////////////////////////////////数学库映射/////////////////////////////////////
//!<定义SIN COS运算所指定的Q格式
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SIN_COS(A,SIN,COS,ERR)                                                     LQ_INT32_Q31_SIN_COS_PU_14_CORDIC_DEPTH(A,SIN,COS,ERR)                  //!<具有标幺运算能力的cos运算 浮点类型直接进行cos运算
//!<定义开根算法
#define LFOC_GLOBAL__IN_AND_OUT_FOQ__SQRT(A,ERROR_RANGE,Lq_Error)                                               LQ_INT32_Q31_SQRT_NEWTON_ITERATION(A,ERROR_RANGE,Lq_Error)              //<!< 开根运算
#define LFOC_GLOBAL__GENERAL_FOQ__SQRT(A,Q_A,ERROR_RANGE,Lq_Error)                                              LQ_INT32_Q_SQRT_NEWTON_ITERATION(A,Q_A,ERROR_RANGE,Lq_Error)            //<!< 开根运算
//!<获取Q值
#define LFOC_GLOBAL__GENERAL_FOQ__FLOAT_TO_Q_VALUE_DATA_TYPE(A,EER)                                             LQ_INT32_Q_FLOAT_TO_Q_VALUE_TYPE(A)                                     //<!< 获取Q值
//!<反正切运算
#define LFOC_GLOBAL__SENSORLESS_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                                LQ_INT32_Q30_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,Lq_Error)               //<!< arctan2运算
#define LFOC_GLOBAL__IN_AND_OUT_FOQ_SIN_COS__ARCTAN2(Dy,Dx,Lq_Error)                                            LQ_INT32_Q31_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,Lq_Error)               //<!< arctan2运算

#endif


/////////////////////////////////////定义全局常系数声明/////////////////////////////////////
#define LFOC_GLOBAL__FLOAT__1_DIV_60                                                                           (0.01666666666666666666666666666667f)
#define LFOC_GLOBAL__FLOAT__1_DIV_SQRT3                                                                        (0.57735026918962576450914878050196f)
#define LFOC_GLOBAL__FLOAT__2                                                                                  (2.0f)
#define LFOC_GLOBAL__FLOAT__3                                                                                  (3.0f)
#define LFOC_GLOBAL__FLOAT__30_DIV_PI                                                                          (9.5492965855137201461330258023509f)
#define LFOC_GLOBAL__FLOAT__2_MUL_PI                                                                           (6.283185307179586476925286766559f)
#define LFOC_GLOBAL__FLOAT__1                                                                                  (1.0f)
#define LFOC_GLOBAL__FLOAT__PI                                                                                 (3.1415926535897932384626433832795f)
#if    LFOC_GLOBAL_FORMAT == FLOAT_FORMAT

#elif  LFOC_GLOBAL_FORMAT == FLOAT_PU_FORMAT

#elif  LFOC_GLOBAL_FORMAT == Q15_PU_FORMAT

#elif  LFOC_GLOBAL_FORMAT == Q31_PU_FORMAT

#endif
/////////////////////////////////////定点和标幺情况全局声明/////////////////////////////////////
#if LFOC_GLOBAL_FORMAT == FLOAT_FORMAT
#define LFOC_PU_ENABLE               0                               //<!< 是否启用标幺制
#define LFOC_Q_ENABLE                0                               //<!< 是否启用Q格式
#endif

#if LFOC_GLOBAL_FORMAT == FLOAT_PU_FORMAT
#define LFOC_PU_ENABLE               1                               //<!< 是否启用标幺制
#define LFOC_Q_ENABLE                0                               //<!< 是否启用Q格式
#endif

#if LFOC_GLOBAL_FORMAT == Q15_PU_FORMAT
#define LFOC_PU_ENABLE               1                               //<!< 是否启用标幺制
#define LFOC_Q_ENABLE                1                               //<!< 是否启用Q格式
#endif

#if LFOC_GLOBAL_FORMAT == Q31_PU_FORMAT
#define LFOC_PU_ENABLE               1                               //<!< 是否启用标幺制
#define LFOC_Q_ENABLE                1                               //<!< 是否启用Q格式
#endif






//!<映射开辟空间函数
#define LFOC_GLOBAL__FLOAT__MALLOC(HEAD,SIZE)                                                           __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_F_32BIT))
#define LFOC_GLOBAL__FLOAT__FREE(HEAD)                                                                  __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__FLOAT__REALLOC(HEAD,SIZE)                                                          __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_F_32BIT))
#define LFOC_GLOBAL__FLOAT__MEMSET(HEAD,VALUE,SIZE)                                                     __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_F_32BIT))

#define LFOC_GLOBAL__FOQ__MALLOC(HEAD,SIZE)                                                             __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__DATA_TYPE))
#define LFOC_GLOBAL__FOQ__FREE(HEAD)                                                                    __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__FOQ__REALLOC(HEAD,SIZE)                                                            __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__DATA_TYPE))
#define LFOC_GLOBAL__FOQ__MEMSET(HEAD,VALUE,SIZE)                                                       __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__DATA_TYPE))

#define LFOC_GLOBAL__SVPWM_TIME__MALLOC(HEAD,SIZE)                                                      __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE))
#define LFOC_GLOBAL__SVPWM_TIME__FREE(HEAD)                                                             __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__SVPWM_TIME__REALLOC(HEAD,SIZE)                                                     __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE))
#define LFOC_GLOBAL__SVPWM_TIME__MEMSET(HEAD,VALUE,SIZE)                                                __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__SVPWM_TIME_DATA_TYPE))

#define LFOC_GLOBAL__UI_SIZE__MALLOC(HEAD,SIZE)                                                         __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_SIZE))
#define LFOC_GLOBAL__UI_SIZE__FREE(HEAD)                                                                __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__UI_SIZE__REALLOC(HEAD,SIZE)                                                        __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_SIZE))
#define LFOC_GLOBAL__UI_SIZE__MEMSET(HEAD,VALUE,SIZE)                                                   __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_SIZE))

#define LFOC_GLOBAL__UI_NUMBER__MALLOC(HEAD,SIZE)                                                       __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_NUMBER))
#define LFOC_GLOBAL__UI_NUMBER__FREE(HEAD)                                                              __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__UI_NUMBER__REALLOC(HEAD,SIZE)                                                      __LFOC_REALLOC((LFOC_VOID*)HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_NUMBER))
#define LFOC_GLOBAL__UI_NUMBER__MEMSET(HEAD,VALUE,SIZE)                                                 __LFOC_MEMSET((LFOC_VOID**)&HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_UI_NUMBER))

#define LFOC_GLOBAL__CURRENT_ADC__MALLOC(HEAD,SIZE)                                                     __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE))
#define LFOC_GLOBAL__CURRENT_ADC__FREE(HEAD)                                                            __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__CURRENT_ADC__REALLOC(HEAD,SIZE)                                                    __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE))
#define LFOC_GLOBAL__CURRENT_ADC__MEMSET(HEAD,VALUE,SIZE)                                               __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE))

#define LFOC_GLOBAL__VOLTAGE_ADC__MALLOC(HEAD,SIZE)                                                     __LFOC_MALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE))
#define LFOC_GLOBAL__VOLTAGE_ADC__FREE(HEAD)                                                            __LFOC_FREE((LFOC_VOID**)&HEAD)
#define LFOC_GLOBAL__VOLTAGE_ADC__REALLOC(HEAD,SIZE)                                                    __LFOC_REALLOC((LFOC_VOID**)&HEAD,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE))
#define LFOC_GLOBAL__VOLTAGE_ADC__MEMSET(HEAD,VALUE,SIZE)                                               __LFOC_MEMSET((LFOC_VOID*)HEAD,VALUE,SIZE*(LFOC_UI_SIZE)sizeof(LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE))

//!<判断无穷大还是无穷小
#define LFOC_GLOBAL__FLOAT_ISINF(VALUE)                                                                 isinf(VALUE)
#define LFOC_GLOBAL__FLOAT_ISNAN(VALUE)                                                                 isnan(VALUE)

#define LFOC_GLOBAL__PRINTF                                                                             printf

#endif
