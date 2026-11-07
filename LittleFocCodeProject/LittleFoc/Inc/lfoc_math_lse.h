#ifndef __LFOC_MATH_LSE_H__
#define __LFOC_MATH_LSE_H__
/**@file      lfoc_math_lse.h
* @brief      LFOC的最小二乘法
* @details    依据微信公众号"电磁仙人"所给出的最小二乘法代码，依据此代码进行的重构建
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
#include "lfoc_type.h"     //!<LFOC存放类型变量的头文件
#include "lfoc_error.h"    //!<LFOC存放错误信息的头文件
#include "lfoc_port.h"     //!<LFOC存放核心运算的头文件
/**********************LFOC的最小二乘法专属的重定义算法***************************/
#define LFOC_LSE_DMAX 		((LFOC_F_32BIT) 1048576)                         //!<LFOC-最小二乘法的最大数值
#define LFOC_LSE_RM_TOP(ls) ((ls)->Upper__Rm + (ls)->Bit__Cascades - 1)      //!<LFOC-最小二乘法的RM空间移动到头顶

#define LFOC_LSE_FABSF(x)		fabs(x)                                      //!<LFOC-最小二乘法的绝对值函数映射
#define LFOC_LSE_SQRTF(x)		sqrt(x)                                      //!<LFOC-最小二乘法的开根函数映射


/*************************结构体接口*********************************/
/**
  * @brief LFOC-最小二乘法的三角矩阵结构体定义
  */
typedef struct LFOC_LSE_UPPER_T
{
    LFOC_UI_BIT Bit__Len;                        /*!上三角矩阵大小*/
    LFOC_UI_BIT Bit__Rows;                       /*!实际使用的大小*/
    LFOC_UI_BIT Bit__Keep;                       /*!矩阵保留的数据行数*/
    LFOC_UI_BIT Bit__Lazy;                       /*!懒惰合并标记*/
#if LFOC_USE_PLATFORM == MCU                          /*MCU配置*/
    LFOC_F_32BIT* Float__M;                      /*!上三角矩阵的内容*/
    LFOC_F_32BIT* Float__D;                      /*!规模对角矩阵的内容*/
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                             /*simulation配置*/
    LFOC_F_32BIT Float__M[MATLAB_SIMULINK_LSE_DATA_LENGTH];     /*!上三角矩阵的内容*/
    LFOC_F_32BIT Float__D[MATLAB_SIMULINK_LSE_DATA_LENGTH];     /*!规模对角矩阵的内容*/
#endif
}LFOC_LSE_UPPER_T;

/**
  * @brief LFOC-最小二乘法的解的结构体定义
  */
typedef struct
{
    LFOC_UI_BIT Bit__Length;                                /*!行向量长度*/
#if LFOC_USE_PLATFORM == MCU                                     /*MCU配置*/
    LFOC_F_32BIT* Float__M;                                 /*! 行向量内容*/
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                       /*SIMULINK 配置*/
    LFOC_F_32BIT Float__M[MATLAB_SIMULINK_LSE_DATA_LENGTH]; /*!行向量内容*/
#endif
}LFOC_LSE_ROW_T;

/**
  * @brief LFOC-最小二乘法结构体定义
  */
typedef struct LFOC_LSE_T
{
    LFOC_I_SPACE_STATE Space_State__Lse_Space;                      /*!空间开辟情况  1空间存在  -1空间解散 其他情况空*/
    LFOC_UI_STATE      State__Fast_Givens;                          /*!快速变换*/
    LFOC_UI_BIT        Bit__Cascades;                               /*!级联数*/
    LFOC_UI_BIT        Bit__Length_X;                               /*!因变量个数*/
    LFOC_UI_BIT        Bit__Length_Z;                               /*!自变量个数*/
    LFOC_UI_BIT        Bit__Threshold;                              /*!数据尺寸*/
    LFOC_UI_BIT        Bit__Total;                                  /*!数据总结长度*/
#if LFOC_USE_PLATFORM == MCU                                             /*MCU配置*/
    LFOC_LSE_UPPER_T* Upper__Rm;                                    /*!行优先的上三角矩阵数组，具有所示的块结构。我们只存储上三角元素*/
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK                                 /*SIMULINK配置*/
    LFOC_LSE_UPPER_T Upper__Rm[MATLAB_SIMULINK_LSE_CASCADE_LENGTH]; /*!行优先的上三角矩阵数组，具有所示的块结构。我们只存储上三角元素*/
#endif
    LFOC_LSE_ROW_T Row__Sol;                                        /*!解的列优先矩阵*/
    LFOC_LSE_ROW_T Row__Std;                                        /*!数据标准差*/
    struct LLT__ESV                                                 /*!极端奇异值*/
    {
        LFOC_F_32BIT Float__Min;                                    /*!极端奇异值-最大值*/
        LFOC_F_32BIT Float__Max;                                    /*!极端奇异值-最小值*/
    }Esv;
}LFOC_LSE_T;

/*************************LFOC的最小二乘法管理的函数声明*********************************/
//!<LFOC-最小二乘法的清理函数声明
LFOC_ERROR Lfoc_Lse_Clear(LFOC_LSE_T* Lfoc_Ls);                         //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的构建函数声明
LFOC_ERROR Lfoc_Lse_Construct(LFOC_UI_STATE State__Fast_Givens,         //!<是否启用快速变换 0不启用 1启用
                              LFOC_UI_BIT  Bit__Cascades,               //!<最小二乘法的级联数
                              LFOC_UI_BIT  Bit__Length_X,               //!<最小二乘法的因变量数
                              LFOC_UI_BIT  Bit__Length_Z,               //!<最小二乘法的自变量数
                              LFOC_LSE_T*  Lfoc_Ls);                    //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的无标准差函数声明
LFOC_ERROR Lfoc_Lse_Nostd(LFOC_LSE_T* Lfoc_Ls);                         //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的记账函数声明
LFOC_ERROR Lfoc_Lse_Inverst(LFOC_F_32BIT * Float__Xz,                   //!<最小二乘法的XZ数据写入
                            LFOC_LSE_T * Lfoc_Ls);                      //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的回归正则化函数声明
LFOC_ERROR Lfoc_Lse_Ridge(LFOC_F_32BIT Float__La,                       //!<最小二乘法正则化因子写入
                          LFOC_LSE_T * Lfoc_Ls);                        //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的遗忘因子函数声明
LFOC_ERROR Lfoc_Lse_Forget(LFOC_F_32BIT Float__La,                      //!<最小二乘法遗忘因子写入
                           LFOC_LSE_T * Lfoc_Ls);                       //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的求解函数声明
LFOC_ERROR Lfoc_Lse_Solve(LFOC_LSE_T* Lfoc_Ls);                         //!<最小二乘法结构体写入
//!<LFOC-最小二乘法的标准差函数声明
LFOC_ERROR Lfoc_Lse_Std(LFOC_LSE_T* Lfoc_Ls);                           //!<最小二乘法结构体写入

#endif
