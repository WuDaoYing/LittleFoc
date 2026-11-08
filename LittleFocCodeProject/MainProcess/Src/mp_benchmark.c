#include "mp_benchmark.h"



#define PI 3.1415926535897932384626433832795

void Mp_Benchmark_Check(void)
{
    /* 变量定义 输入参数*/
    LFOC_F_32BIT     Float__Power_Rate;                               /*!<额定功率*/
    LFOC_F_32BIT     Float__Voltage_Bus;                              /*!<直流总线电压*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Voltage_Conversion;       /*!<ADC电压转换系数*/
    LFOC_F_32BIT     Float__Coefficient_Adc_Current_Conversion;       /*!<ADC电流转换系数*/
    LFOC_F_32BIT     Float__Rotational_Speed_Rate;                    /*!<额定转速*/
    LFOC_UI_BIT      Bit__Pole_Pairs;                                 /*!<极对数*/
    LFOC_BENCHMARK* Lfoc_Motor1_Benchmark;                           /*!<电机1基准指针*/
    /* 变量定义 验证参数*/
    LFOC_F_32BIT Float__Power_Basis;                                  /*!<功率基准*/
    LFOC_F_32BIT Float__Voltage_Basis;                                /*!<电压基准*/
    LFOC_F_32BIT Float__Current_Basis;                                /*!<电流基准*/
    LFOC_F_32BIT Float__Impedance_Basis;                              /*!<阻抗基准*/
    LFOC_F_32BIT Float__Frequency_Basis;                              /*!<频率基准*/
    LFOC_F_32BIT Float__Radian_Electric_Frequency_Basis;              /*!<弧度制电角频率基准*/
    LFOC_F_32BIT Float__Inductance_Basis;                             /*!<感抗基准*/
    LFOC_F_32BIT Float__Capacitance_Basis;                            /*!<电容基准*/
    LFOC_F_32BIT Float__Radian_Mechanical_Angular_Frequency_Basis;    /*!<弧度制机械角频率基准*/
    LFOC_F_32BIT Float__Rpm_Basis;                                    /*!<RPM基准*/
    LFOC_F_32BIT Float__Torque_Basis;                                 /*!<扭矩基准*/
    LFOC_F_32BIT Float__Flux_Linkage_Basis;                           /*!<磁链基准*/
    LFOC_F_32BIT Float__Moment_Inertia_Basis;                         /*!<转动惯量基准*/
    LFOC_F_32BIT Float__Radian_Basis;                                 /*!<弧度制基准*/
    /*******************************开始对Lfoc_Motor1_Benchmark基准实体化***********************************/
    Float__Power_Rate = 12;                                           /*!<电机额定功率78w*/
    Float__Voltage_Bus = 12;                                          /*!<额定电压24V*/
    Float__Coefficient_Adc_Voltage_Conversion = 0.1257;               /*!<ADC电压转换系数0.1257*/
    Float__Coefficient_Adc_Current_Conversion = 0.1325;               /*!<ADC电压转换系数0.1325*/
    Float__Rotational_Speed_Rate = 2600;                              /*!<额定转速4000RPM*/
    Bit__Pole_Pairs = 4;                                              /*!<极对数4*/

    //Float__Power_Rate = 24;                                             /*!<电机额定功率78w*/
    //Float__Voltage_Bus = 12;                                            /*!<额定电压24V*/
    //Float__Coefficient_Adc_Voltage_Conversion = 0.1257;                 /*!<ADC电压转换系数0.1257*/
    //Float__Coefficient_Adc_Current_Conversion = 0.1325;                 /*!<ADC电压转换系数0.1325*/
    //Float__Rotational_Speed_Rate = 1600;                                /*!<额定转速4000RPM*/
    //Bit__Pole_Pairs = 11;                                               /*!<极对数4*/

    Float__Power_Rate = 78;                                              /*!<电机额定功率78w*/
    Float__Voltage_Bus = 24;                                             /*!<额定电压24V*/
    Float__Coefficient_Adc_Voltage_Conversion = 0.1257;                  /*!<ADC电压转换系数0.1257*/
    Float__Coefficient_Adc_Current_Conversion = 0.1325;                  /*!<ADC电压转换系数0.1325*/
    Float__Rotational_Speed_Rate = 4000;                                 /*!<额定转速4000RPM*/
    Bit__Pole_Pairs = 4;

    printf("你好，系统管理者\r\n");
    printf("这是基准值计算的验证程序\r\n");
    printf("输入参数如下:\r\n");
    printf("额定功率:%fW\r\n", Float__Power_Rate);
    printf("总线电压:%fV\r\n", Float__Voltage_Bus);
    printf("ADC电压转换系数:%f\r\n", Float__Coefficient_Adc_Voltage_Conversion);
    printf("ADC电流转换系数:%f\r\n", Float__Coefficient_Adc_Current_Conversion);
    printf("额定速度:%fRPM\r\n", Float__Rotational_Speed_Rate);
    printf("极对数:%d极对\r\n", Bit__Pole_Pairs);
    /***************************开始验证计算****************************/
    printf("***************************开始验证计算****************************\r\n");
    Lfoc_Benchmark_Malloc(&Lfoc_Motor1_Benchmark);                                  /*!<创建结构体*/
    Lfoc_Benchmark_Config_Write(Float__Power_Rate,                                  /*!<直流总线电压*/
                                Float__Voltage_Bus,                                 /*!<直流总线电压*/
                                Float__Coefficient_Adc_Voltage_Conversion,          /*!<ADC电压转换系数*/
                                Float__Coefficient_Adc_Current_Conversion,          /*!<ADC电流转换系数*/
                                Float__Rotational_Speed_Rate,                       /*!<额定转速*/
                                Bit__Pole_Pairs,                                    /*!<极对数*/
                                14,
                                14,
                                Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Check(Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Update(Lfoc_Motor1_Benchmark);
    //Lfoc_Motor1_Benchmark->BUFFER.CONFIG.Bit__Pole_Pairs = 0;
    //Bit__Pole_Pairs = 0;
    Lfoc_Benchmark(Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Log(Lfoc_Motor1_Benchmark);
    Lfoc_Benchmark_Error_Reset(Lfoc_Motor1_Benchmark);
    Lfoc_Log_Flush_Output();
    Float__Power_Basis = Float__Power_Rate;
    Float__Voltage_Basis = Float__Voltage_Bus * LFOC_GLOBAL__FLOAT__1_DIV_SQRT3;
    Float__Current_Basis = (2 * Float__Power_Rate)/(Float__Voltage_Basis*3);
    Float__Impedance_Basis = Float__Voltage_Basis / Float__Current_Basis;
    Float__Frequency_Basis = Bit__Pole_Pairs * Float__Rotational_Speed_Rate * LFOC_GLOBAL__FLOAT__1_DIV_60;
    Float__Radian_Electric_Frequency_Basis = 2 * PI * Float__Frequency_Basis;
    Float__Inductance_Basis = (Float__Impedance_Basis) / (Float__Radian_Electric_Frequency_Basis);
    Float__Capacitance_Basis = 1.0F / (Float__Impedance_Basis * Float__Radian_Electric_Frequency_Basis);
    Float__Radian_Mechanical_Angular_Frequency_Basis = Float__Radian_Electric_Frequency_Basis / Bit__Pole_Pairs;
    Float__Rpm_Basis = Float__Radian_Mechanical_Angular_Frequency_Basis * LFOC_GLOBAL__FLOAT__30_DIV_PI;
    Float__Torque_Basis = Float__Power_Basis / Float__Radian_Mechanical_Angular_Frequency_Basis;
    Float__Flux_Linkage_Basis = Float__Inductance_Basis * Float__Current_Basis;
    Float__Moment_Inertia_Basis = Float__Power_Basis / (Float__Radian_Mechanical_Angular_Frequency_Basis * Float__Radian_Mechanical_Angular_Frequency_Basis);
    printf("电压转换系数(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Voltage_Conversion);
    printf("电压转换系数(验证):%f\r\n", Float__Coefficient_Adc_Voltage_Conversion);
    printf("电流转换系数(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Coefficient_Adc_Current_Conversion);
    printf("电流转换系数(验证):%f\r\n", Float__Coefficient_Adc_Current_Conversion);
    printf("极对数(计算):%d\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Bit__Pole_Pairs);
    printf("极对数(验证):%d\r\n", Bit__Pole_Pairs);
    printf("功率基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Power_Basis);
    printf("功率基准(验证):%f\r\n", Float__Power_Basis);
    printf("电压基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Voltage_Basis);
    printf("电压基准(验证):%f\r\n", Float__Voltage_Basis);
    printf("电流基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Current_Basis);
    printf("电流基准(验证):%f\r\n", Float__Current_Basis);
    printf("阻抗基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Impedance_Basis);
    printf("阻抗基准(验证):%f\r\n", Float__Impedance_Basis);
    printf("频率基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Frequency_Basis);
    printf("频率基准(验证):%f\r\n", Float__Frequency_Basis);
    printf("电角频率基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Electric_Frequency_Basis);
    printf("电角频率基准(验证):%f\r\n", Float__Radian_Electric_Frequency_Basis);
    printf("电感基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Inductance_Basis);
    printf("电感基准(验证):%f\r\n", Float__Inductance_Basis);
    printf("电容基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Capacitance_Basis);
    printf("电容基准(验证):%f\r\n", Float__Capacitance_Basis);
    printf("机械角频率基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Radian_Mechanical_Angular_Frequency_Basis);
    printf("机械角频率基准(验证):%f\r\n", Float__Radian_Mechanical_Angular_Frequency_Basis);
    printf("RPM基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Rpm_Basis);
    printf("RPM基准(验证):%f\r\n", Float__Rpm_Basis);
    printf("转矩基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Torque_Basis);
    printf("转矩基准(验证):%f\r\n", Float__Torque_Basis);
    printf("磁链基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Flux_Linkage_Basis);
    printf("磁链基准(验证):%f\r\n", Float__Flux_Linkage_Basis);
    printf("转动惯量基准(计算):%f\r\n", Lfoc_Motor1_Benchmark->USER.FLOAT_BENCHMARK.Float__Moment_Inertia_Basis);
    printf("转动管理基准(验证):%f\r\n", Float__Moment_Inertia_Basis);

    printf("***************************结束验证计算****************************\r\n");
    printf("你好，系统管理者请检查数据是否一致\r\n");
}