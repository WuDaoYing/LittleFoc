#include "lfoc_log.h"
#include "lfoc_malloc_port.h"
#include <stdio.h>
#include <string.h>

/******************************************************************************
 * 环形缓冲区内部变量（静态隔离，对外不可见）
 ******************************************************************************/
static LFOC_LOG_ENTRY Lfoc_Log_Buff[LOG_BUFF_DEPTH];
static LFOC_UI_FAULT_COUNT Lfoc_Log_Write_Idx = 0;  //压入写指针
static LFOC_UI_FAULT_COUNT Lfoc_Log_Read_Idx  = 0;  //输出读指针
static LFOC_UI_FAULT_COUNT Lfoc_Log_Count     = 0;  //待输出日志总数

/******************************************************************************
 * 内部通用：压入一条日志到环形缓冲区
 ******************************************************************************/
static void Lfoc_Log_Buff_Push(LOG_LOG_TYPE LogType__Type,
                               LFOC_UI_FAULT_CODE FaultCode__Main_Code,
                               LFOC_UI_FAULT_CODE FaultCode__Sub_Code,
                               LFOC_UI_FAULT_CODE FaultCode__Child_Code)
{
    Lfoc_Log_Buff[Lfoc_Log_Write_Idx].LogType__Type         = LogType__Type;
    Lfoc_Log_Buff[Lfoc_Log_Write_Idx].FaultCode__Main_Code  = FaultCode__Main_Code;
    Lfoc_Log_Buff[Lfoc_Log_Write_Idx].FaultCode__Sub_Code   = FaultCode__Sub_Code;
    Lfoc_Log_Buff[Lfoc_Log_Write_Idx].FaultCode__Child_Code = FaultCode__Child_Code;

    Lfoc_Log_Write_Idx = (Lfoc_Log_Write_Idx + 1) % LOG_BUFF_DEPTH;

    // 缓冲区未满则计数+1；满则覆盖最早日志，读指针后移
    if (Lfoc_Log_Count < LOG_BUFF_DEPTH)
    {
        Lfoc_Log_Count++;
    }
    else
    {
        Lfoc_Log_Read_Idx = (Lfoc_Log_Read_Idx + 1) % LOG_BUFF_DEPTH;
    }
}

/******************************************************************************
 * 三级码表结构定义（仅文本输出模式使用）
 ******************************************************************************/
#if LFOC_LOG_PRINTF_MODE == LOG_BUILT_IN_TEXT_PRINTF
/* 层级结构：
 * 子码表 → 字符串数组
 * 附码表 → {附码文本, 子码表指针, 子码数量}
 * 主码表 → {主码文本, 附码表指针, 附码数量}
 */
typedef struct {
    const LFOC_FAULT_CODE_STR*   text;
    const LFOC_FAULT_CODE_STR**  child_table;
    LFOC_UI_FAULT_COUNT          child_num;
} LFOC_LOG_SUB_ENTRY;

typedef struct {
    const LFOC_FAULT_CODE_STR* text;
    const LFOC_LOG_SUB_ENTRY*  sub_table;
    LFOC_UI_FAULT_COUNT        sub_num;
} LFOC_LOG_MAIN_ENTRY;

/******************************************************************************
 * 第一层级：子码文本表（独立定义，清晰可维护）
 ******************************************************************************/
/* ---------- 故障类子码表 ---------- */
// 主码0-lfoc_benchmark相关文件 / 附码0-LFOC_BENCHMARK指针
static const LFOC_FAULT_CODE_STR* Fault_M0_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码0-lfoc_benchmark相关文件 / 附码1-Lfoc_Benchmark_Config_Write函数
static const LFOC_FAULT_CODE_STR* Fault_M0_S1_Child[] = {
    "[校验]输入额定功率错误",
    "[校验]输入总线电压错误",
    "[校验]输入ADC电压系数错误",
    "[校验]输入ADC电流系数错误",
    "[校验]输入额定转速错误",
    "[校验]输入极对数错误",
    "[校验]ADC电压位数错误",
    "[校验]ADC电流位数错误"
};

// 主码0-lfoc_benchmark相关文件 / 附码2-Lfoc_Benchmark_Check函数
static const LFOC_FAULT_CODE_STR* Fault_M0_S2_Child[] = {
    "[校验]配置出错导致校验失败"
};

// 主码0-lfoc_benchmark相关文件 / 附码3-Lfoc_Benchmark_Update函数
static const LFOC_FAULT_CODE_STR* Fault_M0_S3_Child[] = {
    "[校验]没有生效的历史基准，且新参数未能完成配置校验和总校验",
    "[校验]没有生效的历史基准，且新参数完成配置校验，但未能通过总校验",
    "[校验]有生效的历史基准，新参数未能通过校验",
    "[校验]有生效的历史基准，新参数通过校验但未能通过总校验"
};

