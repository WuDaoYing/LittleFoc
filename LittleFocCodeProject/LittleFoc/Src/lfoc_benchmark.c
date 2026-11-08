#include "lfoc_benchmark.h"   //!<LFOC的基准头文件

/**@file      lfoc_benchmark.c
* @brief      LittleFoc的基准构建文件(源文件)
* @details    存放基准结构体构建，基准空间管理，基准参数写入，基准参数加载等。
*             所采用的是浮点直接转定点方案
* @author     尹冠华
* @date       2026-1-26
* @version    V1.0
* @copyright    Copyright (c ) 2018-2026  706实验室
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

/*************************基准构建函数*********************************/
/**@brief LFOC的基准构建函数
* @details 由于无ADC移动位数，会提升其运算精度，但相应的会增加损耗时间
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                             运行成功
* @return    LFOC_ERROR__CONFIG_ERROR                        LFOC系统映射失败错误
* @return    LFOC_ERROR__CHECK_ERROR                         LFOC系统校验失败错误
* @return    LFOC_ERROR__UPDATE_ERROR                        LFOC系统更新失败错误
* @return    LFOC_ERROR__CONFIG_CHECK_ERROR                  LFOC系统映射+校验错误
* @return    LFOC_ERROR__CONFIG_UPDATE_ERROR                 LFOC系统映射+更新错误
* @return    LFOC_ERROR__CHECK_UPDATE_ERROR                  LFOC系统校验+更新错误
* @return    LFOC_ERROR__CONFIG_CHECK_UPDATE_ERROR           LFOC系统映射+校验+更新错误
* @return    LFOC_ERROR__BENCHMARK_FLOAT_ERROR               LFOC浮点运算错误
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)
{
    if (Lfoc_Motorx_Benchmark != LFOC_NULL)
    {
            if ((Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 0)      //!<未能出现错误日志打印的
            &&  (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 1)           //!<参数配置校验通过
            &&  (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 1)            //!<总校验通过
            &&  (Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 1))          //!<更新装载通过
            {
        #if LFOC_PU_ENABLE == 0
                //!<将所有需要的信息保存到基准表中如(ADC电压转换系数、ADC电流转换系数、极对数)
                //!<将ADC电压转换系数保存到基准表之中
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Voltage_Conversion = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                //!<将ADC电流转换系数保存到基准表之中
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                //!<将极对数保存到基准表
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Pole_Pairs = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs;
                //!<剩下的基准表全部置1(浮点的话反算就是本身)
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Power_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Capacitance_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Frequency_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Flux_Linkage_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Inductance_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Moment_Inertia_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Rpm_Basis = 1;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Torque_Basis = 1;
        #endif
        #if LFOC_PU_ENABLE == 1
                //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
                LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
                //!<定义浮点中间缓存变量
                LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_DATA_TYPE Float__Ac_Buff = 0;
                //!<额定功率保存
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Power_Basis = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Power_Rate;
                //!<电压基准计算：电压总线 / sqrt(3)
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Voltage_Bus), (LFOC_GLOBAL__FLOAT__1_DIV_SQRT3), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis,     //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                  Error__Float_Arithmetic,                                              //!<错误信息变量
                                                  1,                                                                    //!<错误编码需要1-4
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                   //!<要返回的错误值
                //!<保存电流量化系数
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                //!<保存电压量化系数
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Voltage_Conversion = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                //!<最大频率计算：转速*极对数/60
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Frequency_Basis = LFOC_GLOBAL__GENERAL_FLOAT__MUL((LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Rotational_Speed_Rate), (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs), (&(Error__Float_Arithmetic)))), (LFOC_GLOBAL__FLOAT__1_DIV_60), (&(Error__Float_Arithmetic)));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Frequency_Basis,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                  Error__Float_Arithmetic,                                              //!<错误信息变量
                                                  5,                                                                    //!<错误编码需要5-8
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                   //!<要返回的错误值
                //!<极对数保存
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Pole_Pairs = Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs;
                //!<电流基准值计算:功率基准/电压基准*（2/3）
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((LFOC_GLOBAL__GENERAL_FLOAT__MUL((LFOC_GLOBAL__FLOAT__2), (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Power_Rate), (&(Error__Float_Arithmetic)))), (LFOC_GLOBAL__GENERAL_FLOAT__MUL((LFOC_GLOBAL__FLOAT__3), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis), (&(Error__Float_Arithmetic)))), (&(Error__Float_Arithmetic)));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis,     //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                  Error__Float_Arithmetic,                                              //!<错误信息变量
                                                  9,                                                                    //!<错误编码需要9-12
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                   //!<要返回的错误值
                //!<阻抗基准计算：电压基准/电流基准
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                  Error__Float_Arithmetic,                                              //!<错误信息变量
                                                  13,                                                                   //!<错误编码需要13-16
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                   //!<要返回的错误值
                //!<弧度制电角频率计算：执行频率*(2*PI)
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Frequency_Basis), (LFOC_GLOBAL__FLOAT__2_MUL_PI), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  17,                                                                                   //!<错误编码需要17-20
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<感抗基准:阻抗基准/（弧度制电角频率基准）
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Inductance_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Inductance_Basis,                 //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                     //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                         //!<错误状态
                                                  Error__Float_Arithmetic,                                                             //!<错误信息变量
                                                  21,                                                                                  //!<错误编码需要21-24
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                  //!<要返回的错误值
                //!<电容基准:1.0f/（弧度制电角频率基准*阻抗基准）
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Capacitance_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV(LFOC_GLOBAL__FLOAT__1, (LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis), (&Error__Float_Arithmetic))), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Capacitance_Basis,                 //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  25,                                                                                   //!<错误编码需要25-28
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<弧度制机械角频率:弧度制电角频率基准/极对数
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Pole_Pairs), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                                //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                                    //!<错误状态
                                                  Error__Float_Arithmetic,                                                                        //!<错误信息变量
                                                  29,                                                                                             //!<错误编码需要29-32
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                             //!<要返回的错误值
                //!<RPM基准:30*机械角频率/PI
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Rpm_Basis = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis), (LFOC_GLOBAL__FLOAT__30_DIV_PI), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Rpm_Basis,                         //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  33,                                                                                   //!<错误编码需要33-36
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<扭矩基准:功率基准/机械角频率基准
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Torque_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Power_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Torque_Basis,                      //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  37,                                                                                   //!<错误编码需要37-40
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<磁链基准：电压基准/弧度制电角频率基准
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Flux_Linkage_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Flux_Linkage_Basis,                //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  41,                                                                                   //!<错误编码需要41-44
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<转动惯量基准:功率基准/（机械角频率基准^2）
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Moment_Inertia_Basis = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Power_Basis), (LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis), (&Error__Float_Arithmetic))), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Moment_Inertia_Basis,              //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  45,                                                                                   //!<错误编码需要45-48
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<弧度基准:Pi
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Basis = LFOC_GLOBAL__FLOAT__PI;
/* 不是Q格式则不需要进行位移变量计算操作 */
# if LFOC_Q_ENABLE
                //!<ADC电压移动位数：输入位数-ADC位数
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Voltage_Move_Bit = LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE - (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Voltage_Bit);
                //!<判断ADC电压移动位数是否为负数
                if (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Voltage_Move_Bit < 0)
                {
                    //!<出现ADC电压移动位数是负数警告
                    Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic |= 1;
                    //!<置位警告状态
                    Lfoc_Motorx_Benchmark->INFORMATION.WARN.State__Warn_State = 1;
                }
                //!<ADC电流移动位数：输入位数-ADC位数
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Current_Move_Bit = LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE_Q_VALUE - (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Current_Bit);
                //!<判断ADC电流移动位数是否为负数
                if (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Current_Move_Bit < 0)
                {
                    //!<出现ADC电流移动位数是负数警告
                    Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic |= 2;
                    //!<置位警告状态
                    Lfoc_Motorx_Benchmark->INFORMATION.WARN.State__Warn_State = 1;
                }
