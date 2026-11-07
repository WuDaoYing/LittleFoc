#ifndef __LQ_TYPE_H__
#define __LQ_TYPE_H__
#include "stdint.h"
/**@file      lq_type.h
* @brief      LittleQmath的变量类型构造
* @details    管理所有LittleQmath变量声明类型
* @author     尹冠华
* @date        2024-6-27
* @version     V2.0
* @copyright    Copyright (c ) 2018-2024  黑龙江大学A8楼514
**********************************************************************************
* @attention
* 硬件平台:兼容任何只要使用C语言编程的处理器 \n
* @par 修改日志:
* <table>
* <tr><th>Date        <th>Version  <th>Author    <th>Description
* <tr><td>2024/03/28  <td>1.0      <td>尹冠华    <td>创建初始版本
* <tr><td>2024/06/27  <td>2.0      <td>尹冠华    <td>重新架构
* </table>
*
**********************************************************************************
*/

/**
 * @defgroup LittleQmath系统的变量类型
 * @brief 对所需的变量类型进行重定义
 * @details 为了兼容性亦为了声明变量时直观所以设置所需要的各种变量类型的重定义。
 * 其大多数情况并不需要用户进行修改，但排除一些比较另类的系统需要用户改变重定义。
 * 所以为了用户能直观对不同系统位数的不同有明显的认识，我设立以下表格来展示。
 * @par 不同位数系统的区别:
 * <table>
 * <tr><th>类型            <th>原类型              <th>32位系统      <th>64位系统
 * <tr><td>LQ_I_8BIT       <td>int8_t    v         <td>一字节        <td>一字节
 * <tr><td>LQ_I_16BIT      <td>int16_t             <td>二字节        <td>二字节
 * <tr><td>LQ_I_32BIT      <td>int32_t             <td>四字节        <td>四字节
 * <tr><td>LQ_I_64BIT      <td>int64_t             <td>八字节        <td>八字节
 * <tr><td>LQ_I_128BIT     <td>lq_i_128bit         <td>十六字节      <td>十六字节
 * <tr><td>LQ_I_SIZE       <td>int8_t              <td>一字节        <td>一字节
 * <tr><td>LQ_UI_8BIT      <td>uint8_t             <td>一字节        <td>一字节
 * <tr><td>LQ_UI_16BIT     <td>uint16_t            <td>二字节        <td>二字节
 * <tr><td>LQ_UI_32BIT     <td>uint32_t            <td>四字节        <td>四字节
 * <tr><td>LQ_UI_64BIT     <td>uint64_t            <td>八字节        <td>八字节
 * <tr><td>LQ_UI_128BIT    <td>lq_ui_128bit        <td>十六字节      <td>十六字节
 * <tr><td>LQ_UI_SIZE      <td>uint8_t             <td>四字节        <td>四字节
 * <tr><td>LQ_F_32BIT      <td>float               <td>四字节        <td>四字节
 * <tr><td>LQ_D_64BIT      <td>double              <td>八字节        <td>八字节
 * </table>
 *@note 用户除非系统不属于32位或64位的时候，否则此模块不会出错。如果出错请按照本身系统字节与上诉表格进行对照改写。
 * @{
 */

typedef  int8_t           LQ_I_8BIT;     //!<LQ有符号一字节类型重定义             
typedef  int16_t          LQ_I_16BIT;    //!<LQ有符号二字节类型重定义       
typedef  int32_t          LQ_I_32BIT;    //!<LQ有符号四字节类型重定义 
typedef  int64_t          LQ_I_64BIT;    //!<LQ有符号八字节类型重定义       
typedef  int8_t           LQ_I_SIZE;     //!<LQ有符号大小类型重定义        

typedef  uint8_t          LQ_UI_8BIT;     //!<LQ有符号一字节类型重定义             
typedef  uint16_t         LQ_UI_16BIT;    //!<LQ有符号二字节类型重定义       
typedef  uint32_t         LQ_UI_32BIT;    //!<LQ有符号四字节类型重定义 
typedef  uint64_t         LQ_UI_64BIT;    //!<LQ有符号八字节类型重定义       
typedef  uint8_t          LQ_UI_SIZE;     //!<LQ有符号大小类型重定义    

typedef float             LQ_F_32BIT;  //!<LQ浮点型32位类型重定义
typedef double            LQ_D_64BIT;  //!<LQ浮点型64位类型重定义
typedef void              LQ_VIOD;     //!<LQ空类型变量重定义
typedef uint8_t           LQ_BOOL;     //!<LQ构建布尔型变量
#define LQ_NULL 0                      //!<LQ映射空类型

