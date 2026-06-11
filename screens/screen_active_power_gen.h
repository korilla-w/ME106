/**
 * @file screen_active_power_gen.h
 */

#ifndef SCREEN_ACTIVE_POWER_H
#define SCREEN_ACTIVE_POWER_H

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
    SCREEN_ACTIVE_POWER_TIMELINE_CONTENT_OPEN = 0,
    _SCREEN_ACTIVE_POWER_TIMELINE_CNT = 1
}screen_active_power_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen_active_power_create(void);

/**
 * Get a timeline of a screen_active_power
 * @param obj          pointer to a screen_active_power component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen_active_power_get_timeline(lv_obj_t * obj, screen_active_power_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_ACTIVE_POWER_H*/