#include "lfoc_quantization.h"

/*************************电流数据流参数写入函数*****************************/
//!<电流量化(流)的配置参数写入函数
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
                                                               LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM*    Lfoc_Motorx_Current_Quantization_Float_Stream)     //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Float__Coefficient_Adc_Current_Conversion;  //!<ADC量化系数
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_A = Adc__Offset_Current_A;                                          //!<偏移电流A
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_B = Adc__Offset_Current_B;                                          //!<偏移电流B
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_C = Adc__Offset_Current_C;                                          //!<偏移电流C
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_A = Polarity__Current_Polarity_A;                            //!<电流极性A
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_B = Polarity__Current_Polarity_B;                            //!<电流极性B
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_C = Polarity__Current_Polarity_C;                            //!<电流极性C
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_A = Float__Gain_Current_A;                                          //!<电流增益A
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_B = Float__Gain_Current_B;                                          //!<电流增益B
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_C = Float__Gain_Current_C;                                          //!<电流增益C
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable = 0;                                                                //!<配置状态: 0 该配置未使能 1 该配置已使能
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验状态:等待校验
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
//!<电流量化(点)的配置参数写入函数
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
                                                              LFOC_CURRENT_QUANTIZATION_FLOAT_POINT*      Lfoc_Motorx_Current_Quantization_Float_Point)     //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Float__Coefficient_Adc_Current_Conversion;  //!<ADC量化系数
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_A = Adc__Offset_Current_A;                                          //!<偏移电流A
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_B = Adc__Offset_Current_B;                                          //!<偏移电流B
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_C = Adc__Offset_Current_C;                                          //!<偏移电流C
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_A = Polarity__Current_Polarity_A;                            //!<电流极性A
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_B = Polarity__Current_Polarity_B;                            //!<电流极性B
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_C = Polarity__Current_Polarity_C;                            //!<电流极性C
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_A = Float__Gain_Current_A;                                          //!<电流增益A
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_B = Float__Gain_Current_B;                                          //!<电流增益B
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_C = Float__Gain_Current_C;                                          //!<电流增益C
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable = 0;                                                                //!<配置状态: 0 该配置未使能 1 该配置已使能
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验状态:等待校验
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
//!<电压量化(流)的配置参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Config_Write(LFOC_F_32BIT                               Float__Coefficient_Adc_Voltage_Conversion,         //!<adc量化系数
                                                               LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM*    Lfoc_Motorx_Voltage_Quantization_Float_Stream)     //!<ADC电压量化(流)结构体
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Float__Coefficient_Adc_Voltage_Conversion;  //!<ADC量化系数
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable = 0;                                                                //!<配置状态: 0 该配置未使能 1 该配置已使能
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验状态:等待校验
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
//!<电压量化(点)的配置参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Config_Write(LFOC_F_32BIT                                Float__Coefficient_Adc_Voltage_Conversion,         //!<adc量化系数
                                                              LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT*      Lfoc_Motorx_Voltage_Quantization_Float_Point)      //!<ADC电压量化(流)结构体
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Float__Coefficient_Adc_Voltage_Conversion;  //!<ADC量化系数
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable = 0;                                                                //!<配置状态: 0 该配置未使能 1 该配置已使能
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验状态:等待校验
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
/*************************量化数据参数写入函数*****************************/
//!<电流量化(流)的数据参数写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                          //!<数据长度
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                       //!<ADC电流-输入信号流A相
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                       //!<ADC电流-输入信号流B相
                                                                    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                       //!<ADC电流-输入信号流C相
                                                                    LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)    //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable = 0;                                                                  //!<数据配置使能标志位清零
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验使能标志位清零
#if LFOC_USE_PLATFORM == MCU 
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data = Size__Length_Data;                                                 //!<数据长度
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A = Adc__Current_A;                                                       //!<输入信号流A相
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B = Adc__Current_B;                                                       //!<输入信号流B相
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C = Adc__Current_C;                                                       //!<输入信号流C相
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
            LFOC_UI_SIZE Size__I;  //!<循环变量
            LFOC_UI_SIZE Size__Length = *Size__Length_Data;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;                                             //!<数据长度传递
            for (Size__I = 0; Size__I < Size__Length; Size__I++)
            {
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];                                 //!<输入信号流A相
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];                                 //!<输入信号流A相
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];                                 //!<输入信号流A相
            }
