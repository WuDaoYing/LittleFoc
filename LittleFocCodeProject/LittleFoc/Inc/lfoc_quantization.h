#ifndef __LFOC_QUANTIZATION_H__
#define __LFOC_QUANTIZATION_H__
/**@file      lfoc_quantization.h
* @brief      LittleFoc的量化(头文件)。
* @details    存放量化方式，在浮点、浮点标幺、定点等环境中采用正常方式标幺。
* @author     尹冠华
* @date       2026-1-28
* @version    V1.0
* @copyright    Copyright (c ) 2018-20226  黑龙江大学A8楼706
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* 仿真平台:只支持SIMULINK进行仿真验证\n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2026/01/28  <td>1.0      <td>尹冠华    <td>创建正式版本(发行版本)
* </table>
*
**********************************************************************************
*/
/*************************所引用的头文件*********************************/
#include "lfoc_error.h"     //!<LFOC存放错误信息的头文件
#include "lfoc_type.h"      //!<LFOC存放变量类型的头文件
#include "lfoc_port.h"      //!<LFOC存放运算核心的头文件
#include "lfoc_log.h"       //!<LFOC存放日志资源管理
#include "lfoc_abnormal_check.h"
/***************************结构体接口***********************************/
typedef struct LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM
{
    struct LCQFS__USER                                                                                       /*用户*/
    {
        struct LCQFS__USER__CONFIG                                                                           /*!<用户配置*/
        {
            LFOC_F_32BIT                         Float__Coefficient_Adc_Current_Conversion;                 /*!!<adc量化系数*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_A;                                     /*!!<偏移电流A*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_B;                                     /*!!<偏移电流B*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_C;                                     /*!!<偏移电流C*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_A;                              /*!!<电流极性A*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_B;                              /*!!<电流极性B*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_C;                              /*!!<电流极性C*/
            LFOC_F_32BIT                         Float__Gain_Current_A;                                     /*!!<电流增益A*/
            LFOC_F_32BIT                         Float__Gain_Current_B;                                     /*!!<电流增益B*/
            LFOC_F_32BIT                         Float__Gain_Current_C;                                     /*!!<电流增益C*/
        }CONFIG;//!<结构体->用户->数据
        struct LCQFS__USER__DATA                                                                             /*!<用户数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LCQFS__USER__DATA__IN                                                                     /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A;                                         /*!!!<MCU-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B;                                         /*!!!<MCU-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C;                                         /*!!!<MCU-ADC电流-输入信号流C相*/
            }IN;//!<结构体->用户->MCU-数据配置->输入
            struct LCQFS__USER__DATA__OUT                                                                    /*!!< MCU-用户数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Current_A;                                                             /*!!!<MCU-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT* Float__Current_B;                                                             /*!!!<MCU-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT* Float__Current_C;                                                             /*!!!<MCU-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->用户->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LCQFS__USER__DATA__IN                                                                     /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_A[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_B[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_C[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流C相*/
            }IN;//!<结构体->用户->SIMULINK-数据配置->输入
            struct LCQFS__USER__DATA__OUT                                                                    /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Current_A[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT Float__Current_B[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT Float__Current_C[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->用户->SIMULINK-数据配置->输出
#endif
        }DATA;//!<结构体->用户->数据配置
        struct LCQFS__USER__STATE                                                                            /*!<状态配置*/
        {
            LFOC_UI_STATE      State__Config_Enable;                                                        /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Data_Enable;                                                          /*!!<数据状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Check_Enable;                                                         /*!!<校验状态: 0 该校验未使能 1 该校验已使能*/
            LFOC_UI_STATE      State__Update_Enable;                                                        /*!!<更新状态: 0 该更新未使能 1 该更新已使能*/
            LFOC_UI_STATE      State__Space_Enable;                                                         /*!!<空间状态: 0 该空间未使能 1 该空间已使能*/
            LFOC_I_SPACE_STATE Space_State__Space_Data;                                                     /*!!<空间开辟情况  1空间存在  -1空间解散 其他情况空*/
        }STATE;//!<结构体->用户->状态
    }USER;//!<结构体->用户
    struct LCQFS__INFORMATION                                                                               /*信息*/
    {
        struct LCQFS__INFORMATION__ERROR                                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Config;                                                                  /*!!<config配置信息错误*/
            LFOC_UI_ERROR  Error__Check;                                                                   /*!!<check校验错误*/
            LFOC_UI_ERROR  Error__Update;                                                                  /*!!<update更新错误*/
            LFOC_UI_ERROR  Error__Data;                                                                    /*!!<Data更新错误*/
            LFOC_UI_ERROR  Error__Space;                                                                   /*!!<Space更新错误*/
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                                         /*!!<浮点运算错误*/
            LFOC_UI_STATE  State__Error_State;                                                             /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
    struct LCQFS__BUFFER                                                                                    /*缓存*/
    {
        struct LCQFS__BUFFER__CONFIG                                                                        /*!<缓存配置*/
        {
            ////////////////////////////////////////////信息直接传递////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Coefficient_Adc_Current_Conversion;            /*!!<adc量化系数*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_A;                                /*!!<偏移电流A*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_B;                                /*!!<偏移电流B*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_C;                                /*!!<偏移电流C*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_A;                         /*!!<电流极性A*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_B;                         /*!!<电流极性B*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_C;                         /*!!<电流极性C*/
            LFOC_F_32BIT                              Float__Gain_Current_A;                                /*!!<电流增益A*/
            LFOC_F_32BIT                              Float__Gain_Current_B;                                /*!!<电流增益B*/
            LFOC_F_32BIT                              Float__Gain_Current_C;                                /*!!<电流增益C*/
            ////////////////////////////////////////////运算转换////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Conversion_Coefficient;                        /*!!<转化系数*/
        }CONFIG;//!<结构体->缓存->配置
        struct LCQFS__BUFFER__DATA                                                                           /*!<缓存数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LCQFS__BUFFER__DATA__IN                                                                   /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A;                                         /*!!!<MCU-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B;                                         /*!!!<MCU-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C;                                         /*!!!<MCU-ADC电流-输入信号流C相*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LCQFS__BUFFER__DATA__OUT                                                                  /*!!<MCU-数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Current_A;                                                             /*!!!<MCU-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT* Float__Current_B;                                                             /*!!!<MCU-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT* Float__Current_C;                                                             /*!!!<MCU-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LCQFS__BUFFER__DATA__IN                                                                   /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_A[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_B[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_C[MATLAB_SIMULINK_DATA_LENGTH];             /*!!!<SIMULINK-ADC电流-输入信号流C相*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LCQFS__BUFFER__DATA__OUT                                                                  /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Current_A[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT Float__Current_B[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT Float__Current_C[MATLAB_SIMULINK_DATA_LENGTH];                                 /*!!!<SIMULINK-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
        }DATA;//!<结构体->缓存->数据配置
    }BUFFER;//!<结构体->缓存
}LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM;
typedef struct LFOC_CURRENT_QUANTIZATION_FLOAT_POINT
{
    struct LCQFP__USER                                                                                       /*用户*/
    {
        struct LCQFP__USER__CONFIG                                                                           /*!<用户配置*/
        {
            LFOC_F_32BIT                         Float__Coefficient_Adc_Current_Conversion;                 /*!!<adc量化系数*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_A;                                     /*!!<偏移电流A*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_B;                                     /*!!<偏移电流B*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE   Adc__Offset_Current_C;                                     /*!!<偏移电流C*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_A;                              /*!!<电流极性A*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_B;                              /*!!<电流极性B*/
            LFOC_I_POLARITY                      Polarity__Current_Polarity_C;                              /*!!<电流极性C*/
            LFOC_F_32BIT                         Float__Gain_Current_A;                                     /*!!<电流增益A*/
            LFOC_F_32BIT                         Float__Gain_Current_B;                                     /*!!<电流增益B*/
            LFOC_F_32BIT                         Float__Gain_Current_C;                                     /*!!<电流增益C*/
        }CONFIG;//!<结构体->用户->数据
        struct LCQFP__USER__DATA                                                                             /*!<用户数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LCQFP__USER__DATA__IN                                                                     /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A;                                         /*!!!<MCU-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B;                                         /*!!!<MCU-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C;                                         /*!!!<MCU-ADC电流-输入信号流C相*/
            }IN;//!<结构体->用户->MCU-数据配置->输入
            struct LCQFP__USER__DATA__OUT                                                                    /*!!< MCU-用户数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Current_A;                                                             /*!!!<MCU-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT* Float__Current_B;                                                             /*!!!<MCU-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT* Float__Current_C;                                                             /*!!!<MCU-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->用户->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LCQFP__USER__DATA__IN                                                                     /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_A[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_B[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_C[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流C相*/
            }IN;//!<结构体->用户->SIMULINK-数据配置->输入
            struct LCQFP__USER__DATA__OUT                                                                    /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Current_A[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT Float__Current_B[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT Float__Current_C[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->用户->SIMULINK-数据配置->输出
#endif
        }DATA;//!<结构体->用户->数据配置
        struct LCQFP__USER__STATE                                                                            /*!<状态配置*/
        {
            LFOC_UI_STATE      State__Config_Enable;                                                        /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Data_Enable;                                                          /*!!<数据状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Check_Enable;                                                         /*!!<校验状态: 0 该校验未使能 1 该校验已使能*/
            LFOC_UI_STATE      State__Update_Enable;                                                        /*!!<更新状态: 0 该更新未使能 1 该更新已使能*/
            LFOC_UI_STATE      State__Space_Enable;                                                         /*!!<空间状态: 0 该空间未使能 1 该空间已使能*/
            LFOC_I_SPACE_STATE Space_State__Space_Data;                                                     /*!!<空间开辟情况  1空间存在  -1空间解散 其他情况空*/
        }STATE;//!<结构体->用户->状态
    }USER;//!<结构体->用户
    struct LCQFP__INFORMATION                                                                               /*信息*/
    {
        struct LCQFP__INFORMATION__ERROR                                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Config;                                                                  /*!!<config配置信息错误*/
            LFOC_UI_ERROR  Error__Check;                                                                   /*!!<check校验错误*/
            LFOC_UI_ERROR  Error__Update;                                                                  /*!!<update更新错误*/
            LFOC_UI_ERROR  Error__Data;                                                                    /*!!<Data更新错误*/
            LFOC_UI_ERROR  Error__Space;                                                                   /*!!<Space更新错误*/
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                                         /*!!<浮点运算错误*/
            LFOC_UI_STATE  State__Error_State;                                                             /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
    struct LCQFP__BUFFER                                                                                    /*缓存*/
    {
        struct LCQFP__BUFFER__CONFIG                                                                        /*!<缓存配置*/
        {
            ////////////////////////////////////////////信息直接传递////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Coefficient_Adc_Current_Conversion;            /*!!<adc量化系数*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_A;                                /*!!<偏移电流A*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_B;                                /*!!<偏移电流B*/
            LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE        Adc__Offset_Current_C;                                /*!!<偏移电流C*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_A;                         /*!!<电流极性A*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_B;                         /*!!<电流极性B*/
            LFOC_I_POLARITY                           Polarity__Current_Polarity_C;                         /*!!<电流极性C*/
            LFOC_F_32BIT                              Float__Gain_Current_A;                                /*!!<电流增益A*/
            LFOC_F_32BIT                              Float__Gain_Current_B;                                /*!!<电流增益B*/
            LFOC_F_32BIT                              Float__Gain_Current_C;                                /*!!<电流增益C*/
            ////////////////////////////////////////////运算转换////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Conversion_Coefficient;                        /*!!<转化系数*/
        }CONFIG;//!<结构体->缓存->配置
        struct LCQFP__BUFFER__DATA                                                                           /*!<缓存数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LCQFP__BUFFER__DATA__IN                                                                   /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A;                                         /*!!!<MCU-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B;                                         /*!!!<MCU-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C;                                         /*!!!<MCU-ADC电流-输入信号流C相*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LCQFP__BUFFER__DATA__OUT                                                                  /*!!<MCU-数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Current_A;                                                             /*!!!<MCU-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT* Float__Current_B;                                                             /*!!!<MCU-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT* Float__Current_C;                                                             /*!!!<MCU-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LCQFP__BUFFER__DATA__IN                                                                   /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_A[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流A相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_B[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流B相*/
                LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_C[2];                                       /*!!!<SIMULINK-ADC电流-输入信号流C相*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LCQFP__BUFFER__DATA__OUT                                                                  /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Current_A[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流A相*/
                LFOC_F_32BIT Float__Current_B[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流B相*/
                LFOC_F_32BIT Float__Current_C[2];                                                           /*!!!<SIMULINK-FLOAT电流-输出信号流C相*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
        }DATA;//!<结构体->缓存->数据配置
    }BUFFER;//!<结构体->缓存
}LFOC_CURRENT_QUANTIZATION_FLOAT_POINT;
typedef struct LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM
{
    struct LVQFS__USER                                                                                       /*用户*/
    {
        struct LVQFS__USER__CONFIG                                                                          /*!<用户配置*/
        {
            LFOC_F_32BIT                         Float__Coefficient_Adc_Voltage_Conversion;                 /*!!<adc量化系数*/
        }CONFIG;//!<结构体->用户->数据
        struct LVQFS__USER__DATA                                                                            /*!<用户数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LVQFS__USER__DATA__IN                                                                    /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus;                                      /*!!!<MCU-ADC电压-母线*/
            }IN;//!<结构体->用户->MCU-数据配置->输入
            struct LVQFS__USER__DATA__OUT                                                                   /*!!< MCU-用户数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Voltage_Vbus;                                                          /*!!!<MCU-FLOAT电压-母线*/
            }OUT;//!<结构体->用户->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LVQFS__USER__DATA__IN                                                                    /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE Adc__Voltage_Vbus[MATLAB_SIMULINK_DATA_LENGTH];          /*!!!<SIMULINK-ADC电压-母线*/
            }IN;//!<结构体->用户->SIMULINK-数据配置->输入
            struct LVQFS__USER__DATA__OUT                                                                   /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Voltage_Vbus[MATLAB_SIMULINK_DATA_LENGTH];                              /*!!!<SIMULINK-FLOAT电压-母线*/
            }OUT;//!<结构体->用户->SIMULINK-数据配置->输出
#endif
        }DATA;//!<结构体->用户->数据配置
        struct LVQFS__USER__STATE                                                                           /*!<状态配置*/
        {
            LFOC_UI_STATE      State__Config_Enable;                                                        /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Data_Enable;                                                          /*!!<数据状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Check_Enable;                                                         /*!!<校验状态: 0 该校验未使能 1 该校验已使能*/
            LFOC_UI_STATE      State__Update_Enable;                                                        /*!!<更新状态: 0 该更新未使能 1 该更新已使能*/
            LFOC_UI_STATE      State__Space_Enable;                                                         /*!!<空间状态: 0 该空间未使能 1 该空间已使能*/
            LFOC_I_SPACE_STATE Space_State__Space_Data;                                                     /*!!<空间开辟情况  1空间存在  -1空间解散 其他情况空*/
        }STATE;//!<结构体->用户->状态
    }USER;//!<结构体->用户
    struct LVQFS__INFORMATION                                                                               /*信息*/
    {
        struct LVQFS__INFORMATION__ERROR                                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Config;                                                                   /*!!<config配置信息错误*/
            LFOC_UI_ERROR  Error__Check;                                                                    /*!!<check校验错误*/
            LFOC_UI_ERROR  Error__Update;                                                                   /*!!<update更新错误*/
            LFOC_UI_ERROR  Error__Data;                                                                     /*!!<Data更新错误*/
            LFOC_UI_ERROR  Error__Space;                                                                    /*!!<Space更新错误*/
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                                          /*!!<浮点运算错误*/
            LFOC_UI_STATE  State__Error_State;                                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
    struct LVQFS__BUFFER                                                                                    /*缓存*/
    {
        struct LVQFS__BUFFER__CONFIG                                                                        /*!<缓存配置*/
        {
            ////////////////////////////////////////////信息直接传递////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Coefficient_Adc_Voltage_Conversion;            /*!!<adc量化系数*/
            ////////////////////////////////////////////运算转换////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Conversion_Coefficient;                        /*!!<转化系数*/
        }CONFIG;//!<结构体->缓存->配置
        struct LVQFS__BUFFER__DATA                                                                          /*!<缓存数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LVQFS__BUFFER__DATA__IN                                                                  /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus;                                      /*!!!<MCU-ADC电压-母线*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LVQFS__BUFFER__DATA__OUT                                                                 /*!!<MCU-数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Voltage_Vbus;                                                          /*!!!<MCU-FLOAT电压-母线*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LVQFS__BUFFER__DATA__IN                                                                  /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE Adc__Voltage_Vbus[MATLAB_SIMULINK_DATA_LENGTH];          /*!!!<SIMULINK-ADC电压-母线*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LVQFS__BUFFER__DATA__OUT                                                                 /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Voltage_Vbus[MATLAB_SIMULINK_DATA_LENGTH];                              /*!!!<SIMULINK-FLOAT电压-母线*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
        }DATA;//!<结构体->缓存->数据配置
    }BUFFER;//!<结构体->缓存
}LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM;
typedef struct LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT
{
    struct LVQFP__USER                                                                                      /*用户*/
    {
        struct LVQFP__USER__CONFIG                                                                          /*!<用户配置*/
        {
            LFOC_F_32BIT                         Float__Coefficient_Adc_Voltage_Conversion;                 /*!!<adc量化系数*/
        }CONFIG;//!<结构体->用户->数据
        struct LVQFP__USER__DATA                                                                            /*!<用户数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LVQFP__USER__DATA__IN                                                                    /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus;                                      /*!!!<MCU-ADC电压-母线*/
            }IN;//!<结构体->用户->MCU-数据配置->输入
            struct LVQFP__USER__DATA__OUT                                                                   /*!!< MCU-用户数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Voltage_Vbus;                                                          /*!!!<MCU-FLOAT电压-母线*/
            }OUT;//!<结构体->用户->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LVQFP__USER__DATA__IN                                                                    /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE Adc__Voltage_Vbus[2];                                    /*!!!<SIMULINK-ADC电压-母线*/
            }IN;//!<结构体->用户->SIMULINK-数据配置->输入
            struct LVQFP__USER__DATA__OUT                                                                   /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Voltage_Vbus[2];                                                        /*!!!<SIMULINK-FLOAT电压-母线*/
            }OUT;//!<结构体->用户->SIMULINK-数据配置->输出
