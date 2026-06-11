/**
 * @file power_meter_ui.h
 */

#ifndef POWER_METER_UI_H
#define POWER_METER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "power_meter_ui_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * 初始化电表 UI 组件库。
 *
 * 这里只声明 UI 层入口；不要在 UI 初始化中直接读写硬件寄存器。
 */
void power_meter_ui_init(const char * asset_path);


/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*POWER_METER_UI_H*/
