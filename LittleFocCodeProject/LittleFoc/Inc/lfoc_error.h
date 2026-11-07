#ifndef __LFOC_ERROR_H__
#define __LFOC_ERROR_H__
/**@file      lfoc_error.h
* @brief      LittleFoc的所有错误存放位置(头文件)
* @details    其中包含空间管理错误信息，MOS开关错误信息等
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
/**
  * @brief LFOC的错误信息共用体
  */
typedef enum LFOC_ERROR
{
    LFOC_ERROR__SUCCESS = 0,                              /*!<LFOC系统无错误*/
    LFOC_ERROR__OPEN_SPACE_ERROR,                         /*!<LFOC系统空间开辟错误*/
    LFOC_ERROR__CLEAR_SPACE_ERROR,                        /*!<LFOC系统空间清理错误*/
    LFOC_ERROR__EXTE_SPACE_ERROR,                         /*!<LFOC系统空间外扩错误*/
    LFOC_ERROR__FREE_SPACE_ERROR,                         /*!<LFOC系统空间解放错误*/
    /********************************************参数加载错误************************************************/
    LFOC_ERROR__REPEAT_CONFIG_LOAD_ERROR,                 /*!<LFOC系统重复参数加载错误*/
    LFOC_ERROR__REPEAT_DATA_LOAD_ERROR,                   /*!<LFOC系统重复数据参数加载错误*/
    LFOC_ERROR__REPEAT_COLLECTION_LOAD_ERROR,             /*!<LFOC系统重复收集加载错误*/
    LFOC_ERROR__REPEAT_ANALYSIS_LOAD_ERROR,               /*!<LFOC系统重复分析加载错误*/
    LFOC_ERROR__REPEAT_CONTROL_LOAD_ERROR,                /*!<LFOC系统重复控制加载错误*/
    LFOC_ERROR__REPEAT_SPACE_LOAD_ERROR,                  /*!<LFOC系统重复数据参数加载错误*/
    LFOC_ERROR__CONFIG_LOAD_ERROR,                        /*!<LFOC系统参数加载错误*/
    LFOC_ERROR__DATA_LOAD_ERROR,                          /*!<LFOC系统数据加载错误*/
    LFOC_ERROR__COLLECTION_LOAD_ERROR,                    /*!<LFOC系统收集加载错误*/
    LFOC_ERROR__ANALYSIS_LOAD_ERROR,                      /*!<LFOC系统分析加载错误*/
    LFOC_ERROR__CONTROL_LOAD_ERROR,                       /*!<LFOC系统控制加载错误*/
    LFOC_ERROR__SPACE_LOAD_ERROR,                         /*!<LFOC系统控制加载错误*/
    /********************************************运算错误************************************************/
    LFOC_ERROR__CORE_ARITHMETIC_ERROR,                    /*!<LFOC系统参数重复校验错误*/
    LFOC_ERROR__CORE_ARITHMETIC_WARN,                     /*!<LFOC系统参数重复校验错误*/
    /********************************************操作的前检测错误************************************************/
    LFOC_ERROR__CONFIG_ERROR,                             /*!<LFOC校验错误*/
    LFOC_ERROR__DATA_ERROR,                               /*!<LFOC校验错误*/
    LFOC_ERROR__CONFIG_CHECK_ERROR,                       /*!<LFOC校验错误*/
    LFOC_ERROR__CHECK_ERROR,                              /*!<LFOC校验错误*/
    LFOC_ERROR__UPDATE_ERROR,                             /*!<LFOC更新错误*/
    LFOC_ERROR__CHECK_UPDATE_ERROR,                       /*!<LFOC校验+更新错误*/
    LFOC_ERROR__RESET_ERROR,                              /*!<LFOC复位出现错误*/
}LFOC_ERROR;




#endif
