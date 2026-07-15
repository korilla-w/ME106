/**
 * @file screen_boot_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_boot_gen.h"
#include "../power_meter_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

static lv_anim_timeline_t * timeline_boot_intro_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_boot_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_boot_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
    lv_obj_t * boot_logo_group = lv_obj_create(lv_obj_0);
    lv_obj_set_name(boot_logo_group, "boot_logo_group");
    lv_obj_set_x(boot_logo_group, 30);
    lv_obj_set_y(boot_logo_group, 76);
    lv_obj_set_width(boot_logo_group, 260);
    lv_obj_set_height(boot_logo_group, 61);
    lv_obj_set_style_bg_opa(boot_logo_group, 0, 0);
    lv_obj_set_style_border_width(boot_logo_group, 0, 0);
    lv_obj_set_style_pad_all(boot_logo_group, 0, 0);
    lv_obj_set_flag(boot_logo_group, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * boot_flame_1 = lv_image_create(boot_logo_group);
    lv_obj_set_name(boot_flame_1, "boot_flame_1");
    lv_image_set_src(boot_flame_1, meter_boot_logo_flame_1);
    lv_obj_set_x(boot_flame_1, 0);
    lv_obj_set_y(boot_flame_1, 0);
    
    lv_obj_t * boot_flame_2 = lv_image_create(boot_logo_group);
    lv_obj_set_name(boot_flame_2, "boot_flame_2");
    lv_image_set_src(boot_flame_2, meter_boot_logo_flame_2);
    lv_obj_set_x(boot_flame_2, 11);
    lv_obj_set_y(boot_flame_2, 13);
    
    lv_obj_t * boot_flame_3 = lv_image_create(boot_logo_group);
    lv_obj_set_name(boot_flame_3, "boot_flame_3");
    lv_image_set_src(boot_flame_3, meter_boot_logo_flame_3);
    lv_obj_set_x(boot_flame_3, 16);
    lv_obj_set_y(boot_flame_3, 33);
    
    lv_obj_t * boot_name_zh = lv_image_create(boot_logo_group);
    lv_obj_set_name(boot_name_zh, "boot_name_zh");
    lv_image_set_src(boot_name_zh, meter_boot_logo_name_zh);
    lv_obj_set_x(boot_name_zh, 54);
    lv_obj_set_y(boot_name_zh, 6);
    
    lv_obj_t * boot_name_en = lv_image_create(boot_logo_group);
    lv_obj_set_name(boot_name_en, "boot_name_en");
    lv_image_set_src(boot_name_en, meter_boot_logo_name_en);
    lv_obj_set_x(boot_name_en, 54);
    lv_obj_set_y(boot_name_en, 45);
    
    lv_obj_t * boot_tagline = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_tagline, "boot_tagline");
    lv_label_set_text(boot_tagline, "智控电能 · 润泽未来");
    lv_obj_set_x(boot_tagline, 40);
    lv_obj_set_y(boot_tagline, 156);
    lv_obj_set_width(boot_tagline, 240);
    lv_obj_set_style_text_align(boot_tagline, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_style(boot_tagline, &me106_text_16_gray_d8, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_BOOT_TIMELINE_CNT);
    at_array[SCREEN_BOOT_TIMELINE_BOOT_INTRO] = timeline_boot_intro_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_boot_get_timeline(lv_obj_0, SCREEN_BOOT_TIMELINE_BOOT_INTRO), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_boot_get_timeline(lv_obj_t * obj, screen_boot_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_BOOT_TIMELINE_CNT) {
        LV_LOG_WARN("screen_boot has no timeline with %d ID", timeline_id);
        return NULL;
    }

    lv_anim_timeline_t ** at_array = lv_obj_get_user_data(obj);
    return at_array[timeline_id];
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/* Helper function to execute animations */
static void int_anim_exec_cb(lv_anim_t * a, int32_t v)
{
    uint32_t data = (lv_uintptr_t)lv_anim_get_user_data(a);
    lv_style_prop_t prop = data >> 24;
    lv_style_selector_t selector = data & 0x00ffffff;

    lv_style_value_t style_value;
    style_value.num = v;
    lv_obj_set_local_style_prop(a->var, prop, style_value, selector);
}

static lv_anim_timeline_t * timeline_boot_intro_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_1"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 120, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_1"));
    lv_anim_set_values(&a, 8, 0);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 120, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_2"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 230, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_2"));
    lv_anim_set_values(&a, 7, 0);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 230, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_3"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 340, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_flame_3"));
    lv_anim_set_values(&a, 6, 0);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 340, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_name_zh"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 450);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 430, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_X & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_name_zh"));
    lv_anim_set_values(&a, -8, 0);
    lv_anim_set_duration(&a, 450);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 430, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_name_en"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 680, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_name_en"));
    lv_anim_set_values(&a, 4, 0);
    lv_anim_set_duration(&a, 360);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 680, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_tagline"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 420);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 860, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "boot_tagline"));
    lv_anim_set_values(&a, 5, 0);
    lv_anim_set_duration(&a, 420);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 860, &a);

    return at;
}

static void free_timeline_event_cb(lv_event_t * e)
{
    lv_anim_timeline_t ** at_array = lv_event_get_user_data(e);
    uint32_t i;
    for(i = 0; i < _SCREEN_BOOT_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

