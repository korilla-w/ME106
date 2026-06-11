/**
 * @file screen_energy_data_gen.h
 */

#ifndef SCREEN_ENERGY_DATA_H
#define SCREEN_ENERGY_DATA_H

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

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {
    SCREEN_ENERGY_DATA_TIMELINE_CONTENT_OPEN = 0,
    _SCREEN_ENERGY_DATA_TIMELINE_CNT = 1
}screen_energy_data_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * screen_energy_data_create(void);

/**
 * Get a timeline of a screen_energy_data
 * @param obj          pointer to a screen_energy_data component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * screen_energy_data_get_timeline(lv_obj_t * obj, screen_energy_data_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_ENERGY_DATA_H*/