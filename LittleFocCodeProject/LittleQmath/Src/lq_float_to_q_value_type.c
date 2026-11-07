#include "lq_error.h"
#include "lq_mode.h"
#include "lq_type.h"
#include "lq_float_to_q_value_type.h"

#if LQ_FLOAT_TO_Q_VALUE_TYPE_LOADING_MODE == 0



int LQ_UINT32_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= 0.0f) && A <= 0.999999999767169f)
    {
        return  32;
    }
    else if ((A >= 0.0f) && (A <= 1.99999999953434f))
    {
        return 31;
    }
    else if ((A >= 0.0f) && (A <= 3.99999999906868f))
    {
        return 30;
    }
    else if ((A >= 0.0f) && (A <= 7.99999999813735f))
    {
        return 29;
    }
    else if ((A >= 0.0f) && (A <= 15.9999999962747f))
    {
        return 28;
    }
    else if ((A >= 0.0f) && (A <= 31.9999999925494f))
    {
        return 27;
    }
    else if ((A >= 0.0f) && (A <= 63.9999999850988f))
    {
        return 26;
    }
    else if ((A >= 0.0f) && (A <= 127.999999970197f))
    {
        return 25;
    }
    else if ((A >= 0.0f) && (A <= 255.999999940394f))
    {
        return 24;
    }
    else if ((A >= 0.0f) && (A <= 511.999999880791f))
    {
        return 23;
    }
    else if ((A >= 0.0f) && (A <= 1023.99999976158f))
    {
        return 22;
    }
    else if ((A >= 0.0f) && (A <= 2047.99999952316f))
    {
        return 21;
    }
    else if ((A >= 0.0f) && (A <= 4095.99999904632f))
    {
        return 20;
    }
    else if ((A >= 0.0f) && (A <= 8191.99999809265f))
    {
        return 19;
    }
    else if ((A >= 0.0f) && (A <= 16383.9999961853f))
    {
        return 18;
    }
    else if ((A >= 0.0f) && (A <= 32767.9999923706f))
    {
        return 17;
    }
    else if ((A >= 0.0f) && (A <= 65535.9999847412f))
    {
        return 16;
    }
    else if ((A >= 0.0f) && (A <= 131071.999969482f))
    {
        return 15;
    }
    else if ((A >= 0.0f) && (A <= 262143.999938964f))
    {
        return 14;
    }
    else if ((A >= 0.0f) && (A <= 524287.999877928f))
    {
        return 13;
    }
    else if ((A >= 0.0f) && (A <= 1048575.99975585f))
    {
        return 12;
    }
    else if ((A >= 0.0f) && (A <= 2097151.9995117f))
    {
        return 11;
    }
    else if ((A >= 0.0f) && (A <= 4194303.9990234f))
    {
        return 10;
    }
    else if ((A >= 0.0f) && (A <= 8388607.9980469f))
    {
        return 9;
    }
    else if ((A >= 0.0f) && (A <= 16777215.9960938f))
    {
        return 8;
    }
    else if ((A >= 0.0f) && (A <= 33554431.9921875f))
    {
        return 7;
    }
    else if ((A >= 0.0f) && (A <= 67108863.984375f))
    {
        return 6;
    }
    else if ((A >= 0.0f) && (A <= 134217727.96875f))
    {
        return 5;
    }
    else if ((A >= 0.0f) && (A <= 268435455.9375f))
    {
        return 4;
    }
    else if ((A >= 0.0f) && (A <= 536870911.875f))
    {
        return 3;
    }
    else if ((A >= 0.0f) && (A <= 1073741823.75f))
    {
        return 2;
    }
    else if ((A >= 0.0f) && (A <= 2147483647.5f))
    {
        return 1;
    }
    return 0;
}
int LQ_INT32_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= -1.0f) && (A <= 0.999999999534339f))
    {
        return  31;
    }
    else if ((A >= -2.0f) && (A <= 1.99999999953434f))
    {
        return 30;
    }
    else if ((A >= -4.0f) && (A <= 3.99999999906868f))
    {
        return 29;
    }
    else if ((A >= -8.0f) && (A <= 7.99999999813735f))
    {
        return 28;
    }
    else if ((A >= -16.0f) && (A <= 15.9999999962747f))
    {
        return 27;
    }
    else if ((A >= -32.0f) && (A <= 31.9999999925494f))
    {
        return 26;
    }
    else if ((A >= -64.0f) && (A <= 63.9999999850988f))
    {
        return 25;
    }
    else if ((A >= -128.0f) && (A <= 127.999999970197f))
    {
        return 24;
    }
    else if ((A >= -256.0f) && (A <= 255.999999940394f))
    {
        return 23;
    }
    else if ((A >= -512.0f) && (A <= 511.999999880791f))
    {
        return 22;
    }
    else if ((A >= -1024.0f) && (A <= 1023.99999976158f))
    {
        return 21;
    }
    else if ((A >= -2048.0f) && (A <= 2047.99999952316f))
    {
        return 20;
    }
    else if ((A >= -4096.0f) && (A <= 4095.99999904632f))
    {
        return 19;
    }
    else if ((A >= -8192.0f) && (A <= 8191.99999809265f))
    {
        return 18;
    }
    else if ((A >= -16384.0f) && (A <= 16383.9999961853f))
    {
        return 17;
    }
    else if ((A >= -32768.0f) && (A <= 32767.9999923706f))
    {
        return 16;
    }
    else if ((A >= -65536.0f) && (A <= 65535.9999847412f))
    {
        return 15;
    }
    else if ((A >= -131072.0f) && (A <= 131071.999969482f))
    {
        return 14;
    }
    else if ((A >= -262144.0f) && (A <= 262143.999938964f))
    {
        return 13;
    }
    else if ((A >= -524288.0f) && (A <= 524287.999877928f))
    {
        return 12;
    }
    else if ((A >= -1048576.0f) && (A <= 1048575.99975585f))
    {
        return 11;
    }
    else if ((A >= -2097152.0f) && (A <= 2097151.9995117f))
    {
        return 10;
    }
    else if ((A >= -4194304.0f) && (A <= 4194303.9990234f))
    {
        return 9;
    }
    else if ((A >= -8388608.0f) && (A <= 8388607.9980469f))
    {
        return 8;
    }
    else if ((A >= -16777216.0f) && (A <= 16777215.9960938f))
    {
        return 7;
    }
    else if ((A >= -33554432.0f) && (A <= 33554431.9921875f))
    {
        return 6;
    }
    else if ((A >= -67108864.0f) && (A <= 67108863.984375f))
    {
        return 5;
    }
    else if ((A >= -134217728.0f) && (A <= 134217727.96875f))
    {
        return 4;
    }
    else if ((A >= -268435456.0f) && (A <= 268435455.9375f))
    {
        return 3;
    }
    else if ((A >= -536870912.0f) && (A <= 536870911.875f))
    {
        return 2;
    }
    else if ((A >= -1073741824.0f) && (A <= 1073741823.75f))
    {
        return 1;
    }
    return 0;
}
int LQ_UINT16_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= 0.0f) && (A <= 0.999984741210937f))
    {
        return 16;
    }
    else if ((A >= 0.0f) && (A <= 1.99996948242188f))
    {
        return 15;
    }
    else if ((A >= 0.0f) && (A <= 3.99993896484375f))
    {
        return 14;
    }
    else if ((A >= 0.0f) && (A <= 7.9998779296875f))
    {
        return 13;
    }
    else if ((A >= 0.0f) && (A <= 15.999755859375f))
    {
        return 12;
    }
    else if ((A >= 0.0f) && (A <= 31.99951171875f))
    {
        return 11;
    }
    else if ((A >= 0.0f) && (A <= 63.9990234375f))
    {
        return 10;
    }
    else if ((A >= 0.0f) && (A <= 127.998046875f))
    {
        return 9;
    }
    else if ((A >= 0.0f) && (A <= 255.99609375f))
    {
        return 8;
    }
    else if ((A >= 0.0f) && (A <= 511.9921875f))
    {
        return 7;
    }
    else if ((A >= 0.0f) && (A <= 1023.984375f))
    {
        return 6;
    }
    else if ((A >= 0.0f) && (A <= 2047.96875f))
    {
        return 5;
    }
    else if ((A >= 0.0f) && (A <= 4095.9375f))
    {
        return 4;
    }
    else if ((A >= 0.0f) && (A <= 8191.875f))
    {
        return 3;
    }
    else if ((A >= 0.0f) && (A <= 16383.75f))
    {
        return 2;
    }
    else if ((A >= 0.0f) && (A <= 32767.5f))
    {
        return 1;
    }
    return 0;
}
int LQ_INT16_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= -1.0f) && (A <= 0.999984741210937f))
    {
        return 15;
    }
    else if ((A >= -2.0f) && (A <= 1.99996948242188f))
    {
        return 14;
    }
    else if ((A >= -4.0f) && (A <= 3.99993896484375f))
    {
        return 13;
    }
    else if ((A >= -8.0f) && (A <= 7.9998779296875f))
    {
        return 12;
    }
    else if ((A >= -16.0f) && (A <= 15.999755859375f))
    {
        return 11;
    }
    else if ((A >= -32.0f) && (A <= 31.99951171875f))
    {
        return 10;
    }
    else if ((A >= -64.0f) && (A <= 63.9990234375f))
    {
        return 9;
    }
    else if ((A >= -128.0f) && (A <= 127.998046875f))
    {
        return 8;
    }
    else if ((A >= -256.0f) && (A <= 255.99609375f))
    {
        return 7;
    }
    else if ((A >= -512.0f) && (A <= 511.9921875f))
    {
        return 6;

    }
    else if ((A >= -1024.0) && (A <= 1023.984375f))
    {
        return 5;
    }
    else if ((A >= -2048.0f) && (A <= 2047.96875f))
    {
        return 4;
    }
    else if ((A >= -4096.0f) && (A <= 4095.9375f))
    {
        return 3;
    }
    else if ((A >= -8192.0f) && (A <= 8191.75f))
    {
        return 2;
    }
    else if ((A >= -16384.0f) && (A <= 16383.5f))
    {
        return 1;
    }
    return 0;
}
int LQ_UINT8_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= 0.0f) && (A <= 0.99609375f))
    {
        return 8;
    }
    else if ((A >= 0.0f) && (A <= 1.9921875f))
    {
        return 7;
    }
    else if ((A >= 0.0f) && (A <= 3.984375f))
    {
        return 6;
    }
    else if ((A >= 0.0f) && (A <= 7.96875f))
    {
        return 5;
    }
    else if ((A >= 0.0f) && (A <= 15.9375f))
    {
        return 4;
    }
    else if ((A >= 0.0f) && (A <= 31.875f))
    {
        return 3;
    }
    else if ((A >= 0.0f) && (A <= 63.75f))
    {
        return 2;
    }
    else if ((A >= 0.0f) && (A <= 127.5f))
    {
        return 1;
    }
    return 0;
}
int LQ_INT8_Q_FLOAT_TO_Q_VALUE_TYPE(LQ_F_32BIT A)
{
    if ((A >= -1.0f) && (A <= 0.99609375f))
    {
        return 7;
    }
    else if ((A >= -2.0f) && (A <= 1.9921875f))
    {
        return 6;
    }
    else if ((A >= -4.0f) && (A <= 3.984375f))
    {
        return 5;
    }
    else if ((A >= -8.0f) && (A <= 7.96875f))
    {
        return 4;
    }
    else if ((A >= -16.0f) && (A <= 15.9375f))
    {
        return 3;
    }
    else if ((A >= -32.0f) && (A <= 31.875f))
    {
        return 2;
    }
    else if ((A >= -64.0f) && (A <= 63.75f))
    {
        return 1;
    }
    return 0;
}

#endif
