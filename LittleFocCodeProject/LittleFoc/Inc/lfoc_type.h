#ifndef __LFOC_TYPE_H__
#define __LFOC_TYPE_H__
/**@file      lfoc_type.h
* @brief      LittleFoc的变量类型定义
* @details    根据字节和符号位的不同重新定义属于自己的数据类型
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
/*************************所引用的头文件*********************************/
#include "stdint.h"
/**
 * @defgroup littleFoc运算系统的变量类型
 * @brief 对littleFoc格式所需的变量类型进行重定义
 * @details 为了兼容性亦为了声明变量时直观所以设置所需要的各种变量类型的重定义。
 * 其大多数情况并不需要用户进行修改，但排除一些比较另类的系统需要用户改变重定义。
 * 所以为了用户能直观对不同系统位数的不同有明显的认识，我设立以下表格来展示。
 * @par 不同位数系统的区别:
 * <table>
 * <tr><th>类型        <th>原类型              <th>32位系统      <th>64位系统
 * <tr><td>LF_8BIT     <td>char                <td>一字节        <td>一字节
 * <tr><td>LF_16BIT    <td>short int           <td>二字节        <td>二字节
 * <tr><td>LF_32BIT    <td>int                 <td>四字节        <td>四字节
 * <tr><td>LF_SIZE     <td>int                 <td>四字节        <td>四字节
 * <tr><td>LF_U_8BIT   <td>unsigned char       <td>一字节        <td>一字节
 * <tr><td>LF_U_16BIT  <td>unsigned short int  <td>二字节        <td>二字节
 * <tr><td>LF_U_32BIT  <td>unsigned int        <td>四字节        <td>四字节
 * <tr><td>LF_U_SIZE   <td>unsigned int        <td>四字节        <td>四字节
 * </table>
 *@note 用户除非系统不属于32位或64位的时候，否则此模块不会出错。如果出错请按照本身系统字节与上诉表格进行对照改写。
 * @{
 */
 /************************** 基础数据类型定义 **************************/
typedef  int8_t        LFOC_I_8BIT;      //!< 有符号8位整数类型（1字节）
typedef  int16_t       LFOC_I_16BIT;     //!< 有符号16位整数类型（2字节）
typedef  int32_t       LFOC_I_32BIT;     //!< 有符号32位整数类型（4字节）
typedef  int64_t       LFOC_I_64BIT;     //!< 有符号64位整数类型（8字节）

typedef  uint8_t       LFOC_UI_8BIT;     //!< 无符号8位整数类型（1字节）
typedef  uint16_t      LFOC_UI_16BIT;    //!< 无符号16位整数类型（2字节）
typedef  uint32_t      LFOC_UI_32BIT;    //!< 无符号32位整数类型（4字节）
typedef  uint64_t      LFOC_UI_64BIT;    //!< 无符号64位整数类型（8字节）

typedef  float         LFOC_F_32BIT;     //!< 32位单精度浮点类型（float）
typedef  float         LFOC_F_64BIT;     //!< 【定义异常】命名为64位但实际为float(32位)，64位浮点对应double类型
typedef  void          LFOC_VOID;        //!< void空类型，用于无返回值、泛型指针场景

/************************** 布尔类型定义 **************************/
#define LFOC_BOOL       LFOC_I_8BIT       //!< 布尔类型，基于有符号8位整数实现
#define LFOC_TURE       1                 //!< 布尔真值（逻辑真）
#define LFOC_FALUE      0                 //!< 布尔假值（逻辑假）

/************************** 业务场景类型宏定义 **************************/
#define LFOC_UI_FAULT_CODE     LFOC_UI_16BIT     //!<故障码类型（无符号16位），存储故障编号
#define LFOC_UI_FAULT_COUNT    LFOC_UI_16BIT     //!<故障计数类型（无符号16位），统计故障触发次数
#define LFOC_FAULT_CODE_STR    char              //!<故障码字符串类型，用于故障描述字符存储
#define LFOC_UI_SIZE           LFOC_UI_16BIT     //!<尺寸类型（无符号16位），表示数据长度、缓冲区大小
#define LFOC_UI_NUMBER         LFOC_UI_16BIT     //!<数值类型（无符号16位），用于通用计数、参数数值
#define LFOC_UI_BIT            LFOC_UI_8BIT      //!<无符号8位位操作类型，用于标志位、位域数据
#define LFOC_I_BIT             LFOC_I_8BIT       //!<有符号8位位操作类型，用于带符号的8位位运算场景
#define LFOC_UI_STATE          LFOC_UI_8BIT      //!<状态类型（无符号8位），用于模块运行状态、枚举状态
#define LFOC_UI_ERROR          LFOC_UI_16BIT     //!<错误码类型（无符号16位），存储接口/功能错误编号

#define LFOC_I_SPACE_STATE     LFOC_I_8BIT       //!<有符号空间状态
#define LFOC_I_POLARITY        LFOC_I_8BIT       //!<电流极性辨识
#define LFOC_INLINE            static __inline   //!<LFOC的内联函数调用重构
#define LFOC_NULL              0                 //!<LFOC的展现空间为0


#endif
