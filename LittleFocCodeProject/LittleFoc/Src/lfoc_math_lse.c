#include "lfoc_math_lse.h"    //!<LFOC存放最小二乘法算法的头文件
/**@file      lfoc_math_lse.c
* @brief      LFOC的最小二乘法(源文件)
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
//!<此静态变量只对本文所见，外部不可见故不讲解
static LFOC_ERROR Lfoc_Lse_Qrupdate_1(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Rm, LFOC_F_32BIT* Float__Xz, LFOC_F_32BIT Flolat__D0, LFOC_UI_BIT Bit__Nz)
{
    LFOC_F_32BIT* Float__M = Lfoc_Rm->Float__M;    //!<映射空间M
    LFOC_F_32BIT* Float__D = Lfoc_Rm->Float__D;    //!<映射空间D
    LFOC_F_32BIT  Float__X0, Float__Xi, Float__Alpha, Float__Beta;  //!<数据存储缓存
    LFOC_UI_BIT   Bit__N, Bit__I, Bit__J;         //!<开辟变量空间
    LFOC_F_32BIT  Float__Di;                      //!<开辟变量空间

    Bit__N = (Lfoc_Rm->Bit__Rows < Lfoc_Rm->Bit__Keep) ? Lfoc_Rm->Bit__Rows : Lfoc_Rm->Bit__Keep;

    //!<是否有前导零

    if ((Bit__Nz > 0))
    {
        if ((Bit__N >= Bit__Nz))
        {
            Float__M += Bit__Nz * Lfoc_Rm->Bit__Len - Bit__Nz * (Bit__Nz - 1) / 2;
        }
        else if ((Bit__N < Lfoc_Rm->Bit__Rows))
        {
            Float__M += Bit__N * Lfoc_Rm->Bit__Len - Bit__N * (Bit__N - 1) / 2;
        }
    }

    for (Bit__I = Bit__Nz; Bit__I < Bit__N; Bit__I++)
    {
        Float__M += -Bit__I;

        Float__X0 = -Float__Xz[Bit__I];
        Float__Xi = Float__M[Bit__I];

        if (Float__X0 != (LFOC_F_32BIT)0)
        {
            Float__Di = Float__D[Bit__I];
            //!<构建快速变换
            Float__Alpha = Float__X0 * Float__Di;
            Float__Beta = Float__Xi * Flolat__D0;

            if (Float__X0 * Float__Alpha < Float__Xi * Float__Beta)
            {
                Float__Beta = -Float__Alpha / Float__Beta;
                Float__Alpha = Float__X0 / Float__Xi;

                Float__M[Bit__I] = Float__M[Bit__I] + Float__Beta * Float__Xz[Bit__I];

                for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Rm->Bit__Len; Bit__J++)
                {
                    Float__Xi = Float__M[Bit__J] + Float__Beta * Float__Xz[Bit__J];
                    Float__X0 = Float__Alpha * Float__M[Bit__J] + Float__Xz[Bit__J];

                    Float__Xz[Bit__J] = Float__X0;
                    Float__M[Bit__J] = Float__Xi;
                }
                Float__X0 = (LFOC_F_32BIT)1 - Float__Alpha * Float__Beta;

                Float__D[Bit__I] = Float__Di * Float__X0;
                Flolat__D0 = Flolat__D0 * Float__X0;
            }
            else
            {
                Float__Beta = -Float__Beta / Float__Alpha;
                Float__Alpha = Float__Xi / Float__X0;

                Float__M[Bit__I] = Float__Beta * Float__M[Bit__I] + Float__Xz[Bit__I];

                for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Rm->Bit__Len; Bit__J++)
                {
                    Float__Xi = Float__Beta * Float__M[Bit__J] + Float__Xz[Bit__J];
                    Float__X0 = Float__M[Bit__J] + Float__Alpha * Float__Xz[Bit__J];

                    Float__Xz[Bit__J] = Float__X0;
                    Float__M[Bit__J] = Float__Xi;
                }
                Float__X0 = (LFOC_F_32BIT)1 - Float__Alpha * Float__Beta;

                Float__D[Bit__I] = Flolat__D0 * Float__X0;
                Flolat__D0 = Float__Di * Float__X0;
            }
            //确保对角线在允许的范围内。

            if ((Float__D[Bit__I] > LFOC_LSE_DMAX * LFOC_LSE_DMAX))
            {
                Float__Alpha = (LFOC_F_32BIT)1 / LFOC_LSE_DMAX;

                for (Bit__J = Bit__I; Bit__J < Lfoc_Rm->Bit__Len; Bit__J++)
                {
                    Float__X0 = Float__M[Bit__J];
                    Float__M[Bit__J] = Float__X0 * Float__Alpha;
                }

                Float__D[Bit__I] *= (Float__Alpha * Float__Alpha);
            }

            if (Flolat__D0 > LFOC_LSE_DMAX * LFOC_LSE_DMAX)
            {
                Float__Alpha = (LFOC_F_32BIT)1 / LFOC_LSE_DMAX;

                for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Rm->Bit__Len; Bit__J++)
                {
                    Float__X0 = Float__Xz[Bit__J];
                    Float__Xz[Bit__J] = Float__X0 * Float__Alpha;
                }
                Flolat__D0 *= (Float__Alpha * Float__Alpha);
            }
        }
        Float__M += Lfoc_Rm->Bit__Len;
    }

    if ((Bit__N < Lfoc_Rm->Bit__Rows))
    {
        Float__M += -Bit__N;

        if (Lfoc_Rm->Bit__Lazy != 0)
        {
            //在复制新内容之前，我们将保留的行向量合并到上层级联矩阵中。
            Lfoc_Lse_Qrupdate_1(Lfoc_Ls, Lfoc_Rm + 1, Float__M, Float__D[Bit__N], Bit__N);
        }

        if ((Bit__N >= Bit__Nz))
        {
            //复制尾部内容。
            for (Bit__I = Bit__N; Bit__I < Lfoc_Rm->Bit__Len; Bit__I++)
                Float__M[Bit__I] = Float__Xz[Bit__I];
        }
        else
        {
            for (Bit__I = Bit__N; Bit__I < Bit__Nz; Bit__I++)
                Float__M[Bit__I] = (LFOC_F_32BIT)0;
            for (Bit__I = Bit__Nz; Bit__I < Lfoc_Rm->Bit__Len; Bit__I++)
                Float__M[Bit__I] = Float__Xz[Bit__I];
        }
        Float__D[Bit__N] = Flolat__D0;
    }
    Lfoc_Rm->Bit__Keep += 1;

    if ((Lfoc_Rm->Bit__Keep >= Lfoc_Ls->Bit__Threshold && Lfoc_Ls->Bit__Threshold >= 2))
    {
        if (Lfoc_Rm < LFOC_LSE_RM_TOP(Lfoc_Ls))
        {
            //将级联矩阵内容标记为延迟合并。
            Lfoc_Rm->Bit__Keep = 0;
            Lfoc_Rm->Bit__Lazy = 1;
        }
        else
        {
            //根据顶部级联中的数据行数更新阈值。
            Lfoc_Ls->Bit__Threshold = (Lfoc_Rm->Bit__Keep > Lfoc_Ls->Bit__Threshold) ? Lfoc_Rm->Bit__Keep : Lfoc_Ls->Bit__Threshold;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
static LFOC_ERROR Lfoc_Lse_Qrupdate_2(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Rm, LFOC_F_32BIT* Float__Xz, LFOC_UI_BIT Bit__Nz)
{
    LFOC_F_32BIT* Float__M = Lfoc_Rm->Float__M;    //!<映射空间M
    LFOC_F_32BIT  Float__X0, Float__Xi, Float__Alpha, Float__Beta;  //!<数据存储缓存
    LFOC_UI_BIT   Bit__N, Bit__I, Bit__J;         //!<开辟变量空间

    Bit__N = (Lfoc_Rm->Bit__Rows < Lfoc_Rm->Bit__Keep) ? Lfoc_Rm->Bit__Rows : Lfoc_Rm->Bit__Keep;

    //!<是否有前导零
    if ((Bit__Nz > 0))
    {
        if ((Bit__N >= Bit__Nz))
        {
            Float__M += Bit__Nz * Lfoc_Rm->Bit__Len - Bit__Nz * (Bit__Nz - 1) / 2;
        }
        else if ((Bit__N < Lfoc_Rm->Bit__Rows))
        {
            Float__M += Bit__N * Lfoc_Rm->Bit__Len - Bit__N * (Bit__N - 1) / 2;
        }
    }

    for (Bit__I = Bit__Nz; Bit__I < Bit__N; Bit__I++)
    {
        Float__M += -Bit__I;

        Float__X0 = -Float__Xz[Bit__I];
        Float__Xi = Float__M[Bit__I];

        if (Float__X0 != (LFOC_F_32BIT)0)
        {
            //!<警告：我们使用朴素假设实现，因为它是最快的，并且相当精确到单位长度（ulp）。
            Float__Alpha = LFOC_LSE_SQRTF(Float__X0 * Float__X0 + Float__Xi * Float__Xi);
            Float__Beta = (LFOC_F_32BIT)1 / Float__Alpha;

            Float__M[Bit__I] = Float__Alpha;

            //!<我们构建正交变换。
            Float__Alpha = Float__X0 * Float__Beta;
            Float__Beta = Float__Xi * Float__Beta;

            for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Rm->Bit__Len; Bit__J++)
            {
                Float__Xi = Float__Beta * Float__M[Bit__J] - Float__Alpha * Float__Xz[Bit__J];
                Float__X0 = Float__Alpha * Float__M[Bit__J] + Float__Beta * Float__Xz[Bit__J];

                Float__Xz[Bit__J] = Float__X0;
                Float__M[Bit__J] = Float__Xi;
            }
        }
        Float__M += Lfoc_Rm->Bit__Len;
    }

    if ((Bit__N < Lfoc_Rm->Bit__Rows))
    {
        Float__M += -Bit__N;

        if (Lfoc_Rm->Bit__Lazy != 0)
        {
            //在复制新内容之前，我们将保留的行向量合并到上层级联矩阵中。
            Lfoc_Lse_Qrupdate_2(Lfoc_Ls, Lfoc_Rm + 1, Float__M, Bit__N);
        }

        if ((Bit__N >= Bit__Nz))
        {
            //复制尾部内容。
            for (Bit__I = Bit__N; Bit__I < Lfoc_Rm->Bit__Len; Bit__I++)
                Float__M[Bit__I] = Float__Xz[Bit__I];
        }
        else
        {
            for (Bit__I = Bit__N; Bit__I < Bit__Nz; Bit__I++)
                Float__M[Bit__I] = (LFOC_F_32BIT)0;
            for (Bit__I = Bit__Nz; Bit__I < Lfoc_Rm->Bit__Len; Bit__I++)
                Float__M[Bit__I] = Float__Xz[Bit__I];
        }
    }
    Lfoc_Rm->Bit__Keep += 1;

    if ((Lfoc_Rm->Bit__Keep >= Lfoc_Ls->Bit__Threshold && Lfoc_Ls->Bit__Threshold >= 2))
    {
        if (Lfoc_Rm < LFOC_LSE_RM_TOP(Lfoc_Ls))
        {
            //将级联矩阵内容标记为延迟合并。
            Lfoc_Rm->Bit__Keep = 0;
            Lfoc_Rm->Bit__Lazy = 1;
        }
        else
        {
            //根据顶部级联中的数据行数更新阈值。
            Lfoc_Ls->Bit__Threshold = (Lfoc_Rm->Bit__Keep > Lfoc_Ls->Bit__Threshold) ? Lfoc_Rm->Bit__Keep : Lfoc_Ls->Bit__Threshold;
        }
    }
    return LFOC_ERROR__SUCCESS;
}
//!<此静态变量只对本文所见，外部不可见故不讲解
static LFOC_ERROR Lfoc_Lse_Qrmerge_1(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Rm, LFOC_LSE_UPPER_T* Lfoc_Um)
{
    LFOC_F_32BIT* Float__M = Lfoc_Um->Float__M;    //!<映射空间M
    LFOC_F_32BIT* Float__D = Lfoc_Um->Float__D;    //!<映射空间D

    LFOC_UI_BIT   Bit__N, Bit__I;         //!<开辟变量空间

    Bit__N = (Lfoc_Um->Bit__Lazy != 0) ? Lfoc_Um->Bit__Rows
        : (Lfoc_Um->Bit__Rows < Lfoc_Um->Bit__Keep) ? Lfoc_Um->Bit__Rows : Lfoc_Um->Bit__Keep;
    for (Bit__I = 0; Bit__I < Bit__N; Bit__I++)
    {
        //!<我们从级联矩阵中逐一提取行向量，并将它们合并到上层级联矩阵中。
        Float__M += -Bit__I;
        Lfoc_Lse_Qrupdate_1(Lfoc_Ls, Lfoc_Rm, Float__M, Float__D[Bit__I], Bit__I);
        Float__M += Lfoc_Um->Bit__Len;
    }
    Lfoc_Um->Bit__Keep = 0;
    Lfoc_Um->Bit__Lazy = 0;
    return LFOC_ERROR__SUCCESS;
}
static LFOC_ERROR Lfoc_Lse_Qrmerge_2(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Rm, LFOC_LSE_UPPER_T* Lfoc_Um)
{
    LFOC_F_32BIT* Float__M = Lfoc_Um->Float__M;    //!<映射空间M

    LFOC_UI_BIT   Bit__N, Bit__I;         //!<开辟变量空间

    Bit__N = (Lfoc_Um->Bit__Lazy != 0) ? Lfoc_Um->Bit__Rows
        : (Lfoc_Um->Bit__Rows < Lfoc_Um->Bit__Keep) ? Lfoc_Um->Bit__Rows : Lfoc_Um->Bit__Keep;
    for (Bit__I = 0; Bit__I < Bit__N; Bit__I++)
    {
        //!<我们从级联矩阵中逐一提取行向量，并将它们合并到上层级联矩阵中。
        Float__M += -Bit__I;
        Lfoc_Lse_Qrupdate_2(Lfoc_Ls, Lfoc_Rm, Float__M, Bit__I);
        Float__M += Lfoc_Um->Bit__Len;
    }
    Lfoc_Um->Bit__Keep = 0;
    Lfoc_Um->Bit__Lazy = 0;
    return LFOC_ERROR__SUCCESS;
}
//!<此静态变量只对本文所见，外部不可见故不讲解
static LFOC_ERROR Lfoc_Lse_Qrfinal_1(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_LSE_UPPER_T* Rm = LFOC_LSE_RM_TOP(Lfoc_Ls);
    LFOC_UI_BIT   Bit__Len, Bit__Nul, Bit__I;         //!<开辟变量空间

    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades - 1; Bit__I++)
    {
        //我们将所有级联合并到顶部矩阵中
        Lfoc_Lse_Qrmerge_1(Lfoc_Ls, &Lfoc_Ls->Upper__Rm[Bit__I + 1], &Lfoc_Ls->Upper__Rm[Bit__I]);
    }
    if ((Rm->Bit__Keep < Rm->Bit__Rows))
    {
        //将未初始化的尾部内容清零。
        Bit__Len = Rm->Bit__Keep * Rm->Bit__Len - Rm->Bit__Keep * (Rm->Bit__Keep - 1) / 2;
        Bit__Nul = Rm->Bit__Rows * Rm->Bit__Len - Rm->Bit__Rows * (Rm->Bit__Rows - 1) / 2;

        for (Bit__I = Bit__Len; Bit__I < Bit__Nul; Bit__I++)
        {
            Rm->Float__M[Bit__I] = (LFOC_F_32BIT)0;
        }
        for (Bit__I = Rm->Bit__Keep; Bit__I < Rm->Bit__Rows; Bit__I++)
        {
            Rm->Float__D[Bit__I] = (LFOC_F_32BIT)1;
        }

        Rm->Bit__Keep = Rm->Bit__Rows;
    }
    return LFOC_ERROR__SUCCESS;
}
static LFOC_ERROR Lfoc_Lse_Qrfinal_2(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_LSE_UPPER_T* Rm = LFOC_LSE_RM_TOP(Lfoc_Ls);
    LFOC_UI_BIT   Bit__Len, Bit__Nul, Bit__I;         //!<开辟变量空间

    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades - 1; Bit__I++)
    {
        //我们将所有级联合并到顶部矩阵中
        Lfoc_Lse_Qrmerge_2(Lfoc_Ls, &Lfoc_Ls->Upper__Rm[Bit__I + 1], &Lfoc_Ls->Upper__Rm[Bit__I]);
    }
    if ((Rm->Bit__Keep < Rm->Bit__Rows))
    {
        //将未初始化的尾部内容清零。
        Bit__Len = Rm->Bit__Keep * Rm->Bit__Len - Rm->Bit__Keep * (Rm->Bit__Keep - 1) / 2;
        Bit__Nul = Rm->Bit__Rows * Rm->Bit__Len - Rm->Bit__Rows * (Rm->Bit__Rows - 1) / 2;

        for (Bit__I = Bit__Len; Bit__I < Bit__Nul; Bit__I++)
        {
            Rm->Float__M[Bit__I] = (LFOC_F_32BIT)0;
        }
        Rm->Bit__Keep = Rm->Bit__Rows;
    }
    return LFOC_ERROR__SUCCESS;
}
//!<此静态变量只对本文所见，外部不可见故不讲解
static LFOC_ERROR Lfoc_Lse_Qrstep_1(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Um, LFOC_LSE_UPPER_T* Lfoc_Im, LFOC_F_32BIT* Float__U)
{
    LFOC_F_32BIT* Float__Mq = Lfoc_Im->Float__M;
    LFOC_F_32BIT* Float__D = Lfoc_Um->Float__D;

    LFOC_F_32BIT* Float__M;

    LFOC_UI_BIT   Bit__I, Bit__J;         //!<开辟变量空间

    Lfoc_Um->Bit__Keep = 0;
    Lfoc_Um->Bit__Lazy = 0;
    //我们对输入矩阵 \im 进行转置，并将其再次转换为上三角形式，然后存储到 \um 中
    for (Bit__I = 0; Bit__I < Lfoc_Um->Bit__Rows; Bit__I++)
    {
        Float__M = Float__Mq;
        for (Bit__J = 0; Bit__J < Bit__I + 1; Bit__J++)
        {
            Float__U[Bit__J] = Float__M[0];
            Float__M += Lfoc_Im->Bit__Len - (Bit__J + 1);
        }
        for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Um->Bit__Len; Bit__J++)
            Float__U[Bit__J] = (LFOC_F_32BIT)0;
        Lfoc_Lse_Qrupdate_1(Lfoc_Ls, Lfoc_Um, Float__U, Float__D[Bit__I], 0);
        Float__Mq += 1;
    }
    return LFOC_ERROR__SUCCESS;
}
static LFOC_ERROR Lfoc_Lse_Qrstep_2(LFOC_LSE_T* Lfoc_Ls, LFOC_LSE_UPPER_T* Lfoc_Um, LFOC_LSE_UPPER_T* Lfoc_Im, LFOC_F_32BIT* Float__U)
{
    LFOC_F_32BIT* Float__Mq = Lfoc_Im->Float__M;

    LFOC_F_32BIT* Float__M;

    LFOC_UI_BIT   Bit__I, Bit__J;         //!<开辟变量空间

    Lfoc_Um->Bit__Keep = 0;
    Lfoc_Um->Bit__Lazy = 0;
    //我们对输入矩阵 \im 进行转置，并将其再次转换为上三角形式，然后存储到 \um 中
    for (Bit__I = 0; Bit__I < Lfoc_Um->Bit__Rows; Bit__I++)
    {
        Float__M = Float__Mq;
        for (Bit__J = 0; Bit__J < Bit__I + 1; Bit__J++)
        {
            Float__U[Bit__J] = Float__M[0];
            Float__M += Lfoc_Im->Bit__Len - (Bit__J + 1);
        }
        for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Um->Bit__Len; Bit__J++)
            Float__U[Bit__J] = (LFOC_F_32BIT)0;
        Lfoc_Lse_Qrupdate_2(Lfoc_Ls, Lfoc_Um, Float__U, 0);
        Float__Mq += 1;
    }
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的清理函数声明
* @details 负责每次重启时对变量空间进行管理，防止空间溢出，空间内容值复用等等
* @param[in] LFOC_LSE_T*    Lfoc_Ls          最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS             空间开辟成功
* @return    LFOC_ERROR__OPEN_SPACE_ERROR    空间开辟失败
* @return    LFOC_ERROR__CLEAR_SPACE_ERROR  空间清理失败
* @return    LFOC_ERROR__EXTE_SPACE_ERROR  空间外扩失败
* @return    LFOC_ERROR__FREE_SPACE_ERROR    空间解散失败
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Clear(&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Clear(Lfoc_Ls);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Clear(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_UI_BIT Bit__I;
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
    LFOC_UI_BIT Bit__J;
    LFOC_UI_BIT Bit__Full = Lfoc_Ls->Bit__Length_X + Lfoc_Ls->Bit__Length_Z;
#endif
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    if (Lfoc_Ls->Space_State__Lse_Space == 1)
    {
#if LFOC_USE_PLATFORM == MCU
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
        {
            if ((Lfoc_Ls->Upper__Rm[Bit__I].Float__M) != (LFOC_NULL))
            {
                //!<释放空间
                Lfoc__Error = __LFOC_FREE((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__M);
                if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
                Lfoc_Ls->Upper__Rm[Bit__I].Float__M = LFOC_NULL;
            }
        }
        if (Lfoc_Ls->State__Fast_Givens == 1)
        {
            for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
            {
                if ((Lfoc_Ls->Upper__Rm[Bit__I].Float__D) != (LFOC_NULL))
                {
                    //!<释放空间
                    Lfoc__Error = __LFOC_FREE((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__D);
                    if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
                    Lfoc_Ls->Upper__Rm[Bit__I].Float__D = LFOC_NULL;
                }
            }
        }
        if ((Lfoc_Ls->Upper__Rm) != (LFOC_NULL))
        {
            //!<释放空间
            Lfoc__Error = __LFOC_FREE((LFOC_VOID**)&Lfoc_Ls->Upper__Rm);
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
            Lfoc_Ls->Upper__Rm = LFOC_NULL;
        }
        if ((Lfoc_Ls->Row__Sol.Float__M) != (LFOC_NULL))
        {
            //!<释放空间
            Lfoc__Error = __LFOC_FREE((LFOC_VOID**)&Lfoc_Ls->Row__Sol.Float__M);
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
            Lfoc_Ls->Row__Sol.Float__M = LFOC_NULL;
        }
        if ((Lfoc_Ls->Row__Std.Float__M) != (LFOC_NULL))
        {
            //!<释放空间
            Lfoc__Error = __LFOC_FREE((LFOC_VOID**)&Lfoc_Ls->Row__Std.Float__M);
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS))return Lfoc__Error;
            Lfoc_Ls->Row__Std.Float__M = LFOC_NULL;
        }
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
        {
            for (Bit__J = 0; Bit__J < (Bit__Full * (Bit__Full + 1) / 2); Bit__J++)
            {
                Lfoc_Ls->Upper__Rm[Bit__I].Float__M[Bit__J] = 0;
            }
        }
        if (Lfoc_Ls->State__Fast_Givens == 1)
        {
            for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
            {
                for (Bit__J = 0; Bit__J < (Bit__Full); Bit__J++)
                {
                    Lfoc_Ls->Upper__Rm[Bit__I].Float__D[Bit__J] = 0;
                }
            }
        }
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Row__Sol.Bit__Length; Bit__I++)
        {
            Lfoc_Ls->Row__Sol.Float__M[Bit__I] = 0;
        }
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Row__Std.Bit__Length; Bit__I++)
        {
            Lfoc_Ls->Row__Std.Float__M[Bit__I] = 0;
        }
#endif
        Lfoc_Ls->Space_State__Lse_Space = -1;
    }
    else
    {
#if LFOC_USE_PLATFORM == MCU
        Lfoc_Ls->Upper__Rm = LFOC_NULL;
        Lfoc_Ls->Row__Sol.Float__M = LFOC_NULL;
        Lfoc_Ls->Row__Std.Float__M = LFOC_NULL;
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
        for (Bit__I = 0; Bit__I < MATLAB_SIMULINK_LSE_CASCADE_LENGTH; Bit__I++)
        {
            for (Bit__J = 0; Bit__J < MATLAB_SIMULINK_LSE_DATA_LENGTH; Bit__J++)
            {
                Lfoc_Ls->Upper__Rm[Bit__I].Float__M[Bit__J] = 0;
            }
        }
        if (Lfoc_Ls->State__Fast_Givens == 1)
        {
            for (Bit__I = 0; Bit__I < MATLAB_SIMULINK_LSE_CASCADE_LENGTH; Bit__I++)
            {
                for (Bit__J = 0; Bit__J < MATLAB_SIMULINK_LSE_DATA_LENGTH; Bit__J++)
                {
                    Lfoc_Ls->Upper__Rm[Bit__I].Float__D[Bit__J] = 0;
                }
            }
        }
        for (Bit__I = 0; Bit__I < MATLAB_SIMULINK_LSE_DATA_LENGTH; Bit__I++)
        {
            Lfoc_Ls->Row__Sol.Float__M[Bit__I] = 0;
        }
        for (Bit__I = 0; Bit__I < MATLAB_SIMULINK_LSE_DATA_LENGTH; Bit__I++)
        {
            Lfoc_Ls->Row__Std.Float__M[Bit__I] = 0;
        }
#endif
        Lfoc_Ls->Space_State__Lse_Space = -1;
    }
    Lfoc_Ls->Bit__Cascades = 0;
    Lfoc_Ls->Bit__Length_X = 0;
    Lfoc_Ls->Bit__Length_Z = 0;
    Lfoc_Ls->Bit__Threshold = 0;
    Lfoc_Ls->Bit__Total = 0;
    Lfoc_Ls->Esv.Float__Max = 0;
    Lfoc_Ls->Esv.Float__Min = 0;
    Lfoc_Ls->Row__Sol.Bit__Length = 0;
    Lfoc_Ls->Row__Std.Bit__Length = 0;
    Lfoc_Ls->State__Fast_Givens = 0;
    return Lfoc__Error;
}


/**@brief LFOC-最小二乘法的构建函数声明
* @details 负责每次重启时对变量空间进行管理，防止空间溢出，空间内容值复用等等
* @param[in] LFOC_UI_STATE  State__Fast_Givens,        是否启用快速变换 0不启用 1启用最小二乘法结构体
* @param[in] LFOC_UI_BIT    Bit__Cascades,             最小二乘法的级联数
* @param[in] LFOC_UI_BIT    Bit__Length_X,             最小二乘法的因变量数
* @param[in] LFOC_UI_BIT    Bit__Length_Z,             最小二乘法的自变量数
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS             空间开辟成功
* @return    LFOC_ERROR__OPEN_SPACE_ERROR    空间开辟失败
* @return    LFOC_ERROR__CLEAR_SPACE_ERROR  空间清理失败
* @return    LFOC_ERROR__EXTE_SPACE_ERROR  空间外扩失败
* @return    LFOC_ERROR__FREE_SPACE_ERROR    空间解散失败
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Construct(0,          //!<不启用快速事件
*                             2,          //!<级联数为2
*                             2,          //!<两个因变量
*                             1,          //!<一个自变量
*                             &Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Construct(0,          //!<不启用快速事件
*                             2,          //!<级联数为2
*                             2,          //!<两个因变量
*                             1,          //!<一个自变量
*                             Lfoc_Ls);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Construct(LFOC_UI_STATE State__Fast_Givens,
    LFOC_UI_BIT  Bit__Cascades,
    LFOC_UI_BIT  Bit__Length_X,
    LFOC_UI_BIT  Bit__Length_Z,
    LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_ERROR Lfoc__Error = LFOC_ERROR__SUCCESS;
    LFOC_UI_BIT Bit__Full, Bit__I;
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
    LFOC_UI_BIT Bit__J;
#endif
    Lfoc_Ls->Bit__Cascades = Bit__Cascades;
    Lfoc_Ls->Bit__Length_X = Bit__Length_X;
    Lfoc_Ls->Bit__Length_Z = Bit__Length_Z;
    Bit__Full = Lfoc_Ls->Bit__Length_X + Lfoc_Ls->Bit__Length_Z;
    Lfoc_Ls->Bit__Threshold = Bit__Full * 2;
    Lfoc_Ls->Bit__Total = 0;
    //!<开辟级联空间
    if (Lfoc_Ls->Space_State__Lse_Space == -1)
    {
#if LFOC_USE_PLATFORM == MCU
        if ((Lfoc_Ls->Upper__Rm) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm, Lfoc_Ls->Bit__Cascades * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm, 0, Lfoc_Ls->Bit__Cascades * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = __LFOC_REALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm, Lfoc_Ls->Bit__Cascades * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm, 0, Lfoc_Ls->Bit__Cascades * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
#endif
    }
    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
    {
        Lfoc_Ls->Upper__Rm[Bit__I].Bit__Len = Bit__Full;
        Lfoc_Ls->Upper__Rm[Bit__I].Bit__Rows = Bit__Full;
        Lfoc_Ls->Upper__Rm[Bit__I].Bit__Keep = 0;
        Lfoc_Ls->Upper__Rm[Bit__I].Bit__Lazy = 0;
        //!<开辟RM中的D和M空间
        if (Lfoc_Ls->Space_State__Lse_Space == -1)
        {
#if LFOC_USE_PLATFORM == MCU
            if ((Lfoc_Ls->Upper__Rm[Bit__I].Float__M) == (LFOC_NULL))
            {
                //!<空间没有开辟过开辟其数据空间
                Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__M, (Bit__Full * (Bit__Full + 1) / 2) * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                //!<清零空间数据
                Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__M, 0, (Bit__Full * (Bit__Full + 1) / 2) * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            }
            else
            {
                //!<空间开辟了但长度不对更正其数据空间
                Lfoc__Error = __LFOC_REALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__M, (Bit__Full * (Bit__Full + 1) / 2) * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                //!<清零空间数据
                Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__M, 0, (Bit__Full * (Bit__Full + 1) / 2) * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            }
            if (Lfoc_Ls->State__Fast_Givens == 1)
            {
                if ((Lfoc_Ls->Upper__Rm[Bit__I].Float__D) == (LFOC_NULL))
                {
                    //!<空间没有开辟过开辟其数据空间
                    Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__D, Bit__Full * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                    if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                    //!<清零空间数据
                    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__D, 0, Bit__Full * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                    if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                }
                else
                {
                    //!<空间开辟了但长度不对更正其数据空间
                    Lfoc__Error = __LFOC_REALLOC((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__D, Bit__Full * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                    if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                    //!<清零空间数据
                    Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Upper__Rm[Bit__I].Float__D, 0, Bit__Full * (LFOC_UI_SIZE)sizeof(LFOC_F_32BIT));
                    if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
                }
            }
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
            for (Bit__J = 0; Bit__J < (Bit__Full * (Bit__Full + 1) / 2); Bit__J++)
            {
                Lfoc_Ls->Upper__Rm[Bit__I].Float__M[Bit__J] = 0;
            }
            for (Bit__J = 0; Bit__J < Bit__Full; Bit__J++)
            {
                Lfoc_Ls->Upper__Rm[Bit__I].Float__D[Bit__J] = 0;
            }
#endif
        }
    }
    Lfoc_Ls->Row__Sol.Bit__Length = (Lfoc_Ls->Bit__Length_X) * (Lfoc_Ls->Bit__Length_Z);
    //!<开辟解向量空间
    if (Lfoc_Ls->Space_State__Lse_Space == -1)
    {
#if LFOC_USE_PLATFORM == MCU
        if ((Lfoc_Ls->Row__Sol.Float__M) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)&Lfoc_Ls->Row__Sol.Float__M, Lfoc_Ls->Row__Sol.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Row__Sol.Float__M, 0, Lfoc_Ls->Row__Sol.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = __LFOC_REALLOC((LFOC_VOID**)&Lfoc_Ls->Row__Sol.Float__M, Lfoc_Ls->Row__Sol.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Row__Sol.Float__M, 0, Lfoc_Ls->Row__Sol.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Row__Sol.Bit__Length; Bit__I++)
        {
            Lfoc_Ls->Row__Sol.Float__M[Bit__I] = 0;
        }
#endif
    }
    Lfoc_Ls->Row__Std.Bit__Length = (Lfoc_Ls->Bit__Length_Z);
    //!<开辟解向量空间
    if (Lfoc_Ls->Space_State__Lse_Space == -1)
    {
#if LFOC_USE_PLATFORM == MCU
        if ((Lfoc_Ls->Row__Std.Float__M) == (LFOC_NULL))
        {
            //!<空间没有开辟过开辟其数据空间
            Lfoc__Error = __LFOC_MALLOC((LFOC_VOID**)&Lfoc_Ls->Row__Std.Float__M, Lfoc_Ls->Row__Std.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Row__Std.Float__M, 0, Lfoc_Ls->Row__Std.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
        else
        {
            //!<空间开辟了但长度不对更正其数据空间
            Lfoc__Error = __LFOC_REALLOC((LFOC_VOID**)&Lfoc_Ls->Row__Std.Float__M, Lfoc_Ls->Row__Std.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
            //!<清零空间数据
            Lfoc__Error = __LFOC_MEMSET((LFOC_VOID**)&Lfoc_Ls->Row__Std.Float__M, 0, Lfoc_Ls->Row__Std.Bit__Length * (LFOC_UI_SIZE)sizeof(LFOC_LSE_UPPER_T));
            if ((Lfoc__Error) != (LFOC_ERROR__SUCCESS)) return Lfoc__Error;
        }
#endif
#if LFOC_USE_PLATFORM == MATLAB_SIMULINK
        for (Bit__I = 0; Bit__I < Lfoc_Ls->Row__Std.Bit__Length; Bit__I++)
        {
            Lfoc_Ls->Row__Std.Float__M[Bit__I] = 0;
        }
#endif
    }
    //!<设定状态空间
    if (Lfoc_Ls->Space_State__Lse_Space == -1)
    {
        Lfoc_Ls->Space_State__Lse_Space = 1;
    }
    return Lfoc__Error;
}

/**@brief LFOC-最小二乘法的无标准差函数声明
* @details 调用这个算法，会使得解算时不计算标准差，减少计算量，进而提升运算速度
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Nostd(&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Nostd(Lfoc_Ls);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Nostd(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_UI_BIT   Bit__I, Bit__Full;
    //不要更新下三角块
    Bit__Full = Lfoc_Ls->Bit__Length_X;

    Lfoc_Ls->Bit__Threshold = Bit__Full * 2;

    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
    {
        Lfoc_Ls->Upper__Rm[Bit__I].Bit__Rows = Bit__Full;
    }
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的记账函数声明
* @details 每采集一次数据记一次账单，这个是实时调用的
* @param[in] LFOC_F_32BIT * Float__Xz,                 最小二乘法的XZ数据写入
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          LFOC_F_32BIT A[3];
*          A[0]=2;
*          A[1]=3;
*          A[2]=4;
*          Lfoc_Lse_Inverst(A,&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          LFOC_F_32BIT A[3];
*          A[0]=2;
*          A[1]=3;
*          A[2]=4;
*          Lfoc_Lse_Inverst(A,Lfoc_Ls);
* @endcode
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Inverst(LFOC_F_32BIT* Float__Xz,
    LFOC_LSE_T* Lfoc_Ls)
{
    if (Lfoc_Ls->State__Fast_Givens == 1)
    {
        Lfoc_Lse_Qrupdate_1(Lfoc_Ls, Lfoc_Ls->Upper__Rm, Float__Xz, (LFOC_F_32BIT)1, 0);
    }
    else
    {
        Lfoc_Lse_Qrupdate_2(Lfoc_Ls, Lfoc_Ls->Upper__Rm, Float__Xz, 0);
    }
    Lfoc_Ls->Bit__Total += 1;
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的回归正则化函数声明
* @details 这个作用其实我也不清楚，要是后来在公众号上看见调用方法时我在进行补充
* @param[in] LFOC_F_32BIT   Float__La,                 最小二乘法正则化因子写入
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Ridge(LFOC_F_32BIT Float__La,
    LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_F_32BIT* Float__Xz = Lfoc_Ls->Row__Sol.Float__M;

    LFOC_UI_BIT   Bit__I, Bit__J;

    //我们使用单位矩阵乘以λ来添加偏差

    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Length_X; Bit__I++)
    {
        Float__Xz[Bit__I] = Float__La;
        for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Ls->Upper__Rm[0].Bit__Len; Bit__J++)
            Float__Xz[Bit__J] = (LFOC_F_32BIT)0;
        if (Lfoc_Ls->State__Fast_Givens == 1)
        {
            Lfoc_Lse_Qrupdate_1(Lfoc_Ls, Lfoc_Ls->Upper__Rm, Float__Xz, (LFOC_F_32BIT)1, Bit__I);
        }
        else
        {
            Lfoc_Lse_Qrupdate_2(Lfoc_Ls, Lfoc_Ls->Upper__Rm, Float__Xz, Bit__I);
        }
    }
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的遗忘因子函数声明
* @details 这个我推理应该是和Lfoc_Lse_Nostd方法一致
* @param[in] LFOC_F_32BIT   Float__La,                 最小二乘法正则化因子写入
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Forget(0.95,&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Forget(0.95,Lfoc_Ls);
* @endcode
* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Forget(LFOC_F_32BIT Float__La,
    LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_LSE_UPPER_T* Rm;
    LFOC_UI_BIT   Bit__I, Bit__J, Bit__N, Bit__Len;

    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Cascades; Bit__I++)
    {
        Rm = &Lfoc_Ls->Upper__Rm[Bit__I];

        Bit__N = (Rm->Bit__Lazy != 0) ? Rm->Bit__Rows
            : (Rm->Bit__Rows < Rm->Bit__Keep) ? Rm->Bit__Rows : Rm->Bit__Keep;
        if (Bit__N != 0)
        {
            Bit__Len = Bit__N * Rm->Bit__Len - Bit__N * (Bit__N - 1) / 2;

            for (Bit__J = 0; Bit__J < Bit__Len; Bit__J++)
                Rm->Float__M[Bit__J] *= Float__La;
        }
    }
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的求解函数声明
* @details 此函数在最后时刻调，调用后能直接得出运算结果
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Solve(&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Solve(Lfoc_Ls);
* @endcode

* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Solve(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_LSE_UPPER_T* Rm = LFOC_LSE_RM_TOP(Lfoc_Ls);

    LFOC_F_32BIT* Float__Sol = Lfoc_Ls->Row__Sol.Float__M;
    LFOC_F_32BIT* Float__Mq, * Float__M, Float__U;
    LFOC_I_8BIT   Bit__I;
    LFOC_UI_8BIT   Bit__J, Bit__N;

    if (Lfoc_Ls->State__Fast_Givens == 1)
    {
        Lfoc_Lse_Qrfinal_1(Lfoc_Ls);
    }
    else
    {
        Lfoc_Lse_Qrfinal_2(Lfoc_Ls);
    }

    Float__Mq = Rm->Float__M + (Lfoc_Ls->Bit__Length_X - 1) * Rm->Bit__Len
        - Lfoc_Ls->Bit__Length_X * (Lfoc_Ls->Bit__Length_X - 1) / 2;
    //我们用回代法来计算解。
    for (Bit__N = 0; Bit__N < Lfoc_Ls->Bit__Length_Z; Bit__N++)
    {
        Float__M = Float__Mq;

        for (Bit__I = Lfoc_Ls->Bit__Length_X - 1; Bit__I >= 0; Bit__I--)
        {
            Float__U = (LFOC_F_32BIT)0;

            for (Bit__J = Bit__I + 1; Bit__J < Lfoc_Ls->Bit__Length_X; Bit__J++)
                Float__U += Float__Sol[Bit__J] * Float__M[Bit__J];
            Float__Sol[Bit__I] = (Float__M[Lfoc_Ls->Bit__Length_X + Bit__N] - Float__U) / Float__M[Bit__I];

            Float__M += Bit__I - Rm->Bit__Len;
        }
        Float__Sol += Lfoc_Ls->Bit__Length_X;
    }
    return LFOC_ERROR__SUCCESS;
}

/**@brief LFOC-最小二乘法的标准差函数声明
* @details 此函数在求解后在调用，能得出对应的标准差
* @param[in] LFOC_LSE_T*    Lfoc_Ls                    最小二乘法结构体
* @return    LFOC_ERROR__SUCCESS                       运行成功
* @attention   用户权限:用户可调用\n
*              用户更改权限:用户无修改权限
* @par       用户调用示例-Lfoc_Ls普通变量
* @code
*          LFOC_LSE_T Lfoc_Ls;
*          Lfoc_Lse_Std(&Lfoc_Ls);
* @endcode
* @par       用户调用示例-Lfoc_Ls指针变量
* @code
*          LFOC_LSE_T *Lfoc_Ls;
*          Lfoc_Lse_Std(Lfoc_Ls);
* @endcode

* @see :: Lfoc_Lse_Construct     最小二乘法的构建函数声明
* @see :: Lfoc_Lse_Clear         最小二乘法的清理函数声明
* @see :: Lfoc_Lse_Nostd         最小二乘法的无标准差函数声明
* @see :: Lfoc_Lse_Inverst       最小二乘法的记账函数声明
* @see :: Lfoc_Lse_Ridge         最小二乘法的回归正则化函数声明
* @see :: Lfoc_Lse_Forget        最小二乘法的遗忘因子函数声明
* @see :: Lfoc_Lse_Solve         最小二乘法的求解函数声明
* @see :: Lfoc_Lse_Std           最小二乘法的标准差函数声明
*/
LFOC_ERROR Lfoc_Lse_Std(LFOC_LSE_T* Lfoc_Ls)
{
    LFOC_LSE_UPPER_T* Rm = LFOC_LSE_RM_TOP(Lfoc_Ls);

    LFOC_F_32BIT* Float__Std = Lfoc_Ls->Row__Std.Float__M;
    LFOC_F_32BIT* Float__Mq, * Float__M, Float__U, Float__Ratio;

    LFOC_F_32BIT* Float__D = Rm->Float__D + Lfoc_Ls->Bit__Length_X;

    LFOC_UI_BIT   Bit__I, Bit__J;

    if (Lfoc_Ls->State__Fast_Givens == 1)
    {
        Lfoc_Lse_Qrfinal_1(Lfoc_Ls);
    }
    else
    {
        Lfoc_Lse_Qrfinal_2(Lfoc_Ls);
    }
    Float__Mq = Rm->Float__M + Lfoc_Ls->Bit__Length_X * Rm->Bit__Len
        - Lfoc_Ls->Bit__Length_X * (Lfoc_Ls->Bit__Length_X - 1) / 2;
    Float__Ratio = (LFOC_F_32BIT)1 / (LFOC_F_32BIT)(Lfoc_Ls->Bit__Total - 1);
    //我们对\rm列计算l2范数。
    for (Bit__I = 0; Bit__I < Lfoc_Ls->Bit__Length_Z; Bit__I++)
    {
        Float__M = Float__Mq;
        if (Lfoc_Ls->State__Fast_Givens == 1)
        {
            Float__U = Float__M[0] * Float__M[0] / Float__D[0];
        }
        else
        {
            Float__U = Float__M[0] * Float__M[0];
        }
        for (Bit__J = 1; Bit__J < Bit__I + 1; Bit__J++)
        {
            Float__M += Rm->Bit__Len - (Lfoc_Ls->Bit__Length_X + Bit__J);
            if (Lfoc_Ls->State__Fast_Givens == 1)
            {
                Float__U += Float__M[0] * Float__M[0] / Float__D[Bit__J];
            }
            else
            {
                Float__U += Float__M[0] * Float__M[0];
            }
        }
        Float__Std[Bit__I] = LFOC_LSE_SQRTF(Float__U * Float__Ratio);

        Float__Mq += 1;
    }
    return LFOC_ERROR__SUCCESS;
}