#else
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Voltage_Move_Bit = 0;
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Bit__Adc_Current_Move_Bit = 0;
#endif
                //!<电流量化系数:(2^(n)-1)*转换系数
                Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion), (((1 << (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Current_Bit)) - 1)), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                       //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  49,                                                                                   //!<错误编码需要49-52
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Current_Qantization = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Float__Ac_Buff), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Current_Qantization,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  53,                                                                                   //!<错误编码需要53-56
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                //!<电压量化系数:(2^(n)-1)*转换系数
                Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion), (((1 << (Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Voltage_Bit)) - 1)), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                       //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  57,                                                                                   //!<错误编码需要57-60
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
                Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Voltage_Qantization = LFOC_GLOBAL__GENERAL_FLOAT__DIV((Float__Ac_Buff), (Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis), (&Error__Float_Arithmetic));
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<判断是否出现浮点运算错误
                LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Voltage_Qantization,   //!<要校验的数据
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic,                      //!<核心运算错误码
                                                  Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State,                          //!<错误状态
                                                  Error__Float_Arithmetic,                                                              //!<错误信息变量
                                                  61,                                                                                   //!<错误编码需要61-64
                                                  LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                   //!<要返回的错误值
        #endif
            }
            else
            {
                //!<错误日志输出或参数配置校验未通过或总校验未能通过或更新装载未能通过
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic = 65;
                //!<置位错误情况
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                //!<返回错误值
                return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
            }
    }
    //!<返回成功
    return LFOC_ERROR__SUCCESS;
}
/*************************基准参数写入函数*****************************/
/**@brief LFOC的基准参数写入函数
* @details 将应有的配置写入到基准的空间中(前面必须要先进行开辟)
* @param[in] LFOC_F_32BIT  Float__Voltage_Bus,                            直流总线电压
* @param[in] LFOC_F_32BIT  Float__Current_Max,                            电流最大值
* @param[in] LFOC_F_32BIT  Float__Coefficient_Adc_Voltage_Conversion,     ADC电压系数
* @param[in] LFOC_F_32BIT  Float__Coefficient_Adc_Current_Conversion,     ADC电流系数
* @param[in] LFOC_F_32BIT  Float__Frequency_Max,                          最大频率
* @param[in] LFOC_UI_BIT   Bit__Pole_Pairs,                          极对数
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);   //!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Config_Write(LFOC_F_32BIT  Float__Power_Rate,                                  /*!<额定功率*/
                                       LFOC_F_32BIT  Float__Voltage_Bus,                                 /*!<直流总线电压*/
                                       LFOC_F_32BIT  Float__Coefficient_Adc_Voltage_Conversion,          /*!<ADC电压转换系数*/
                                       LFOC_F_32BIT  Float__Coefficient_Adc_Current_Conversion,          /*!<ADC电流转换系数*/
                                       LFOC_F_32BIT  Float__Rotational_Speed_Rate,                       /*!<额定转速*/
                                       LFOC_UI_BIT   Bit__Pole_Pairs,                                    /*!<极对数*/
                                       LFOC_UI_BIT   Bit__Adc_Voltage_Bit,                               /*!<ADC电压位数*/
                                       LFOC_UI_BIT   Bit__Adc_Current_Bit,                               /*!<ADC电流位数*/
                                       LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)                            //!<基准结构体写入
{
    if (Lfoc_Motorx_Benchmark != LFOC_NULL)
    {
        if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Power_Rate = Float__Power_Rate;                                                  //!<额定功率装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Voltage_Bus = Float__Voltage_Bus;                                                //!<直流总线电压装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Float__Coefficient_Adc_Voltage_Conversion;  //!<ADC电压系数装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Float__Coefficient_Adc_Current_Conversion;  //!<ADC电流系数装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Rotational_Speed_Rate = Float__Rotational_Speed_Rate;                            //!<额定转速装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Pole_Pairs = Bit__Pole_Pairs;                                                      //!<极对数装载
            Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Voltage_Bit = Bit__Adc_Voltage_Bit;                                            //!<ADC电流位数
            Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Current_Bit = Bit__Adc_Current_Bit;                                            //!<ADC电压位数
            Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable = 0;                                                                //!<配置状态: 0 该配置未使能 1 该配置已使能
            Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验状态:等待校验
        }
        else
        {
            return LFOC_ERROR__CONFIG_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__CONFIG_ERROR;
    }
    //!<返回成功
    return LFOC_ERROR__SUCCESS;
}

