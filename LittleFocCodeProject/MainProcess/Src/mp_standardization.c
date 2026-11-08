#include "mp_standardization.h"



void Mp_Standardization_Check(void)
{
    /* 变量定义 输入参数*/
    LFOC_F_32BIT     Float__Power_Rate;                               /*!<额定功率*/
    LFOC_F_32BIT     Float__Voltage_Bus;                              /*!<直流总线电压*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Voltage_Conversion;       /*!<ADC电压转换系数*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Current_Conversion;       /*!<ADC电流转换系数*/
    LFOC_F_32BIT     Float__Rotational_Speed_Rate;                    /*!<额定转速*/
    LFOC_UI_BIT      Bit__Pole_Pairs;                                 /*!<极对数*/
    LFOC_BENCHMARK*  Lfoc_Motor1_Benchmark;                           /*!<电机1基准指针*/
    LFOC_F_32BIT     Float__Data_1;
    LFOC_F_32BIT     Float__Data_2;
    LFOC_F_32BIT     Float__Data_3;

    LFOC_SATURATION_STANDARDIZATION_DATA_3*    Lfoc_Motorx_Saturation_Standardization_Data_3 = 0;
    LFOC_UNSATURATION_STANDARDIZATION_DATA_3*  Lfoc_Motorx_Unsaturation_Standardization_Data_3 = 0;
    /* 变量定义 验证参数*/
    /*******************************开始对Lfoc_Motor1_Benchmark基准实体化***********************************/
    Float__Power_Rate = 78;                                              /*!<电机额定功率78w*/
    Float__Voltage_Bus = 24;                                             /*!<额定电压24V*/
    Float__Coefficient_Adc_Voltage_Conversion = 0.1257;                  /*!<ADC电压转换系数0.1257*/
    Float__Coefficient_Adc_Current_Conversion = 0.1325;                  /*!<ADC电压转换系数0.1325*/
    Float__Rotational_Speed_Rate = 4000;                                 /*!<额定转速4000RPM*/
    Bit__Pole_Pairs = 4;

	printf("你好，系统管理者\r\n");
	printf("这是标幺算法的验证程序\r\n");
    /***************************开始验证计算****************************/
    printf("***************************开始验证计算****************************\r\n");
    Lfoc_Benchmark_Malloc(&Lfoc_Motor1_Benchmark);                                  /*!<创建结构体*/
    Lfoc_Saturation_Standardization_Data_3_Malloc(&Lfoc_Motorx_Saturation_Standardization_Data_3);
    Lfoc_Unsaturation_Standardization_Data_3_Malloc(&Lfoc_Motorx_Unsaturation_Standardization_Data_3);
    Lfoc_Benchmark_Config_Write(Float__Power_Rate,                                  /*!<直流总线电压*/
                                Float__Voltage_Bus,                                 /*!<直流总线电压*/
                                Float__Coefficient_Adc_Voltage_Conversion,          /*!<ADC电压转换系数*/
                                Float__Coefficient_Adc_Current_Conversion,          /*!<ADC电流转换系数*/
                                Float__Rotational_Speed_Rate,                       /*!<额定转速*/
                                15,15,
                                Bit__Pole_Pairs,                                    /*!<极对数*/
                                Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Check(Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Update(Lfoc_Motor1_Benchmark);
    //Lfoc_Motor1_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs = 0;
    //Bit__Pole_Pairs = 0;
    Lfoc_Benchmark(Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Log(Lfoc_Motor1_Benchmark);

    Lfoc_Saturation_Standardization_Data_3_Config_Write(Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis,
                                                        Lfoc_Motorx_Saturation_Standardization_Data_3);
    Float__Data_1 = 2.7f;
    Float__Data_2 = 1.2f;
    Float__Data_3 = 4.5f;
    Lfoc_Saturation_Standardization_Data_3_Data_Write(&Float__Data_1,
                                                      &Float__Data_2,
                                                      &Float__Data_3,
                                                      Lfoc_Motorx_Saturation_Standardization_Data_3);

    Lfoc_Saturation_Standardization_Data_3(Lfoc_Motorx_Saturation_Standardization_Data_3);
    Lfoc_Saturation_Standardization_Data_3_Log(Lfoc_Motorx_Saturation_Standardization_Data_3);
    Lfoc_Saturation_Standardization_Data_3_Error_Reset(Lfoc_Motorx_Saturation_Standardization_Data_3);
}
