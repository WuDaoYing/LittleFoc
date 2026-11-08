#include "mp_quantization.h"

#if 0

void Mp_Quantizatio_Check(void)
{
    /*******************************变量定义***********************************/
    /* 变量定义 全局量化 */
    LFOC_BENCHMARK*                           Lfoc_Motorx_Benchmark = 0;                           /*!<电机基准指针*/
    LFOC_SATURATION_STANDARDIZATION_DATA_3*   Lfoc_Motorx_Saturation_Standardization_Data_3 = 0;   /*!<饱和标幺算法指针*/
    LFOC_INVERSE_STANDARDIZATION_DATA_3*      Lfoc_Motorx_Inverse_Standardization_Data_3 = 0;      /*!<反标幺算法指针*/
    LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM*   Lfoc_Motorx_Current_Quantization_Stream = 0;         /*!<电流量化流*/
    /* 变量定义 - 基准 */
    LFOC_F_32BIT     Float__Power_Rate;                               /*!<额定功率*/
    LFOC_F_32BIT     Float__Voltage_Bus;                              /*!<直流总线电压*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Voltage_Conversion;       /*!<ADC电压转换系数*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Current_Conversion;       /*!<ADC电流转换系数*/
    LFOC_F_32BIT     Float__Rotational_Speed_Rate;                    /*!<额定转速*/
    LFOC_UI_BIT      Bit__Pole_Pairs;                                 /*!<极对数*/
    /* 变量定义 - 标幺 */
    LFOC_F_32BIT     Float__Data_1;
    LFOC_F_32BIT     Float__Data_2;
    LFOC_F_32BIT     Float__Data_3;
    /* 变量定义 - 反标幺 */
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_1;                    /*!!!<用户数据输入-数据1*/
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_2;                    /*!!!<用户数据输入-数据2*/
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_3;                    /*!!!<用户数据输入-数据3*/
    /* 变量定义 - 电流ADC数据流输入 */
    LFOC_UI_SIZE Size__Length_Data;                                   /*!!!<MCU-数据长度*/
    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_A[100];           /*!!!<MCU-ADC电流-输入信号流A相*/
    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_B[100];           /*!!!<MCU-ADC电流-输入信号流B相*/
    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Current_C[100];           /*!!!<MCU-ADC电流-输入信号流C相*/
    /* 变量定义 - 电压ADC数据流输入 */
    LFOC_GLOBAL__CURRENT_ADC_DATA_TYPE Adc__Voltage[100];             /*!!!<MCU-ADC电压-输入信号流A相*/
    /*******************************指针实例化***********************************/
    Lfoc_Benchmark_Malloc(&Lfoc_Motorx_Benchmark);
    Lfoc_Saturation_Standardization_Data_3_Malloc(&Lfoc_Motorx_Saturation_Standardization_Data_3);
    Lfoc_Inverse_Standardization_Data_3_Malloc(&Lfoc_Motorx_Inverse_Standardization_Data_3);
    Lfoc_Current_Quantization_Float_Stream_Malloc(&Lfoc_Motorx_Current_Quantization_Stream);
    /*******************************数据空间开辟***********************************/
    Lfoc_Current_Quantization_Float_Stream_Data_Malloc(100, Lfoc_Motorx_Current_Quantization_Stream);
    /*******************************基准定义***********************************/
    //!<基准量化
    Float__Power_Rate = 78;                                              /*!<电机额定功率78w*/
    Float__Voltage_Bus = 12;                                             /*!<额定电压24V*/
    Float__Coefficient_Adc_Voltage_Conversion = 0.1257;                  /*!<ADC电压转换系数0.1257*/
    Float__Coefficient_Adc_Current_Conversion = 0.1325;                  /*!<ADC电压转换系数0.1325*/
    Float__Rotational_Speed_Rate = 4000;                                 /*!<额定转速4000RPM*/
    Bit__Pole_Pairs = 4;
    Lfoc_Benchmark_Config_Write(Float__Power_Rate,
                                Float__Voltage_Bus,
                                Float__Coefficient_Adc_Voltage_Conversion,
                                Float__Coefficient_Adc_Current_Conversion,
                                Float__Rotational_Speed_Rate,
                                Bit__Pole_Pairs,
                                14,
                                14,
                                Lfoc_Motorx_Benchmark);
    Lfoc_Benchmark_Check(Lfoc_Motorx_Benchmark);
    Lfoc_Benchmark_Update(Lfoc_Motorx_Benchmark);
    Lfoc_Benchmark(Lfoc_Motorx_Benchmark);
    Lfoc_Benchmark_Log(Lfoc_Motorx_Benchmark);
    /*******************************标幺定义***********************************/
    Lfoc_Saturation_Standardization_Data_3_Config_Write(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis,
                                                        Lfoc_Motorx_Saturation_Standardization_Data_3);
    /*******************************反标幺定义***********************************/
    Lfoc_Inverse_Standardization_Data_3_Config_Write(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis,
                                                     Lfoc_Motorx_Inverse_Standardization_Data_3);
    /*******************************电流量化流定义***********************************/
    Size__Length_Data = 100;
    for (int i = 0;i < Size__Length_Data;i++)
    {
        Adc__Current_A[i] = 1*(i + 1) / Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion;
        Adc__Current_B[i] = 2*(i + 1) / Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion;
        Adc__Current_C[i] = 3*(i + 1) / Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion;
    }
    Lfoc_Current_Quantization_Float_Stream_Config_Write(Lfoc_Motorx_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion,
                                                  0,0,0,
                                                  1,1,1,
                                                  1,1,1,
                                                  Lfoc_Motorx_Current_Quantization_Stream);
    Lfoc_Current_Quantization_Float_Stream_Data_Config_Write(&Size__Length_Data,
                                                       &Adc__Current_A[0],
                                                       &Adc__Current_B[0],
                                                       &Adc__Current_C[0],
                                                       Lfoc_Motorx_Current_Quantization_Stream);
    Lfoc_Current_Quantization_Float_Stream_Check(Lfoc_Motorx_Current_Quantization_Stream);
    Lfoc_Current_Quantization_Float_Stream_Update(Lfoc_Motorx_Current_Quantization_Stream);
    Lfoc_Current_Quantization_Float_Stream(Lfoc_Motorx_Current_Quantization_Stream);
    Lfoc_Current_Quantization_Float_Stream_Log(Lfoc_Motorx_Current_Quantization_Stream);
   
    /*******************************电流量化点数据输出***********************************/
    printf("你好，系统管理者\r\n");
    printf("这是量化算法的验证程序\r\n");
    printf("电流量化流数据输出:\r\n");
    for (int i = 0;i < *Lfoc_Motorx_Current_Quantization_Stream->USER.DATA.OUT.Size__Length_Data;i++)
    {
        printf("A = %f    B = %f    C = %f\r\n", Lfoc_Motorx_Current_Quantization_Stream->USER.DATA.OUT.Float__Current_A[i], Lfoc_Motorx_Current_Quantization_Stream->USER.DATA.OUT.Float__Current_B[i], Lfoc_Motorx_Current_Quantization_Stream->USER.DATA.OUT.Float__Current_C[i]);
    }
   




}
#endif