// 主码0-lfoc_benchmark相关文件 / 附码4-Lfoc_Benchmark函数
static const LFOC_FAULT_CODE_STR* Fault_M0_S4_Child[] = {
    "[浮点运算]电压基准浮点运算错误",
    "[浮点运算]电压基准正无穷大错误",
    "[浮点运算]电压基准负无穷大错误",
    "[浮点运算]电压基准非数错误",
    "[浮点运算]频率基准浮点运算错误",
    "[浮点运算]频率基准正无穷大错误",
    "[浮点运算]频率基准负无穷大错误",
    "[浮点运算]频率基准非数错误",
    "[浮点运算]电流基准浮点运算错误",
    "[浮点运算]电流基准正无穷大错误",
    "[浮点运算]电流基准负无穷大错误",
    "[浮点运算]电流基准非数错误",
    "[浮点运算]电阻基准浮点运算错误",
    "[浮点运算]电阻基准正无穷大错误",
    "[浮点运算]电阻基准负无穷大错误",
    "[浮点运算]电阻基准非数错误",
    "[浮点运算]弧度制电角频率基准浮点运算错误",
    "[浮点运算]弧度制电角频率基准正无穷大错误",
    "[浮点运算]弧度制电角频率基准负无穷大错误",
    "[浮点运算]弧度制电角频率基准非数错误",
    "[浮点运算]感抗基准浮点运算错误",
    "[浮点运算]感抗基准正无穷大错误",
    "[浮点运算]感抗基准负无穷大错误",
    "[浮点运算]感抗基准非数错误",
    "[浮点运算]电容基准浮点运算错误",
    "[浮点运算]电容基准正无穷大错误",
    "[浮点运算]电容基准负无穷大错误",
    "[浮点运算]电容基准非数错误",
    "[浮点运算]弧度制机械角频率基准浮点运算错误",
    "[浮点运算]弧度制机械角频率基准正无穷大错误",
    "[浮点运算]弧度制机械角频率基准负无穷大错误",
    "[浮点运算]弧度制机械角频率基准非数错误",
    "[浮点运算]RPM基准浮点运算错误",
    "[浮点运算]RPM基准正无穷大错误",
    "[浮点运算]RPM基准负无穷大错误",
    "[浮点运算]RPM基准非数错误",
    "[浮点运算]扭矩基准浮点运算错误",
    "[浮点运算]扭矩基准正无穷大错误",
    "[浮点运算]扭矩基准负无穷大错误",
    "[浮点运算]扭矩基准非数错误",
    "[浮点运算]磁链基准浮点运算错误",
    "[浮点运算]磁链基准正无穷大错误",
    "[浮点运算]磁链基准负无穷大错误",
    "[浮点运算]磁链基准非数错误",
    "[浮点运算]转动惯量基准浮点运算错误",
    "[浮点运算]转动惯量基准正无穷大错误",
    "[浮点运算]转动惯量基准负无穷大错误",
    "[浮点运算]转动惯量基准非数错误",
    "[浮点运算]使用电流ADC位数计算最大电流浮点运算错误",
    "[浮点运算]使用电流ADC位数计算最大电流正无穷大错误",
    "[浮点运算]使用电流ADC位数计算最大电流负无穷大错误",
    "[浮点运算]使用电流ADC位数计算最大电流非数错误",
    "[浮点运算]电流量化系数浮点运算错误",
    "[浮点运算]电流量化系数正无穷大错误",
    "[浮点运算]电流量化系数负无穷大错误",
    "[浮点运算]电流量化系数非数错误",
    "[浮点运算]使用电压ADC位数计算最大电压浮点运算错误",
    "[浮点运算]使用电压ADC位数计算最大电压正无穷大错误",
    "[浮点运算]使用电压ADC位数计算最大电压负无穷大错误",
    "[浮点运算]使用电压ADC位数计算最大电压非数错误",
    "[浮点运算]电压量化系数浮点运算错误",
    "[浮点运算]电压量化系数正无穷大错误",
    "[浮点运算]电压量化系数负无穷大错误",
    "[浮点运算]电压量化系数非数错误",
    "[校验]四重校验未通过导致基准值无法计算"
};

// 主码1-lfoc_standardization相关文件 / 附码0-LFOC_SATURATION_STANDARDIZATION_DATA_1指针
static const LFOC_FAULT_CODE_STR* Fault_M1_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码1-lfoc_standardization相关文件 / 附码1-Lfoc_Saturation_Standardization_Data_1函数
static const LFOC_FAULT_CODE_STR* Fault_M1_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误",
    "[定点运算]数据1标幺转换核心运算错误",
    "[定点运算]数据1标幺转换定点正向溢出错误",
    "[定点运算]数据1标幺转换定点负向溢出错误"
};

// 主码2-lfoc_standardization相关文件 / 附码0-LFOC_SATURATION_STANDARDIZATION_DATA_2指针
static const LFOC_FAULT_CODE_STR* Fault_M2_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码2-lfoc_standardization相关文件 / 附码1-Lfoc_Saturation_Standardization_Data_2函数
static const LFOC_FAULT_CODE_STR* Fault_M2_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误",
    "[定点运算]数据1标幺转换核心运算错误",
    "[定点运算]数据1标幺转换定点正向溢出错误",
    "[定点运算]数据1标幺转换定点负向溢出错误",
    "[浮点运算]数据2标幺计算浮点运算错误",
    "[浮点运算]数据2标幺计算正无穷大错误",
    "[浮点运算]数据2标幺计算负无穷大错误",
    "[浮点运算]数据2标幺计算非数错误",
    "[浮点运算]数据2标幺转换核心运算错误",
    "[浮点运算]数据2标幺转换正无穷大错误",
    "[浮点运算]数据2标幺转换负无穷大错误",
    "[浮点运算]数据2标幺转换非数错误",
    "[定点运算]数据2标幺转换核心运算错误",
    "[定点运算]数据2标幺转换定点正向溢出错误",
    "[定点运算]数据2标幺转换定点负向溢出错误"
};

// 主码3-lfoc_standardization相关文件 / 附码0-LFOC_SATURATION_STANDARDIZATION_DATA_3指针
static const LFOC_FAULT_CODE_STR* Fault_M3_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码3-lfoc_standardization相关文件 / 附码1-Lfoc_Saturation_Standardization_Data_3函数
static const LFOC_FAULT_CODE_STR* Fault_M3_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误",
    "[定点运算]数据1标幺转换核心运算错误",
    "[定点运算]数据1标幺转换定点正向溢出错误",
    "[定点运算]数据1标幺转换定点负向溢出错误",
    "[浮点运算]数据2标幺计算浮点运算错误",
    "[浮点运算]数据2标幺计算正无穷大错误",
    "[浮点运算]数据2标幺计算负无穷大错误",
    "[浮点运算]数据2标幺计算非数错误",
    "[浮点运算]数据2标幺转换核心运算错误",
    "[浮点运算]数据2标幺转换正无穷大错误",
    "[浮点运算]数据2标幺转换负无穷大错误",
    "[浮点运算]数据2标幺转换非数错误",
    "[定点运算]数据2标幺转换核心运算错误",
    "[定点运算]数据2标幺转换定点正向溢出错误",
    "[定点运算]数据2标幺转换定点负向溢出错误",
    "[浮点运算]数据3标幺计算浮点运算错误",
    "[浮点运算]数据3标幺计算正无穷大错误",
    "[浮点运算]数据3标幺计算负无穷大错误",
    "[浮点运算]数据3标幺计算非数错误",
    "[定点运算]数据3标幺转换核心运算错误",
    "[定点运算]数据3标幺转换正无穷大错误",
    "[定点运算]数据3标幺转换负无穷大错误",
    "[浮点运算]数据3标幺转换非数错误",
    "[定点运算]数据3标幺转换核心运算错误",
    "[定点运算]数据3标幺转换定点正向溢出错误",
    "[定点运算]数据3标幺转换定点负向溢出错误"
};

