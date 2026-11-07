#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
#include "lq_arctan2_pu_approximate_curve.h"

#if LQ_ARCTAN2_PU_APPROXIMATE_CURVE_LOADING_MODE == 1
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q1     Dy              输入Dy距离
* @param[in] LQ_INT8_Q1     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q1 LQ_INT8_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q1 Dy, LQ_INT8_Q1 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q1 Ax;
    LQ_INT8_Q1 Ay;
    LQ_INT8_Q1 Temp1;
    LQ_INT8_Q1 Temp2;
    LQ_INT8_Q1 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x01);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x01));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 1) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q1)Tmp;
    Temp2 = ((LQ_INT8_Q1)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 1));
    Result = ((LQ_INT8_Q1)((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(((LQ_INT8_Q1)((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(((LQ_INT8_Q1)((LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(-(00)) * (LQ_I_16BIT)(Temp2)) >> 1))) + (LQ_I_16BIT)((00))))) * (LQ_I_16BIT)(Temp2)) >> 1))) - (LQ_I_16BIT)((00))))) * (LQ_I_16BIT)(Temp2)) >> 1))) * (LQ_I_16BIT)(Temp1)) >> 1))) * (LQ_I_16BIT)(00)) >> 1))) + (LQ_I_16BIT)(((LQ_INT8_Q1)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((00))) >> 1)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q1)((LQ_I_16BIT)((0x01)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q1)((LQ_I_16BIT)((0x02)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q2     Dy              输入Dy距离
* @param[in] LQ_INT8_Q2     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q2 LQ_INT8_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q2 Dy, LQ_INT8_Q2 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q2 Ax;
    LQ_INT8_Q2 Ay;
    LQ_INT8_Q2 Temp1;
    LQ_INT8_Q2 Temp2;
    LQ_INT8_Q2 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x02);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x02));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 2) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q2)Tmp;
    Temp2 = ((LQ_INT8_Q2)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 2));
    Result = ((LQ_INT8_Q2)((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(((LQ_INT8_Q2)((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(((LQ_INT8_Q2)((LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(-(00)) * (LQ_I_16BIT)(Temp2)) >> 2))) + (LQ_I_16BIT)((00))))) * (LQ_I_16BIT)(Temp2)) >> 2))) - (LQ_I_16BIT)((0x01))))) * (LQ_I_16BIT)(Temp2)) >> 2))) * (LQ_I_16BIT)(Temp1)) >> 2))) * (LQ_I_16BIT)(0x01)) >> 2))) + (LQ_I_16BIT)(((LQ_INT8_Q2)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x01))) >> 2)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q2)((LQ_I_16BIT)((0x02)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q2)((LQ_I_16BIT)((0x04)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q3     Dy              输入Dy距离
* @param[in] LQ_INT8_Q3     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q3 LQ_INT8_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q3 Dy, LQ_INT8_Q3 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q3 Ax;
    LQ_INT8_Q3 Ay;
    LQ_INT8_Q3 Temp1;
    LQ_INT8_Q3 Temp2;
    LQ_INT8_Q3 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x04);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x04));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 3) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q3)Tmp;
    Temp2 = ((LQ_INT8_Q3)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 3));
    Result = ((LQ_INT8_Q3)((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(((LQ_INT8_Q3)((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(((LQ_INT8_Q3)((LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(-(00)) * (LQ_I_16BIT)(Temp2)) >> 3))) + (LQ_I_16BIT)((0x01))))) * (LQ_I_16BIT)(Temp2)) >> 3))) - (LQ_I_16BIT)((0x02))))) * (LQ_I_16BIT)(Temp2)) >> 3))) * (LQ_I_16BIT)(Temp1)) >> 3))) * (LQ_I_16BIT)(0x02)) >> 3))) + (LQ_I_16BIT)(((LQ_INT8_Q3)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x02))) >> 3)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q3)((LQ_I_16BIT)((0x04)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q3)((LQ_I_16BIT)((0x08)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q4     Dy              输入Dy距离
* @param[in] LQ_INT8_Q4     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q4 LQ_INT8_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q4 Dy, LQ_INT8_Q4 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q4 Ax;
    LQ_INT8_Q4 Ay;
    LQ_INT8_Q4 Temp1;
    LQ_INT8_Q4 Temp2;
    LQ_INT8_Q4 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x08);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x08));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 4) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q4)Tmp;
    Temp2 = ((LQ_INT8_Q4)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 4));
    Result = ((LQ_INT8_Q4)((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(((LQ_INT8_Q4)((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(((LQ_INT8_Q4)((LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(-(00)) * (LQ_I_16BIT)(Temp2)) >> 4))) + (LQ_I_16BIT)((0x02))))) * (LQ_I_16BIT)(Temp2)) >> 4))) - (LQ_I_16BIT)((0x05))))) * (LQ_I_16BIT)(Temp2)) >> 4))) * (LQ_I_16BIT)(Temp1)) >> 4))) * (LQ_I_16BIT)(0x05)) >> 4))) + (LQ_I_16BIT)(((LQ_INT8_Q4)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x05))) >> 4)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q4)((LQ_I_16BIT)((0x08)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q4)((LQ_I_16BIT)((0x10)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q5     Dy              输入Dy距离
* @param[in] LQ_INT8_Q5     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q5 LQ_INT8_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q5 Dy, LQ_INT8_Q5 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q5 Ax;
    LQ_INT8_Q5 Ay;
    LQ_INT8_Q5 Temp1;
    LQ_INT8_Q5 Temp2;
    LQ_INT8_Q5 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x10);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x10));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 5) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q5)Tmp;
    Temp2 = ((LQ_INT8_Q5)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 5));
    Result = ((LQ_INT8_Q5)((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(((LQ_INT8_Q5)((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(((LQ_INT8_Q5)((LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(-(0x01)) * (LQ_I_16BIT)(Temp2)) >> 5))) + (LQ_I_16BIT)((0x05))))) * (LQ_I_16BIT)(Temp2)) >> 5))) - (LQ_I_16BIT)((0x0a))))) * (LQ_I_16BIT)(Temp2)) >> 5))) * (LQ_I_16BIT)(Temp1)) >> 5))) * (LQ_I_16BIT)(0x0a)) >> 5))) + (LQ_I_16BIT)(((LQ_INT8_Q5)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x0a))) >> 5)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q5)((LQ_I_16BIT)((0x10)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q5)((LQ_I_16BIT)((0x20)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q6     Dy              输入Dy距离
* @param[in] LQ_INT8_Q6     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q6 LQ_INT8_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q6 Dy, LQ_INT8_Q6 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q6 Ax;
    LQ_INT8_Q6 Ay;
    LQ_INT8_Q6 Temp1;
    LQ_INT8_Q6 Temp2;
    LQ_INT8_Q6 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x20);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x20));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 6) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q6)Tmp;
    Temp2 = ((LQ_INT8_Q6)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 6));
    Result = ((LQ_INT8_Q6)((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(((LQ_INT8_Q6)((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(((LQ_INT8_Q6)((LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(-(0x02)) * (LQ_I_16BIT)(Temp2)) >> 6))) + (LQ_I_16BIT)((0x0a))))) * (LQ_I_16BIT)(Temp2)) >> 6))) - (LQ_I_16BIT)((0x14))))) * (LQ_I_16BIT)(Temp2)) >> 6))) * (LQ_I_16BIT)(Temp1)) >> 6))) * (LQ_I_16BIT)(0x14)) >> 6))) + (LQ_I_16BIT)(((LQ_INT8_Q6)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x14))) >> 6)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q6)((LQ_I_16BIT)((0x20)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q6)((LQ_I_16BIT)((0x40)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT8_Q7     Dy              输入Dy距离
* @param[in] LQ_INT8_Q7     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT8_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT8_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT8_Q7 LQ_INT8_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT8_Q7 Dy, LQ_INT8_Q7 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT8_Q7 Ax;
    LQ_INT8_Q7 Ay;
    LQ_INT8_Q7 Temp1;
    LQ_INT8_Q7 Temp2;
    LQ_INT8_Q7 Result;
    LQ_I_16BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x40);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x40));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT8_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_16BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 7) / (LQ_I_16BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT8_Q7)Tmp;
    Temp2 = ((LQ_INT8_Q7)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)(Temp1)) >> 7));
    Result = ((LQ_INT8_Q7)((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(((LQ_INT8_Q7)((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(((LQ_INT8_Q7)((LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(-(0x05)) * (LQ_I_16BIT)(Temp2)) >> 7))) + (LQ_I_16BIT)((0x14))))) * (LQ_I_16BIT)(Temp2)) >> 7))) - (LQ_I_16BIT)((0x29))))) * (LQ_I_16BIT)(Temp2)) >> 7))) * (LQ_I_16BIT)(Temp1)) >> 7))) * (LQ_I_16BIT)(0x28)) >> 7))) + (LQ_I_16BIT)(((LQ_INT8_Q7)(((LQ_I_16BIT)(Temp1) * (LQ_I_16BIT)((0x28))) >> 7)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT8_Q7)((LQ_I_16BIT)((0x40)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT8_Q7)((LQ_I_16BIT)((0x7f)) - (LQ_I_16BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q1     Dy              输入Dy距离
* @param[in] LQ_INT16_Q1     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q1 LQ_INT16_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q1 Dy, LQ_INT16_Q1 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q1 Ax;
    LQ_INT16_Q1 Ay;
    LQ_INT16_Q1 Temp1;
    LQ_INT16_Q1 Temp2;
    LQ_INT16_Q1 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0001);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0001));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 1) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q1)Tmp;
    Temp2 = ((LQ_INT16_Q1)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 1));
    Result = ((LQ_INT16_Q1)((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(((LQ_INT16_Q1)((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(((LQ_INT16_Q1)((LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(-(0000)) * (LQ_I_32BIT)(Temp2)) >> 1))) + (LQ_I_32BIT)((0000))))) * (LQ_I_32BIT)(Temp2)) >> 1))) - (LQ_I_32BIT)((0000))))) * (LQ_I_32BIT)(Temp2)) >> 1))) * (LQ_I_32BIT)(Temp1)) >> 1))) * (LQ_I_32BIT)(0000)) >> 1))) + (LQ_I_32BIT)(((LQ_INT16_Q1)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0000))) >> 1)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q1)((LQ_I_32BIT)((0x0001)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q1)((LQ_I_32BIT)((0x0002)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q2     Dy              输入Dy距离
* @param[in] LQ_INT16_Q2     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q2 LQ_INT16_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q2 Dy, LQ_INT16_Q2 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q2 Ax;
    LQ_INT16_Q2 Ay;
    LQ_INT16_Q2 Temp1;
    LQ_INT16_Q2 Temp2;
    LQ_INT16_Q2 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0002);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0002));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 2) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q2)Tmp;
    Temp2 = ((LQ_INT16_Q2)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 2));
    Result = ((LQ_INT16_Q2)((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(((LQ_INT16_Q2)((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(((LQ_INT16_Q2)((LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(-(0000)) * (LQ_I_32BIT)(Temp2)) >> 2))) + (LQ_I_32BIT)((0000))))) * (LQ_I_32BIT)(Temp2)) >> 2))) - (LQ_I_32BIT)((0x0001))))) * (LQ_I_32BIT)(Temp2)) >> 2))) * (LQ_I_32BIT)(Temp1)) >> 2))) * (LQ_I_32BIT)(0x0001)) >> 2))) + (LQ_I_32BIT)(((LQ_INT16_Q2)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0001))) >> 2)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q2)((LQ_I_32BIT)((0x0002)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q2)((LQ_I_32BIT)((0x0004)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q3     Dy              输入Dy距离
* @param[in] LQ_INT16_Q3     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q3 LQ_INT16_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q3 Dy, LQ_INT16_Q3 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q3 Ax;
    LQ_INT16_Q3 Ay;
    LQ_INT16_Q3 Temp1;
    LQ_INT16_Q3 Temp2;
    LQ_INT16_Q3 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0004);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0004));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 3) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q3)Tmp;
    Temp2 = ((LQ_INT16_Q3)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 3));
    Result = ((LQ_INT16_Q3)((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(((LQ_INT16_Q3)((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(((LQ_INT16_Q3)((LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(-(0000)) * (LQ_I_32BIT)(Temp2)) >> 3))) + (LQ_I_32BIT)((0x0001))))) * (LQ_I_32BIT)(Temp2)) >> 3))) - (LQ_I_32BIT)((0x0002))))) * (LQ_I_32BIT)(Temp2)) >> 3))) * (LQ_I_32BIT)(Temp1)) >> 3))) * (LQ_I_32BIT)(0x0002)) >> 3))) + (LQ_I_32BIT)(((LQ_INT16_Q3)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0002))) >> 3)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q3)((LQ_I_32BIT)((0x0004)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q3)((LQ_I_32BIT)((0x0008)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q4     Dy              输入Dy距离
* @param[in] LQ_INT16_Q4     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q4 LQ_INT16_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q4 Dy, LQ_INT16_Q4 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q4 Ax;
    LQ_INT16_Q4 Ay;
    LQ_INT16_Q4 Temp1;
    LQ_INT16_Q4 Temp2;
    LQ_INT16_Q4 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0008);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0008));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 4) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q4)Tmp;
    Temp2 = ((LQ_INT16_Q4)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 4));
    Result = ((LQ_INT16_Q4)((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(((LQ_INT16_Q4)((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(((LQ_INT16_Q4)((LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(-(0000)) * (LQ_I_32BIT)(Temp2)) >> 4))) + (LQ_I_32BIT)((0x0002))))) * (LQ_I_32BIT)(Temp2)) >> 4))) - (LQ_I_32BIT)((0x0005))))) * (LQ_I_32BIT)(Temp2)) >> 4))) * (LQ_I_32BIT)(Temp1)) >> 4))) * (LQ_I_32BIT)(0x0005)) >> 4))) + (LQ_I_32BIT)(((LQ_INT16_Q4)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0005))) >> 4)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q4)((LQ_I_32BIT)((0x0008)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q4)((LQ_I_32BIT)((0x0010)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q5     Dy              输入Dy距离
* @param[in] LQ_INT16_Q5     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q5 LQ_INT16_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q5 Dy, LQ_INT16_Q5 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q5 Ax;
    LQ_INT16_Q5 Ay;
    LQ_INT16_Q5 Temp1;
    LQ_INT16_Q5 Temp2;
    LQ_INT16_Q5 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0010);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0010));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 5) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q5)Tmp;
    Temp2 = ((LQ_INT16_Q5)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 5));
    Result = ((LQ_INT16_Q5)((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(((LQ_INT16_Q5)((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(((LQ_INT16_Q5)((LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(-(0x0001)) * (LQ_I_32BIT)(Temp2)) >> 5))) + (LQ_I_32BIT)((0x0005))))) * (LQ_I_32BIT)(Temp2)) >> 5))) - (LQ_I_32BIT)((0x000a))))) * (LQ_I_32BIT)(Temp2)) >> 5))) * (LQ_I_32BIT)(Temp1)) >> 5))) * (LQ_I_32BIT)(0x000a)) >> 5))) + (LQ_I_32BIT)(((LQ_INT16_Q5)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x000a))) >> 5)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q5)((LQ_I_32BIT)((0x0010)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q5)((LQ_I_32BIT)((0x0020)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q6     Dy              输入Dy距离
* @param[in] LQ_INT16_Q6     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q6 LQ_INT16_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q6 Dy, LQ_INT16_Q6 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q6 Ax;
    LQ_INT16_Q6 Ay;
    LQ_INT16_Q6 Temp1;
    LQ_INT16_Q6 Temp2;
    LQ_INT16_Q6 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0020);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0020));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 6) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q6)Tmp;
    Temp2 = ((LQ_INT16_Q6)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 6));
    Result = ((LQ_INT16_Q6)((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(((LQ_INT16_Q6)((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(((LQ_INT16_Q6)((LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(-(0x0002)) * (LQ_I_32BIT)(Temp2)) >> 6))) + (LQ_I_32BIT)((0x000a))))) * (LQ_I_32BIT)(Temp2)) >> 6))) - (LQ_I_32BIT)((0x0014))))) * (LQ_I_32BIT)(Temp2)) >> 6))) * (LQ_I_32BIT)(Temp1)) >> 6))) * (LQ_I_32BIT)(0x0014)) >> 6))) + (LQ_I_32BIT)(((LQ_INT16_Q6)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0014))) >> 6)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q6)((LQ_I_32BIT)((0x0020)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q6)((LQ_I_32BIT)((0x0040)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q7     Dy              输入Dy距离
* @param[in] LQ_INT16_Q7     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q7 LQ_INT16_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q7 Dy, LQ_INT16_Q7 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q7 Ax;
    LQ_INT16_Q7 Ay;
    LQ_INT16_Q7 Temp1;
    LQ_INT16_Q7 Temp2;
    LQ_INT16_Q7 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0040);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0040));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 7) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q7)Tmp;
    Temp2 = ((LQ_INT16_Q7)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 7));
    Result = ((LQ_INT16_Q7)((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(((LQ_INT16_Q7)((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(((LQ_INT16_Q7)((LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(-(0x0005)) * (LQ_I_32BIT)(Temp2)) >> 7))) + (LQ_I_32BIT)((0x0014))))) * (LQ_I_32BIT)(Temp2)) >> 7))) - (LQ_I_32BIT)((0x0029))))) * (LQ_I_32BIT)(Temp2)) >> 7))) * (LQ_I_32BIT)(Temp1)) >> 7))) * (LQ_I_32BIT)(0x0028)) >> 7))) + (LQ_I_32BIT)(((LQ_INT16_Q7)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0028))) >> 7)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q7)((LQ_I_32BIT)((0x0040)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q7)((LQ_I_32BIT)((0x0080)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q8     Dy              输入Dy距离
* @param[in] LQ_INT16_Q8     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q8_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q8_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q8 LQ_INT16_Q8_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q8 Dy, LQ_INT16_Q8 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q8 Ax;
    LQ_INT16_Q8 Ay;
    LQ_INT16_Q8 Temp1;
    LQ_INT16_Q8 Temp2;
    LQ_INT16_Q8 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0080);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0080));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q8_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 8) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q8)Tmp;
    Temp2 = ((LQ_INT16_Q8)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 8));
    Result = ((LQ_INT16_Q8)((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(((LQ_INT16_Q8)((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(((LQ_INT16_Q8)((LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(-(0x000b)) * (LQ_I_32BIT)(Temp2)) >> 8))) + (LQ_I_32BIT)((0x0028))))) * (LQ_I_32BIT)(Temp2)) >> 8))) - (LQ_I_32BIT)((0x0053))))) * (LQ_I_32BIT)(Temp2)) >> 8))) * (LQ_I_32BIT)(Temp1)) >> 8))) * (LQ_I_32BIT)(0x0051)) >> 8))) + (LQ_I_32BIT)(((LQ_INT16_Q8)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0051))) >> 8)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q8)((LQ_I_32BIT)((0x0080)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q8)((LQ_I_32BIT)((0x0100)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q9     Dy              输入Dy距离
* @param[in] LQ_INT16_Q9     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q9_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q9_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q9 LQ_INT16_Q9_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q9 Dy, LQ_INT16_Q9 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q9 Ax;
    LQ_INT16_Q9 Ay;
    LQ_INT16_Q9 Temp1;
    LQ_INT16_Q9 Temp2;
    LQ_INT16_Q9 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0100);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0100));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q9_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 9) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q9)Tmp;
    Temp2 = ((LQ_INT16_Q9)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 9));
    Result = ((LQ_INT16_Q9)((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(((LQ_INT16_Q9)((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(((LQ_INT16_Q9)((LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(-(0x0017)) * (LQ_I_32BIT)(Temp2)) >> 9))) + (LQ_I_32BIT)((0x0051))))) * (LQ_I_32BIT)(Temp2)) >> 9))) - (LQ_I_32BIT)((0x00a7))))) * (LQ_I_32BIT)(Temp2)) >> 9))) * (LQ_I_32BIT)(Temp1)) >> 9))) * (LQ_I_32BIT)(0x00a2)) >> 9))) + (LQ_I_32BIT)(((LQ_INT16_Q9)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x00a2))) >> 9)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q9)((LQ_I_32BIT)((0x0100)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q9)((LQ_I_32BIT)((0x0200)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q10     Dy              输入Dy距离
* @param[in] LQ_INT16_Q10     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q10_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q10_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q10 LQ_INT16_Q10_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q10 Dy, LQ_INT16_Q10 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q10 Ax;
    LQ_INT16_Q10 Ay;
    LQ_INT16_Q10 Temp1;
    LQ_INT16_Q10 Temp2;
    LQ_INT16_Q10 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0200);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0200));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q10_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 10) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q10)Tmp;
    Temp2 = ((LQ_INT16_Q10)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 10));
    Result = ((LQ_INT16_Q10)((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(((LQ_INT16_Q10)((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(((LQ_INT16_Q10)((LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(-(0x002f)) * (LQ_I_32BIT)(Temp2)) >> 10))) + (LQ_I_32BIT)((0x00a3))))) * (LQ_I_32BIT)(Temp2)) >> 10))) - (LQ_I_32BIT)((0x014f))))) * (LQ_I_32BIT)(Temp2)) >> 10))) * (LQ_I_32BIT)(Temp1)) >> 10))) * (LQ_I_32BIT)(0x0145)) >> 10))) + (LQ_I_32BIT)(((LQ_INT16_Q10)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0145))) >> 10)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q10)((LQ_I_32BIT)((0x0200)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q10)((LQ_I_32BIT)((0x0400)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q11     Dy              输入Dy距离
* @param[in] LQ_INT16_Q11     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q11_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q11_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q11 LQ_INT16_Q11_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q11 Dy, LQ_INT16_Q11 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q11 Ax;
    LQ_INT16_Q11 Ay;
    LQ_INT16_Q11 Temp1;
    LQ_INT16_Q11 Temp2;
    LQ_INT16_Q11 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0400);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0400));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q11_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 11) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q11)Tmp;
    Temp2 = ((LQ_INT16_Q11)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 11));
    Result = ((LQ_INT16_Q11)((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(((LQ_INT16_Q11)((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(((LQ_INT16_Q11)((LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(-(0x005f)) * (LQ_I_32BIT)(Temp2)) >> 11))) + (LQ_I_32BIT)((0x0146))))) * (LQ_I_32BIT)(Temp2)) >> 11))) - (LQ_I_32BIT)((0x029e))))) * (LQ_I_32BIT)(Temp2)) >> 11))) * (LQ_I_32BIT)(Temp1)) >> 11))) * (LQ_I_32BIT)(0x028b)) >> 11))) + (LQ_I_32BIT)(((LQ_INT16_Q11)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x028b))) >> 11)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q11)((LQ_I_32BIT)((0x0400)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q11)((LQ_I_32BIT)((0x0800)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q12     Dy              输入Dy距离
* @param[in] LQ_INT16_Q12     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q12_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q12_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q12 LQ_INT16_Q12_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q12 Dy, LQ_INT16_Q12 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q12 Ax;
    LQ_INT16_Q12 Ay;
    LQ_INT16_Q12 Temp1;
    LQ_INT16_Q12 Temp2;
    LQ_INT16_Q12 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x0800);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x0800));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q12_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 12) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q12)Tmp;
    Temp2 = ((LQ_INT16_Q12)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 12));
    Result = ((LQ_INT16_Q12)((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(((LQ_INT16_Q12)((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(((LQ_INT16_Q12)((LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(-(0x00be)) * (LQ_I_32BIT)(Temp2)) >> 12))) + (LQ_I_32BIT)((0x028c))))) * (LQ_I_32BIT)(Temp2)) >> 12))) - (LQ_I_32BIT)((0x053d))))) * (LQ_I_32BIT)(Temp2)) >> 12))) * (LQ_I_32BIT)(Temp1)) >> 12))) * (LQ_I_32BIT)(0x0517)) >> 12))) + (LQ_I_32BIT)(((LQ_INT16_Q12)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0517))) >> 12)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q12)((LQ_I_32BIT)((0x0800)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q12)((LQ_I_32BIT)((0x1000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q13     Dy              输入Dy距离
* @param[in] LQ_INT16_Q13     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q13_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q13_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q13 LQ_INT16_Q13_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q13 Dy, LQ_INT16_Q13 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q13 Ax;
    LQ_INT16_Q13 Ay;
    LQ_INT16_Q13 Temp1;
    LQ_INT16_Q13 Temp2;
    LQ_INT16_Q13 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x1000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x1000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q13_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 13) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q13)Tmp;
    Temp2 = ((LQ_INT16_Q13)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 13));
    Result = ((LQ_INT16_Q13)((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(((LQ_INT16_Q13)((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(((LQ_INT16_Q13)((LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(-(0x017c)) * (LQ_I_32BIT)(Temp2)) >> 13))) + (LQ_I_32BIT)((0x0519))))) * (LQ_I_32BIT)(Temp2)) >> 13))) - (LQ_I_32BIT)((0x0a7b))))) * (LQ_I_32BIT)(Temp2)) >> 13))) * (LQ_I_32BIT)(Temp1)) >> 13))) * (LQ_I_32BIT)(0x0a2f)) >> 13))) + (LQ_I_32BIT)(((LQ_INT16_Q13)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x0a2f))) >> 13)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q13)((LQ_I_32BIT)((0x1000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q13)((LQ_I_32BIT)((0x2000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q14     Dy              输入Dy距离
* @param[in] LQ_INT16_Q14     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q14_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q14_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q14 LQ_INT16_Q14_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q14 Dy, LQ_INT16_Q14 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q14 Ax;
    LQ_INT16_Q14 Ay;
    LQ_INT16_Q14 Temp1;
    LQ_INT16_Q14 Temp2;
    LQ_INT16_Q14 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x2000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x2000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q14_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 14) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q14)Tmp;
    Temp2 = ((LQ_INT16_Q14)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 14));
    Result = ((LQ_INT16_Q14)((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(((LQ_INT16_Q14)((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(((LQ_INT16_Q14)((LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(-(0x02f9)) * (LQ_I_32BIT)(Temp2)) >> 14))) + (LQ_I_32BIT)((0x0a32))))) * (LQ_I_32BIT)(Temp2)) >> 14))) - (LQ_I_32BIT)((0x14f7))))) * (LQ_I_32BIT)(Temp2)) >> 14))) * (LQ_I_32BIT)(Temp1)) >> 14))) * (LQ_I_32BIT)(0x145f)) >> 14))) + (LQ_I_32BIT)(((LQ_INT16_Q14)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x145f))) >> 14)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q14)((LQ_I_32BIT)((0x2000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q14)((LQ_I_32BIT)((0x4000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT16_Q15     Dy              输入Dy距离
* @param[in] LQ_INT16_Q15     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT16_Q15_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT16_Q15_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT16_Q15 LQ_INT16_Q15_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT16_Q15 Dy, LQ_INT16_Q15 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT16_Q15 Ax;
    LQ_INT16_Q15 Ay;
    LQ_INT16_Q15 Temp1;
    LQ_INT16_Q15 Temp2;
    LQ_INT16_Q15 Result;
    LQ_I_32BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x4000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x4000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT16_Q15_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_32BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 15) / (LQ_I_32BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT16_Q15)Tmp;
    Temp2 = ((LQ_INT16_Q15)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)(Temp1)) >> 15));
    Result = ((LQ_INT16_Q15)((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(((LQ_INT16_Q15)((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(((LQ_INT16_Q15)((LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(-(0x05f3)) * (LQ_I_32BIT)(Temp2)) >> 15))) + (LQ_I_32BIT)((0x1464))))) * (LQ_I_32BIT)(Temp2)) >> 15))) - (LQ_I_32BIT)((0x29ef))))) * (LQ_I_32BIT)(Temp2)) >> 15))) * (LQ_I_32BIT)(Temp1)) >> 15))) * (LQ_I_32BIT)(0x28be)) >> 15))) + (LQ_I_32BIT)(((LQ_INT16_Q15)(((LQ_I_32BIT)(Temp1) * (LQ_I_32BIT)((0x28be))) >> 15)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT16_Q15)((LQ_I_32BIT)((0x4000)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT16_Q15)((LQ_I_32BIT)((0x7fff)) - (LQ_I_32BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q1     Dy              输入Dy距离
* @param[in] LQ_INT32_Q1     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q1 LQ_INT32_Q1_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q1 Dy, LQ_INT32_Q1 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q1 Ax;
    LQ_INT32_Q1 Ay;
    LQ_INT32_Q1 Temp1;
    LQ_INT32_Q1 Temp2;
    LQ_INT32_Q1 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000001);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000001));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q1_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 1) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q1)Tmp;
    Temp2 = ((LQ_INT32_Q1)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 1));
    Result = ((LQ_INT32_Q1)((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(((LQ_INT32_Q1)((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(((LQ_INT32_Q1)((LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(-(00000000)) * (LQ_I_64BIT)(Temp2)) >> 1))) + (LQ_I_64BIT)((00000000))))) * (LQ_I_64BIT)(Temp2)) >> 1))) - (LQ_I_64BIT)((00000000))))) * (LQ_I_64BIT)(Temp2)) >> 1))) * (LQ_I_64BIT)(Temp1)) >> 1))) * (LQ_I_64BIT)(00000000)) >> 1))) + (LQ_I_64BIT)(((LQ_INT32_Q1)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((00000000))) >> 1)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q1)((LQ_I_64BIT)((0x00000001)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q1)((LQ_I_64BIT)((0x00000002)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q2     Dy              输入Dy距离
* @param[in] LQ_INT32_Q2     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q2 LQ_INT32_Q2_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q2 Dy, LQ_INT32_Q2 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q2 Ax;
    LQ_INT32_Q2 Ay;
    LQ_INT32_Q2 Temp1;
    LQ_INT32_Q2 Temp2;
    LQ_INT32_Q2 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000002);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000002));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q2_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 2) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q2)Tmp;
    Temp2 = ((LQ_INT32_Q2)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 2));
    Result = ((LQ_INT32_Q2)((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(((LQ_INT32_Q2)((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(((LQ_INT32_Q2)((LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(-(00000000)) * (LQ_I_64BIT)(Temp2)) >> 2))) + (LQ_I_64BIT)((00000000))))) * (LQ_I_64BIT)(Temp2)) >> 2))) - (LQ_I_64BIT)((0x00000001))))) * (LQ_I_64BIT)(Temp2)) >> 2))) * (LQ_I_64BIT)(Temp1)) >> 2))) * (LQ_I_64BIT)(0x00000001)) >> 2))) + (LQ_I_64BIT)(((LQ_INT32_Q2)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000001))) >> 2)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q2)((LQ_I_64BIT)((0x00000002)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q2)((LQ_I_64BIT)((0x00000004)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q3     Dy              输入Dy距离
* @param[in] LQ_INT32_Q3     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q3 LQ_INT32_Q3_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q3 Dy, LQ_INT32_Q3 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q3 Ax;
    LQ_INT32_Q3 Ay;
    LQ_INT32_Q3 Temp1;
    LQ_INT32_Q3 Temp2;
    LQ_INT32_Q3 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000004);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000004));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q3_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 3) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q3)Tmp;
    Temp2 = ((LQ_INT32_Q3)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 3));
    Result = ((LQ_INT32_Q3)((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(((LQ_INT32_Q3)((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(((LQ_INT32_Q3)((LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(-(00000000)) * (LQ_I_64BIT)(Temp2)) >> 3))) + (LQ_I_64BIT)((0x00000001))))) * (LQ_I_64BIT)(Temp2)) >> 3))) - (LQ_I_64BIT)((0x00000002))))) * (LQ_I_64BIT)(Temp2)) >> 3))) * (LQ_I_64BIT)(Temp1)) >> 3))) * (LQ_I_64BIT)(0x00000002)) >> 3))) + (LQ_I_64BIT)(((LQ_INT32_Q3)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000002))) >> 3)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q3)((LQ_I_64BIT)((0x00000004)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q3)((LQ_I_64BIT)((0x00000008)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q4     Dy              输入Dy距离
* @param[in] LQ_INT32_Q4     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q4 LQ_INT32_Q4_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q4 Dy, LQ_INT32_Q4 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q4 Ax;
    LQ_INT32_Q4 Ay;
    LQ_INT32_Q4 Temp1;
    LQ_INT32_Q4 Temp2;
    LQ_INT32_Q4 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000008);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000008));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q4_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 4) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q4)Tmp;
    Temp2 = ((LQ_INT32_Q4)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 4));
    Result = ((LQ_INT32_Q4)((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(((LQ_INT32_Q4)((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(((LQ_INT32_Q4)((LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(-(00000000)) * (LQ_I_64BIT)(Temp2)) >> 4))) + (LQ_I_64BIT)((0x00000002))))) * (LQ_I_64BIT)(Temp2)) >> 4))) - (LQ_I_64BIT)((0x00000005))))) * (LQ_I_64BIT)(Temp2)) >> 4))) * (LQ_I_64BIT)(Temp1)) >> 4))) * (LQ_I_64BIT)(0x00000005)) >> 4))) + (LQ_I_64BIT)(((LQ_INT32_Q4)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000005))) >> 4)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q4)((LQ_I_64BIT)((0x00000008)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q4)((LQ_I_64BIT)((0x00000010)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q5     Dy              输入Dy距离
* @param[in] LQ_INT32_Q5     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q5 LQ_INT32_Q5_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q5 Dy, LQ_INT32_Q5 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q5 Ax;
    LQ_INT32_Q5 Ay;
    LQ_INT32_Q5 Temp1;
    LQ_INT32_Q5 Temp2;
    LQ_INT32_Q5 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000010);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000010));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q5_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 5) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q5)Tmp;
    Temp2 = ((LQ_INT32_Q5)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 5));
    Result = ((LQ_INT32_Q5)((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(((LQ_INT32_Q5)((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(((LQ_INT32_Q5)((LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(-(0x00000001)) * (LQ_I_64BIT)(Temp2)) >> 5))) + (LQ_I_64BIT)((0x00000005))))) * (LQ_I_64BIT)(Temp2)) >> 5))) - (LQ_I_64BIT)((0x0000000a))))) * (LQ_I_64BIT)(Temp2)) >> 5))) * (LQ_I_64BIT)(Temp1)) >> 5))) * (LQ_I_64BIT)(0x0000000a)) >> 5))) + (LQ_I_64BIT)(((LQ_INT32_Q5)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0000000a))) >> 5)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q5)((LQ_I_64BIT)((0x00000010)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q5)((LQ_I_64BIT)((0x00000020)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q6     Dy              输入Dy距离
* @param[in] LQ_INT32_Q6     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q6 LQ_INT32_Q6_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q6 Dy, LQ_INT32_Q6 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q6 Ax;
    LQ_INT32_Q6 Ay;
    LQ_INT32_Q6 Temp1;
    LQ_INT32_Q6 Temp2;
    LQ_INT32_Q6 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000020);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000020));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q6_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 6) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q6)Tmp;
    Temp2 = ((LQ_INT32_Q6)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 6));
    Result = ((LQ_INT32_Q6)((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(((LQ_INT32_Q6)((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(((LQ_INT32_Q6)((LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(-(0x00000002)) * (LQ_I_64BIT)(Temp2)) >> 6))) + (LQ_I_64BIT)((0x0000000a))))) * (LQ_I_64BIT)(Temp2)) >> 6))) - (LQ_I_64BIT)((0x00000014))))) * (LQ_I_64BIT)(Temp2)) >> 6))) * (LQ_I_64BIT)(Temp1)) >> 6))) * (LQ_I_64BIT)(0x00000014)) >> 6))) + (LQ_I_64BIT)(((LQ_INT32_Q6)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000014))) >> 6)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q6)((LQ_I_64BIT)((0x00000020)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q6)((LQ_I_64BIT)((0x00000040)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q7     Dy              输入Dy距离
* @param[in] LQ_INT32_Q7     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q7 LQ_INT32_Q7_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q7 Dy, LQ_INT32_Q7 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q7 Ax;
    LQ_INT32_Q7 Ay;
    LQ_INT32_Q7 Temp1;
    LQ_INT32_Q7 Temp2;
    LQ_INT32_Q7 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000040);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000040));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q7_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 7) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q7)Tmp;
    Temp2 = ((LQ_INT32_Q7)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 7));
    Result = ((LQ_INT32_Q7)((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(((LQ_INT32_Q7)((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(((LQ_INT32_Q7)((LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(-(0x00000005)) * (LQ_I_64BIT)(Temp2)) >> 7))) + (LQ_I_64BIT)((0x00000014))))) * (LQ_I_64BIT)(Temp2)) >> 7))) - (LQ_I_64BIT)((0x00000029))))) * (LQ_I_64BIT)(Temp2)) >> 7))) * (LQ_I_64BIT)(Temp1)) >> 7))) * (LQ_I_64BIT)(0x00000028)) >> 7))) + (LQ_I_64BIT)(((LQ_INT32_Q7)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000028))) >> 7)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q7)((LQ_I_64BIT)((0x00000040)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q7)((LQ_I_64BIT)((0x00000080)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q8     Dy              输入Dy距离
* @param[in] LQ_INT32_Q8     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q8_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q8_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q8 LQ_INT32_Q8_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q8 Dy, LQ_INT32_Q8 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q8 Ax;
    LQ_INT32_Q8 Ay;
    LQ_INT32_Q8 Temp1;
    LQ_INT32_Q8 Temp2;
    LQ_INT32_Q8 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000080);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000080));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q8_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 8) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q8)Tmp;
    Temp2 = ((LQ_INT32_Q8)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 8));
    Result = ((LQ_INT32_Q8)((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(((LQ_INT32_Q8)((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(((LQ_INT32_Q8)((LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(-(0x0000000b)) * (LQ_I_64BIT)(Temp2)) >> 8))) + (LQ_I_64BIT)((0x00000028))))) * (LQ_I_64BIT)(Temp2)) >> 8))) - (LQ_I_64BIT)((0x00000053))))) * (LQ_I_64BIT)(Temp2)) >> 8))) * (LQ_I_64BIT)(Temp1)) >> 8))) * (LQ_I_64BIT)(0x00000051)) >> 8))) + (LQ_I_64BIT)(((LQ_INT32_Q8)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000051))) >> 8)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q8)((LQ_I_64BIT)((0x00000080)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q8)((LQ_I_64BIT)((0x00000100)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q9     Dy              输入Dy距离
* @param[in] LQ_INT32_Q9     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q9_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q9_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q9 LQ_INT32_Q9_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q9 Dy, LQ_INT32_Q9 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q9 Ax;
    LQ_INT32_Q9 Ay;
    LQ_INT32_Q9 Temp1;
    LQ_INT32_Q9 Temp2;
    LQ_INT32_Q9 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000100);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000100));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q9_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 9) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q9)Tmp;
    Temp2 = ((LQ_INT32_Q9)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 9));
    Result = ((LQ_INT32_Q9)((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(((LQ_INT32_Q9)((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(((LQ_INT32_Q9)((LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(-(0x00000017)) * (LQ_I_64BIT)(Temp2)) >> 9))) + (LQ_I_64BIT)((0x00000051))))) * (LQ_I_64BIT)(Temp2)) >> 9))) - (LQ_I_64BIT)((0x000000a7))))) * (LQ_I_64BIT)(Temp2)) >> 9))) * (LQ_I_64BIT)(Temp1)) >> 9))) * (LQ_I_64BIT)(0x000000a2)) >> 9))) + (LQ_I_64BIT)(((LQ_INT32_Q9)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x000000a2))) >> 9)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q9)((LQ_I_64BIT)((0x00000100)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q9)((LQ_I_64BIT)((0x00000200)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q10     Dy              输入Dy距离
* @param[in] LQ_INT32_Q10     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q10_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q10_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q10 LQ_INT32_Q10_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q10 Dy, LQ_INT32_Q10 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q10 Ax;
    LQ_INT32_Q10 Ay;
    LQ_INT32_Q10 Temp1;
    LQ_INT32_Q10 Temp2;
    LQ_INT32_Q10 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000200);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000200));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q10_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 10) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q10)Tmp;
    Temp2 = ((LQ_INT32_Q10)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 10));
    Result = ((LQ_INT32_Q10)((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(((LQ_INT32_Q10)((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(((LQ_INT32_Q10)((LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(-(0x0000002f)) * (LQ_I_64BIT)(Temp2)) >> 10))) + (LQ_I_64BIT)((0x000000a3))))) * (LQ_I_64BIT)(Temp2)) >> 10))) - (LQ_I_64BIT)((0x0000014f))))) * (LQ_I_64BIT)(Temp2)) >> 10))) * (LQ_I_64BIT)(Temp1)) >> 10))) * (LQ_I_64BIT)(0x00000145)) >> 10))) + (LQ_I_64BIT)(((LQ_INT32_Q10)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000145))) >> 10)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q10)((LQ_I_64BIT)((0x00000200)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q10)((LQ_I_64BIT)((0x00000400)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q11     Dy              输入Dy距离
* @param[in] LQ_INT32_Q11     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q11_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q11_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q11 LQ_INT32_Q11_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q11 Dy, LQ_INT32_Q11 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q11 Ax;
    LQ_INT32_Q11 Ay;
    LQ_INT32_Q11 Temp1;
    LQ_INT32_Q11 Temp2;
    LQ_INT32_Q11 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000400);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000400));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q11_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 11) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q11)Tmp;
    Temp2 = ((LQ_INT32_Q11)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 11));
    Result = ((LQ_INT32_Q11)((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(((LQ_INT32_Q11)((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(((LQ_INT32_Q11)((LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(-(0x0000005f)) * (LQ_I_64BIT)(Temp2)) >> 11))) + (LQ_I_64BIT)((0x00000146))))) * (LQ_I_64BIT)(Temp2)) >> 11))) - (LQ_I_64BIT)((0x0000029e))))) * (LQ_I_64BIT)(Temp2)) >> 11))) * (LQ_I_64BIT)(Temp1)) >> 11))) * (LQ_I_64BIT)(0x0000028b)) >> 11))) + (LQ_I_64BIT)(((LQ_INT32_Q11)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0000028b))) >> 11)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q11)((LQ_I_64BIT)((0x00000400)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q11)((LQ_I_64BIT)((0x00000800)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q12     Dy              输入Dy距离
* @param[in] LQ_INT32_Q12     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q12_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q12_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q12 LQ_INT32_Q12_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q12 Dy, LQ_INT32_Q12 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q12 Ax;
    LQ_INT32_Q12 Ay;
    LQ_INT32_Q12 Temp1;
    LQ_INT32_Q12 Temp2;
    LQ_INT32_Q12 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00000800);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00000800));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q12_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 12) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q12)Tmp;
    Temp2 = ((LQ_INT32_Q12)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 12));
    Result = ((LQ_INT32_Q12)((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(((LQ_INT32_Q12)((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(((LQ_INT32_Q12)((LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(-(0x000000be)) * (LQ_I_64BIT)(Temp2)) >> 12))) + (LQ_I_64BIT)((0x0000028c))))) * (LQ_I_64BIT)(Temp2)) >> 12))) - (LQ_I_64BIT)((0x0000053d))))) * (LQ_I_64BIT)(Temp2)) >> 12))) * (LQ_I_64BIT)(Temp1)) >> 12))) * (LQ_I_64BIT)(0x00000517)) >> 12))) + (LQ_I_64BIT)(((LQ_INT32_Q12)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000517))) >> 12)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q12)((LQ_I_64BIT)((0x00000800)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q12)((LQ_I_64BIT)((0x00001000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q13     Dy              输入Dy距离
* @param[in] LQ_INT32_Q13     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q13_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q13_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q13 LQ_INT32_Q13_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q13 Dy, LQ_INT32_Q13 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q13 Ax;
    LQ_INT32_Q13 Ay;
    LQ_INT32_Q13 Temp1;
    LQ_INT32_Q13 Temp2;
    LQ_INT32_Q13 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00001000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00001000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q13_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 13) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q13)Tmp;
    Temp2 = ((LQ_INT32_Q13)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 13));
    Result = ((LQ_INT32_Q13)((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(((LQ_INT32_Q13)((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(((LQ_INT32_Q13)((LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(-(0x0000017c)) * (LQ_I_64BIT)(Temp2)) >> 13))) + (LQ_I_64BIT)((0x00000519))))) * (LQ_I_64BIT)(Temp2)) >> 13))) - (LQ_I_64BIT)((0x00000a7b))))) * (LQ_I_64BIT)(Temp2)) >> 13))) * (LQ_I_64BIT)(Temp1)) >> 13))) * (LQ_I_64BIT)(0x00000a2f)) >> 13))) + (LQ_I_64BIT)(((LQ_INT32_Q13)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00000a2f))) >> 13)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q13)((LQ_I_64BIT)((0x00001000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q13)((LQ_I_64BIT)((0x00002000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q14     Dy              输入Dy距离
* @param[in] LQ_INT32_Q14     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q14_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q14_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q14 LQ_INT32_Q14_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q14 Dy, LQ_INT32_Q14 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q14 Ax;
    LQ_INT32_Q14 Ay;
    LQ_INT32_Q14 Temp1;
    LQ_INT32_Q14 Temp2;
    LQ_INT32_Q14 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00002000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00002000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q14_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 14) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q14)Tmp;
    Temp2 = ((LQ_INT32_Q14)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 14));
    Result = ((LQ_INT32_Q14)((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(((LQ_INT32_Q14)((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(((LQ_INT32_Q14)((LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(-(0x000002f9)) * (LQ_I_64BIT)(Temp2)) >> 14))) + (LQ_I_64BIT)((0x00000a32))))) * (LQ_I_64BIT)(Temp2)) >> 14))) - (LQ_I_64BIT)((0x000014f7))))) * (LQ_I_64BIT)(Temp2)) >> 14))) * (LQ_I_64BIT)(Temp1)) >> 14))) * (LQ_I_64BIT)(0x0000145f)) >> 14))) + (LQ_I_64BIT)(((LQ_INT32_Q14)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0000145f))) >> 14)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q14)((LQ_I_64BIT)((0x00002000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q14)((LQ_I_64BIT)((0x00004000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q15     Dy              输入Dy距离
* @param[in] LQ_INT32_Q15     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q15_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q15_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q15 LQ_INT32_Q15_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q15 Dy, LQ_INT32_Q15 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q15 Ax;
    LQ_INT32_Q15 Ay;
    LQ_INT32_Q15 Temp1;
    LQ_INT32_Q15 Temp2;
    LQ_INT32_Q15 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00004000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00004000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q15_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 15) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q15)Tmp;
    Temp2 = ((LQ_INT32_Q15)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 15));
    Result = ((LQ_INT32_Q15)((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(((LQ_INT32_Q15)((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(((LQ_INT32_Q15)((LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(-(0x000005f3)) * (LQ_I_64BIT)(Temp2)) >> 15))) + (LQ_I_64BIT)((0x00001464))))) * (LQ_I_64BIT)(Temp2)) >> 15))) - (LQ_I_64BIT)((0x000029ef))))) * (LQ_I_64BIT)(Temp2)) >> 15))) * (LQ_I_64BIT)(Temp1)) >> 15))) * (LQ_I_64BIT)(0x000028be)) >> 15))) + (LQ_I_64BIT)(((LQ_INT32_Q15)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x000028be))) >> 15)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q15)((LQ_I_64BIT)((0x00004000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q15)((LQ_I_64BIT)((0x00008000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q16     Dy              输入Dy距离
* @param[in] LQ_INT32_Q16     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q16_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q16_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q16 LQ_INT32_Q16_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q16 Dy, LQ_INT32_Q16 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q16 Ax;
    LQ_INT32_Q16 Ay;
    LQ_INT32_Q16 Temp1;
    LQ_INT32_Q16 Temp2;
    LQ_INT32_Q16 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00008000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00008000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q16_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 16) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q16)Tmp;
    Temp2 = ((LQ_INT32_Q16)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 16));
    Result = ((LQ_INT32_Q16)((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(((LQ_INT32_Q16)((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(((LQ_INT32_Q16)((LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(-(0x00000be7)) * (LQ_I_64BIT)(Temp2)) >> 16))) + (LQ_I_64BIT)((0x000028c8))))) * (LQ_I_64BIT)(Temp2)) >> 16))) - (LQ_I_64BIT)((0x000053df))))) * (LQ_I_64BIT)(Temp2)) >> 16))) * (LQ_I_64BIT)(Temp1)) >> 16))) * (LQ_I_64BIT)(0x0000517c)) >> 16))) + (LQ_I_64BIT)(((LQ_INT32_Q16)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0000517c))) >> 16)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q16)((LQ_I_64BIT)((0x00008000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q16)((LQ_I_64BIT)((0x00010000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q17     Dy              输入Dy距离
* @param[in] LQ_INT32_Q17     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q17_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q17_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q17 LQ_INT32_Q17_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q17 Dy, LQ_INT32_Q17 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q17 Ax;
    LQ_INT32_Q17 Ay;
    LQ_INT32_Q17 Temp1;
    LQ_INT32_Q17 Temp2;
    LQ_INT32_Q17 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00010000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00010000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q17_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 17) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q17)Tmp;
    Temp2 = ((LQ_INT32_Q17)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 17));
    Result = ((LQ_INT32_Q17)((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(((LQ_INT32_Q17)((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(((LQ_INT32_Q17)((LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(-(0x000017ce)) * (LQ_I_64BIT)(Temp2)) >> 17))) + (LQ_I_64BIT)((0x00005191))))) * (LQ_I_64BIT)(Temp2)) >> 17))) - (LQ_I_64BIT)((0x0000a7be))))) * (LQ_I_64BIT)(Temp2)) >> 17))) * (LQ_I_64BIT)(Temp1)) >> 17))) * (LQ_I_64BIT)(0x0000a2f9)) >> 17))) + (LQ_I_64BIT)(((LQ_INT32_Q17)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0000a2f9))) >> 17)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q17)((LQ_I_64BIT)((0x00010000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q17)((LQ_I_64BIT)((0x00020000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q18     Dy              输入Dy距离
* @param[in] LQ_INT32_Q18     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q18_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q18_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q18 LQ_INT32_Q18_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q18 Dy, LQ_INT32_Q18 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q18 Ax;
    LQ_INT32_Q18 Ay;
    LQ_INT32_Q18 Temp1;
    LQ_INT32_Q18 Temp2;
    LQ_INT32_Q18 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00020000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00020000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q18_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 18) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q18)Tmp;
    Temp2 = ((LQ_INT32_Q18)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 18));
    Result = ((LQ_INT32_Q18)((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(((LQ_INT32_Q18)((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(((LQ_INT32_Q18)((LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(-(0x00002f9c)) * (LQ_I_64BIT)(Temp2)) >> 18))) + (LQ_I_64BIT)((0x0000a323))))) * (LQ_I_64BIT)(Temp2)) >> 18))) - (LQ_I_64BIT)((0x00014f7c))))) * (LQ_I_64BIT)(Temp2)) >> 18))) * (LQ_I_64BIT)(Temp1)) >> 18))) * (LQ_I_64BIT)(0x000145f3)) >> 18))) + (LQ_I_64BIT)(((LQ_INT32_Q18)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x000145f3))) >> 18)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q18)((LQ_I_64BIT)((0x00020000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q18)((LQ_I_64BIT)((0x00040000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q19     Dy              输入Dy距离
* @param[in] LQ_INT32_Q19     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q19_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q19_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q19 LQ_INT32_Q19_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q19 Dy, LQ_INT32_Q19 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q19 Ax;
    LQ_INT32_Q19 Ay;
    LQ_INT32_Q19 Temp1;
    LQ_INT32_Q19 Temp2;
    LQ_INT32_Q19 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00040000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00040000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q19_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 19) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q19)Tmp;
    Temp2 = ((LQ_INT32_Q19)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 19));
    Result = ((LQ_INT32_Q19)((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(((LQ_INT32_Q19)((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(((LQ_INT32_Q19)((LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(-(0x00005f39)) * (LQ_I_64BIT)(Temp2)) >> 19))) + (LQ_I_64BIT)((0x00014646))))) * (LQ_I_64BIT)(Temp2)) >> 19))) - (LQ_I_64BIT)((0x00029ef8))))) * (LQ_I_64BIT)(Temp2)) >> 19))) * (LQ_I_64BIT)(Temp1)) >> 19))) * (LQ_I_64BIT)(0x00028be6)) >> 19))) + (LQ_I_64BIT)(((LQ_INT32_Q19)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00028be6))) >> 19)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q19)((LQ_I_64BIT)((0x00040000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q19)((LQ_I_64BIT)((0x00080000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q20     Dy              输入Dy距离
* @param[in] LQ_INT32_Q20     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q20_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q20_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q20 LQ_INT32_Q20_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q20 Dy, LQ_INT32_Q20 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q20 Ax;
    LQ_INT32_Q20 Ay;
    LQ_INT32_Q20 Temp1;
    LQ_INT32_Q20 Temp2;
    LQ_INT32_Q20 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00080000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00080000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q20_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 20) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q20)Tmp;
    Temp2 = ((LQ_INT32_Q20)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 20));
    Result = ((LQ_INT32_Q20)((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(((LQ_INT32_Q20)((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(((LQ_INT32_Q20)((LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(-(0x0000be73)) * (LQ_I_64BIT)(Temp2)) >> 20))) + (LQ_I_64BIT)((0x00028c8d))))) * (LQ_I_64BIT)(Temp2)) >> 20))) - (LQ_I_64BIT)((0x00053df1))))) * (LQ_I_64BIT)(Temp2)) >> 20))) * (LQ_I_64BIT)(Temp1)) >> 20))) * (LQ_I_64BIT)(0x000517cc)) >> 20))) + (LQ_I_64BIT)(((LQ_INT32_Q20)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x000517cc))) >> 20)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q20)((LQ_I_64BIT)((0x00080000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q20)((LQ_I_64BIT)((0x00100000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q21     Dy              输入Dy距离
* @param[in] LQ_INT32_Q21     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q21_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q21_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q21 LQ_INT32_Q21_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q21 Dy, LQ_INT32_Q21 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q21 Ax;
    LQ_INT32_Q21 Ay;
    LQ_INT32_Q21 Temp1;
    LQ_INT32_Q21 Temp2;
    LQ_INT32_Q21 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00100000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00100000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q21_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 21) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q21)Tmp;
    Temp2 = ((LQ_INT32_Q21)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 21));
    Result = ((LQ_INT32_Q21)((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(((LQ_INT32_Q21)((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(((LQ_INT32_Q21)((LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(-(0x00017ce6)) * (LQ_I_64BIT)(Temp2)) >> 21))) + (LQ_I_64BIT)((0x0005191a))))) * (LQ_I_64BIT)(Temp2)) >> 21))) - (LQ_I_64BIT)((0x000a7be2))))) * (LQ_I_64BIT)(Temp2)) >> 21))) * (LQ_I_64BIT)(Temp1)) >> 21))) * (LQ_I_64BIT)(0x000a2f98)) >> 21))) + (LQ_I_64BIT)(((LQ_INT32_Q21)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x000a2f98))) >> 21)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q21)((LQ_I_64BIT)((0x00100000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q21)((LQ_I_64BIT)((0x00200000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q22     Dy              输入Dy距离
* @param[in] LQ_INT32_Q22     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q22_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q22_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q22 LQ_INT32_Q22_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q22 Dy, LQ_INT32_Q22 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q22 Ax;
    LQ_INT32_Q22 Ay;
    LQ_INT32_Q22 Temp1;
    LQ_INT32_Q22 Temp2;
    LQ_INT32_Q22 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00200000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00200000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q22_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 22) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q22)Tmp;
    Temp2 = ((LQ_INT32_Q22)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 22));
    Result = ((LQ_INT32_Q22)((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(((LQ_INT32_Q22)((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(((LQ_INT32_Q22)((LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(-(0x0002f9cc)) * (LQ_I_64BIT)(Temp2)) >> 22))) + (LQ_I_64BIT)((0x000a3234))))) * (LQ_I_64BIT)(Temp2)) >> 22))) - (LQ_I_64BIT)((0x0014f7c5))))) * (LQ_I_64BIT)(Temp2)) >> 22))) * (LQ_I_64BIT)(Temp1)) >> 22))) * (LQ_I_64BIT)(0x00145f30)) >> 22))) + (LQ_I_64BIT)(((LQ_INT32_Q22)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00145f30))) >> 22)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q22)((LQ_I_64BIT)((0x00200000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q22)((LQ_I_64BIT)((0x00400000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q23     Dy              输入Dy距离
* @param[in] LQ_INT32_Q23     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q23_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q23_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q23 LQ_INT32_Q23_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q23 Dy, LQ_INT32_Q23 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q23 Ax;
    LQ_INT32_Q23 Ay;
    LQ_INT32_Q23 Temp1;
    LQ_INT32_Q23 Temp2;
    LQ_INT32_Q23 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00400000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00400000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q23_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 23) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q23)Tmp;
    Temp2 = ((LQ_INT32_Q23)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 23));
    Result = ((LQ_INT32_Q23)((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(((LQ_INT32_Q23)((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(((LQ_INT32_Q23)((LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(-(0x0005f398)) * (LQ_I_64BIT)(Temp2)) >> 23))) + (LQ_I_64BIT)((0x00146468))))) * (LQ_I_64BIT)(Temp2)) >> 23))) - (LQ_I_64BIT)((0x0029ef8b))))) * (LQ_I_64BIT)(Temp2)) >> 23))) * (LQ_I_64BIT)(Temp1)) >> 23))) * (LQ_I_64BIT)(0x0028be60)) >> 23))) + (LQ_I_64BIT)(((LQ_INT32_Q23)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0028be60))) >> 23)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q23)((LQ_I_64BIT)((0x00400000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q23)((LQ_I_64BIT)((0x00800000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q24     Dy              输入Dy距离
* @param[in] LQ_INT32_Q24     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q24_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q24_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q24 LQ_INT32_Q24_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q24 Dy, LQ_INT32_Q24 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q24 Ax;
    LQ_INT32_Q24 Ay;
    LQ_INT32_Q24 Temp1;
    LQ_INT32_Q24 Temp2;
    LQ_INT32_Q24 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x00800000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x00800000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q24_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 24) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q24)Tmp;
    Temp2 = ((LQ_INT32_Q24)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 24));
    Result = ((LQ_INT32_Q24)((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(((LQ_INT32_Q24)((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(((LQ_INT32_Q24)((LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(-(0x000be731)) * (LQ_I_64BIT)(Temp2)) >> 24))) + (LQ_I_64BIT)((0x0028c8d1))))) * (LQ_I_64BIT)(Temp2)) >> 24))) - (LQ_I_64BIT)((0x0053df16))))) * (LQ_I_64BIT)(Temp2)) >> 24))) * (LQ_I_64BIT)(Temp1)) >> 24))) * (LQ_I_64BIT)(0x00517cc1)) >> 24))) + (LQ_I_64BIT)(((LQ_INT32_Q24)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00517cc1))) >> 24)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q24)((LQ_I_64BIT)((0x00800000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q24)((LQ_I_64BIT)((0x01000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q25     Dy              输入Dy距离
* @param[in] LQ_INT32_Q25     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q25_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q25_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q25 LQ_INT32_Q25_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q25 Dy, LQ_INT32_Q25 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q25 Ax;
    LQ_INT32_Q25 Ay;
    LQ_INT32_Q25 Temp1;
    LQ_INT32_Q25 Temp2;
    LQ_INT32_Q25 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x01000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x01000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q25_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 25) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q25)Tmp;
    Temp2 = ((LQ_INT32_Q25)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 25));
    Result = ((LQ_INT32_Q25)((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(((LQ_INT32_Q25)((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(((LQ_INT32_Q25)((LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(-(0x0017ce62)) * (LQ_I_64BIT)(Temp2)) >> 25))) + (LQ_I_64BIT)((0x005191a2))))) * (LQ_I_64BIT)(Temp2)) >> 25))) - (LQ_I_64BIT)((0x00a7be2c))))) * (LQ_I_64BIT)(Temp2)) >> 25))) * (LQ_I_64BIT)(Temp1)) >> 25))) * (LQ_I_64BIT)(0x00a2f983)) >> 25))) + (LQ_I_64BIT)(((LQ_INT32_Q25)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x00a2f983))) >> 25)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q25)((LQ_I_64BIT)((0x01000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q25)((LQ_I_64BIT)((0x02000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q26     Dy              输入Dy距离
* @param[in] LQ_INT32_Q26     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q26_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q26_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q26 LQ_INT32_Q26_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q26 Dy, LQ_INT32_Q26 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q26 Ax;
    LQ_INT32_Q26 Ay;
    LQ_INT32_Q26 Temp1;
    LQ_INT32_Q26 Temp2;
    LQ_INT32_Q26 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x02000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x02000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q26_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 26) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q26)Tmp;
    Temp2 = ((LQ_INT32_Q26)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 26));
    Result = ((LQ_INT32_Q26)((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(((LQ_INT32_Q26)((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(((LQ_INT32_Q26)((LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(-(0x002f9cc5)) * (LQ_I_64BIT)(Temp2)) >> 26))) + (LQ_I_64BIT)((0x00a32344))))) * (LQ_I_64BIT)(Temp2)) >> 26))) - (LQ_I_64BIT)((0x014f7c58))))) * (LQ_I_64BIT)(Temp2)) >> 26))) * (LQ_I_64BIT)(Temp1)) >> 26))) * (LQ_I_64BIT)(0x0145f306)) >> 26))) + (LQ_I_64BIT)(((LQ_INT32_Q26)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0145f306))) >> 26)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q26)((LQ_I_64BIT)((0x02000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q26)((LQ_I_64BIT)((0x04000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q27     Dy              输入Dy距离
* @param[in] LQ_INT32_Q27     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q27_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q27_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q27 LQ_INT32_Q27_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q27 Dy, LQ_INT32_Q27 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q27 Ax;
    LQ_INT32_Q27 Ay;
    LQ_INT32_Q27 Temp1;
    LQ_INT32_Q27 Temp2;
    LQ_INT32_Q27 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x04000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x04000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q27_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 27) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q27)Tmp;
    Temp2 = ((LQ_INT32_Q27)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 27));
    Result = ((LQ_INT32_Q27)((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(((LQ_INT32_Q27)((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(((LQ_INT32_Q27)((LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(-(0x005f398b)) * (LQ_I_64BIT)(Temp2)) >> 27))) + (LQ_I_64BIT)((0x01464688))))) * (LQ_I_64BIT)(Temp2)) >> 27))) - (LQ_I_64BIT)((0x029ef8b0))))) * (LQ_I_64BIT)(Temp2)) >> 27))) * (LQ_I_64BIT)(Temp1)) >> 27))) * (LQ_I_64BIT)(0x028be60c)) >> 27))) + (LQ_I_64BIT)(((LQ_INT32_Q27)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x028be60c))) >> 27)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q27)((LQ_I_64BIT)((0x04000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q27)((LQ_I_64BIT)((0x08000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q28     Dy              输入Dy距离
* @param[in] LQ_INT32_Q28     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q28_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q28_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q28 LQ_INT32_Q28_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q28 Dy, LQ_INT32_Q28 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q28 Ax;
    LQ_INT32_Q28 Ay;
    LQ_INT32_Q28 Temp1;
    LQ_INT32_Q28 Temp2;
    LQ_INT32_Q28 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x08000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x08000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q28_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 28) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q28)Tmp;
    Temp2 = ((LQ_INT32_Q28)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 28));
    Result = ((LQ_INT32_Q28)((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(((LQ_INT32_Q28)((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(((LQ_INT32_Q28)((LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(-(0x00be7316)) * (LQ_I_64BIT)(Temp2)) >> 28))) + (LQ_I_64BIT)((0x028c8d10))))) * (LQ_I_64BIT)(Temp2)) >> 28))) - (LQ_I_64BIT)((0x053df160))))) * (LQ_I_64BIT)(Temp2)) >> 28))) * (LQ_I_64BIT)(Temp1)) >> 28))) * (LQ_I_64BIT)(0x0517cc18)) >> 28))) + (LQ_I_64BIT)(((LQ_INT32_Q28)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0517cc18))) >> 28)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q28)((LQ_I_64BIT)((0x08000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q28)((LQ_I_64BIT)((0x10000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q29     Dy              输入Dy距离
* @param[in] LQ_INT32_Q29     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q29_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q29_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q29 LQ_INT32_Q29_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q29 Dy, LQ_INT32_Q29 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q29 Ax;
    LQ_INT32_Q29 Ay;
    LQ_INT32_Q29 Temp1;
    LQ_INT32_Q29 Temp2;
    LQ_INT32_Q29 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x10000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x10000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q29_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 29) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q29)Tmp;
    Temp2 = ((LQ_INT32_Q29)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 29));
    Result = ((LQ_INT32_Q29)((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(((LQ_INT32_Q29)((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(((LQ_INT32_Q29)((LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(-(0x017ce62c)) * (LQ_I_64BIT)(Temp2)) >> 29))) + (LQ_I_64BIT)((0x05191a20))))) * (LQ_I_64BIT)(Temp2)) >> 29))) - (LQ_I_64BIT)((0x0a7be2c0))))) * (LQ_I_64BIT)(Temp2)) >> 29))) * (LQ_I_64BIT)(Temp1)) >> 29))) * (LQ_I_64BIT)(0x0a2f9830)) >> 29))) + (LQ_I_64BIT)(((LQ_INT32_Q29)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x0a2f9830))) >> 29)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q29)((LQ_I_64BIT)((0x10000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q29)((LQ_I_64BIT)((0x20000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q30     Dy              输入Dy距离
* @param[in] LQ_INT32_Q30     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q30_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q30_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q30 LQ_INT32_Q30_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q30 Dy, LQ_INT32_Q30 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q30 Ax;
    LQ_INT32_Q30 Ay;
    LQ_INT32_Q30 Temp1;
    LQ_INT32_Q30 Temp2;
    LQ_INT32_Q30 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x20000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x20000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q30_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 30) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q30)Tmp;
    Temp2 = ((LQ_INT32_Q30)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 30));
    Result = ((LQ_INT32_Q30)((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(((LQ_INT32_Q30)((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(((LQ_INT32_Q30)((LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(-(0x02f9cc58)) * (LQ_I_64BIT)(Temp2)) >> 30))) + (LQ_I_64BIT)((0x0a323440))))) * (LQ_I_64BIT)(Temp2)) >> 30))) - (LQ_I_64BIT)((0x14f7c580))))) * (LQ_I_64BIT)(Temp2)) >> 30))) * (LQ_I_64BIT)(Temp1)) >> 30))) * (LQ_I_64BIT)(0x145f3060)) >> 30))) + (LQ_I_64BIT)(((LQ_INT32_Q30)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x145f3060))) >> 30)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q30)((LQ_I_64BIT)((0x20000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q30)((LQ_I_64BIT)((0x40000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}
/**@brief arctan2近似曲线法
* @details 采用近似曲线来求解arctan2
* @param[in] LQ_INT32_Q31     Dy              输入Dy距离
* @param[in] LQ_INT32_Q31     Dx              输入Dx距离
* @param[in] LQ_ERROR*      Lq_Error       错误变量
* @return    arctan2(Dy,Dx)
* @exception NSExceptio: INT32_Q31_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO 输入数据全部都是零
* @par       计算arctan2(Dx,Dy)的值
* @code
*    LQ_INT32_Q31_ARCTAN2_PU_APPROXIMATE_CURVE(Dy,Dx,&Lq_Error);
* @attention   用户权限:用户可调用
*              用户更改权限:用户无需更改
* */
LQ_INT32_Q31 LQ_INT32_Q31_ARCTAN2_PU_APPROXIMATE_CURVE(LQ_INT32_Q31 Dy, LQ_INT32_Q31 Dx, LQ_ERROR* Lq_Error)
{
    LQ_INT32_Q31 Ax;
    LQ_INT32_Q31 Ay;
    LQ_INT32_Q31 Temp1;
    LQ_INT32_Q31 Temp2;
    LQ_INT32_Q31 Result;
    LQ_I_64BIT Tmp = 0;
    if ((Dy > 0) && (Dx == 0))
    {
        return (0x40000000);
    }
    if ((Dy < 0) && (Dx == 0))
    {
        return (-(0x40000000));
    }
    if ((Dy == 0) && (Dx == 0))
    {
        (*Lq_Error) = INT32_Q31_ARCTAN2_PU_APPROXIMATE_CURVE_INPUT_VALUE_ZERO;
        return 0;
    }
    Ay = ((Dy) > 0 ? (Dy) : -(Dy));
    Ax = ((Dx) > 0 ? (Dx) : -(Dx));
    Tmp = ((((LQ_I_64BIT)((((Ax) < (Ay)) ? (Ax) : (Ay))) << 31) / (LQ_I_64BIT)((((Ax) > (Ay)) ? (Ax) : (Ay)))));
    Temp1 = (LQ_INT32_Q31)Tmp;
    Temp2 = ((LQ_INT32_Q31)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)(Temp1)) >> 31));
    Result = ((LQ_INT32_Q31)((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(((LQ_INT32_Q31)((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(((LQ_INT32_Q31)((LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(-(0x05f398b0)) * (LQ_I_64BIT)(Temp2)) >> 31))) + (LQ_I_64BIT)((0x14646880))))) * (LQ_I_64BIT)(Temp2)) >> 31))) - (LQ_I_64BIT)((0x29ef8b00))))) * (LQ_I_64BIT)(Temp2)) >> 31))) * (LQ_I_64BIT)(Temp1)) >> 31))) * (LQ_I_64BIT)(0x28be60c0)) >> 31))) + (LQ_I_64BIT)(((LQ_INT32_Q31)(((LQ_I_64BIT)(Temp1) * (LQ_I_64BIT)((0x28be60c0))) >> 31)))));
    if ((Ay > Ax))
    {
        Result = ((LQ_INT32_Q31)((LQ_I_64BIT)((0x40000000)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dx < 0))
    {
        Result = ((LQ_INT32_Q31)((LQ_I_64BIT)((0x7fffffff)) - (LQ_I_64BIT)(Result)));
    }
    if ((Dy < 0))
    {
        Result = -Result;
    }
    return Result;
}

#endif


