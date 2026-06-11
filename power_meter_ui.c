/**
 * @file power_meter_ui.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "power_meter_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void power_meter_ui_init(const char * asset_path)
{
    /* UI层只负责加载资源和创建界面；硬件初始化留给执行层入口。 */
    power_meter_ui_init_gen(asset_path);

    /* 启动页固定由 UI 入口加载，避免生成顺序或预览状态影响开机首屏。 */
    lv_obj_t * home_screen = screen_home_create();
#if LVGL_VERSION_MAJOR >= 9
    lv_screen_load(home_screen);
#else
    lv_scr_load(home_screen);
#endif

    /* 如需扩展交互，请优先通过 subject/事件向逻辑层传递意图。 */
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