// 主码4-lfoc_standardization相关文件 / 附码0-LFOC_UNSATURATION_STANDARDIZATION_DATA_1指针
static const LFOC_FAULT_CODE_STR* Fault_M4_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码4-lfoc_standardization相关文件 / 附码1-Lfoc_Motorx_Unsaturation_Standardization_Data_1函数
static const LFOC_FAULT_CODE_STR* Fault_M4_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误"
};

// 主码5-lfoc_standardization相关文件 / 附码0-LFOC_UNSATURATION_STANDARDIZATION_DATA_2指针
static const LFOC_FAULT_CODE_STR* Fault_M5_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码5-lfoc_standardization相关文件 / 附码1-Lfoc_Motorx_Unsaturation_Standardization_Data_2函数
static const LFOC_FAULT_CODE_STR* Fault_M5_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误",
    "[浮点运算]数据2标幺计算浮点运算错误",
    "[浮点运算]数据2标幺计算正无穷大错误",
    "[浮点运算]数据2标幺计算负无穷大错误",
    "[浮点运算]数据2标幺计算非数错误",
    "[浮点运算]数据2标幺转换核心运算错误",
    "[浮点运算]数据2标幺转换正无穷大错误",
    "[浮点运算]数据2标幺转换负无穷大错误",
    "[浮点运算]数据2标幺转换非数错误"
};

// 主码6-lfoc_standardization相关文件 / 附码0-LFOC_UNSATURATION_STANDARDIZATION_DATA_3指针
static const LFOC_FAULT_CODE_STR* Fault_M6_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码6-lfoc_standardization相关文件 / 附码1-Lfoc_Motorx_Unsaturation_Standardization_Data_3函数
static const LFOC_FAULT_CODE_STR* Fault_M6_S1_Child[] = {
    "[浮点运算]数据1标幺计算浮点运算错误",
    "[浮点运算]数据1标幺计算正无穷大错误",
    "[浮点运算]数据1标幺计算负无穷大错误",
    "[浮点运算]数据1标幺计算非数错误",
    "[浮点运算]数据1标幺转换核心运算错误",
    "[浮点运算]数据1标幺转换正无穷大错误",
    "[浮点运算]数据1标幺转换负无穷大错误",
    "[浮点运算]数据1标幺转换非数错误",
    "[浮点运算]数据2标幺计算浮点运算错误",
    "[浮点运算]数据2标幺计算正无穷大错误",
    "[浮点运算]数据2标幺计算负无穷大错误",
    "[浮点运算]数据2标幺计算非数错误",
    "[浮点运算]数据2标幺转换核心运算错误",
    "[浮点运算]数据2标幺转换正无穷大错误",
    "[浮点运算]数据2标幺转换负无穷大错误",
    "[浮点运算]数据2标幺转换非数错误",
    "[浮点运算]数据3标幺计算浮点运算错误",
    "[浮点运算]数据3标幺计算正无穷大错误",
    "[浮点运算]数据3标幺计算负无穷大错误",
    "[浮点运算]数据3标幺计算非数错误",
    "[浮点运算]数据3标幺转换核心运算错误",
    "[浮点运算]数据3标幺转换正无穷大错误",
    "[浮点运算]数据3标幺转换负无穷大错误",
    "[浮点运算]数据3标幺转换非数错误"
};

// 主码7-lfoc_inverse_standardization相关文件 / 附码0-LFOC_INVERSE_STANDARDIZATION_DATA_1指针
static const LFOC_FAULT_CODE_STR* Fault_M7_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码7-lfoc_inverse_standardization相关文件 / 附码1-Lfoc_Inverse_Standardization_Data_1函数
static const LFOC_FAULT_CODE_STR* Fault_M7_S1_Child[] = {
    "[浮点运算]数据1逆向标幺转换核心运算错误",
    "[浮点运算]数据1逆向标幺转换正无穷大错误",
    "[浮点运算]数据1逆向标幺转换负无穷大错误",
    "[浮点运算]数据1逆向标幺转换非数错误",
    "[浮点运算]数据1逆向计算浮点运算错误",
    "[浮点运算数据1逆向计算正无穷大错误",
    "[浮点运算]数据1逆向计算负无穷大错误",
    "[浮点运算]数据1逆向计算非数错误"
};

// 主码8-lfoc_inverse_standardization相关文件 / 附码0-LFOC_INVERSE_STANDARDIZATION_DATA_2指针
static const LFOC_FAULT_CODE_STR* Fault_M8_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码8-lfoc_inverse_standardization相关文件 / 附码1-Lfoc_Inverse_Standardization_Data_2函数
static const LFOC_FAULT_CODE_STR* Fault_M8_S1_Child[] = {
    "[浮点运算]数据1逆向标幺转换核心运算错误",
    "[浮点运算]数据1逆向标幺转换正无穷大错误",
    "[浮点运算]数据1逆向标幺转换负无穷大错误",
    "[浮点运算]数据1逆向标幺转换非数错误",
    "[浮点运算]数据1逆向计算浮点运算错误",
    "[浮点运算数据1逆向计算正无穷大错误",
    "[浮点运算]数据1逆向计算负无穷大错误",
    "[浮点运算]数据1逆向计算非数错误",
    "[浮点运算]数据2逆向标幺转换核心运算错误",
    "[浮点运算]数据2逆向标幺转换正无穷大错误",
    "[浮点运算]数据2逆向标幺转换负无穷大错误",
    "[浮点运算]数据2逆向标幺转换非数错误",
    "[浮点运算]数据2逆向计算浮点运算错误",
    "[浮点运算数据2逆向计算正无穷大错误",
    "[浮点运算]数据2逆向计算负无穷大错误",
    "[浮点运算]数据2逆向计算非数错误"
};

