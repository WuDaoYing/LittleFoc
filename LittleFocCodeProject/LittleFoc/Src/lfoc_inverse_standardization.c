#include "lfoc_log.h"                                  //!<LFOC存放日志资源管理
#include "lfoc_abnormal_check.h"                       //!<LFOC存放数据校验的头文件
#include "lfoc_inverse_standardization.h"              //!<LFOC存放反标幺化的头文件

/*************************反标幺化函数*********************************/
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Inverse_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************逆向标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_1->USER.DATA.IN.Foq__Data_1), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             1,                                                                                            //!<错误编码需要1-4
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              5,                                                                                            //!<错误编码需要5-8
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_1->USER.DATA.OUT.Float__Data_1) = Float__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Inverse_Standardization_Data_1->USER.DATA.OUT.Float__Data_1 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Inverse_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************逆向标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.IN.Foq__Data_1), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             1,                                                                                            //!<错误编码需要1-4
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              5,                                                                                            //!<错误编码需要5-8
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_1) = Float__Ac_Buff;
            /************************************************逆向标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.IN.Foq__Data_2), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             9,                                                                                            //!<错误编码需要9-12
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              13,                                                                                           //!<错误编码需要13-16
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_2) = Float__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_1 = 0;
            Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_2 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Inverse_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
                        /************************************************逆向标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_1), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             1,                                                                                            //!<错误编码需要1-4
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              5,                                                                                            //!<错误编码需要5-8
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_1) = Float__Ac_Buff;
            /************************************************逆向标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_2), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             9,                                                                                            //!<错误编码需要9-12
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              13,                                                                                           //!<错误编码需要13-16
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_3) = Float__Ac_Buff;
            /************************************************逆向标定第三个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__IN_AND_OUT_FOQ__FOQ_TO_FLOAT((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_3), (&Error__Foqx_Arithmetic));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                                             Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             17,                                                                                           //!<错误编码需要17-20
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__MUL((Float__Ac_Buff), ((Lfoc_Motorx_Inverse_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&Error__Float_Arithmetic));
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,         //!<核心运算错误码
                                              Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,             //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              21,                                                                                           //!<错误编码需要21-24
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_3) = Float__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_1 = 0;
            Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_2 = 0;
            Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_3 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************反标幺化参数写入函数*****************************/
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    Lfoc_Motorx_Inverse_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;      //!<转换基准
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    Lfoc_Motorx_Inverse_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;      //!<转换基准
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    Lfoc_Motorx_Inverse_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;      //!<转换基准
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
/*************************反标幺化数据传递函数接口*********************************/
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    Lfoc_Motorx_Inverse_Standardization_Data_1->USER.DATA.IN.Foq__Data_1 = *Foq__Data_1;      //!<数据存放
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_2,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.IN.Foq__Data_1 = *Foq__Data_1;      //!<数据存放
    Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.IN.Foq__Data_2 = *Foq__Data_2;      //!<数据存放
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_2,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_3,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_1 = *Foq__Data_1;      //!<数据存放
    Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_2 = *Foq__Data_2;      //!<数据存放
    Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.IN.Foq__Data_3 = *Foq__Data_3;      //!<数据存放
    return LFOC_ERROR__SUCCESS; //!<返回标幺化后的值
}
/*************************反标幺化读取函数接口*********************************/
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_1_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_1->USER.DATA.OUT.Float__Data_1;
}
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_2_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_1;
}
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_2_To_2_Read(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_2->USER.DATA.OUT.Float__Data_2;
}
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_1;
}
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_2_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_2;
}
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_3_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    return Lfoc_Motorx_Inverse_Standardization_Data_3->USER.DATA.OUT.Float__Data_3;
}
/*************************空间开辟接口-MCU兼容*********************************/
#if LFOC_USE_PLATFORM == MCU 
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_1** Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<创建空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_1, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Inverse_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_2** Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<创建空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_2, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Inverse_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_3** Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<创建空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_3, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Inverse_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Free(LFOC_INVERSE_STANDARDIZATION_DATA_1** Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_1);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Free(LFOC_INVERSE_STANDARDIZATION_DATA_2** Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_2);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Free(LFOC_INVERSE_STANDARDIZATION_DATA_3** Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Inverse_Standardization_Data_3);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
#endif
/*************************空间管理接口-SIMULINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Free(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Free(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Free(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Inverse_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_INVERSE_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
#endif
/*************************日志输出函数*********************************/
//!<反标幺日志输出
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Log(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_1 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(7, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(7, 1, Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Log(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_2 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(8, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(8, 1, Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Log(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_3 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(9, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(9, 1, Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************错误复位函数*********************************/
//!<反标幺日志输出
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_1 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Inverse_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Inverse_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(7, 0, 0);
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
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_2 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Inverse_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Inverse_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(8, 0, 0);
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
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3)
{
    if (Lfoc_Motorx_Inverse_Standardization_Data_3 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Inverse_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Inverse_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(9, 0, 0);
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

