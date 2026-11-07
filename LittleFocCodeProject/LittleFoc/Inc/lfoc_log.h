#ifndef __LFOC_LOG_H__
#define __LFOC_LOG_H__

/**@file      lfoc_log.h
 * @brief      LittleFoc的日志构建(头文件)
 * @details    负责管理IO(printf)的资源。
 *             使用局部信息加全局资源作为核心方案。
 * @author     尹冠华
 * @date       2026-09-06
 * @version    V1.0
 * @copyright    Copyright (c ) 2018-20226  黑龙江大学A8楼706
 **********************************************************************************
 * @attention
 * 硬件平台:兼容任何只要使用C语言编程的处理器
 * 仿真平台:只支持SIMULINK进行仿真验证
 * @par 修改日志:
 * <table>
 * <tr><th>Date        <th>Version  <th>Author    <th>Description
 * <tr><td>2026/09/06  <td>1.0      <td>尹冠华    <td>创建正式版本(发行版本)
 * </table>
 * **********************************************************************************
 */
 /*************************所引用的头文件*********************************/
#include "lfoc_error.h"     //!<LFOC存放错误信息的头文件
#include "lfoc_type.h"      //!<LFOC存放变量类型的头文件
#include "lfoc_port.h"      //!<LFOC存放运算核心的头文件
  /*************************结构体共用体声明区*********************************/
 /******************************************************************************
 * 类型定义
 ******************************************************************************/
// 日志类型：故障 / 警报
typedef enum LOG_LOG_TYPE {
    LFOC_LOG_TYPE_FAULT = 0,
    LFOC_LOG_TYPE_WARN  = 1
}LOG_LOG_TYPE;

// 日志条目：主码、附码、子码 + 类型
typedef struct LFOC_LOG_ENTRY {
    LOG_LOG_TYPE                 LogType__Type;         //!<日志类型
    LFOC_UI_FAULT_CODE           FaultCode__Main_Code;  //!<故障码-主码
    LFOC_UI_FAULT_CODE           FaultCode__Sub_Code;   //!<故障码-附码
    LFOC_UI_FAULT_CODE           FaultCode__Child_Code; //!<故障码-子码
} LFOC_LOG_ENTRY;

 /******************************************************************************
 * 对外接口
 ******************************************************************************/
/**
 * @brief  压入一条故障日志（仅写入环形缓冲区，不立即打印）
 * @param  main  : 故障主码
 * @param  sub   : 故障附码
 * @param  child : 故障子码
 */
void Lfoc_Log_Push_Fault(LFOC_UI_FAULT_CODE FaultCode__Main_Code,
                          LFOC_UI_FAULT_CODE FaultCode__Sub_Code,
                          LFOC_UI_FAULT_CODE FaultCode__Child_Code);

/**
 * @brief  压入一条警报日志（仅写入环形缓冲区，不立即打印）
 * @param  main  : 警报主码
 * @param  sub   : 警报附码
 * @param  child : 警报子码
 */
void Lfoc_Log_Push_Warn(LFOC_UI_FAULT_CODE FaultCode__Main_Code,
                         LFOC_UI_FAULT_CODE FaultCode__Sub_Code,
                         LFOC_UI_FAULT_CODE FaultCode__Child_Code);

/**
 * @brief  批量输出缓冲区中所有待打印日志（主循环调用一次即可）
 * @retval 本次输出的日志条数
 */
LFOC_UI_FAULT_COUNT Lfoc_Log_Flush_Output(void);

/**
 * @brief  清空待输出日志缓冲区
 */
void Lfoc_Log_Clear_Buffer(void);

/**
 * @brief  获取缓冲区当前待输出日志条数
 * @retval 待输出日志条数
 */
LFOC_UI_FAULT_COUNT Lfoc_Log_Get_Count(void);

#endif