// 主码9-lfoc_inverse_standardization相关文件 / 附码0-LFOC_INVERSE_STANDARDIZATION_DATA_3指针
static const LFOC_FAULT_CODE_STR* Fault_M9_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码9-lfoc_inverse_standardization相关文件 / 附码1-Lfoc_Inverse_Standardization_Data_3函数
static const LFOC_FAULT_CODE_STR* Fault_M9_S1_Child[] = {
    "[浮点运算]数据1逆向标幺转换核心运算错误",
    "[浮点运算]数据1逆向标幺转换正无穷大错误",
    "[浮点运算]数据1逆向标幺转换负无穷大错误",
    "[浮点运算]数据1逆向标幺转换非数错误",
    "[浮点运算]数据1逆向计算浮点运算错误",
    "[浮点运算数据1逆向计算正无穷大错误",
    "[浮点运算]数据1逆向计算负无穷大错误",
    "[浮点运算]数据1逆向计算非数错误",
    "[浮点运算]数据2逆向标幺转换核心运算错误",
    "[浮点运算]数据2逆向标幺转换正无穷大错误",
    "[浮点运算]数据2逆向标幺转换负无穷大错误",
    "[浮点运算]数据2逆向标幺转换非数错误",
    "[浮点运算]数据2逆向计算浮点运算错误",
    "[浮点运算数据2逆向计算正无穷大错误",
    "[浮点运算]数据2逆向计算负无穷大错误",
    "[浮点运算]数据2逆向计算非数错误",
    "[浮点运算]数据1逆向标幺转换核心运算错误",
    "[浮点运算]数据1逆向标幺转换正无穷大错误",
    "[浮点运算]数据1逆向标幺转换负无穷大错误",
    "[浮点运算]数据1逆向标幺转换非数错误",
    "[浮点运算]数据1逆向计算浮点运算错误",
    "[浮点运算数据1逆向计算正无穷大错误",
    "[浮点运算]数据1逆向计算负无穷大错误",
    "[浮点运算]数据1逆向计算非数错误"
};

// 主码10-lfoc_quantization相关文件 / 附码0-LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM指针
static const LFOC_FAULT_CODE_STR* Fault_M10_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码10-lfoc_quantization相关文件 / 附码1-Lfoc_Current_Quantization_Float_Stream_Config_Write函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S1_Child[] = {
    "[校验]输入ADC电流量化系数为零",
    "[校验]输入A相增益为零",
    "[校验]输入B相增益为零",
    "[校验]输入C相增益为零"
};

// 主码10-lfoc_quantization相关文件 / 附码2-Lfoc_Current_Quantization_Float_Stream_Data_Config_Write函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S2_Child[] = {
    "[校验]输入电流ADC数据流长度指向为空",
    "[校验]输入电流ADC数据流A相电流指向为空",
    "[校验]输入电流ADC数据流B相电流指向为空",
    "[校验]输入电流ADC数据流C相电流指向为空"
};

// 主码10-lfoc_quantization相关文件 / 附码3-Lfoc_Current_Quantization_Float_Stream_Data_Malloc函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S3_Child[] = {
    "[校验]数据流空间不处于有效状态",
    "[校验]输出电流ADC数据流A相电流指向为空",
    "[校验]输出电流ADC数据流B相电流指向为空",
    "[校验]输出电流ADC数据流C相电流指向为空"
};

// 主码10-lfoc_quantization相关文件 / 附码4-Lfoc_Current_Quantization_Float_Stream_Check函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S4_Child[] = {
    "[校验]配置出错导致校验失败",
    "[校验]数据流映射出错导致校验失败",
    "[校验]空间校验出错导致校验失败"
};

// 主码10-lfoc_quantization相关文件 / 附码5-Lfoc_Current_Quantization_Float_Stream_Update函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S5_Child[] = {
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、数据映射校验、空间校验和总校验",
    "[校验]没有生效的历史信息，且新参数未能完成数据映射校验、空间校验和总校验，但完成配置校验",
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、空间校验和总校验，但完成数据映射校验",
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、数据映射校验和总校验，但完成空间校验",
    "[校验]没有生效的历史信息，且新参数未能完成数据映射校验和总校验，但完成配置校验和空间校验",
    "[校验]没有生效的历史信息，且新参数未能完成空间校验和总校验，但完成配置校验和数据映射校验",
    "[校验]没有生效的历史信息，且新参数未能完成总校验，但完成配置校验、数据映射校验和空间校验和",
    "[校验]有生效的历史信息，且新参数未能完成配置校验、数据映射校验、空间校验和总校验",
    "[校验]有生效的历史信息，且新参数未能完成数据映射校验、空间校验和总校验，但完成配置校验",
    "[校验]有生效的历史信息，且新参数未能完成配置校验、空间校验和总校验，但完成数据映射校验",
    "[校验]有生效的历史信息，且新参数未能完成配置校验、数据映射校验和总校验，但完成空间校验",
    "[校验]有生效的历史信息，且新参数未能完成数据映射校验和总校验，但完成配置校验和空间校验",
    "[校验]有生效的历史信息，且新参数未能完成空间校验和总校验，但完成配置校验和数据映射校验",
    "[校验]有生效的历史信息，且新参数未能完成总校验，但完成配置校验、数据映射校验和空间校验和"
};

