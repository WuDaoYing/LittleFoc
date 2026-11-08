#include "lfoc_log.h"                          //!<LFOC存放日志资源管理
#include "lfoc_abnormal_check.h"               //!<LFOC存放数据校验的头文件
#include "lfoc_standardization.h"              //!<LFOC存放标幺化的头文件
/*************************标幺化函数*********************************/
//!<饱和标幺化
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Saturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_1->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Saturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                           Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                           Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                           Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                           5,                                                                                            //!<错误编码需要5-11
                                                           LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Saturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Saturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Saturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                     Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                     Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                     Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                     5,                                                                                            //!<错误编码需要5-11
                                     LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
            /************************************************标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.IN.Float__Data_2)), ((Lfoc_Motorx_Saturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              12,                                                                                           //!<错误编码需要12-15
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                     Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                     Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                     Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                     16,                                                                                           //!<错误编码需要16-22
                                     LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1 = 0;
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Saturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                     Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                     Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                     Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                     5,                                                                                            //!<错误编码需要5-11
                                     LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
            /************************************************标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_2)), ((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              12,                                                                                           //!<错误编码需要12-15
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            Error__Foqx_Arithmetic = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                           Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                                           Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                                           Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                           16,                                                                                           //!<错误编码需要16-22
                                                           LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2) = Foq__Ac_Buff;
            /************************************************标定第三个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_3)), ((Lfoc_Motorx_Saturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                              Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              23,                                                                                           //!<错误编码需要23-26
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__SATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_SATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                     Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,      //!<核心运算错误码
                                     Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,          //!<错误状态
                                     Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                     27,                                                                                           //!<错误编码需要27-33
                                     LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1 = 0;
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2 = 0;
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}

//!<不饱和标幺化
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Unsaturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             5,                                                                                            //!<错误编码需要5-8
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Unsaturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             5,                                                                                            //!<错误编码需要5-8
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
            /************************************************标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.IN.Float__Data_2)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              9,                                                                                            //!<错误编码需要9-12
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             13,                                                                                           //!<错误编码需要13-16
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1 = 0;
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    //!<定义FOQX运算错误变量类型(默认值为成功[LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE          Error__Foqx_Arithmetic  = LFOC_GLOBAL__FOQX_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点运算错误变量类型(默认值为成功[LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS])
    LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE Error__Float_Arithmetic = LFOC_GLOBAL__GENERAL_FLOAT_ARITHMETIC_ERROR_DATA_TYPE_SUCCESS;
    //!<定义浮点中间缓存变量
    LFOC_F_32BIT Float__Ac_Buff = 0;
    //!<定义主运算中间缓存变量
    LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Ac_Buff = 0;

    if (Lfoc_Motorx_Unsaturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            /************************************************标定第一个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_1)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              1,                                                                                            //!<错误编码需要1-4
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             5,                                                                                            //!<错误编码需要5-8
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1) = Foq__Ac_Buff;
            /************************************************标定第二个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_2)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              9,                                                                                            //!<错误编码需要9-12
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             13,                                                                                           //!<错误编码需要13-16
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2) = Foq__Ac_Buff;
            /************************************************标定第三个输入数据*************************************************/
            //!<开始进行标定
            Float__Ac_Buff = LFOC_GLOBAL__GENERAL_FLOAT__DIV(((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_3)), ((Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis)), (&(Error__Float_Arithmetic)));
            //!<此为日志输出，该日志输出不影响实时性能，等级为：只要开启就输出日志
            //!<判断是否出现浮点运算错误
            LFOC_GLOBAL__FLOAT_ABNORMAL_CHECK(Float__Ac_Buff,                                                                               //!<要校验的数据
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                              Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                              Error__Float_Arithmetic,                                                                      //!<错误信息变量
                                              17,                                                                                           //!<错误编码需要17-20
                                              LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            Foq__Ac_Buff = LFOC_GLOBAL__UNSATURATION_IN_AND_OUT_FOQ__FLOAT_TO_FOQ((Float__Ac_Buff), (&(Error__Foqx_Arithmetic)));
            //!<判断是否出现运算错误
            LFOC_UNSATURATION_IN_AND_OUT_FOQX_ABNORMAL_CHECK(Foq__Ac_Buff,                                                                                 //!<要校验的数据
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic,    //!<核心运算错误码
                                                             Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State,        //!<错误状态
                                                             Error__Foqx_Arithmetic,                                                                       //!<错误信息变量
                                                             21,                                                                                           //!<错误编码需要21-24
                                                             LFOC_ERROR__CORE_ARITHMETIC_ERROR);                                                           //!<要返回的错误值
            //!<开始往输出更新
            (Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3) = Foq__Ac_Buff;
        }
        else
        {
            //!<限制数据的输出
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1 = 0;
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2 = 0;
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3 = 0;
            //!<返回核心运算错误
            return LFOC_ERROR__CORE_ARITHMETIC_ERROR;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************标幺化参数写入函数*****************************/
//饱和标幺化参数写入
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                               LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                               LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                               LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
//不饱和标幺化参数写入
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                                 LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                                 LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Config_Write(LFOC_F_32BIT Float__Convert_Data_Basis,      //!<转换基准
                                                                 LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = Float__Convert_Data_Basis;
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
    return LFOC_ERROR__SUCCESS;
}
/*************************标幺化数据写入函数*****************************/
//饱和标幺化数据写入
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                             LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_1->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
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
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                             LFOC_F_32BIT* Float__Data_2,
                                                             LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.IN.Float__Data_2 = *Float__Data_2;
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
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                             LFOC_F_32BIT* Float__Data_2,
                                                             LFOC_F_32BIT* Float__Data_3,
                                                             LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_2 = *Float__Data_2;
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.IN.Float__Data_3 = *Float__Data_3;
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
//不饱和标幺化数据写入
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                               LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_1 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
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
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                               LFOC_F_32BIT* Float__Data_2,
                                                               LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_2 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.IN.Float__Data_2 = *Float__Data_2;
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
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Data_Write(LFOC_F_32BIT* Float__Data_1,
                                                               LFOC_F_32BIT* Float__Data_2,
                                                               LFOC_F_32BIT* Float__Data_3,
                                                               LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_3 != LFOC_NULL)
    {
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 0)
        {
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_1 = *Float__Data_1;
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_2 = *Float__Data_2;
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.IN.Float__Data_3 = *Float__Data_3;
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
/*************************读取函数接口*********************************/
//饱和标幺化数据读取
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_1_To_1_Read(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_2_To_1_Read(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_2_To_2_Read(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_3_To_1_Read(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_3_To_2_Read(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Saturation_Standardization_Data_3_To_3_Read(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Saturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3;
}
//不饱和标幺化数据读取
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_1_To_1_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_2_To_1_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_2_To_2_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.DATA.OUT.Foq__Data_2;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_3_To_1_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_1;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_3_To_2_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_2;
}
LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Lfoc_Unsaturation_Standardization_Data_3_To_3_Read(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    return Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.DATA.OUT.Foq__Data_3;
}
/*************************空间开辟接口-MCU兼容*********************************/
#if LFOC_USE_PLATFORM == MCU 
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_1** Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_1, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Saturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_2** Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_2, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Saturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_3** Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_3, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Saturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_1** Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_1, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Unsaturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_2** Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_2, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Unsaturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_3** Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<申请空间
    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_3, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)*Lfoc_Motorx_Unsaturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}


LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Free(LFOC_SATURATION_STANDARDIZATION_DATA_1** Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_1);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Free(LFOC_SATURATION_STANDARDIZATION_DATA_2** Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_2);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Free(LFOC_SATURATION_STANDARDIZATION_DATA_3** Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<释放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Saturation_Standardization_Data_3);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_1** Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_1);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_2** Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_2);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_3** Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<解放空间
    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)Lfoc_Motorx_Unsaturation_Standardization_Data_3);
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__FREE_SPACE_ERROR;
    }
    return Lfoc__Error;
}
#endif
/*************************空间管理接口-SIMULINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Malloc(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Malloc(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Free(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Free(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Free(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Saturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_SATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}

LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_1, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_1));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_2, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_2));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Free(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    //!<清零空间
    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID*)Lfoc_Motorx_Unsaturation_Standardization_Data_3, 0, (LFOC_UI_SIZE)sizeof(LFOC_UNSATURATION_STANDARDIZATION_DATA_3));
    if (Lfoc__Error != LFOC_ERROR__SUCCESS)
    {
        return LFOC_ERROR__OPEN_SPACE_ERROR;
    }
    return Lfoc__Error;
}
#endif
/*************************日志输出函数*********************************/
//!<饱和日志输出
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Log(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_1 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(1, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(1, 1, Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Log(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_2 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(2, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(2, 1, Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Log(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_3 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(3, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(3, 1, Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
//!<不饱和日志输出
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Log(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_1 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(4, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(4, 1, Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Log(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_2 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(5, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(5, 1, Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.Error__Core_Arithmetic - 1);
                Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Log(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_3 == LFOC_NULL)
    {
        Lfoc_Log_Push_Fault(6, 0, 0);
    }
    else
    {
        //!<判断是否有日志输出
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 1)
        {
            //!<开始执行错误输出
            //!<判断标幺计算是否出现问题
            if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic != 0)
            {
                Lfoc_Log_Push_Fault(6, 1, Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.Error__Core_Arithmetic);
                Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 2;
            }
        }
    }
    return LFOC_ERROR__SUCCESS;
}
/*************************错误复位函数*********************************/
//!<饱和错误复位
LFOC_ERROR Lfoc_Saturation_Standardization_Data_1_Error_Reset(LFOC_SATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Saturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_1 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Saturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Saturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(1, 0, 0);
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
LFOC_ERROR Lfoc_Saturation_Standardization_Data_2_Error_Reset(LFOC_SATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Saturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_2 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Saturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Saturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(2, 0, 0);
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
LFOC_ERROR Lfoc_Saturation_Standardization_Data_3_Error_Reset(LFOC_SATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Saturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Saturation_Standardization_Data_3 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Saturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Saturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(3, 0, 0);
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
//!<不饱和错误复位
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_1_Error_Reset(LFOC_UNSATURATION_STANDARDIZATION_DATA_1* Lfoc_Motorx_Unsaturation_Standardization_Data_1)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_1 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Unsaturation_Standardization_Data_1->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Unsaturation_Standardization_Data_1->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(4, 0, 0);
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
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_2_Error_Reset(LFOC_UNSATURATION_STANDARDIZATION_DATA_2* Lfoc_Motorx_Unsaturation_Standardization_Data_2)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_2 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Unsaturation_Standardization_Data_2->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(5, 0, 0);
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
LFOC_ERROR Lfoc_Unsaturation_Standardization_Data_3_Error_Reset(LFOC_UNSATURATION_STANDARDIZATION_DATA_3* Lfoc_Motorx_Unsaturation_Standardization_Data_3)
{
    if (Lfoc_Motorx_Unsaturation_Standardization_Data_3 != LFOC_NULL)
    {
        //!<代表现在是有错误输出的且日志已经打印出来了
        if (Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State == 2)
        {
            //!<清零所有输入参数
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->USER.CONFIG.Float__Convert_Data_Basis = 0;
            //!<清零错误日志
            Lfoc_Motorx_Unsaturation_Standardization_Data_3->INFORMATION.ERROR.State__Error_State = 0;
            //!<日志向外汇报
            Lfoc_Log_Push_Warn(6, 0, 0);
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