#endif
        }DATA;//!<结构体->用户->数据配置
        struct LVQFP__USER__STATE                                                                           /*!<状态配置*/
        {
            LFOC_UI_STATE      State__Config_Enable;                                                        /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Data_Enable;                                                          /*!!<数据状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE      State__Check_Enable;                                                         /*!!<校验状态: 0 该校验未使能 1 该校验已使能*/
            LFOC_UI_STATE      State__Update_Enable;                                                        /*!!<更新状态: 0 该更新未使能 1 该更新已使能*/
            LFOC_UI_STATE      State__Space_Enable;                                                         /*!!<空间状态: 0 该空间未使能 1 该空间已使能*/
            LFOC_I_SPACE_STATE Space_State__Space_Data;                                                     /*!!<空间开辟情况  1空间存在  -1空间解散 其他情况空*/
        }STATE;//!<结构体->用户->状态
    }USER;//!<结构体->用户
    struct LVQFP__INFORMATION                                                                               /*信息*/
    {
        struct LVQFP__INFORMATION__ERROR                                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Config;                                                                   /*!!<config配置信息错误*/
            LFOC_UI_ERROR  Error__Check;                                                                    /*!!<check校验错误*/
            LFOC_UI_ERROR  Error__Update;                                                                   /*!!<update更新错误*/
            LFOC_UI_ERROR  Error__Data;                                                                     /*!!<Data更新错误*/
            LFOC_UI_ERROR  Error__Space;                                                                    /*!!<Space更新错误*/
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                                          /*!!<浮点运算错误*/
            LFOC_UI_STATE  State__Error_State;                                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
    struct LVQFP__BUFFER                                                                                    /*缓存*/
    {
        struct LVQFP__BUFFER__CONFIG                                                                        /*!<缓存配置*/
        {
            ////////////////////////////////////////////信息直接传递////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Coefficient_Adc_Voltage_Conversion;            /*!!<adc量化系数*/
            ////////////////////////////////////////////运算转换////////////////////////////////////////////
            LFOC_F_32BIT                              Float__Conversion_Coefficient;                        /*!!<转化系数*/
        }CONFIG;//!<结构体->缓存->配置
        struct LVQFP__BUFFER__DATA                                                                          /*!<缓存数据*/
        {
#if LFOC_USE_PLATFORM == MCU                                                                                /*!!<MCU使用指针连接*/
            struct LVQFP__BUFFER__DATA__IN                                                                  /*!!<MCU-用户输入数据*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus;                                      /*!!!<MCU-ADC电压-母线*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LVQFP__BUFFER__DATA__OUT                                                                 /*!!<MCU-数据输出*/
            {
                LFOC_UI_SIZE* Size__Length_Data;                                                            /*!!!<MCU-数据长度*/
                LFOC_F_32BIT* Float__Voltage_Vbus;                                                          /*!!!<MCU-FLOAT电压-母线*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                                                    /*!!<SIMULINK下使用数组进行数据交互*/
            struct LVQFP__BUFFER__DATA__IN                                                                  /*!!<SIMULINK-数据输入*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE Adc__Voltage_Vbus[2];                                    /*!!!<SIMULINK-ADC电压-母线*/
            }IN;//!<结构体->缓存->MCU-数据配置->输入
            struct LVQFP__BUFFER__DATA__OUT                                                                 /*!!<SIMULINK-数据输出*/
            {
                LFOC_UI_SIZE Size__Length_Data[2];                                                          /*!!!<SIMULINK-数据长度*/
                LFOC_F_32BIT Float__Voltage_Vbus[2];                                                        /*!!!<SIMULINK-FLOAT电压-母线*/
            }OUT;//!<结构体->缓存->MCU-数据配置->输出
#endif
        }DATA;//!<结构体->缓存->数据配置
    }BUFFER;//!<结构体->缓存
}LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT;
/*************************量化函数-内联*********************************/
LFOC_INLINE LFOC_ERROR Lfoc_Current_Quantization_Float_Stream(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义有符号电流ADC的中间运算变量
    LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE Sign_Current_Adc__Ac_Buff = 0;
    //!<循环变量
    LFOC_UI_SIZE Size__I;
    //!<数组长度
    LFOC_UI_SIZE Size__Length;
    //!<获得数据长度
    Size__Length = (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data);
    //!<校验保护措施
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0) //!<未能出现错误日志打印的
    && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)       //!<参数配置校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)        //!<空间校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 1)        //!<总校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1))      //!<更新装载通过
    {
        //!<电流量化
        for (Size__I = 0; Size__I < Size__Length; Size__I++)
        {
            /***************************************A相位电流计算******************************************/
            Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_A[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_A;
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_A[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
            {
                //!<记录运算错误(此处编号为1)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 1;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回值置为错误
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              2,                                                                                             //!<错误编码需要2-5
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_A), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              6,                                                                                             //!<错误编码需要6-9
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_A == 1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A[Size__I] = Float__Ac_Buff;
            }
            else if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_A == -1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A[Size__I] = -Float__Ac_Buff;
            }
            else
            {
                //!<极性输入错误
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 10;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回错误值
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
            /***************************************B相位电流计算******************************************/
            Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_B[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_B;
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_B[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
            {
                //!<记录运算错误(此处编号为11)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 11;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回值置为错误
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              12,                                                                                            //!<错误编码需要12-15
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_B), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              16,                                                                                            //!<错误编码需要16-19
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_B == 1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B[Size__I] = Float__Ac_Buff;
            }
            else if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_B == -1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B[Size__I] = -Float__Ac_Buff;
            }
            else
            {
                //!<极性输入错误
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 20;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回错误值
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
            /***************************************C相位电流计算******************************************/
            Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_C[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_C;
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_C[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
            {
                //!<记录运算错误(此处编号为21)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 21;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回值置为错误
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              22,                                                                                            //!<错误编码需要22-25
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_C), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              26,                                                                                            //!<错误编码需要26-29
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_C == 1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C[Size__I] = Float__Ac_Buff;
            }
            else if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_C == -1)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C[Size__I] = -Float__Ac_Buff;
            }
            else
            {
                //!<极性输入错误
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 30;
                //!<置位错误情况
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回错误值
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
        }
    }
    else
    {
        //!<错误日志输出或参数配置校验未通过或总校验未能通过或更新装载未能通过
        Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 31;
        //!<置位错误情况
        Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
        //!<返回错误值
        return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_INLINE LFOC_ERROR Lfoc_Current_Quantization_Float_Point(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义有符号电流ADC的中间运算变量
    LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE Sign_Current_Adc__Ac_Buff = 0;
    //!<循环变量
    LFOC_UI_SIZE Size__I;
    //!<数组长度
    LFOC_UI_SIZE Size__Length;
    //!<获得数据长度
    Size__Length = (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data);
    //!<校验保护措施
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0) //!<未能出现错误日志打印的
    && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)       //!<参数配置校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)        //!<空间校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 1)        //!<总校验通过
    && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1))      //!<更新装载通过
    {
        /***************************************A相位电流计算******************************************/
        Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_A[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_A;
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_A[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
        {
            //!<记录运算错误(此处编号为1)
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 1;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回值置为错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            2,                                                                                             //!<错误编码需要2-5
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_A), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            6,                                                                                             //!<错误编码需要6-9
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_A == 1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A[Size__I] = Float__Ac_Buff;
        }
        else if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_A == -1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A[Size__I] = -Float__Ac_Buff;
        }
        else
        {
            //!<极性输入错误
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 10;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回错误值
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
        /***************************************B相位电流计算******************************************/
        Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_B[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_B;
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_B[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
        {
            //!<记录运算错误(此处编号为11)
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 11;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回值置为错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            12,                                                                                            //!<错误编码需要12-15
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_B), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            16,                                                                                            //!<错误编码需要16-19
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_B == 1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B[Size__I] = Float__Ac_Buff;
        }
        else if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_B == -1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B[Size__I] = -Float__Ac_Buff;
        }
        else
        {
            //!<极性输入错误
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 20;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回错误值
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
        /***************************************C相位电流计算******************************************/
        Sign_Current_Adc__Ac_Buff = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_C[Size__I] - Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_C;
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        //!<执行运算检测-ADC当前值是否超过该变量所能容忍的最大值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_C[Size__I] > LFOC_GLOBAL__SIGN_CURRENT_ADC_DATA_TYPE_MAX)
        {
            //!<记录运算错误(此处编号为21)
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 21;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回值置为错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Sign_Current_Adc__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            22,                                                                                            //!<错误编码需要22-25
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数 * 增益系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_C), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                            Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                            26,                                                                                            //!<错误编码需要26-29
                                            LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_C == 1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C[Size__I] = Float__Ac_Buff;
        }
        else if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_C == -1)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C[Size__I] = -Float__Ac_Buff;
        }
        else
        {
            //!<极性输入错误
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 30;
            //!<置位错误情况
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
            //!<返回错误值
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    else
    {
        //!<错误日志输出或参数配置校验未通过或总校验未能通过或更新装载未能通过
        Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 31;
        //!<置位错误情况
        Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
        //!<返回错误值
        return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_INLINE LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<循环变量
    LFOC_UI_SIZE Size__I;
    //!<数组长度
    LFOC_UI_SIZE Size__Length;
    //!<获得数据长度
    Size__Length = (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data);
    //!<校验保护措施
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0) //!<未能出现错误日志打印的
    && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)       //!<参数配置校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)        //!<空间校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 1)        //!<总校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1))      //!<更新装载通过
    {
        //!<电流量化
        for (Size__I = 0; Size__I < Size__Length; Size__I++)
        {
            /***************************************母线电压计算******************************************/
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<实现公式：实际采集ADC值* ADC转换系数
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Voltage_Vbus[Size__I]), (Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                                //!<要校验的数据
                                              Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                              Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                              Error__Float_Arithmetic,                                                                       //!<错误信息变量
                                              1,                                                                                             //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                            //!<要返回的错误值
        }
    }
    else
    {
        //!<错误日志输出或参数配置校验未通过或总校验未能通过或更新装载未能通过
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 5;
        //!<置位错误情况
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
        //!<返回错误值
        return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_INLINE LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<循环变量
    LFOC_UI_SIZE Size__I;
    //!<数组长度
    LFOC_UI_SIZE Size__Length;
    //!<获得数据长度
    Size__Length = (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data);
    //!<校验保护措施
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0) //!<未能出现错误日志打印的
    && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)       //!<参数配置校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)        //!<空间校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 1)        //!<总校验通过
    && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1))      //!<更新装载通过
    {
        /***************************************A相位电流计算******************************************/
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志

        //!<实现公式：（实际采集ADC值-ADC偏移补偿）* ADC转换系数
        Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Voltage_Vbus[0]), (Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient), (&(Error__Float_Arithmetic)));
        //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
        LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                          Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic,       //!<核心运算错误码
                                          Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State,           //!<错误状态
                                          Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                          1,                                                                                            //!<错误编码需要1-4
                                          LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
    }
    else
    {
        //!<错误日志输出或参数配置校验未通过或总校验未能通过或更新装载未能通过
        Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 5;
        //!<置位错误情况
        Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
        //!<返回错误值
        return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************量化参数写入函数*****************************/
//!<电流浮点量化(流)的参数配置写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Config_Write(LFOC_F_32BIT                               Float__Coefficient_Adc_Current_Conversion,         //!<adc量化系数
                                                               LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE         Adc__Offset_Current_A,                             //!<偏移电流A
                                                               LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE         Adc__Offset_Current_B,                             //!<偏移电流B
                                                               LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE         Adc__Offset_Current_C,                             //!<偏移电流C
                                                               LFOC_I_POLARITY                            Polarity__Current_Polarity_A,                      //!<电流极性A
                                                               LFOC_I_POLARITY                            Polarity__Current_Polarity_B,                      //!<电流极性B
                                                               LFOC_I_POLARITY                            Polarity__Current_Polarity_C,                      //!<电流极性C
                                                               LFOC_F_32BIT                               Float__Gain_Current_A,                             //!<电流增益A
                                                               LFOC_F_32BIT                               Float__Gain_Current_B,                             //!<电流增益B
                                                               LFOC_F_32BIT                               Float__Gain_Current_C,                             //!<电流增益C
                                                               LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM*    Lfoc_Motorx_Current_Quantization_Float_Stream);    //!<ADC电流量化(流)结构体
