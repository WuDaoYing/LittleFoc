#ifndef __LFOC_BENCHMARK_H__
#define __LFOC_BENCHMARK_H__
/**@file      lfoc_benchmark.h
* @brief      LittleFoc的基准构建文件(头文件)
* @details    存放基准结构体构建，基准空间管理，基准参数写入，基准参数加载等。
*             所采用的是浮点直接转定点方案
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
#include "lfoc_error.h"               //!<LFOC存放错误信息的头文件
#include "lfoc_type.h"                //!<LFOC存放变量类型的头文件
#include "lfoc_port.h"                //!<LFOC存放运算核心的头文件
#include "lfoc_log.h"                 //!<LFOC存放日志资源管理
#include "lfoc_abnormal_check.h"      //!<LFOC存放数据校验的头文件
/***************************结构体接口***********************************/
/**
  * @brief LFOC-基准结构体
  */
typedef struct LFOC_BENCHMARK
{
    struct LB__USER                                                                                                         /*用户*/
    {
        struct LB__USER__CONFIG                                                                                             /*!<用户配置*/
        {
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Power_Rate;                                             /*!!<额定功率*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Voltage_Bus;                                            /*!!<直流总线电压*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Voltage_Conversion;                     /*!!<ADC电压转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Current_Conversion;                     /*!!<ADC电流转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Rotational_Speed_Rate;                                  /*!!<额定转速*/
            LFOC_UI_BIT                                      Bit__Adc_Voltage_Bit;                                          /*!!<ADC电压位数*/
            LFOC_UI_BIT                                      Bit__Adc_Current_Bit;                                          /*!!<ADC电流位数*/
            LFOC_UI_BIT                                      Bit__Pole_Pairs;                                               /*!!<极对数*/
        }CONFIG;//!<结构体->用户->配置
        struct LB__USER__STATE                                                                                              /*!<状态配置*/
        {
            LFOC_UI_STATE State__Config_Enable;                                                                             /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE State__Check_Enable;                                                                              /*!!<配置状态: 0 该配置未使能 1 该配置已使能*/
            LFOC_UI_STATE State__Update_Enable;                                                                             /*!!<更新状态: 0 该更新未使能 1 该更新已使能*/
        }STATE;//!<结构体->用户->状态
        struct LB__USER__FLOAT_BENCHMARK                                                                                    /*!<用户参数配置*/
        {
            LFOC_UI_BIT                                     Bit__Pole_Pairs;                                                /*!!<极对数*/
            LFOC_I_BIT                                      Bit__Adc_Voltage_Move_Bit;                                      /*!!<ADC采集的电流应移动位数*/
            LFOC_I_BIT                                      Bit__Adc_Current_Move_Bit;                                      /*!!<ADC采集的电压应移动位数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Coefficient_Adc_Voltage_Conversion;                      /*!!<ADC电压转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Coefficient_Adc_Current_Conversion;                      /*!!<ADC电流转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Coefficient_Voltage_Qantization;                         /*!!<电压量化系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Coefficient_Current_Qantization;                         /*!!<电流量化系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Power_Basis;                                             /*!!<功率基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Voltage_Basis;                                           /*!!<电压基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Current_Basis;                                           /*!!<电流基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Impedance_Basis;                                         /*!!<阻抗基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Frequency_Basis;                                         /*!!<频率基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Radian_Electric_Frequency_Basis;                         /*!!<弧度制电角频率基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Inductance_Basis;                                        /*!!<感抗基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Capacitance_Basis;                                       /*!!<电容基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Radian_Mechanical_Angular_Frequency_Basis;               /*!!<弧度制机械角频率基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Rpm_Basis;                                               /*!!<RPM基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Torque_Basis;                                            /*!!<扭矩基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Flux_Linkage_Basis;                                      /*!!<磁链基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Moment_Inertia_Basis;                                    /*!!<转动惯量基准*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Radian_Basis;                                            /*!!<弧度制基准*/
        }FLOAT_BENCHMARK;//!<结构体->用户->浮点基准
    }USER;//!<结构体->用户
    struct LB__BUFFER                                                                                                       /*缓存*/
    {
        struct LB__BUFFER__CONFIG                                                                                           /*!<缓存*/
        {
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Power_Rate;                                             /*!!<额定功率*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Voltage_Bus;                                            /*!!<直流总线电压*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Voltage_Conversion;                     /*!!<ADC电压转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Current_Conversion;                     /*!!<ADC电流转换系数*/
            LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Rotational_Speed_Rate;                                  /*!!<额定转速*/
            LFOC_UI_BIT                                      Bit__Adc_Voltage_Bit;                                          /*!!<ADC电压位数*/
            LFOC_UI_BIT                                      Bit__Adc_Current_Bit;                                          /*!!<ADC电流位数*/
            LFOC_UI_BIT                                      Bit__Pole_Pairs;                                               /*!!<极对数*/
        }CONFIG;//!<结构体->缓存->映射
    }BUFFER;//!<结构体->缓存
    struct LB__INFORMATION                                                                                                  /*信息*/
    {
        struct LB__INFORMATION__ERROR                                                                                       /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Config;                                                                                   /*!!<config配置信息错误*/
            LFOC_UI_ERROR  Error__Check;                                                                                    /*!!<check校验错误*/
            LFOC_UI_ERROR  Error__Update;                                                                                   /*!!<update更新错误*/
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                                                          /*!!<浮点运算错误*/
            LFOC_UI_STATE  State__Error_State;                                                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
        struct LB__INFORMATION__WARN                                                                                        /*!<错误信息*/
        {
            LFOC_UI_ERROR  Warn__Core_Arithmetic;                                                                           /*!!<浮点运算警告信息*/
            LFOC_UI_STATE  State__Warn_State;                                                                               /*!!<警报状态*/
        }WARN;//!<结构体->信息->警告
    }INFORMATION;//!<结构体->信息
}LFOC_BENCHMARK;
/*************************基准构建函数*********************************/
LFOC_ERROR Lfoc_Benchmark(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark); //!<基准结构体写入
/*************************基准参数写入函数*****************************/
LFOC_ERROR Lfoc_Benchmark_Config_Write(LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Power_Rate,                                  /*!<额定功率*/
                                       LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Voltage_Bus,                                 /*!<直流总线电压*/
                                       LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Voltage_Conversion,          /*!<ADC电压转换系数*/
                                       LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Coefficient_Adc_Current_Conversion,          /*!<ADC电流转换系数*/
                                       LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE  Float__Rotational_Speed_Rate,                       /*!<额定转速*/
                                       LFOC_UI_BIT                                      Bit__Pole_Pairs,                                    /*!<极对数*/
                                       LFOC_UI_BIT                                      Bit__Adc_Voltage_Bit,                               /*!<ADC电压位数*/
                                       LFOC_UI_BIT                                      Bit__Adc_Current_Bit,                               /*!<ADC电流位数*/
                                       LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);                                                              //!<基准结构体写入