/*************************基准检测校验函数接口**************************/
/**@brief LFOC的基准检测校验函数
* @details 检验数据是否都通过了检验(前面先进行配置加载)
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__CONFIG_CHECK_ERROR            未能加载配置错误
* @return    LFOC_ERROR__REPEAT_CHECK_ERROR            重复检验错误
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Check(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)                         //!<基准结构体写入
{
    if (Lfoc_Motorx_Benchmark != LFOC_NULL)
    {
        if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<检验配置状态是否需要校验
            if (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是额定功率配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Power_Rate == 0)
                {
                    //!<此为配置参数:额定功率错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 1;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是直流母线电压配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Voltage_Bus == 0)
                {
                    //!<此为配置参数:直流母线电压错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 2;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是ADC电压转换系数配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion == 0)
                {
                    //!<此为配置参数:ADC电压转换系数错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 3;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是ADC电流转换系数配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion == 0)
                {
                    //!<此为配置参数:ADC电流转换系数错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 4;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是额定转速错误配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Rotational_Speed_Rate == 0)
                {
                    //!<此为配置参数:额定转速错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 5;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是极对数配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Pole_Pairs == 0)
                {
                    //!<此为配置参数:极对数错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 6;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是ADC电压位数配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Voltage_Bit == 0)
                {
                    //!<此为配置参数:ADC电压位数错误
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 7;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<判断是否是ADC电流位数配置错误
                if (Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Current_Bit == 0)
                {
                    //!<此为配置参数:ADC电流位数
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 8;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待总校验
                Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable = 0;
            }
            //!<检测校验是否通过
            if (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 0)
            {
                //!<判断配置是否校验成功
                if (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 0)
                {
                    //!<配置未能加载成功
                    //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Check = 1;
                    //!<置位错误状态
                    Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                    //!<直接返回
                    return LFOC_ERROR__CHECK_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待更新
                Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable = 0;
            }
        }
        else
        {
            return LFOC_ERROR__CHECK_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__CHECK_ERROR;
    }
    //!<函数参数返回：LFOC_ERROR__CHECK_ERROR校验错误，LFOC_ERROR__CONFIG_CHECK_ERROR配置校验错误
    return LFOC_ERROR__SUCCESS;
}
/*************************基准参数更新函数接口**************************/
/**@brief LFOC的基准参数更新函数
* @details 将已通过检验的数据统一压入基准的缓存中(前面先进行配置检验)
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__REPEAT_UPDATE_ERROR          重复更新错误
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark)      ; //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值

*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Update(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)                          //!<基准结构体写入
{
    if (Lfoc_Motorx_Benchmark != LFOC_NULL)
    {
        if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<参数经过写入->加载->校验后，没有任何问题，开始进行更新
            if ((Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 1) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 1))
            {
                //!<参数校验通过+总校验通过:允许参数装载
                //!<将更新值放入加载缓存区中
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Power_Rate = Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Power_Rate;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Voltage_Bus = Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Voltage_Bus;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Float__Rotational_Speed_Rate = Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Rotational_Speed_Rate;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs = Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Pole_Pairs;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Voltage_Bit = Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Voltage_Bit;
                Lfoc_Motorx_Benchmark->BUFFER.CONFIG.Bit__Adc_Current_Bit = Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Adc_Current_Bit;
                //!<更新状态已使能
                Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable = 1;
            }
            else if ((Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update = 1;
                //!<置位错误状态
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 1))
            {
                //!<无生效参数+参数校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update = 2;
                //!<置位错误状态
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 1) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 1) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 0))
            {
                //!<有生效参数+参数校验不通过+总校验通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update = 3;
                //!<置位错误状态
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Benchmark->USER.STATE.State__Update_Enable == 1) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Check_Enable == 0) && (Lfoc_Motorx_Benchmark->USER.STATE.State__Config_Enable == 1))
            {
                //!<有生效参数+参数校验通过+总校验不通过:输出错误信息
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update = 4;
                //!<置位错误状态
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
        }
        else
        {
            return LFOC_ERROR__UPDATE_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__UPDATE_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}

/*************************空间管理接口-MCU方式******************************/
#if LFOC_USE_PLATFORM == MCU       //!<选择MCU格式
/**@brief LFOC的基准空间开辟接口
* @details 为将建立的LFOC基准结构体指针开辟合适空间
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__OPEN_SPACE_ERROR             空间开辟失败
* @return    LFOC_ERROR__CLEAR_SPACE_ERROR           空间清理失败
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Malloc(LFOC_BENCHMARK** Lfoc_Motorx_Benchmark)//!<基准结构体写入
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Benchmark, (LFOC_UI_SIZE)sizeof(LFOC_BENCHMARK));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<申请空间失败
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Benchmark, 0, (LFOC_UI_SIZE)sizeof(LFOC_BENCHMARK));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
/**@brief LFOC的基准空间解放接口
* @details 为使用后的LFOC基准结构体指针解放对应空间
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__FREE_SPACE_ERROR             空间解放失败
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Free(LFOC_BENCHMARK** Lfoc_Motorx_Benchmark)  //!<基准结构体写入
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Benchmark);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<解放空间失败
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
#endif

/*************************空间管理接口-SIMULINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
/**@brief LFOC的基准空间开辟接口
* @details 为将建立的LFOC基准结构体清理出合适的空间
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__CLEAR_SPACE_ERROR           空间清理失败
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Malloc(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)//!<基准结构体写入
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Benchmark, 0, (LFOC_UI_SIZE)sizeof(LFOC_BENCHMARK));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}

/**@brief LFOC的基准空间解放接口
* @details 为使用后的LFOC基准结构体清理对应空间
* @param[in] LFOC_BENCHMARK*       Lfoc_Motorx_Benchmark        LFOC的Motorx(x型号电机)的基准结构体
* @return    LFOC_ERROR__SUCCESS                      运行成功
* @return    LFOC_ERROR__CLEAR_SPACE_ERROR           空间清理失败
* @par       创建基准流程
* @code
*        LFOC_ERROR Lfoc_Error =LFOC_ERROR__SUCCESS;       //!<创建LFOC的错误标志位
*        LFOC_BENCHMARK* Lfoc_Motorx_Benchmark;            //!<创建LFOC的基准的指针结构体
*        Lfoc_Error = Lfoc_Benchmark_Malloc(Lfoc_Motorx_Benchmark);       //!<开辟基准的结构体空间
*        //!<基准参数写入
*        Lfoc_Error = Lfoc_Benchmark_Config_Write(100,                   //!<额定功率
*                                                 24,                    //!<总线电压
*                                                 0.02197f,              //!<电压系数
*                                                 0.020947265625f,       //!<电流系数
*                                                 10000,                 //!<最大频率
*                                                 4,                     //!<极对数
*                                                 Lfoc_Motorx_Benchmark);
*        Lfoc_Error = Lfoc_Benchmark_Config_Load(Lfoc_Motorx_Benchmark);//!<基准参数加载
*        Lfoc_Error = Lfoc_Benchmark_Checking(Lfoc_Motorx_Benchmark);      //!<基准参数校验
*        Lfoc_Error = Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);        //!<基准参数更新
*        Lfoc_Error = Lfoc_Benchmark(Lfoc_Motorx_Benchmark);               //!<构建基准值
*        //!<想要删除这个的话直接调用解散函数
*        Lfoc_Error = Lfoc_Benchmark_Free(Lfoc_Motorx_Benchmark);          //!<基准结构体空间解散
* @endcode
* @attention   用户权限:用户调用权限\n
*              用户更改权限:用户不可更改
* @see :: Lfoc_Benchmark                  基准构建函数
* @see :: Lfoc_Benchmark_Config_Write     基准参数写入函数
* @see :: Lfoc_Benchmark_Config_Load   基准参数加载函数
* @see :: Lfoc_Benchmark_Checking         基准检测校验函数接口
* @see :: Lfoc_Benchmark_Update           基准参数更新函数接口
* @see :: Lfoc_Benchmark_Malloc           基准结构体空间开辟函数
* @see :: Lfoc_Benchmark_Free             基准结构体空间解散函数
*/
LFOC_ERROR Lfoc_Benchmark_Free(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)  //!<基准结构体写入
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Benchmark, 0, (LFOC_UI_SIZE)sizeof(LFOC_BENCHMARK));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
#endif