//!<电流浮点量化(点)的参数配置写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Config_Write(LFOC_F_32BIT                                Float__Coefficient_Adc_Current_Conversion,         //!<adc量化系数
                                                              LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE          Adc__Offset_Current_A,                             //!<偏移电流A
                                                              LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE          Adc__Offset_Current_B,                             //!<偏移电流B
                                                              LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE          Adc__Offset_Current_C,                             //!<偏移电流C
                                                              LFOC_I_POLARITY                             Polarity__Current_Polarity_A,                      //!<电流极性A
                                                              LFOC_I_POLARITY                             Polarity__Current_Polarity_B,                      //!<电流极性B
                                                              LFOC_I_POLARITY                             Polarity__Current_Polarity_C,                      //!<电流极性C
                                                              LFOC_F_32BIT                                Float__Gain_Current_A,                             //!<电流增益A
                                                              LFOC_F_32BIT                                Float__Gain_Current_B,                             //!<电流增益B
                                                              LFOC_F_32BIT                                Float__Gain_Current_C,                             //!<电流增益C
                                                              LFOC_CURRENT_QUANTIZATION_FLOAT_POINT*      Lfoc_Motorx_Current_Quantization_Float_Point);      //!<ADC电流量化(点)结构体
//!<电压浮点量化(流)的参数配置写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Config_Write(LFOC_F_32BIT                               Float__Coefficient_Adc_Voltage_Conversion,         //!<adc量化系数
                                                               LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM*    Lfoc_Motorx_Voltage_Quantization_Float_Stream);    //!<ADC电压量化(流)结构体