#define LQ_INLINE static __inline       //!<内联类型映射
#define LQ_I_8BIT_MAX     INT8_MAX
#define LQ_I_8BIT_MIN     INT8_MIN
#define LQ_UI_8BIT_MAX    UINT8_MAX
#define LQ_UI_8BIT_MIN    0


#define LQ_I_16BIT_MAX     INT16_MAX
#define LQ_I_16BIT_MIN     INT16_MIN
#define LQ_UI_16BIT_MAX    UINT16_MAX
#define LQ_UI_16BIT_MIN    0



#define LQ_I_32BIT_MAX     INT32_MAX
#define LQ_I_32BIT_MIN     INT32_MIN
#define LQ_UI_32BIT_MAX    UINT32_MAX
#define LQ_UI_32BIT_MIN    0



   
//!<以8BIT构建有符号整形Q格式类型
typedef LQ_I_8BIT                 LQ_INT8_Q;
typedef LQ_I_8BIT                 LQ_INT8_Q7;
typedef LQ_I_8BIT                 LQ_INT8_Q6;
typedef LQ_I_8BIT                 LQ_INT8_Q5;
typedef LQ_I_8BIT                 LQ_INT8_Q4;
typedef LQ_I_8BIT                 LQ_INT8_Q3;
typedef LQ_I_8BIT                 LQ_INT8_Q2;
typedef LQ_I_8BIT                 LQ_INT8_Q1;
// !< 以8BIT构建无符号整形Q格式类型
typedef LQ_UI_8BIT                LQ_UINT8_UQ;
typedef LQ_UI_8BIT                LQ_UINT8_UQ8;
typedef LQ_UI_8BIT                LQ_UINT8_UQ7;
typedef LQ_UI_8BIT                LQ_UINT8_UQ6;
typedef LQ_UI_8BIT                LQ_UINT8_UQ5;
typedef LQ_UI_8BIT                LQ_UINT8_UQ4;
typedef LQ_UI_8BIT                LQ_UINT8_UQ3;
typedef LQ_UI_8BIT                LQ_UINT8_UQ2;
typedef LQ_UI_8BIT                LQ_UINT8_UQ1;
// !< 以16BIT构建有符号整形Q格式类型
typedef LQ_I_16BIT                LQ_INT16_Q;
typedef LQ_I_16BIT                LQ_INT16_Q15;
typedef LQ_I_16BIT                LQ_INT16_Q14;
typedef LQ_I_16BIT                LQ_INT16_Q13;
typedef LQ_I_16BIT                LQ_INT16_Q12;
typedef LQ_I_16BIT                LQ_INT16_Q11;
typedef LQ_I_16BIT                LQ_INT16_Q10;
typedef LQ_I_16BIT                LQ_INT16_Q9;
typedef LQ_I_16BIT                LQ_INT16_Q8;
typedef LQ_I_16BIT                LQ_INT16_Q7;
typedef LQ_I_16BIT                LQ_INT16_Q6;
typedef LQ_I_16BIT                LQ_INT16_Q5;
typedef LQ_I_16BIT                LQ_INT16_Q4;
typedef LQ_I_16BIT                LQ_INT16_Q3;
typedef LQ_I_16BIT                LQ_INT16_Q2;
typedef LQ_I_16BIT                LQ_INT16_Q1;
 
//!<以16BIT构建无符号整形Q格式类型
typedef LQ_UI_16BIT               LQ_UINT16_UQ;
typedef LQ_UI_16BIT               LQ_UINT16_UQ16;
typedef LQ_UI_16BIT               LQ_UINT16_UQ15;
typedef LQ_UI_16BIT               LQ_UINT16_UQ14;
typedef LQ_UI_16BIT               LQ_UINT16_UQ13;
typedef LQ_UI_16BIT               LQ_UINT16_UQ12;
typedef LQ_UI_16BIT               LQ_UINT16_UQ11;
typedef LQ_UI_16BIT               LQ_UINT16_UQ10;
typedef LQ_UI_16BIT               LQ_UINT16_UQ9;
typedef LQ_UI_16BIT               LQ_UINT16_UQ8;
typedef LQ_UI_16BIT               LQ_UINT16_UQ7;
typedef LQ_UI_16BIT               LQ_UINT16_UQ6;
typedef LQ_UI_16BIT               LQ_UINT16_UQ5;
typedef LQ_UI_16BIT               LQ_UINT16_UQ4;
typedef LQ_UI_16BIT               LQ_UINT16_UQ3;
typedef LQ_UI_16BIT               LQ_UINT16_UQ2;
typedef LQ_UI_16BIT               LQ_UINT16_UQ1;

