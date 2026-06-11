/**
 * @file screen_settings_upgrade_gen.h
 */

#ifndef SCREEN_SETTINGS_UPGRADE_H
#define SCREEN_SETTINGS_UPGRADE_H

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
    SCREEN_SETTINGS_UPGRADE_TIMELINE_CONTENT_OPEN = 0,
    _SCREEN_SETTINGS_UPGRADE_TIMELINE_CNT = 1
}screen_settings_upgrade_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen_settings_upgrade_create(void);

/**
 * Get a timeline of a screen_settings_upgrade
 * @param obj          pointer to a screen_settings_upgrade component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen_settings_upgrade_get_timeline(lv_obj_t * obj, screen_settings_upgrade_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_SETTINGS_UPGRADE_H*/