//!<电压浮点量化(点)的参数配置写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Config_Write(LFOC_F_32BIT                                Float__Coefficient_Adc_Voltage_Conversion,          //!<adc量化系数
                                                              LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT*      Lfoc_Motorx_Voltage_Quantization_Float_Point);      //!<ADC电压量化(点)结构体
/*************************量化数据参数写入函数*****************************/
//!<电流浮点量化(流)的数据参数写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                         //!<数据长度
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                      //!<ADC电流-输入信号流A相
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                      //!<ADC电流-输入信号流B相
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                      //!<ADC电流-输入信号流C相
                                                                    LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);  //!<ADC电流量化(流)结构体
//!<电流浮点量化(点)的数据参数写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                         //!<数据长度
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                      //!<ADC电流-输入信号流A相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                      //!<ADC电流-输入信号流B相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                      //!<ADC电流-输入信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);    //!<ADC电流量化(点)结构体
//!<电压浮点量化(流)的数据参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                         //!<数据长度
                                                                    LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                                   //!<ADC电压-母线
                                                                    LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);  //!<ADC电压量化(流)结构体
//!<电压浮点量化(点)的数据参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                         //!<数据长度
                                                                   LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                                   //!<ADC电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);    //!<ADC电压量化(点)结构体
/*************************量化检测校验函数接口**************************/
//!<电流量化(流)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Check(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流量化(点)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Check(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压量化(流)的校验函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Check(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压量化(点)的校验函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Check(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);
/*************************量化检测更新函数接口**************************/
//!<电流量化(流)的更新函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Update(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流量化(点)的更新函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Update(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压量化(流)的更新函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Update(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压量化(点)的更新函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Update(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);
/*************************空间管理接口-MCU方式******************************/
#if LFOC_USE_PLATFORM == MCU 
//!<电流快速量化(流)的结构体空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的结构体空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的结构体空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的结构体空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的数据空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的数据空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的数据空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的数据空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的结构体空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Current_Quantization_Float_Stream );
//!<电流快速量化(点)的结构体空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的结构体空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的结构体空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的数据空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的数据空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的数据空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的数据空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);
#endif
/*************************空间管理接口-SIMULINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
//!<电流快速量化(流)的结构体空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的结构体空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的结构体空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的结构体空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的数据空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的数据空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的数据空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的数据空间开辟函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的结构体空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的结构体空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的结构体空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的结构体空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流快速量化(流)的数据空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流快速量化(点)的数据空间解放函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压快速量化(流)的数据空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压快速量化(点)的数据空间解放函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

#endif

/*************************数据传递函数接口-SIMULINK方式*********************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
//!<电流量化(流)的数据传递函数-输入传递
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                 //!<输入信号流A相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                 //!<输入信号流B相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                 //!<输入信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流量化(流)的数据传递函数-输入传递
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                                     //!<数据长度
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                  //!<输入信号流A相
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                  //!<输入信号流B相
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                  //!<输入信号流C相
                                                                  LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压量化(流)的数据传递函数-输入传递
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                   LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                              //!<ADC电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压量化(流)的数据传递函数-输入传递
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                                     //!<数据长度
                                                                  LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                               //!<ADC电压-母线
                                                                  LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

//!<电流量化(流)的数据传递函数-输出传递
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                    LFOC_F_32BIT* Float__Current_A,                                                     //!<输出信号流A相
                                                                    LFOC_F_32BIT* Float__Current_B,                                                     //!<输出信号流B相
                                                                    LFOC_F_32BIT* Float__Current_C,                                                     //!<输出信号流C相
                                                                    LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
//!<电流量化(流)的数据传递函数-输出传递
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                   LFOC_F_32BIT* Float__Current_A,                                                     //!<输出信号流A相
                                                                   LFOC_F_32BIT* Float__Current_B,                                                     //!<输出信号流B相
                                                                   LFOC_F_32BIT* Float__Current_C,                                                     //!<输出信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
//!<电压量化(流)的数据传递函数-输出传递
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                    LFOC_F_32BIT* Float__Voltage_Vbus,                                                  //!<ADC电压-母线
                                                                    LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
//!<电压量化(流)的数据传递函数-输出传递
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                                    //!<数据长度
                                                                   LFOC_F_32BIT* Float__Voltage_Vbus,                                                  //!<ADC电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
#endif
/*************************LFOC的日志管理******************************/
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Log(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Log(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Log(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Log(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Error_Reset(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream);
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Error_Reset(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point);
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Error_Reset(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream);
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Error_Reset(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point);
#endif