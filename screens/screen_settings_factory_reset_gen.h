/**
 * @file screen_settings_factory_reset_gen.h
 */

#ifndef SCREEN_SETTINGS_FACTORY_RESET_H
#define SCREEN_SETTINGS_FACTORY_RESET_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {
    SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_FACTORY_DIALOG_OPEN = 0,
    _SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_CNT = 1
}screen_settings_factory_reset_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen_settings_factory_reset_create(void);

/**
 * Get a timeline of a screen_settings_factory_reset
 * @param obj          pointer to a screen_settings_factory_reset component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen_settings_factory_reset_get_timeline(lv_obj_t * obj, screen_settings_factory_reset_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_SETTINGS_FACTORY_RESET_H*/