/*************************LFOC的日志管理-MCU才可使用******************************/
LFOC_ERROR Lfoc_Benchmark_Log(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)
{
    if (Lfoc_Motorx_Benchmark == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(0, 0, 0);
    }
    else
    {
        //!<判断是否有错误日志输出
        if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config != 0)
            {
                Lfoc_Log_Push_Fault(0, 1, Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config - 1);
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断总校验是否出现问题
            if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Check != 0)
            {
                Lfoc_Log_Push_Fault(0, 2, Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Check - 1);
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断更新装载是否出现问题
            if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update != 0)
            {
                Lfoc_Log_Push_Fault(0, 3, Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update - 1);
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断基准值计算是否出现问题
            if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(0, 4, Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
        //!<判断是否有警告日志输出
        if (Lfoc_Motorx_Benchmark->INFORMATION.WARN.State__Warn_State == 1)
        {
            //!<开始执行警告信息输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic != 0)
            {
                if ((Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic & 1) != 0)
                {
                    Lfoc_Log_Push_Warn(0, 0, 0);
                }
                if ((Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic & 2) != 0)
                {
                    Lfoc_Log_Push_Warn(0, 0, 1);
                }
                Lfoc_Motorx_Benchmark->INFORMATION.WARN.State__Warn_State = 0;                  //!<直接对警告复位
                //!<清零警告
                Lfoc_Motorx_Benchmark->INFORMATION.WARN.Warn__Core_Arithmetic = 0;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Benchmark_Error_Reset(LFOC_BENCHMARK* Lfoc_Motorx_Benchmark)
{
    if (Lfoc_Motorx_Benchmark != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Voltage_Bus = 0;
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = 0;
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = 0;
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Power_Rate = 0;
            Lfoc_Motorx_Benchmark->USER.CONFIG.Float__Rotational_Speed_Rate = 0;
            Lfoc_Motorx_Benchmark->USER.CONFIG.Bit__Pole_Pairs = 0;
            Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Check = 0;
            Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Config = 0;
            Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Core_Arithmetic = 0;
            Lfoc_Motorx_Benchmark->INFORMATION.ERROR.Error__Update = 0;
            //!<清零错误日志
            Lfoc_Motorx_Benchmark->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(0, 1, 0);
        }
        else
        {
            return LFOC_ERROR__RESET_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__RESET_ERROR;
    }
    //!<成功
    return LFOC_ERROR__SUCCESS;
}
