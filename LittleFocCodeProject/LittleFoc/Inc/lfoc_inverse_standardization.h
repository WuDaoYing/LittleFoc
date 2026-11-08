#ifndef __LFOC_INVERSE_STANDARDIZATION_H__
#define __LFOC_INVERSE_STANDARDIZATION_H__

/*************************所引用的头文件*********************************/
#include "lfoc_error.h"     //!<LFOC存放错误信息的头文件
#include "lfoc_type.h"      //!<LFOC存放变量类型的头文件
#include "lfoc_port.h"      //!<LFOC存放运算核心的头文件
/***************************结构体接口***********************************/
typedef struct LFOC_INVERSE_STANDARDIZATION_DATA_1
{
    struct LISD1__USER                                                                     /*用户*/
    {
        struct LISD1__USER__CONFIG                                                         /*!<用户配置*/
        {
            LFOC_F_32BIT                          Float__Convert_Data_Basis;               /*!!<待转换的数据基准*/
        }CONFIG;//!<结构体->用户->配置
        struct LISD1__USER__DATA                                                           /*!<用户数据*/
        {
            struct LISD1__USER__DATA__IN                                                   /*!!<用户数据输入*/
            {
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_1;                             /*!!!<用户数据输入-数据1*/
            }IN;//!<结构体->用户->数据->输入
            struct LISD1__USER__DATA__OUT                                                  /*!!<用户数据输出*/
            {
                LFOC_F_32BIT Float__Data_1;                                                /*!!!<用户数据输出-数据1*/
            }OUT;//!<结构体->用户->数据->输出
        }DATA;//!<结构体->用户->数据
    }USER;//!<结构体->用户
    struct LISD1__INFORMATION                                                              /*信息*/
    {
        struct LISD1__INFORMATION__ERROR                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                          /*!!<主运算信息错误*/
            LFOC_UI_STATE  State__Error_State;                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
}LFOC_INVERSE_STANDARDIZATION_DATA_1;
typedef struct LFOC_INVERSE_STANDARDIZATION_DATA_2
{
    struct LISD2__USER                                                                     /*用户*/
    {
        struct LISD2__USER__CONFIG                                                         /*!<用户配置*/
        {
            LFOC_F_32BIT                          Float__Convert_Data_Basis;               /*!!<待转换的数据基准*/
        }CONFIG;//!<结构体->用户->配置
        struct LISD2__USER__DATA                                                           /*!<用户数据*/
        {
            struct LISD2__USER__DATA__IN                                                   /*!!<用户数据输入*/
            {
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_1;                             /*!!!<用户数据输入-数据1*/
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_2;                             /*!!!<用户数据输入-数据2*/
            }IN;//!<结构体->用户->数据->输入
            struct LISD2__USER__DATA__OUT                                                  /*!!<用户数据输出*/
            {
                LFOC_F_32BIT Float__Data_1;                                                /*!!!<用户数据输出-数据1*/
                LFOC_F_32BIT Float__Data_2;                                                /*!!!<用户数据输出-数据2*/
            }OUT;//!<结构体->用户->数据->输出
        }DATA;//!<结构体->用户->数据
    }USER;//!<结构体->用户
    struct LISD2__INFORMATION                                                               /*信息*/
    {
        struct LISD2__INFORMATION__ERROR                                                    /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                          /*!!<主运算信息错误*/
            LFOC_UI_STATE  State__Error_State;                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误
    }INFORMATION;//!<结构体->信息
}LFOC_INVERSE_STANDARDIZATION_DATA_2;
typedef struct LFOC_INVERSE_STANDARDIZATION_DATA_3
{
    struct LISD3__USER                                                                     /*用户*/
    {
        struct LISD3__USER__CONFIG                                                         /*!<用户配置*/
        {
            LFOC_F_32BIT                          Float__Convert_Data_Basis;               /*!!<待转换的数据基准*/
        }CONFIG;//!<结构体->用户->配置
        struct LISD3__USER__DATA                                                           /*!<用户数据*/
        {
            struct LISD3__USER__DATA__IN                                                   /*!!<用户数据输入*/
            {
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_1;                             /*!!!<用户数据输入-数据1*/
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_2;                             /*!!!<用户数据输入-数据2*/
                LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE Foq__Data_3;                             /*!!!<用户数据输入-数据3*/
            }IN;//!<结构体->用户->数据->输入
            struct LISD3__USER__DATA__OUT                                                  /*!!<用户数据输出*/
            {
                LFOC_F_32BIT Float__Data_1;                                                /*!!!<用户数据输出-数据1*/
                LFOC_F_32BIT Float__Data_2;                                                /*!!!<用户数据输出-数据2*/
                LFOC_F_32BIT Float__Data_3;                                                /*!!!<用户数据输出-数据3*/
            }OUT;//!<结构体->用户->数据->输出
        }DATA;//!<结构体->用户->数据
    }USER;//!<结构体->用户
    struct LISD3__INFORMATION                                                              /*信息*/
    {
        struct LISD3__INFORMATION__ERROR                                                   /*!<错误信息*/
        {
            LFOC_UI_ERROR  Error__Core_Arithmetic;                                          /*!!<主运算信息错误*/
            LFOC_UI_STATE  State__Error_State;                                              /*!!<错误状态*/
        }ERROR;//!<结构体->信息->错误信息
    }INFORMATION;//!<结构体->信息
}LFOC_INVERSE_STANDARDIZATION_DATA_3;

/*************************反标幺化函数*********************************/
//!<反标幺化
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
/*************************反标幺化数据写入函数*****************************/
//!<反标幺化数据写入
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2); 
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Config_Write(LFOC_F_32BIT                        Float__Convert_Data_Basis,                    //!<转换数据基准
                                                            LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3); 
/*************************反标幺化参数传递函数接口*********************************/
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_2,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Data_Write(LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_1,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_2,
                                                          LFOC_GLOBAL__IN_AND_OUT_DATA_TYPE*   Foq__Data_3,
                                                          LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
/*************************反标幺化读取函数接口*********************************/
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_1_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_2_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_2_To_2_Read(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_1_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_2_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
LFOC_F_32BIT Lfoc_Inverse_Standardization_Data_3_To_3_Read(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
/*************************空间开辟接口-MCU兼容*********************************/
#if LFOC_USE_PLATFORM == MCU 
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_1** Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_2** Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_3** Lfoc_Motorx_Inverse_Standardization_Data_3);
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Free(LFOC_INVERSE_STANDARDIZATION_DATA_1** Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Free(LFOC_INVERSE_STANDARDIZATION_DATA_2** Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Free(LFOC_INVERSE_STANDARDIZATION_DATA_3** Lfoc_Motorx_Inverse_Standardization_Data_3);
#endif
/*************************空间管理接口-SIMULINK方式******************************/
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Malloc(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
//反标幺化空间开辟
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Free(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Free(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Free(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
#endif
/*************************日志输出函数*********************************/
//!<反标幺日志输出
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Log(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Log(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Log(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);
/*************************错误复位函数*********************************/
//!<反标幺日志输出
LFOC_ERROR Lfoc_Inverse_Standardization_Data_1_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_1* Lfoc_Motorx_Inverse_Standardization_Data_1);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_2_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_2* Lfoc_Motorx_Inverse_Standardization_Data_2);
LFOC_ERROR Lfoc_Inverse_Standardization_Data_3_Error_Reset(LFOC_INVERSE_STANDARDIZATION_DATA_3* Lfoc_Motorx_Inverse_Standardization_Data_3);

#endif