// 主码10-lfoc_quantization相关文件 / 附码6-Lfoc_Current_Quantization_Float_Stream函数
static const LFOC_FAULT_CODE_STR* Fault_M10_S6_Child[] = {
    "[浮点运算]A相ADC当前值超过自身变量所能容忍的最大值",
    "[浮点运算]A相转换电流浮点运算错误",
    "[浮点运算]A相转换电流正无穷大错误",
    "[浮点运算]A相转换电流负无穷大错误",
    "[浮点运算]A相转换电流非数错误",
    "[浮点运算]A相增益校准浮点运算错误",
    "[浮点运算]A相增益校准正无穷大错误",
    "[浮点运算]A相增益校准负无穷大错误",
    "[浮点运算]A相增益校准非数错误",
    "[浮点运算]A相极性校准错误",
    "[浮点运算]B相ADC当前值超过自身变量所能容忍的最大值",
    "[浮点运算]B相转换电流浮点运算错误",
    "[浮点运算]B相转换电流正无穷大错误",
    "[浮点运算]B相转换电流负无穷大错误",
    "[浮点运算]B相转换电流非数错误",
    "[浮点运算]B相增益校准浮点运算错误",
    "[浮点运算]B相增益校准正无穷大错误",
    "[浮点运算]B相增益校准负无穷大错误",
    "[浮点运算]B相增益校准非数错误",
    "[浮点运算]B相极性校准错误",
    "[浮点运算]C相ADC当前值超过自身变量所能容忍的最大值",
    "[浮点运算]C相转换电流浮点运算错误",
    "[浮点运算]C相转换电流正无穷大错误",
    "[浮点运算]C相转换电流负无穷大错误",
    "[浮点运算]C相转换电流非数错误",
    "[浮点运算]C相增益校准浮点运算错误",
    "[浮点运算]C相增益校准正无穷大错误",
    "[浮点运算]C相增益校准负无穷大错误",
    "[浮点运算]C相增益校准非数错误",
    "[浮点运算]C相极性校准错误",
    "[校验]五重校验未通过导致量化程序无法计算"
};

// 主码11-lfoc_quantization相关文件 / 附码0-LFOC_CURRENT_QUANTIZATION_FLOAT_POINT指针
static const LFOC_FAULT_CODE_STR* Fault_M11_S0_Child[] = {
    "[校验]指针未能初始化"
};

// 主码11-lfoc_quantization相关文件 / 附码1-Lfoc_Current_Quantization_Float_Point_Config_Write函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S1_Child[] = {
    "[校验]输入ADC电流量化系数为零",
    "[校验]输入A相增益为零",
    "[校验]输入B相增益为零",
    "[校验]输入C相增益为零"
};

// 主码11-lfoc_quantization相关文件 / 附码2-Lfoc_Current_Quantization_Float_Point_Data_Config_Write函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S2_Child[] = {
    "[校验]输入电流ADC数据流长度指向为空",
    "[校验]输入电流ADC数据流A相电流指向为空",
    "[校验]输入电流ADC数据流B相电流指向为空",
    "[校验]输入电流ADC数据流C相电流指向为空"
};

// 主码11-lfoc_quantization相关文件 / 附码3-Lfoc_Current_Quantization_Float_Point_Data_Malloc函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S3_Child[] = {
    "[校验]数据流空间不处于有效状态",
    "[校验]输出电流ADC数据流A相电流指向为空",
    "[校验]输出电流ADC数据流B相电流指向为空",
    "[校验]输出电流ADC数据流C相电流指向为空"
};

// 主码11-lfoc_quantization相关文件 / 附码4-Lfoc_Current_Quantization_Float_Point_Check函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S4_Child[] = {
    "[校验]配置出错导致校验失败",
    "[校验]数据流映射出错导致校验失败",
    "[校验]空间校验出错导致校验失败"
};

// 主码11-lfoc_quantization相关文件 / 附码5-Lfoc_Current_Quantization_Float_Point_Update函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S5_Child[] = {
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、数据映射校验、空间校验和总校验",
    "[校验]没有生效的历史信息，且新参数未能完成数据映射校验、空间校验和总校验，但完成配置校验",
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、空间校验和总校验，但完成数据映射校验",
    "[校验]没有生效的历史信息，且新参数未能完成配置校验、数据映射校验和总校验，但完成空间校验",
    "[校验]没有生效的历史信息，且新参数未能完成数据映射校验和总校验，但完成配置校验和空间校验",
    "[校验]没有生效的历史信息，且新参数未能完成空间校验和总校验，但完成配置校验和数据映射校验",
    "[校验]没有生效的历史信息，且新参数未能完成总校验，但完成配置校验、数据映射校验和空间校验和",
    "[校验]有生效的历史信息，且新参数未能完成配置校验、数据映射校验、空间校验和总校验",
    "[校验]有生效的历史信息，且新参数未能完成数据映射校验、空间校验和总校验，但完成配置校验",
    "[校验]有生效的历史信息，且新参数未能完成配置校验、空间校验和总校验，但完成数据映射校验",
    "保留",
    "[校验]有生效的历史信息，且新参数未能完成数据映射校验和总校验，但完成配置校验和空间校验",
    "[校验]有生效的历史信息，且新参数未能完成空间校验和总校验，但完成配置校验和数据映射校验",
    "[校验]有生效的历史信息，且新参数未能完成总校验，但完成配置校验、数据映射校验和空间校验和"
};

// 主码11-lfoc_quantization相关文件 / 附码6-Lfoc_Current_Quantization_Float_Point函数
static const LFOC_FAULT_CODE_STR* Fault_M11_S6_Child[] = {
    "[浮点运算]A相ADC当前值超过自身变量所能容忍的最大值",
    "[浮点运算]A相转换电流浮点运算错误",
    "[浮点运算]A相转换电流正无穷大错误",
    "[浮点运算]A相转换电流负无穷大错误",
    "[浮点运算]A相转换电流非数错误",
    "[浮点运算]A相增益校准浮点运算错误",
    "[浮点运算]A相增益校准正无穷大错误",
    "[浮点运算]A相增益校准负无穷大错误",
    "[浮点运算]A相增益校准非数错误",
    "[浮点运算]A相极性校准错误",
    "保留",
    "[浮点运算]B相转换电流浮点运算错误",
    "[浮点运算]B相转换电流正无穷大错误",
    "[浮点运算]B相转换电流负无穷大错误",
    "[浮点运算]B相转换电流非数错误",
    "[浮点运算]B相增益校准浮点运算错误",
    "[浮点运算]B相增益校准正无穷大错误",
    "[浮点运算]B相增益校准负无穷大错误",
    "[浮点运算]B相增益校准非数错误",
    "[浮点运算]B相极性校准错误",
    "[浮点运算]C相ADC当前值超过自身变量所能容忍的最大值",
    "[浮点运算]C相转换电流浮点运算错误",
    "[浮点运算]C相转换电流正无穷大错误",
    "[浮点运算]C相转换电流负无穷大错误",
    "[浮点运算]C相转换电流非数错误",
    "[浮点运算]C相增益校准浮点运算错误",
    "[浮点运算]C相增益校准正无穷大错误",
    "[浮点运算]C相增益校准负无穷大错误",
    "[浮点运算]C相增益校准非数错误",
    "[浮点运算]C相极性校准错误",
    "[校验]五重校验未通过导致量化程序无法计算"
};