#endif
        }
        else
        {
            return LFOC_ERROR__DATA_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__DATA_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
//!<电流量化(点)的数据参数写入函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                          //!<数据长度
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                                       //!<ADC电流-输入信号流A相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                                       //!<ADC电流-输入信号流B相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                                       //!<ADC电流-输入信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)      //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable = 0;                                                                  //!<数据配置使能标志位清零
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验使能标志位清零
#if LFOC_USE_PLATFORM == MCU 
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data = Size__Length_Data;                                                 //!<数据长度
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A = Adc__Current_A;                                                       //!<输入信号流A相
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B = Adc__Current_B;                                                       //!<输入信号流B相
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C = Adc__Current_C;                                                       //!<输入信号流C相
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
            LFOC_UI_SIZE Size__I;  //!<循环变量
            LFOC_UI_SIZE Size__Length = *Size__Length_Data;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;                                             //!<数据长度传递
            for (Size__I = 0; Size__I < Size__Length; Size__I++)
            {
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];                                 //!<输入信号流A相
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];                                 //!<输入信号流A相
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];                                 //!<输入信号流A相
            }
#endif
        }
        else
        {
            return LFOC_ERROR__DATA_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__DATA_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
//!<电压量化(流)的数据参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                          //!<数据长度
                                                                    LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                                    //!<ADC电压-母线
                                                                    LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)    //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable = 0;                                                                  //!<数据配置使能标志位清零
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验使能标志位清零
#if LFOC_USE_PLATFORM == MCU 
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data = Size__Length_Data;                                                 //!<数据长度
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus = Adc__Voltage_Vbus;                                                 //!<ADC电压-母线
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
            LFOC_UI_SIZE Size__I;  //!<循环变量
            LFOC_UI_SIZE Size__Length = *Size__Length_Data;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;                                             //!<数据长度传递
            for (Size__I = 0; Size__I < Size__Length; Size__I++)
            {
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];                           //!<ADC电压-母线
            }
#endif
        }
        else
        {
            return LFOC_ERROR__DATA_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__DATA_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
//!<电压量化(点)的数据参数写入函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Config_Write(LFOC_UI_SIZE* Size__Length_Data,                                                          //!<数据长度
                                                                   LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                                    //!<ADC电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)      //!<ADC电流量化(流)结构体
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable = 0;                                                                  //!<数据配置使能标志位清零
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;                                                                 //!<校验使能标志位清零
#if LFOC_USE_PLATFORM == MCU 
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data = Size__Length_Data;                                                 //!<数据长度
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus = Adc__Voltage_Vbus;                                                 //!<ADC电压-母线
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
            LFOC_UI_SIZE Size__I;  //!<循环变量
            LFOC_UI_SIZE Size__Length = *Size__Length_Data;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;                                             //!<数据长度传递
            for (Size__I = 0; Size__I < Size__Length; Size__I++)
            {
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];                           //!<ADC电压-母线
            }