// !< 以32BIT构建有符号整形Q格式类型
typedef LQ_I_32BIT                LQ_INT32_Q;
typedef LQ_I_32BIT                LQ_INT32_Q31;
typedef LQ_I_32BIT                LQ_INT32_Q30;
typedef LQ_I_32BIT                LQ_INT32_Q29;
typedef LQ_I_32BIT                LQ_INT32_Q28;
typedef LQ_I_32BIT                LQ_INT32_Q27;
typedef LQ_I_32BIT                LQ_INT32_Q26;
typedef LQ_I_32BIT                LQ_INT32_Q25;
typedef LQ_I_32BIT                LQ_INT32_Q24;
typedef LQ_I_32BIT                LQ_INT32_Q23;
typedef LQ_I_32BIT                LQ_INT32_Q22;
typedef LQ_I_32BIT                LQ_INT32_Q21;
typedef LQ_I_32BIT                LQ_INT32_Q20;
typedef LQ_I_32BIT                LQ_INT32_Q19;
typedef LQ_I_32BIT                LQ_INT32_Q18;
typedef LQ_I_32BIT                LQ_INT32_Q17;
typedef LQ_I_32BIT                LQ_INT32_Q16;
typedef LQ_I_32BIT                LQ_INT32_Q15;
typedef LQ_I_32BIT                LQ_INT32_Q14;
typedef LQ_I_32BIT                LQ_INT32_Q13;
typedef LQ_I_32BIT                LQ_INT32_Q12;
typedef LQ_I_32BIT                LQ_INT32_Q11;
typedef LQ_I_32BIT                LQ_INT32_Q10;
typedef LQ_I_32BIT                LQ_INT32_Q9;
typedef LQ_I_32BIT                LQ_INT32_Q8;
typedef LQ_I_32BIT                LQ_INT32_Q7;
typedef LQ_I_32BIT                LQ_INT32_Q6;
typedef LQ_I_32BIT                LQ_INT32_Q5;
typedef LQ_I_32BIT                LQ_INT32_Q4;
typedef LQ_I_32BIT                LQ_INT32_Q3;
typedef LQ_I_32BIT                LQ_INT32_Q2;
typedef LQ_I_32BIT                LQ_INT32_Q1;
// !< 以8BIT构建无符号整形Q格式类型
typedef LQ_UI_32BIT               LQ_UINT32_UQ;
typedef LQ_UI_32BIT               LQ_UINT32_UQ32;
typedef LQ_UI_32BIT               LQ_UINT32_UQ31;
typedef LQ_UI_32BIT               LQ_UINT32_UQ30;
typedef LQ_UI_32BIT               LQ_UINT32_UQ29;
typedef LQ_UI_32BIT               LQ_UINT32_UQ28;
typedef LQ_UI_32BIT               LQ_UINT32_UQ27;
typedef LQ_UI_32BIT               LQ_UINT32_UQ26;
typedef LQ_UI_32BIT               LQ_UINT32_UQ25;
typedef LQ_UI_32BIT               LQ_UINT32_UQ24;
typedef LQ_UI_32BIT               LQ_UINT32_UQ23;
typedef LQ_UI_32BIT               LQ_UINT32_UQ22;
typedef LQ_UI_32BIT               LQ_UINT32_UQ21;
typedef LQ_UI_32BIT               LQ_UINT32_UQ20;
typedef LQ_UI_32BIT               LQ_UINT32_UQ19;
typedef LQ_UI_32BIT               LQ_UINT32_UQ18;
typedef LQ_UI_32BIT               LQ_UINT32_UQ17;
typedef LQ_UI_32BIT               LQ_UINT32_UQ16;
typedef LQ_UI_32BIT               LQ_UINT32_UQ15;
typedef LQ_UI_32BIT               LQ_UINT32_UQ14;
typedef LQ_UI_32BIT               LQ_UINT32_UQ13;
typedef LQ_UI_32BIT               LQ_UINT32_UQ12;
typedef LQ_UI_32BIT               LQ_UINT32_UQ11;
typedef LQ_UI_32BIT               LQ_UINT32_UQ10;
typedef LQ_UI_32BIT               LQ_UINT32_UQ9;
typedef LQ_UI_32BIT               LQ_UINT32_UQ8;
typedef LQ_UI_32BIT               LQ_UINT32_UQ7;
typedef LQ_UI_32BIT               LQ_UINT32_UQ6;
typedef LQ_UI_32BIT               LQ_UINT32_UQ5;
typedef LQ_UI_32BIT               LQ_UINT32_UQ4;
typedef LQ_UI_32BIT               LQ_UINT32_UQ3;
typedef LQ_UI_32BIT               LQ_UINT32_UQ2;
typedef LQ_UI_32BIT               LQ_UINT32_UQ1;


#endif