/* ---------- 警报类子码表 ---------- */
// 主码0-lfoc_benchmark相关文件 / 附码0-Lfoc_Benchmark函数
static const LFOC_FAULT_CODE_STR* Warn_M0_S0_Child[] = {
    "电压ADC位数大于输入输出定点Q值，会出现精度损失!",
    "电流ADC位数大于输入输出定点Q值，会出现精度损失!"
};

// 主码0-lfoc_benchmark相关文件 / 附码1-Lfoc_Benchmark_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M0_S1_Child[] = {
    "故障复位"
};

// 主码1-lfoc_standardization相关文件 / 附码0-Lfoc_Saturation_Standardization_Data_1_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M1_S0_Child[] = {
    "故障复位"
};

// 主码2-lfoc_standardization相关文件 / 附码0-Lfoc_Saturation_Standardization_Data_2_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M2_S0_Child[] = {
    "故障复位"
};

// 主码3-lfoc_standardization相关文件 / 附码0-Lfoc_Saturation_Standardization_Data_3_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M3_S0_Child[] = {
    "故障复位"
};

// 主码4-lfoc_standardization相关文件 / 附码0-Lfoc_Unsaturation_Standardization_Data_1_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M4_S0_Child[] = {
    "故障复位"
};

// 主码5-lfoc_standardization相关文件 / 附码0-Lfoc_Unsaturation_Standardization_Data_2_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M5_S0_Child[] = {
    "故障复位"
};

// 主码6-lfoc_standardization相关文件 / 附码0-Lfoc_Unsaturation_Standardization_Data_3_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M6_S0_Child[] = {
    "故障复位"
};

// 主码7-lfoc_inverse_standardization相关文件 / 附码0-Lfoc_Inverse_Standardization_Data_1_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M7_S0_Child[] = {
    "故障复位"
};

// 主码8-lfoc_inverse_standardization相关文件 / 附码0-Lfoc_Inverse_Standardization_Data_2_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M8_S0_Child[] = {
    "故障复位"
};

// 主码9-lfoc_inverse_standardization相关文件 / 附码0-Lfoc_Inverse_Standardization_Data_3_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M9_S0_Child[] = {
    "故障复位"
};

// 主码10-lfoc_quantization相关文件 / 附码0-Lfoc_Current_Quantization_Float_Stream_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M10_S0_Child[] = {
    "故障复位"
};

// 主码11-lfoc_quantization相关文件 / 附码0-Lfoc_Current_Quantization_Float_Point_Error_Reset函数
static const LFOC_FAULT_CODE_STR* Warn_M11_S0_Child[] = {
    "故障复位"
};


/******************************************************************************
 * 第二层级：附码表（引用对应子码表）
 ******************************************************************************/
/* ---------- 故障类附码表 ---------- */
// 主码0-lfoc_benchmark相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M0_SubTable[] = {
    {"LFOC_BENCHMARK指针", Fault_M0_S0_Child, 1},
    {"Lfoc_Benchmark_Config_Write函数", Fault_M0_S1_Child, 8},
    {"Lfoc_Benchmark_Check函数", Fault_M0_S2_Child, 1},
    {"Lfoc_Benchmark_Update函数", Fault_M0_S3_Child, 4},
    {"Lfoc_Benchmark函数", Fault_M0_S4_Child, 65}
};

// 主码1-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M1_SubTable[] = {
    {"LFOC_SATURATION_STANDARDIZATION_DATA_1指针", Fault_M1_S0_Child, 1},
    {"Lfoc_Saturation_Standardization_Data_1函数", Fault_M1_S1_Child, 11}
};

// 主码2-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M2_SubTable[] = {
    {"LFOC_SATURATION_STANDARDIZATION_DATA_2指针", Fault_M2_S0_Child, 1},
    {"Lfoc_Saturation_Standardization_Data_2函数", Fault_M2_S1_Child, 22}
};

// 主码3-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M3_SubTable[] = {
    {"LFOC_SATURATION_STANDARDIZATION_DATA_3指针", Fault_M3_S0_Child, 1},
    {"Lfoc_Saturation_Standardization_Data_3函数", Fault_M3_S1_Child, 33}
};

// 主码4-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M4_SubTable[] = {
    {"LFOC_UNSATURATION_STANDARDIZATION_DATA_1指针", Fault_M4_S0_Child, 1},
    {"Lfoc_Motorx_Unsaturation_Standardization_Data_1函数", Fault_M4_S1_Child, 8}
};

// 主码5-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M5_SubTable[] = {
    {"LFOC_UNSATURATION_STANDARDIZATION_DATA_2指针", Fault_M5_S0_Child, 1},
    {"Lfoc_Motorx_Unsaturation_Standardization_Data_2函数", Fault_M5_S1_Child, 16}
};

// 主码6-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M6_SubTable[] = {
    {"LFOC_UNSATURATION_STANDARDIZATION_DATA_3指针", Fault_M6_S0_Child, 1},
    {"Lfoc_Motorx_Unsaturation_Standardization_Data_3函数", Fault_M6_S1_Child, 24}
};

// 主码7-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M7_SubTable[] = {
    {"LFOC_INVERSE_STANDARDIZATION_DATA_1指针", Fault_M7_S0_Child, 1},
    {"Lfoc_Inverse_Standardization_Data_1函数", Fault_M7_S1_Child, 8}
};

// 主码8-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M8_SubTable[] = {
    {"LFOC_INVERSE_STANDARDIZATION_DATA_2指针", Fault_M8_S0_Child, 1},
    {"Lfoc_Inverse_Standardization_Data_2函数", Fault_M8_S1_Child, 16}
};

// 主码9-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M9_SubTable[] = {
    {"LFOC_INVERSE_STANDARDIZATION_DATA_3指针", Fault_M9_S0_Child, 1},
    {"Lfoc_Inverse_Standardization_Data_3函数", Fault_M9_S1_Child, 24}
};