#endif
        }
        else
        {
            return LFOC_ERROR__DATA_ERROR;
        }
    }
    else
    {
        return LFOC_ERROR__DATA_ERROR;
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************量化检测校验函数接口**************************/
//!<电流量化(流)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Check(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<检验配置状态是否需要校验
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是ADC系数配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion == 0)
                {
                    //!<此为配置参数:ADC系数错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_A == 0)
                {
                    //!<此为配置参数:A相增益配置错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是B相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_B == 0)
                {
                    //!<此为配置参数:B相增益配置错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是C相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_C == 0)
                {
                    //!<此为配置参数:C相增益配置错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<数据空间映射是否成功
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是数据长度空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data == 0)
                {
                    //!<此为配置参数:数据长度空间未能映射错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据A相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A == 0)
                {
                    //!<此为配置参数:A相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据B相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B == 0)
                {
                    //!<此为配置参数:B相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据C相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C == 0)
                {
                    //!<此为配置参数:C相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号4)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<输出数据空间是否开辟成功
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是空间未能开辟的错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data != 1)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据长度空间未能开辟的错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data == 0)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A == 0)
                {
                    //!<此为配置参数:A相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是B相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B == 0)
                {
                    //!<此为配置参数:B相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号4)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是C相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C == 0)
                {
                    //!<此为配置参数:C相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号5)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 5;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<检测校验是否通过
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0)
            {
                //!<判断配置是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
                {
                    //!<配置未能加载成功
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断数据映射是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
                {
                    //!<数据映射未能加载成功
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断输出数据空间是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
                {
                    //!<输出数据空间未能加载成功
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待更新
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable = 0;
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
//!<电流量化(点)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Check(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<检验配置状态是否需要校验
            if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是ADC系数配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion == 0)
                {
                    //!<此为配置参数:ADC系数错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_A == 0)
                {
                    //!<此为配置参数:A相增益配置错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是B相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_B == 0)
                {
                    //!<此为配置参数:B相增益配置错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是C相增益配置错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_C == 0)
                {
                    //!<此为配置参数:C相增益配置错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<数据空间映射是否成功
            if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是数据长度空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data == 0)
                {
                    //!<此为配置参数:数据长度空间未能映射错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据A相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A == 0)
                {
                    //!<此为配置参数:A相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据B相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B == 0)
                {
                    //!<此为配置参数:B相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据C相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C == 0)
                {
                    //!<此为配置参数:C相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号4)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<输出数据空间是否开辟成功
            if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是空间未能开辟的错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.Space_State__Space_Data != 1)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据长度空间未能开辟的错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data == 0)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A == 0)
                {
                    //!<此为配置参数:A相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是B相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B == 0)
                {
                    //!<此为配置参数:B相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号4)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 4;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是C相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C == 0)
                {
                    //!<此为配置参数:C相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号5)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 5;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<检测校验是否通过
            if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0)
            {
                //!<判断配置是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
                {
                    //!<配置未能加载成功
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断数据映射是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
                {
                    //!<数据映射未能加载成功
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断输出数据空间是否校验成功
                if (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
                {
                    //!<输出数据空间未能加载成功
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待更新
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable = 0;
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
//!<电压量化(流)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Check(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<检验配置状态是否需要校验
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是ADC系数配置错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion == 0)
                {
                    //!<此为配置参数:ADC系数错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<数据空间映射是否成功
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是数据长度空间未能映射错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data == 0)
                {
                    //!<此为配置参数:数据长度空间未能映射错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据A相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus == 0)
                {
                    //!<此为配置参数:A相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<输出数据空间是否开辟成功
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是空间未能开辟的错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data != 1)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据长度空间未能开辟的错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data == 0)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus == 0)
                {
                    //!<此为配置参数:A相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 0;
            }
            //!<检测校验是否通过
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0)
            {
                //!<判断配置是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
                {
                    //!<配置未能加载成功
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断数据映射是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
                {
                    //!<数据映射未能加载成功
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断输出数据空间是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
                {
                    //!<输出数据空间未能加载成功
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待更新
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable = 0;
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
//!<电压量化(点)的校验函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Check(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<检验配置状态是否需要校验
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是ADC系数配置错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion == 0)
                {
                    //!<此为配置参数:ADC系数错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<数据空间映射是否成功
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是数据长度空间未能映射错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data == 0)
                {
                    //!<此为配置参数:数据长度空间未能映射错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据A相ADC数据空间未能映射错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus == 0)
                {
                    //!<此为配置参数:A相ADC数据空间未能映射错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<输出数据空间是否开辟成功
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            {
                //!<当前配置状态需要装载
                //!<判断是否是空间未能开辟的错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.Space_State__Space_Data != 1)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是数据长度空间未能开辟的错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data == 0)
                {
                    //!<此为配置参数:空间未能开辟的错误
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断是否是A相位数据输出空间未能开辟错误
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus == 0)
                {
                    //!<此为配置参数:A相位数据输出空间未能开辟错误
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable = 1;
                //!<等待总校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 0;
            }
            //!<检测校验是否通过
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0)
            {
                //!<判断配置是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
                {
                    //!<配置未能加载成功
                    //!<记录配置错误编号(此处编号1)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 1;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断数据映射是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
                {
                    //!<数据映射未能加载成功
                    //!<记录配置错误编号(此处编号2)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 2;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<判断输出数据空间是否校验成功
                if (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
                {
                    //!<输出数据空间未能加载成功
                    //!<记录配置错误编号(此处编号3)
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 3;
                    //!<置位错误情况
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                    //!<返回值置为错误
                    return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
                }
                //!<当前配置无任何错误，通过配置校验
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable = 1;         //!<配置状态:该配置已使能
                //!<等待更新
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable = 0;
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
/*************************量化检测更新函数接口**************************/
//!<电流量化(流)的更新函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Update(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<参数经过写入->加载->校验后，没有任何问题，开始进行更新
            if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1))
            {
                //!<将更新值放入加载缓存区中
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_A = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_B = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Adc__Offset_Current_C = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_C;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_A = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_A;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_B = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_B;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Polarity__Current_Polarity_C = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_C;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_A = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_B = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Gain_Current_C = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_C;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                //!<将更新数据值值放入加载缓存区中
        #if LFOC_USE_PLATFORM == MCU 
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_A = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_B = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_C = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C;
        #endif
        #if LFOC_USE_PLATFORM == MATLAB_SIMULINK 

                LFOC_UI_SIZE Size__I;  //!<循环变量
                LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0];
                Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data[0] = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0];
                for (Size__I = 0; Size__I < Size__Length; Size__I++)
                {
                    Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_A[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A[Size__I];
                    Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_B[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B[Size__I];
                    Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_C[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C[Size__I];
                }
        #endif
                //!<更新状态已使能
                Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable = 1;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号1)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 1;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号2)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 2;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号3)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 3;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号4)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 4;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号5)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 5;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号6)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 6;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号7)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 7;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号8)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 8;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号9)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 9;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号10)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 10;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号11)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 11;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号12)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 12;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号13)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 13;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号14)
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 14;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
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
//!<电流量化(点)的更新函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Update(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<参数经过写入->加载->校验后，没有任何问题，开始进行更新
            if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1))
            {
                //!<将更新值放入加载缓存区中
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_A = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_B = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Adc__Offset_Current_C = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_C;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_A = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_A;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_B = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_B;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Polarity__Current_Polarity_C = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_C;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_A = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_B = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Gain_Current_C = Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_C;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.CONFIG.Float__Coefficient_Adc_Current_Conversion;
                //!<将更新数据值值放入加载缓存区中
        #if LFOC_USE_PLATFORM == MCU 
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_A = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_B = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B;
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_C = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C;
        #endif
        #if LFOC_USE_PLATFORM == MATLAB_SIMULINK 

                LFOC_UI_SIZE Size__I;  //!<循环变量
                LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0];
                Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data[0] = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0];
                for (Size__I = 0; Size__I < Size__Length; Size__I++)
                {
                    Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_A[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A[Size__I];
                    Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_B[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B[Size__I];
                    Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_C[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C[Size__I];
                }
        #endif
                //!<更新状态已使能
                Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable = 1;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号1)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 1;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号2)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 2;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号3)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 3;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号4)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 4;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号5)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 5;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号6)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 6;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号7)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 7;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号8)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 8;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号9)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 9;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号10)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 10;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号11)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 11;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号12)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 12;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号13)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 13;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号14)
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 14;
                //!<置位错误状态
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
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
//!<电压量化(流)的更新函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Update(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<参数经过写入->加载->校验后，没有任何问题，开始进行更新
            if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1))
            {
                //!<将更新值放入加载缓存区中
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.CONFIG.Float__Conversion_Coefficient = Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                //!<将更新数据值值放入加载缓存区中
        #if LFOC_USE_PLATFORM == MCU 
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data;
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Voltage_Vbus = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus;
        #endif
        #if LFOC_USE_PLATFORM == MATLAB_SIMULINK 

                LFOC_UI_SIZE Size__I;  //!<循环变量
                LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0];
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data[0] = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0];
                for (Size__I = 0; Size__I < Size__Length; Size__I++)
                {
                    Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus[Size__I];
                }
        #endif
                //!<更新状态已使能
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable = 1;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号1)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 1;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号2)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 2;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号3)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 3;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号4)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 4;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号5)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 5;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号6)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 6;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号7)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 7;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号8)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 8;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号9)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 9;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号10)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 10;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号11)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 11;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号12)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 12;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号13)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 13;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号14)
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 14;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 1;
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
//!<电压量化(点)的更新函数
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Update(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point != LFOC_NULL)
    {
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 0)
        {
            //!<参数经过写入->加载->校验后，没有任何问题，开始进行更新
            if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1))
            {
                //!<将更新值放入加载缓存区中
                Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                 Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.CONFIG.Float__Conversion_Coefficient = Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion;
                //!<将更新数据值值放入加载缓存区中
        #if LFOC_USE_PLATFORM == MCU 
                Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data;
                Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Voltage_Vbus = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus;
        #endif
        #if LFOC_USE_PLATFORM == MATLAB_SIMULINK 

                LFOC_UI_SIZE Size__I;  //!<循环变量
                LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0];
                Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data[0] = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0];
                for (Size__I = 0; Size__I < Size__Length; Size__I++)
                {
                    Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus[Size__I];
                }
        #endif
                //!<更新状态已使能
                Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable = 1;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号1)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 1;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号2)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 2;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号3)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 3;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号4)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 4;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号5)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 5;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号6)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 6;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<无生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号7)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 7;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验不通过+总校验通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号8)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 8;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号9)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 9;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验通过+空间校验不通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号10)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 10;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验不通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号11)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 11;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验不通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号12)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 12;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 0)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间不校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号13)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 13;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
                //!<直接返回
                return LFOC_ERROR__UPDATE_ERROR;
            }
            else if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Update_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Config_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Data_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Space_Enable == 1)
            && (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.State__Check_Enable == 0))
            {
                //!<有历史生效参数+参数校验通过+数据映射校验通过+空间校验通过+总校验不通过:输出错误信息
                //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
                //!<记录校验错误编号(此处编号14)
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 14;
                //!<置位错误状态
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 1;
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
#if LFOC_USE_PLATFORM == MCU 
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Current_Quantization_Float_Stream, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<申请空间失败
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)(*Lfoc_Motorx_Current_Quantization_Float_Stream), 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Current_Quantization_Float_Point, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<申请空间失败
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)(*Lfoc_Motorx_Current_Quantization_Float_Point), 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Voltage_Quantization_Float_Stream, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<申请空间失败
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)(*Lfoc_Motorx_Voltage_Quantization_Float_Stream), 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Voltage_Quantization_Float_Point, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<申请空间失败
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)(*Lfoc_Motorx_Voltage_Quantization_Float_Point), 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_STATE Lfoc_State = 0;
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) == (LFOC_NULL))
    {
        //!<长度未能开辟
        //!<开辟长度变量
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data), (1));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Size__Length_Data;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    else if ((*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) != Size__Length_Data)
    {
        (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Size__Length_Data;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    if (Lfoc_State == 1)
    {
        if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }

        if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }

        if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C), (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C), 0, (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        //!<重开完毕后，向用户端更新
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_A = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_B = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_C = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C;
    }
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_STATE Lfoc_State = 0;
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) == (LFOC_NULL))
    {
        //!<长度未能开辟
        //!<开辟长度变量
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data), (1));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 1;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    else if ((*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) != 1)
    {
        (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 1;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    if (Lfoc_State == 1)
    {
        if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }

        if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }

        if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C), (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C), 0, (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        //!<重开完毕后，向用户端更新
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_A = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_B = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_C = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C;
    }
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_STATE Lfoc_State = 0;
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) == (LFOC_NULL))
    {
        //!<长度未能开辟
        //!<开辟长度变量
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__MALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data), (1));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Size__Length_Data;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    else if ((*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) != Size__Length_Data)
    {
        (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Size__Length_Data;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    if (Lfoc_State == 1)
    {
        if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus), (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus), 0, (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus), (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus), 0, (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }

        //!<重开完毕后，向用户端更新
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data   = Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data;
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Float__Voltage_Vbus = Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus;
    }
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_STATE Lfoc_State = 0;
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) == (LFOC_NULL))
    {
        //!<长度未能开辟
        //!<开辟长度变量
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__MALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data), (1));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 1;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    else if ((*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) != 1)
    {
        (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 1;
        //!<更新存储空间
        Lfoc_State = 1;
    }
    if (Lfoc_State == 1)
    {
        if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus), (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus), 0, (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = LFOC_GLOBAL__FLOAT__REALLOC((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus), (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = LFOC_GLOBAL__FLOAT__MEMSET((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus), 0, (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        //!<重开完毕后，向用户端更新
        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data   = Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data;
        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Float__Voltage_Vbus = Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus;

    }
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Current_Quantization_Float_Stream);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<解放空间失败
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Current_Quantization_Float_Point);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<解放空间失败
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM** Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Voltage_Quantization_Float_Stream);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<解放空间失败
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT** Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS; //!<错误码
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Voltage_Quantization_Float_Point);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<解放空间失败
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__FREE((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_A = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_B = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_C = 0;
    }
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = -1;
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__FREE((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_A = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_B = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_C = 0;
    }
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = -1;
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__FREE((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Float__Voltage_Vbus = 0;
    }
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = -1;
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__UI_SIZE__FREE((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data = 0;
    }
    //!<停止->释放数据流
    if ((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus) != (LFOC_NULL))
    {
        //!<释放空间
        Lfoc__Error = LFOC_GLOBAL__FLOAT__FREE((Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus));
        if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Float__Voltage_Vbus = 0;
    }
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = -1;
    return LFOC_ERROR__SUCCESS;
}

#endif
/*************************空间管理接口-SIMLINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK 
//!<电流快速量化(流)的结构体空间开辟函数
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Current_Quantization_Float_Stream, 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Current_Quantization_Float_Point, 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Voltage_Quantization_Float_Stream, 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Voltage_Quantization_Float_Point, 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = Size__Length_Data;
    //!<数据传递
    (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    (*Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;

        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;
    }
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Malloc(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = 1;
    //!<数据传递
    (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    (*Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;

        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;
    }
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Malloc(LFOC_UI_SIZE Size__Length_Data, LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = Size__Length_Data;
    //!<数据传递
    (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;

        (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;
    }
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Malloc(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = 1;
    //!<数据传递
    (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    (*Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data) = Lfoc__Size;
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;

        (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;
    }
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = 1;
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Current_Quantization_Float_Stream, 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Current_Quantization_Float_Point, 0, (LFOC_UI_SIZE)sizeof(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Voltage_Quantization_Float_Stream, 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Motorx_Voltage_Quantization_Float_Point, 0, (LFOC_UI_SIZE)sizeof(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        //!<清零空间失败
        return LFOC_ERROR__CLEAR_SPACE_ERROR;
    }
    //!<成功
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data);
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;

        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;
    }
    (*Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = 0;
    (*Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data) = 0;
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = -1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Free(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data);
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;

        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_A[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_B[Lfoc__I]) = 0;
        (Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_C[Lfoc__I]) = 0;
    }
    (*Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 0;
    (*Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data) = 0;
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = -1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data);
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;

        (Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;
    }
    (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data) = 0;
    (*Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data) = 0;
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.STATE.Space_State__Space_Data = -1;
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Free(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;  //!<错误信息:保存开辟空间错误信息
    LFOC_UI_SIZE Lfoc__I;
    LFOC_UI_SIZE Lfoc__Size;
    Lfoc__Size = (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data);
    for (Lfoc__I = 0; Lfoc__I < Lfoc__Size; Lfoc__I++)
    {
        (Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;

        (Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Float__Voltage_Vbus[Lfoc__I]) = 0;
    }
    (*Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data) = 0;
    (*Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data) = 0;
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.STATE.Space_State__Space_Data = -1;
    return Lfoc__Error;
}
#endif

/*************************数据传递函数接口-SIMULINK方式*********************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                      //!<数据长度
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                   //!<输入信号流A相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                   //!<输入信号流B相
                                                                   LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                   //!<输入信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = *Size__Length_Data;
    Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;     //!<数据长度传递
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0] = * Size__Length_Data;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];

        Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];               //!<输入信号流A相
        Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];               //!<输入信号流A相
        Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];               //!<输入信号流A相
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                      //!<数据长度
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_A,                   //!<输入信号流A相
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_B,                   //!<输入信号流B相
                                                                  LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE* Adc__Current_C,                   //!<输入信号流C相
                                                                  LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = *Size__Length_Data;
    Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;     //!<数据长度传递
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0] = * Size__Length_Data;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];

        Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_A[Size__I] = Adc__Current_A[Size__I];               //!<输入信号流A相
        Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_B[Size__I] = Adc__Current_B[Size__I];               //!<输入信号流A相
        Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Current_C[Size__I] = Adc__Current_C[Size__I];               //!<输入信号流A相
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                      //!<数据长度
                                                                   LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                //!<ADC电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = *Size__Length_Data;
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;     //!<数据长度传递
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Size__Length_Data[0] = * Size__Length_Data;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];

        Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Transmit_In(LFOC_UI_SIZE* Size__Length_Data,                                      //!<数据长度
                                                                  LFOC_GLOBAL__VOLTAGE_ADC_DATA_TYPE* Adc__Voltage_Vbus,                //!<ADC电压-母线
                                                                  LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = *Size__Length_Data;
    Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Size__Length_Data[0] = *Size__Length_Data;
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Size__Length_Data[0] = * Size__Length_Data;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];

        Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.IN.Adc__Voltage_Vbus[Size__I] = Adc__Voltage_Vbus[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}



LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                     //!<数据长度
                                                                    LFOC_F_32BIT* Float__Current_A,                                      //!<输出信号流A相
                                                                    LFOC_F_32BIT* Float__Current_B,                                      //!<输出信号流B相
                                                                    LFOC_F_32BIT* Float__Current_C,                                      //!<输出信号流C相
                                                                    LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data[0];
    (*Size__Length_Data) = Size__Length;
    Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data[0] = Size__Length;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Float__Current_A[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_A[Size__I];               //!<输出信号流A相
        Float__Current_B[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_B[Size__I];               //!<输出信号流A相
        Float__Current_C[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Current_C[Size__I];               //!<输出信号流A相

        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_A[Size__I] = Float__Current_A[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_B[Size__I] = Float__Current_B[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Stream->USER.DATA.OUT.Float__Current_C[Size__I] = Float__Current_C[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                     //!<数据长度
                                                                   LFOC_F_32BIT* Float__Current_A,                                      //!<输出信号流A相
                                                                   LFOC_F_32BIT* Float__Current_B,                                      //!<输出信号流B相
                                                                   LFOC_F_32BIT* Float__Current_C,                                      //!<输出信号流C相
                                                                   LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data[0];
    (*Size__Length_Data) = Size__Length;
    Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data[0] = Size__Length;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Float__Current_A[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_A[Size__I];               //!<输出信号流A相
        Float__Current_B[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_B[Size__I];               //!<输出信号流A相
        Float__Current_C[Size__I] = Lfoc_Motorx_Current_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Current_C[Size__I];               //!<输出信号流A相

        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_A[Size__I] = Float__Current_A[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_B[Size__I] = Float__Current_B[Size__I];
        Lfoc_Motorx_Current_Quantization_Float_Point->USER.DATA.OUT.Float__Current_C[Size__I] = Float__Current_C[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                     //!<数据长度
                                                                    LFOC_F_32BIT* Float__Voltage_Vbus,                                   //!<FLOAT电压-母线
                                                                    LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Size__Length_Data[0];
    (*Size__Length_Data) = Size__Length;
    Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Size__Length_Data[0] = Size__Length;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Float__Voltage_Vbus[Size__I] = Lfoc_Motorx_Voltage_Quantization_Float_Stream->BUFFER.DATA.OUT.Float__Voltage_Vbus[Size__I];

        Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.DATA.OUT.Float__Voltage_Vbus[Size__I] = Float__Voltage_Vbus[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Data_Transmit_Out(LFOC_UI_SIZE* Size__Length_Data,                                     //!<数据长度
                                                                   LFOC_F_32BIT* Float__Voltage_Vbus,                                   //!<FLOAT电压-母线
                                                                   LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    LFOC_UI_SIZE Size__I;  //!<循环变量
    LFOC_UI_SIZE Size__Length = Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Size__Length_Data[0];
    (*Size__Length_Data) = Size__Length;
    Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Size__Length_Data[0] = Size__Length;
    for (Size__I = 0; Size__I < Size__Length; Size__I++)
    {
        Float__Voltage_Vbus[Size__I] = Lfoc_Motorx_Voltage_Quantization_Float_Point->BUFFER.DATA.OUT.Float__Voltage_Vbus[Size__I];

        Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.DATA.OUT.Float__Voltage_Vbus[Size__I] = Float__Voltage_Vbus[Size__I];
    }
    return LFOC_ERROR__SUCCESS;
}
#endif

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Log(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(10, 0, 0);
    }
    else
    {
        //!<判断是否有错误日志输出
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config != 0)
            {
                Lfoc_Log_Push_Fault(10, 1, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data != 0)
            {
                Lfoc_Log_Push_Fault(10, 2, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space != 0)
            {
                Lfoc_Log_Push_Fault(10, 3, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断总校验是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check != 0)
            {
                Lfoc_Log_Push_Fault(10, 4, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断更新装载是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update != 0)
            {
                Lfoc_Log_Push_Fault(10, 5, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断基准值计算是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(10, 6, Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Log(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(11, 0, 0);
    }
    else
    {
        //!<判断是否有错误日志输出
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config != 0)
            {
                Lfoc_Log_Push_Fault(11, 1, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data != 0)
            {
                Lfoc_Log_Push_Fault(11, 2, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space != 0)
            {
                Lfoc_Log_Push_Fault(11, 3, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断总校验是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check != 0)
            {
                Lfoc_Log_Push_Fault(11, 4, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断更新装载是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update != 0)
            {
                Lfoc_Log_Push_Fault(11, 5, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断基准值计算是否出现问题
            if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(11, 6, Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Log(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(12, 0, 0);
    }
    else
    {
        //!<判断是否有错误日志输出
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config != 0)
            {
                Lfoc_Log_Push_Fault(12, 1, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data != 0)
            {
                Lfoc_Log_Push_Fault(12, 2, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space != 0)
            {
                Lfoc_Log_Push_Fault(12, 3, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断总校验是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check != 0)
            {
                Lfoc_Log_Push_Fault(12, 4, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断更新装载是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update != 0)
            {
                Lfoc_Log_Push_Fault(12, 5, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断基准值计算是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(12, 6, Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Log(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(13, 0, 0);
    }
    else
    {
        //!<判断是否有错误日志输出
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Config != 0)
            {
                Lfoc_Log_Push_Fault(13, 1, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Config - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Data != 0)
            {
                Lfoc_Log_Push_Fault(13, 2, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Data - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断参数配置是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space != 0)
            {
                Lfoc_Log_Push_Fault(13, 3, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断总校验是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check != 0)
            {
                Lfoc_Log_Push_Fault(13, 4, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断更新装载是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update != 0)
            {
                Lfoc_Log_Push_Fault(13, 5, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
            //!<判断基准值计算是否出现问题
            if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(13, 6, Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}

LFOC_ERROR Lfoc_Current_Quantization_Float_Stream_Error_Reset(LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Current_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Stream != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Adc__Offset_Current_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Float__Gain_Current_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->USER.CONFIG.Polarity__Current_Polarity_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 0;
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 0;
            //!<清零错误日志
            Lfoc_Motorx_Current_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(10, 0, 0);
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
LFOC_ERROR Lfoc_Current_Quantization_Float_Point_Error_Reset(LFOC_CURRENT_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Current_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Current_Quantization_Float_Point != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Adc__Offset_Current_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Current_Conversion = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Float__Gain_Current_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_A = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_B = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->USER.CONFIG.Polarity__Current_Polarity_C = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 0;
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 0;
            //!<清零错误日志
            Lfoc_Motorx_Current_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(11, 0, 0);
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
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Stream_Error_Reset(LFOC_VOLTAGE_QUANTIZATION_FLOAT_STREAM* Lfoc_Motorx_Voltage_Quantization_Float_Stream)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Stream != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Check = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Config = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Data = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Space = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Core_Arithmetic = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.Error__Update = 0;
            //!<清零错误日志
            Lfoc_Motorx_Voltage_Quantization_Float_Stream->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(12, 0, 0);
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
LFOC_ERROR Lfoc_Voltage_Quantization_Float_Point_Error_Reset(LFOC_VOLTAGE_QUANTIZATION_FLOAT_POINT* Lfoc_Motorx_Voltage_Quantization_Float_Point)
{
    if (Lfoc_Motorx_Voltage_Quantization_Float_Point != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Voltage_Quantization_Float_Point->USER.CONFIG.Float__Coefficient_Adc_Voltage_Conversion = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Check = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Config = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Data = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Space = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Core_Arithmetic = 0;
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.Error__Update = 0;
            //!<清零错误日志
            Lfoc_Motorx_Voltage_Quantization_Float_Point->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(13, 0, 0);
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