/**
 * @file screen_line_voltage_demand_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_line_voltage_demand_gen.h"
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

lv_obj_t * screen_line_voltage_demand_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_line_voltage_demand_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_t * page_content = lv_obj_create(lv_obj_0);
    lv_obj_set_name(page_content, "page_content");
    lv_obj_set_x(page_content, 0);
    lv_obj_set_y(page_content, 0);
    lv_obj_set_width(page_content, 320);
    lv_obj_set_height(page_content, 207);
    lv_obj_set_style_bg_opa(page_content, 0, 0);
    lv_obj_set_style_border_width(page_content, 0, 0);
    lv_obj_set_style_pad_all(page_content, 0, 0);
    lv_obj_set_flag(page_content, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_0 = lv_label_create(page_content);
    lv_label_set_text(lv_label_0, "线电压(V)和需量");
    lv_obj_set_x(lv_label_0, 156);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 140);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_set_text(lv_label_1, "AB线");
    lv_obj_set_x(lv_label_1, 24);
    lv_obj_set_y(lv_label_1, 55);
    lv_obj_add_style(lv_label_1, &me106_text_18_yellow, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_set_text(lv_label_2, "391.05");
    lv_obj_set_x(lv_label_2, 24);
    lv_obj_set_y(lv_label_2, 77);
    lv_obj_add_style(lv_label_2, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_ab_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(line_ab_voltage_issue, "line_ab_voltage_issue");
    lv_image_set_src(line_ab_voltage_issue, meter_icon_warning);
    lv_obj_set_x(line_ab_voltage_issue, 78);
    lv_obj_set_y(line_ab_voltage_issue, 58);
    lv_obj_bind_flag_if_not_eq(line_ab_voltage_issue, &meter_line_ab_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "BC线");
    lv_obj_set_x(lv_label_3, 123);
    lv_obj_set_y(lv_label_3, 55);
    lv_obj_add_style(lv_label_3, &me106_text_18_green, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "381.55");
    lv_obj_set_x(lv_label_4, 123);
    lv_obj_set_y(lv_label_4, 77);
    lv_obj_add_style(lv_label_4, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_bc_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(line_bc_voltage_issue, "line_bc_voltage_issue");
    lv_image_set_src(line_bc_voltage_issue, meter_icon_warning);
    lv_obj_set_x(line_bc_voltage_issue, 177);
    lv_obj_set_y(line_bc_voltage_issue, 58);
    lv_obj_bind_flag_if_not_eq(line_bc_voltage_issue, &meter_line_bc_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_set_text(lv_label_5, "CA线");
    lv_obj_set_x(lv_label_5, 222);
    lv_obj_set_y(lv_label_5, 55);
    lv_obj_add_style(lv_label_5, &me106_text_18_red, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "389.84");
    lv_obj_set_x(lv_label_6, 222);
    lv_obj_set_y(lv_label_6, 77);
    lv_obj_add_style(lv_label_6, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_ca_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(line_ca_voltage_issue, "line_ca_voltage_issue");
    lv_image_set_src(line_ca_voltage_issue, meter_icon_warning);
    lv_obj_set_x(line_ca_voltage_issue, 276);
    lv_obj_set_y(line_ca_voltage_issue, 58);
    lv_obj_bind_flag_if_not_eq(line_ca_voltage_issue, &meter_line_ca_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "当前需量（kW）");
    lv_obj_set_x(lv_label_7, 23);
    lv_obj_set_y(lv_label_7, 120);
    lv_obj_add_style(lv_label_7, &me106_text_16_gray_ba, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_set_text(lv_label_8, "4851.2");
    lv_obj_set_x(lv_label_8, 23);
    lv_obj_set_y(lv_label_8, 142);
    lv_obj_add_style(lv_label_8, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_current_demand_issue = lv_image_create(page_content);
    lv_obj_set_name(line_current_demand_issue, "line_current_demand_issue");
    lv_image_set_src(line_current_demand_issue, meter_icon_warning);
    lv_obj_set_x(line_current_demand_issue, 125);
    lv_obj_set_y(line_current_demand_issue, 145);
    lv_obj_bind_flag_if_not_eq(line_current_demand_issue, &meter_line_current_demand_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "最大需量（kW）");
    lv_obj_set_x(lv_label_9, 157);
    lv_obj_set_y(lv_label_9, 120);
    lv_obj_add_style(lv_label_9, &me106_text_16_gray_ba, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_10 = lv_label_create(page_content);
    lv_label_set_text(lv_label_10, "5482.54");
    lv_obj_set_x(lv_label_10, 157);
    lv_obj_set_y(lv_label_10, 142);
    lv_obj_add_style(lv_label_10, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_max_demand_issue = lv_image_create(page_content);
    lv_obj_set_name(line_max_demand_issue, "line_max_demand_issue");
    lv_image_set_src(line_max_demand_issue, meter_icon_warning);
    lv_obj_set_x(line_max_demand_issue, 259);
    lv_obj_set_y(line_max_demand_issue, 145);
    lv_obj_bind_flag_if_not_eq(line_max_demand_issue, &meter_line_max_demand_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * screen_line_voltage_demand_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_line_voltage_demand_bottom_bar, "screen_line_voltage_demand_bottom_bar");
    lv_obj_set_x(screen_line_voltage_demand_bottom_bar, 0);
    lv_obj_set_y(screen_line_voltage_demand_bottom_bar, 207);
    lv_obj_set_width(screen_line_voltage_demand_bottom_bar, 320);
    lv_obj_set_height(screen_line_voltage_demand_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_line_voltage_demand_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_line_voltage_demand_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_line_voltage_demand_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_line_voltage_demand_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_line_voltage_demand_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_line_voltage_demand_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * line_demand_btn_settings = lv_button_create(lv_obj_0);
    lv_obj_set_name(line_demand_btn_settings, "line_demand_btn_settings");
    lv_obj_set_x(line_demand_btn_settings, 0);
    lv_obj_set_y(line_demand_btn_settings, 207);
    lv_obj_set_width(line_demand_btn_settings, 79);
    lv_obj_set_height(line_demand_btn_settings, 32);
    lv_obj_add_style(line_demand_btn_settings, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_settings, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_settings, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(line_demand_btn_settings, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(line_demand_btn_settings, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_settings, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(line_demand_btn_settings);
    lv_image_set_src(lv_image_0, meter_setting);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_x(lv_image_0, 0);
    lv_obj_set_y(lv_image_0, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 16, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 16, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 110, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 110, 0);
    
    lv_obj_add_screen_create_event(line_demand_btn_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_IN, 120, 0);
    
    lv_obj_t * line_demand_btn_reserved = lv_button_create(lv_obj_0);
    lv_obj_set_name(line_demand_btn_reserved, "line_demand_btn_reserved");
    lv_obj_set_x(line_demand_btn_reserved, 80);
    lv_obj_set_y(line_demand_btn_reserved, 207);
    lv_obj_set_width(line_demand_btn_reserved, 79);
    lv_obj_set_height(line_demand_btn_reserved, 32);
    lv_obj_add_style(line_demand_btn_reserved, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(line_demand_btn_reserved, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(line_demand_btn_reserved);
    lv_image_set_src(lv_image_1, meter_menu);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_x(lv_image_1, 0);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 12, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 12, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 150, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 150, 0);
    
    lv_obj_add_screen_create_event(line_demand_btn_reserved, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_FADE_IN, 120, 0);
    
    lv_obj_t * line_demand_btn_prev = lv_button_create(lv_obj_0);
    lv_obj_set_name(line_demand_btn_prev, "line_demand_btn_prev");
    lv_obj_set_x(line_demand_btn_prev, 160);
    lv_obj_set_y(line_demand_btn_prev, 207);
    lv_obj_set_width(line_demand_btn_prev, 79);
    lv_obj_set_height(line_demand_btn_prev, 32);
    lv_obj_add_style(line_demand_btn_prev, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(line_demand_btn_prev, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(line_demand_btn_prev);
    lv_image_set_src(lv_image_2, meter_arrow_left);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_obj_add_screen_create_event(line_demand_btn_prev, LV_EVENT_CLICKED, screen_phase_frequency_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * line_demand_btn_next = lv_button_create(lv_obj_0);
    lv_obj_set_name(line_demand_btn_next, "line_demand_btn_next");
    lv_obj_set_x(line_demand_btn_next, 240);
    lv_obj_set_y(line_demand_btn_next, 207);
    lv_obj_set_width(line_demand_btn_next, 80);
    lv_obj_set_height(line_demand_btn_next, 32);
    lv_obj_add_style(line_demand_btn_next, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(line_demand_btn_next, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(line_demand_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(line_demand_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(line_demand_btn_next);
    lv_image_set_src(lv_image_3, meter_arrow_right);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_3, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 120, 0);
    
    lv_obj_add_screen_create_event(line_demand_btn_next, LV_EVENT_CLICKED, screen_home_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_LINE_VOLTAGE_DEMAND_TIMELINE_CNT);
    at_array[SCREEN_LINE_VOLTAGE_DEMAND_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_line_voltage_demand_get_timeline(lv_obj_0, SCREEN_LINE_VOLTAGE_DEMAND_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_line_voltage_demand_get_timeline(lv_obj_t * obj, screen_line_voltage_demand_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_LINE_VOLTAGE_DEMAND_TIMELINE_CNT) {
        LV_LOG_WARN("screen_line_voltage_demand has no timeline with %d ID", timeline_id);
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
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "page_content"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "page_content"));
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
    for(i = 0; i < _SCREEN_LINE_VOLTAGE_DEMAND_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