// 主码10-lfoc_quantization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M10_SubTable[] = {
    {"LFOC_CURRENT_QUANTIZATION_FLOAT_STREAM指针", Fault_M10_S0_Child, 1},
    {"Lfoc_Current_Quantization_Float_Stream_Config_Write函数", Fault_M10_S1_Child, 4},
    {"Lfoc_Current_Quantization_Float_Stream_Data_Config_Write函数", Fault_M10_S2_Child, 4},
    {"Lfoc_Current_Quantization_Float_Stream_Data_Malloc函数", Fault_M10_S3_Child, 4},
    {"Lfoc_Current_Quantization_Float_Stream_Check函数", Fault_M10_S4_Child, 3},
    {"Lfoc_Current_Quantization_Float_Stream_Update函数", Fault_M10_S5_Child, 14},
    {"Lfoc_Current_Quantization_Float_Stream函数", Fault_M10_S6_Child, 31}
};

// 主码11-lfoc_quantization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Fault_M11_SubTable[] = {
    {"LFOC_CURRENT_QUANTIZATION_FLOAT_POINT指针", Fault_M11_S0_Child, 1},
    {"Lfoc_Current_Quantization_Float_Point_Config_Write函数", Fault_M11_S1_Child, 4},
    {"Lfoc_Current_Quantization_Float_Point_Data_Config_Write函数", Fault_M11_S2_Child, 4},
    {"Lfoc_Current_Quantization_Float_Point_Data_Malloc函数", Fault_M11_S3_Child, 4},
    {"Lfoc_Current_Quantization_Float_Point_Check函数", Fault_M11_S4_Child, 3},
    {"Lfoc_Current_Quantization_Float_Point_Update函数", Fault_M11_S5_Child, 14},
    {"Lfoc_Current_Quantization_Float_Point函数", Fault_M11_S6_Child, 31}
};


/* ---------- 警报类附码表 ---------- */
// 主码0-lfoc_benchmark相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M0_SubTable[] = {
    {"Lfoc_Benchmark函数", Warn_M0_S0_Child, 2},
    {"Lfoc_Benchmark_Error_Reset函数", Warn_M0_S1_Child, 1}
};

// 主码1-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M1_SubTable[] = {
    {"Lfoc_Saturation_Standardization_Data_1_Error_Reset函数", Warn_M1_S0_Child, 1}
};

// 主码2-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M2_SubTable[] = {
    {"Lfoc_Saturation_Standardization_Data_2_Error_Reset函数", Warn_M2_S0_Child, 1}
};

// 主码3-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M3_SubTable[] = {
    {"Lfoc_Saturation_Standardization_Data_3_Error_Reset函数", Warn_M3_S0_Child, 1}
};

// 主码4-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M4_SubTable[] = {
    {"Lfoc_Unsaturation_Standardization_Data_1_Error_Reset函数", Warn_M4_S0_Child, 1}
};

// 主码5-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M5_SubTable[] = {
    {"Lfoc_Unsaturation_Standardization_Data_2_Error_Reset函数", Warn_M5_S0_Child, 1}
};

// 主码6-lfoc_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M6_SubTable[] = {
    {"Lfoc_Unsaturation_Standardization_Data_3_Error_Reset函数", Warn_M6_S0_Child, 1}
};

// 主码7-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M7_SubTable[] = {
    {"Lfoc_Inverse_Standardization_Data_1_Error_Reset函数", Warn_M7_S0_Child, 1}
};

// 主码8-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M8_SubTable[] = {
    {"Lfoc_Inverse_Standardization_Data_2_Error_Reset函数", Warn_M8_S0_Child, 1}
};

// 主码9-lfoc_inverse_standardization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M9_SubTable[] = {
    {"Lfoc_Inverse_Standardization_Data_3_Error_Reset函数", Warn_M9_S0_Child, 1}
};

// 主码10-lfoc_quantization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M10_SubTable[] = {
    {"Lfoc_Current_Quantization_Float_Stream_Error_Reset函数", Warn_M10_S0_Child, 1}
};

// 主码11-lfoc_quantization相关文件 的附码表
static const LFOC_LOG_SUB_ENTRY Warn_M11_SubTable[] = {
    {"Lfoc_Current_Quantization_Float_Point_Error_Reset函数", Warn_M11_S0_Child, 1}
};


/******************************************************************************
 * 第三层级：主码表（引用对应附码表）
 ******************************************************************************/
static const LFOC_LOG_MAIN_ENTRY s_fault_main_table[] = {
    {"lfoc_benchmark相关文件", Fault_M0_SubTable, 5},   // 0
    {"lfoc_standardization相关文件", Fault_M1_SubTable, 2},   // 1
    {"lfoc_standardization相关文件", Fault_M2_SubTable, 2},   // 2
    {"lfoc_standardization相关文件", Fault_M3_SubTable, 2},   // 3
    {"lfoc_standardization相关文件", Fault_M4_SubTable, 2},   // 4
    {"lfoc_standardization相关文件", Fault_M5_SubTable, 2},   // 5
    {"lfoc_standardization相关文件", Fault_M6_SubTable, 2},   // 6
    {"lfoc_inverse_standardization相关文件", Fault_M7_SubTable, 2},   // 7
    {"lfoc_inverse_standardization相关文件", Fault_M8_SubTable, 2},   // 8
    {"lfoc_inverse_standardization相关文件", Fault_M9_SubTable, 2},   // 9
    {"lfoc_quantization相关文件", Fault_M10_SubTable, 7},   // 10
    {"lfoc_quantization相关文件", Fault_M11_SubTable, 7},   // 11
};

static const LFOC_LOG_MAIN_ENTRY s_warn_main_table[] = {
    {"lfoc_benchmark相关文件", Warn_M0_SubTable, 2},   // 0
    {"lfoc_standardization相关文件", Warn_M1_SubTable, 1},   // 1
    {"lfoc_standardization相关文件", Warn_M2_SubTable, 1},   // 2
    {"lfoc_standardization相关文件", Warn_M3_SubTable, 1},   // 3
    {"lfoc_standardization相关文件", Warn_M4_SubTable, 1},   // 4
    {"lfoc_standardization相关文件", Warn_M5_SubTable, 1},   // 5
    {"lfoc_standardization相关文件", Warn_M6_SubTable, 1},   // 6
    {"lfoc_inverse_standardization相关文件", Warn_M7_SubTable, 1},   // 7
    {"lfoc_inverse_standardization相关文件", Warn_M8_SubTable, 1},   // 8
    {"lfoc_inverse_standardization相关文件", Warn_M9_SubTable, 1},   // 9
    {"lfoc_quantization相关文件", Warn_M10_SubTable, 1},   // 10
    {"lfoc_quantization相关文件", Warn_M11_SubTable, 1},   // 11
};

