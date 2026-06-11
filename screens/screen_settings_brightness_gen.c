/**
 * @file screen_settings_brightness_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_brightness_gen.h"
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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_settings_brightness_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_brightness_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_t * brightness_content = lv_obj_create(lv_obj_0);
    lv_obj_set_name(brightness_content, "brightness_content");
    lv_obj_set_x(brightness_content, 0);
    lv_obj_set_y(brightness_content, 0);
    lv_obj_set_width(brightness_content, 320);
    lv_obj_set_height(brightness_content, 207);
    lv_obj_set_style_bg_opa(brightness_content, 0, 0);
    lv_obj_set_style_border_width(brightness_content, 0, 0);
    lv_obj_set_style_pad_all(brightness_content, 0, 0);
    lv_obj_set_flag(brightness_content, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_0 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_0, "屏幕亮度");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_1, "背光亮度");
    lv_obj_set_x(lv_label_1, 42);
    lv_obj_set_y(lv_label_1, 58);
    lv_obj_set_width(lv_label_1, 104);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(brightness_content);
    lv_label_bind_text(lv_label_2, &meter_screen_brightness, "%d%%");
    lv_obj_set_x(lv_label_2, 196);
    lv_obj_set_y(lv_label_2, 50);
    lv_obj_set_width(lv_label_2, 72);
    lv_obj_add_style(lv_label_2, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_3, "‹");
    lv_obj_set_x(lv_label_3, 40);
    lv_obj_set_y(lv_label_3, 105);
    lv_obj_set_width(lv_label_3, 16);
    lv_obj_add_style(lv_label_3, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * brightness_slider = lv_slider_create(brightness_content);
    lv_obj_set_name(brightness_slider, "brightness_slider");
    lv_slider_bind_value(brightness_slider, &meter_screen_brightness);
    lv_slider_set_min_value(brightness_slider, 10);
    lv_slider_set_max_value(brightness_slider, 100);
    lv_obj_set_x(brightness_slider, 68);
    lv_obj_set_y(brightness_slider, 113);
    lv_obj_set_width(brightness_slider, 184);
    lv_obj_set_height(brightness_slider, 10);
    lv_obj_add_style(brightness_slider, &me106_slider_track, 0);
    lv_obj_bind_style(brightness_slider, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(brightness_slider, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_add_style(brightness_slider, &me106_slider_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(brightness_slider, &me106_slider_knob, LV_PART_KNOB);
    
    lv_obj_t * lv_label_4 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_4, "›");
    lv_obj_set_x(lv_label_4, 264);
    lv_obj_set_y(lv_label_4, 105);
    lv_obj_set_width(lv_label_4, 16);
    lv_obj_add_style(lv_label_4, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_5, "LOW");
    lv_obj_set_x(lv_label_5, 68);
    lv_obj_set_y(lv_label_5, 142);
    lv_obj_set_width(lv_label_5, 42);
    lv_obj_add_style(lv_label_5, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(brightness_content);
    lv_label_set_text(lv_label_6, "HIGH");
    lv_obj_set_x(lv_label_6, 210);
    lv_obj_set_y(lv_label_6, 142);
    lv_obj_set_width(lv_label_6, 42);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * screen_settings_brightness_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_brightness_bottom_bar, "screen_settings_brightness_bottom_bar");
    lv_obj_set_x(screen_settings_brightness_bottom_bar, 0);
    lv_obj_set_y(screen_settings_brightness_bottom_bar, 207);
    lv_obj_set_width(screen_settings_brightness_bottom_bar, 320);
    lv_obj_set_height(screen_settings_brightness_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_brightness_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_brightness_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_brightness_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_brightness_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_brightness_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_brightness_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * brightness_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(brightness_btn_return, "brightness_btn_return");
    lv_obj_set_x(brightness_btn_return, 0);
    lv_obj_set_y(brightness_btn_return, 207);
    lv_obj_set_width(brightness_btn_return, 79);
    lv_obj_set_height(brightness_btn_return, 32);
    lv_obj_add_style(brightness_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(brightness_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(brightness_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(brightness_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(brightness_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * brightness_btn_left = lv_button_create(lv_obj_0);
    lv_obj_set_name(brightness_btn_left, "brightness_btn_left");
    lv_obj_set_x(brightness_btn_left, 80);
    lv_obj_set_y(brightness_btn_left, 207);
    lv_obj_set_width(brightness_btn_left, 79);
    lv_obj_set_height(brightness_btn_left, 32);
    lv_obj_add_style(brightness_btn_left, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(brightness_btn_left, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(brightness_btn_left, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(brightness_btn_left);
    lv_image_set_src(lv_image_1, meter_arrow_left);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(brightness_btn_left, &meter_screen_brightness, LV_EVENT_CLICKED, -10);
    lv_obj_set_subject_increment_event_min_value(brightness_btn_left, subject_increment_event_0, 10);
    lv_obj_set_subject_increment_event_max_value(brightness_btn_left, subject_increment_event_0, 100);
    lv_obj_set_subject_increment_event_rollover(brightness_btn_left, subject_increment_event_0, false);
    
    lv_obj_t * brightness_btn_right = lv_button_create(lv_obj_0);
    lv_obj_set_name(brightness_btn_right, "brightness_btn_right");
    lv_obj_set_x(brightness_btn_right, 160);
    lv_obj_set_y(brightness_btn_right, 207);
    lv_obj_set_width(brightness_btn_right, 79);
    lv_obj_set_height(brightness_btn_right, 32);
    lv_obj_add_style(brightness_btn_right, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(brightness_btn_right, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(brightness_btn_right, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(brightness_btn_right);
    lv_image_set_src(lv_image_2, meter_arrow_right);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(brightness_btn_right, &meter_screen_brightness, LV_EVENT_CLICKED, 10);
    lv_obj_set_subject_increment_event_min_value(brightness_btn_right, subject_increment_event_1, 10);
    lv_obj_set_subject_increment_event_max_value(brightness_btn_right, subject_increment_event_1, 100);
    lv_obj_set_subject_increment_event_rollover(brightness_btn_right, subject_increment_event_1, false);
    
    lv_obj_t * brightness_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(brightness_btn_yes, "brightness_btn_yes");
    lv_obj_set_x(brightness_btn_yes, 240);
    lv_obj_set_y(brightness_btn_yes, 207);
    lv_obj_set_width(brightness_btn_yes, 80);
    lv_obj_set_height(brightness_btn_yes, 32);
    lv_obj_add_style(brightness_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(brightness_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(brightness_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(brightness_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_add_screen_create_event(brightness_btn_yes, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_BRIGHTNESS_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_BRIGHTNESS_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_brightness_get_timeline(lv_obj_0, SCREEN_SETTINGS_BRIGHTNESS_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_brightness_get_timeline(lv_obj_t * obj, screen_settings_brightness_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_BRIGHTNESS_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_brightness has no timeline with %d ID", timeline_id);
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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "brightness_content"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "brightness_content"));
    lv_anim_set_values(&a, 4, 0);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    return at;
}

static void free_timeline_event_cb(lv_event_t * e)
{
    lv_anim_timeline_t ** at_array = lv_event_get_user_data(e);
    uint32_t i;
    for(i = 0; i < _SCREEN_SETTINGS_BRIGHTNESS_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