/*************************基准检测校验函数接口**************************/
LFOC_ERROR Lfoc_Benchmark_Check(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);                                  //!<基准结构体写入
/*************************快速基准参数更新函数接口**************************/
LFOC_ERROR Lfoc_Benchmark_Update(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);                                 //!<基准结构体写入
/*************************空间管理接口-MCU方式******************************/
// 根据不同的平台，选择不同的接口定义方式
#if LFOC_USE_PLATFORM == MCU       //!<选择MCU格式
LFOC_ERROR Lfoc_Benchmark_Malloc(LFOC_BENCHMARK** Lfoc_Motorx_Benchmark);//!<基准结构体写入
LFOC_ERROR Lfoc_Benchmark_Free(LFOC_BENCHMARK** Lfoc_Motorx_Benchmark);  //!<基准结构体写入
#endif
/*************************空间管理接口-SIMULINK方式******************************/
// MATLAB仿真平台下的接口定义
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
LFOC_ERROR Lfoc_Benchmark_Malloc(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);//!<基准结构体写入
LFOC_ERROR Lfoc_Benchmark_Free(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);  //!<基准结构体写入
#endif
/*************************LFOC的日志管理******************************/
LFOC_ERROR Lfoc_Benchmark_Log(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);
LFOC_ERROR Lfoc_Benchmark_Error_Reset(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark);
#endif