#endif // LFOC_LOG_PRINTF_MODE == LOG_BUILT_IN_TEXT_PRINTF

/******************************************************************************
 * 内部通用：格式化打印单条日志
 ******************************************************************************/
static void Lfoc_Log_Print_One(const LFOC_LOG_ENTRY* Lfoc_Entry)
{
    const LFOC_FAULT_CODE_STR* type_str = (Lfoc_Entry->LogType__Type == LFOC_LOG_TYPE_FAULT) ? "[FAULT]" : "[WARN]";

#if LFOC_LOG_PRINTF_MODE == LOG_BUILT_IN_TEXT_PRINTF
    const LFOC_LOG_MAIN_ENTRY*         main_table;
    LFOC_UI_FAULT_COUNT                main_total;

    // 主码查表
    const LFOC_FAULT_CODE_STR*         main_text = "未知主码";
    const LFOC_LOG_SUB_ENTRY*          sub_table = LFOC_NULL;
    LFOC_UI_FAULT_COUNT                sub_total = 0;

    // 附码查表
    const LFOC_FAULT_CODE_STR*         sub_text = "未知附码";
    const LFOC_FAULT_CODE_STR**        child_table = LFOC_NULL;
    LFOC_UI_FAULT_COUNT                child_total = 0;

    // 子码查表
    const LFOC_FAULT_CODE_STR*         child_text = "未知子码";

    if (Lfoc_Entry->LogType__Type == LFOC_LOG_TYPE_FAULT)
    {
        main_table = s_fault_main_table;
        main_total = sizeof(s_fault_main_table) / sizeof(s_fault_main_table[0]);
    }
    else
    {
        main_table = s_warn_main_table;
        main_total = sizeof(s_warn_main_table) / sizeof(s_warn_main_table[0]);
    }

    if (Lfoc_Entry->FaultCode__Main_Code < main_total)
    {
        main_text = main_table[Lfoc_Entry->FaultCode__Main_Code].text;
        sub_table = main_table[Lfoc_Entry->FaultCode__Main_Code].sub_table;
        sub_total = main_table[Lfoc_Entry->FaultCode__Main_Code].sub_num;
    }

    if (sub_table != LFOC_NULL && Lfoc_Entry->FaultCode__Sub_Code < sub_total)
    {
        sub_text = sub_table[Lfoc_Entry->FaultCode__Sub_Code].text;
        child_table = sub_table[Lfoc_Entry->FaultCode__Sub_Code].child_table;
        child_total = sub_table[Lfoc_Entry->FaultCode__Sub_Code].child_num;
    }

    if (child_table != LFOC_NULL && Lfoc_Entry->FaultCode__Child_Code < child_total)
    {
        child_text = child_table[Lfoc_Entry->FaultCode__Child_Code];
    }

    LFOC_GLOBAL__PRINTF("%s %d(%s).%d(%s).%d(%s)\r\n",
                        type_str,
                        Lfoc_Entry->FaultCode__Main_Code, main_text,
                        Lfoc_Entry->FaultCode__Sub_Code,  sub_text,
                        Lfoc_Entry->FaultCode__Child_Code, child_text);
#else
    LFOC_GLOBAL__PRINTF("%s %d.%d.%d\r\n",
                        type_str,
                        Lfoc_Entry->FaultCode__Main_Code,
                        Lfoc_Entry->FaultCode__Sub_Code,
                        Lfoc_Entry->FaultCode__Child_Code);
#endif
}

/******************************************************************************
 * 对外接口实现
 ******************************************************************************/
void Lfoc_Log_Push_Fault(LFOC_UI_FAULT_CODE FaultCode__Main_Code,
                         LFOC_UI_FAULT_CODE FaultCode__Sub_Code,
                         LFOC_UI_FAULT_CODE FaultCode__Child_Code)
{
    // 每次调用直接压入缓冲区，调用几次就存几条，不做去重
    Lfoc_Log_Buff_Push(LFOC_LOG_TYPE_FAULT, FaultCode__Main_Code, FaultCode__Sub_Code, FaultCode__Child_Code);
}

void Lfoc_Log_Push_Warn(LFOC_UI_FAULT_CODE FaultCode__Main_Code,
                        LFOC_UI_FAULT_CODE FaultCode__Sub_Code,
                        LFOC_UI_FAULT_CODE FaultCode__Child_Code)
{
    // 每次调用直接压入缓冲区，调用几次就存几条，不做去重
    Lfoc_Log_Buff_Push(LFOC_LOG_TYPE_WARN, FaultCode__Main_Code, FaultCode__Sub_Code, FaultCode__Child_Code);
}

LFOC_UI_FAULT_COUNT Lfoc_Log_Flush_Output(void)
{
    LFOC_UI_FAULT_COUNT flush_cnt = 0;

    // 一次性输出所有待输出日志，读完为止
    while (Lfoc_Log_Count > 0)
    {
        Lfoc_Log_Print_One(&Lfoc_Log_Buff[Lfoc_Log_Read_Idx]);
        Lfoc_Log_Read_Idx = (Lfoc_Log_Read_Idx + 1) % LOG_BUFF_DEPTH;
        Lfoc_Log_Count--;
        flush_cnt++;
    }

    return flush_cnt;
}

void Lfoc_Log_Clear_Buffer(void)
{
    Lfoc_Log_Write_Idx = 0;
    Lfoc_Log_Read_Idx  = 0;
    Lfoc_Log_Count     = 0;
    __LFOC_MEMSET(Lfoc_Log_Buff, 0, sizeof(Lfoc_Log_Buff));
}

LFOC_UI_FAULT_COUNT Lfoc_Log_Get_Count(void)
{
    return Lfoc_Log_Count;
}
