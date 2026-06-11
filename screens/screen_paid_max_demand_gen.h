/**
 * @file screen_paid_max_demand_gen.h
 */

#ifndef SCREEN_PAID_MAX_DEMAND_H
#define SCREEN_PAID_MAX_DEMAND_H

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
    SCREEN_PAID_MAX_DEMAND_TIMELINE_CONTENT_OPEN = 0,
    _SCREEN_PAID_MAX_DEMAND_TIMELINE_CNT = 1
}screen_paid_max_demand_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen_paid_max_demand_create(void);

/**
 * Get a timeline of a screen_paid_max_demand
 * @param obj          pointer to a screen_paid_max_demand component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen_paid_max_demand_get_timeline(lv_obj_t * obj, screen_paid_max_demand_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_PAID_MAX_DEMAND_H*/