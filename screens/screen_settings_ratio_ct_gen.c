/**
 * @file screen_settings_ratio_ct_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_ratio_ct_gen.h"
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

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_settings_ratio_ct_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_ratio_ct_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_ratio_digit_selected_index, LV_EVENT_SCREEN_LOADED, 0);
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
    lv_label_set_text(lv_label_0, "CT变比");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ct_ratio_digit_0 = lv_button_create(page_content);
    lv_obj_set_name(ct_ratio_digit_0, "ct_ratio_digit_0");
    lv_obj_set_x(ct_ratio_digit_0, 40);
    lv_obj_set_y(ct_ratio_digit_0, 90);
    lv_obj_set_width(ct_ratio_digit_0, 48);
    lv_obj_set_height(ct_ratio_digit_0, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_0, 0, 0);
    lv_obj_add_style(ct_ratio_digit_0, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_0, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_0, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ct_ratio_digit_0_selected_bg = lv_obj_create(ct_ratio_digit_0);
    lv_obj_set_name(ct_ratio_digit_0_selected_bg, "ct_ratio_digit_0_selected_bg");
    lv_obj_set_x(ct_ratio_digit_0_selected_bg, 0);
    lv_obj_set_y(ct_ratio_digit_0_selected_bg, 0);
    lv_obj_set_width(ct_ratio_digit_0_selected_bg, 48);
    lv_obj_set_height(ct_ratio_digit_0_selected_bg, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_0_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_digit_0_selected_bg, 0, 0);
    lv_obj_set_flag(ct_ratio_digit_0_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ct_ratio_digit_0_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_0_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_0_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ct_ratio_digit_0_selected_bg, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(ct_ratio_digit_0);
    lv_label_bind_text(lv_label_1, &meter_ct_ratio_digit_0, "%d");
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_1, 48);
    lv_obj_add_style(lv_label_1, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ct_ratio_digit_0, &meter_ratio_digit_selected_index, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * ct_ratio_digit_1 = lv_button_create(page_content);
    lv_obj_set_name(ct_ratio_digit_1, "ct_ratio_digit_1");
    lv_obj_set_x(ct_ratio_digit_1, 104);
    lv_obj_set_y(ct_ratio_digit_1, 90);
    lv_obj_set_width(ct_ratio_digit_1, 48);
    lv_obj_set_height(ct_ratio_digit_1, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_1, 0, 0);
    lv_obj_add_style(ct_ratio_digit_1, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_1, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_1, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ct_ratio_digit_1_selected_bg = lv_obj_create(ct_ratio_digit_1);
    lv_obj_set_name(ct_ratio_digit_1_selected_bg, "ct_ratio_digit_1_selected_bg");
    lv_obj_set_x(ct_ratio_digit_1_selected_bg, 0);
    lv_obj_set_y(ct_ratio_digit_1_selected_bg, 0);
    lv_obj_set_width(ct_ratio_digit_1_selected_bg, 48);
    lv_obj_set_height(ct_ratio_digit_1_selected_bg, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_1_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_digit_1_selected_bg, 0, 0);
    lv_obj_set_flag(ct_ratio_digit_1_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ct_ratio_digit_1_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_1_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_1_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ct_ratio_digit_1_selected_bg, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_2 = lv_label_create(ct_ratio_digit_1);
    lv_label_bind_text(lv_label_2, &meter_ct_ratio_digit_1, "%d");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_2, 48);
    lv_obj_add_style(lv_label_2, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ct_ratio_digit_1, &meter_ratio_digit_selected_index, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * ct_ratio_digit_2 = lv_button_create(page_content);
    lv_obj_set_name(ct_ratio_digit_2, "ct_ratio_digit_2");
    lv_obj_set_x(ct_ratio_digit_2, 168);
    lv_obj_set_y(ct_ratio_digit_2, 90);
    lv_obj_set_width(ct_ratio_digit_2, 48);
    lv_obj_set_height(ct_ratio_digit_2, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_2, 0, 0);
    lv_obj_add_style(ct_ratio_digit_2, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_2, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_2, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ct_ratio_digit_2_selected_bg = lv_obj_create(ct_ratio_digit_2);
    lv_obj_set_name(ct_ratio_digit_2_selected_bg, "ct_ratio_digit_2_selected_bg");
    lv_obj_set_x(ct_ratio_digit_2_selected_bg, 0);
    lv_obj_set_y(ct_ratio_digit_2_selected_bg, 0);
    lv_obj_set_width(ct_ratio_digit_2_selected_bg, 48);
    lv_obj_set_height(ct_ratio_digit_2_selected_bg, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_2_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_digit_2_selected_bg, 0, 0);
    lv_obj_set_flag(ct_ratio_digit_2_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ct_ratio_digit_2_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_2_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_2_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ct_ratio_digit_2_selected_bg, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(ct_ratio_digit_2);
    lv_label_bind_text(lv_label_3, &meter_ct_ratio_digit_2, "%d");
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_3, 48);
    lv_obj_add_style(lv_label_3, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ct_ratio_digit_2, &meter_ratio_digit_selected_index, LV_EVENT_CLICKED, 2);
    
    lv_obj_t * ct_ratio_digit_3 = lv_button_create(page_content);
    lv_obj_set_name(ct_ratio_digit_3, "ct_ratio_digit_3");
    lv_obj_set_x(ct_ratio_digit_3, 232);
    lv_obj_set_y(ct_ratio_digit_3, 90);
    lv_obj_set_width(ct_ratio_digit_3, 48);
    lv_obj_set_height(ct_ratio_digit_3, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_3, 0, 0);
    lv_obj_add_style(ct_ratio_digit_3, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_3, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_3, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ct_ratio_digit_3_selected_bg = lv_obj_create(ct_ratio_digit_3);
    lv_obj_set_name(ct_ratio_digit_3_selected_bg, "ct_ratio_digit_3_selected_bg");
    lv_obj_set_x(ct_ratio_digit_3_selected_bg, 0);
    lv_obj_set_y(ct_ratio_digit_3_selected_bg, 0);
    lv_obj_set_width(ct_ratio_digit_3_selected_bg, 48);
    lv_obj_set_height(ct_ratio_digit_3_selected_bg, 60);
    lv_obj_set_style_pad_all(ct_ratio_digit_3_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_digit_3_selected_bg, 0, 0);
    lv_obj_set_flag(ct_ratio_digit_3_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ct_ratio_digit_3_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ct_ratio_digit_3_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_digit_3_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ct_ratio_digit_3_selected_bg, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
    
    lv_obj_t * lv_label_4 = lv_label_create(ct_ratio_digit_3);
    lv_label_bind_text(lv_label_4, &meter_ct_ratio_digit_3, "%d");
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_4, 48);
    lv_obj_add_style(lv_label_4, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ct_ratio_digit_3, &meter_ratio_digit_selected_index, LV_EVENT_CLICKED, 3);
    
    lv_obj_t * screen_settings_ratio_ct_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_ratio_ct_bottom_bar, "screen_settings_ratio_ct_bottom_bar");
    lv_obj_set_x(screen_settings_ratio_ct_bottom_bar, 0);
    lv_obj_set_y(screen_settings_ratio_ct_bottom_bar, 207);
    lv_obj_set_width(screen_settings_ratio_ct_bottom_bar, 320);
    lv_obj_set_height(screen_settings_ratio_ct_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_ratio_ct_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_ratio_ct_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_ratio_ct_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_ratio_ct_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_ratio_ct_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_ratio_ct_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * ct_ratio_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_return, "ct_ratio_btn_return");
    lv_obj_set_x(ct_ratio_btn_return, 0);
    lv_obj_set_y(ct_ratio_btn_return, 207);
    lv_obj_set_width(ct_ratio_btn_return, 79);
    lv_obj_set_height(ct_ratio_btn_return, 32);
    lv_obj_add_style(ct_ratio_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ct_ratio_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(ct_ratio_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(ct_ratio_btn_return, LV_EVENT_CLICKED, screen_settings_ratio_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * ct_ratio_btn_digit = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_digit, "ct_ratio_btn_digit");
    lv_obj_set_x(ct_ratio_btn_digit, 80);
    lv_obj_set_y(ct_ratio_btn_digit, 207);
    lv_obj_set_width(ct_ratio_btn_digit, 79);
    lv_obj_set_height(ct_ratio_btn_digit, 32);
    lv_obj_add_style(ct_ratio_btn_digit, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ct_ratio_btn_digit, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_btn_digit, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(ct_ratio_btn_digit);
    lv_image_set_src(lv_image_1, meter_arrow_up);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_obj_t * ct_ratio_btn_value = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_value, "ct_ratio_btn_value");
    lv_obj_set_x(ct_ratio_btn_value, 160);
    lv_obj_set_y(ct_ratio_btn_value, 207);
    lv_obj_set_width(ct_ratio_btn_value, 79);
    lv_obj_set_height(ct_ratio_btn_value, 32);
    lv_obj_add_style(ct_ratio_btn_value, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ct_ratio_btn_value, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_btn_value, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(ct_ratio_btn_value);
    lv_image_set_src(lv_image_2, meter_arrow_right);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(ct_ratio_btn_value, &meter_ratio_digit_selected_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ct_ratio_btn_value, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(ct_ratio_btn_value, subject_increment_event_0, 3);
    lv_obj_set_subject_increment_event_rollover(ct_ratio_btn_value, subject_increment_event_0, true);
    
    lv_obj_t * ct_ratio_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_yes, "ct_ratio_btn_yes");
    lv_obj_set_x(ct_ratio_btn_yes, 240);
    lv_obj_set_y(ct_ratio_btn_yes, 207);
    lv_obj_set_width(ct_ratio_btn_yes, 80);
    lv_obj_set_height(ct_ratio_btn_yes, 32);
    lv_obj_add_style(ct_ratio_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(ct_ratio_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ct_ratio_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(ct_ratio_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_add_screen_create_event(ct_ratio_btn_yes, LV_EVENT_CLICKED, screen_settings_ratio_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * ct_ratio_btn_value_0 = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_value_0, "ct_ratio_btn_value_0");
    lv_obj_set_x(ct_ratio_btn_value_0, 80);
    lv_obj_set_y(ct_ratio_btn_value_0, 207);
    lv_obj_set_width(ct_ratio_btn_value_0, 79);
    lv_obj_set_height(ct_ratio_btn_value_0, 32);
    lv_obj_set_style_bg_opa(ct_ratio_btn_value_0, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_btn_value_0, 0, 0);
    lv_obj_set_style_shadow_width(ct_ratio_btn_value_0, 0, 0);
    lv_obj_bind_flag_if_not_eq(ct_ratio_btn_value_0, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(ct_ratio_btn_value_0, &meter_ct_ratio_digit_0, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ct_ratio_btn_value_0, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(ct_ratio_btn_value_0, subject_increment_event_1, 9);
    lv_obj_set_subject_increment_event_rollover(ct_ratio_btn_value_0, subject_increment_event_1, true);
    
    lv_obj_t * ct_ratio_btn_value_1 = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_value_1, "ct_ratio_btn_value_1");
    lv_obj_set_x(ct_ratio_btn_value_1, 80);
    lv_obj_set_y(ct_ratio_btn_value_1, 207);
    lv_obj_set_width(ct_ratio_btn_value_1, 79);
    lv_obj_set_height(ct_ratio_btn_value_1, 32);
    lv_obj_set_style_bg_opa(ct_ratio_btn_value_1, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_btn_value_1, 0, 0);
    lv_obj_set_style_shadow_width(ct_ratio_btn_value_1, 0, 0);
    lv_obj_bind_flag_if_not_eq(ct_ratio_btn_value_1, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_subject_increment_dsc_t * subject_increment_event_2 = lv_obj_add_subject_increment_event(ct_ratio_btn_value_1, &meter_ct_ratio_digit_1, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ct_ratio_btn_value_1, subject_increment_event_2, 0);
    lv_obj_set_subject_increment_event_max_value(ct_ratio_btn_value_1, subject_increment_event_2, 9);
    lv_obj_set_subject_increment_event_rollover(ct_ratio_btn_value_1, subject_increment_event_2, true);
    
    lv_obj_t * ct_ratio_btn_value_2 = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_value_2, "ct_ratio_btn_value_2");
    lv_obj_set_x(ct_ratio_btn_value_2, 80);
    lv_obj_set_y(ct_ratio_btn_value_2, 207);
    lv_obj_set_width(ct_ratio_btn_value_2, 79);
    lv_obj_set_height(ct_ratio_btn_value_2, 32);
    lv_obj_set_style_bg_opa(ct_ratio_btn_value_2, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_btn_value_2, 0, 0);
    lv_obj_set_style_shadow_width(ct_ratio_btn_value_2, 0, 0);
    lv_obj_bind_flag_if_not_eq(ct_ratio_btn_value_2, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    lv_subject_increment_dsc_t * subject_increment_event_3 = lv_obj_add_subject_increment_event(ct_ratio_btn_value_2, &meter_ct_ratio_digit_2, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ct_ratio_btn_value_2, subject_increment_event_3, 0);
    lv_obj_set_subject_increment_event_max_value(ct_ratio_btn_value_2, subject_increment_event_3, 9);
    lv_obj_set_subject_increment_event_rollover(ct_ratio_btn_value_2, subject_increment_event_3, true);
    
    lv_obj_t * ct_ratio_btn_value_3 = lv_button_create(lv_obj_0);
    lv_obj_set_name(ct_ratio_btn_value_3, "ct_ratio_btn_value_3");
    lv_obj_set_x(ct_ratio_btn_value_3, 80);
    lv_obj_set_y(ct_ratio_btn_value_3, 207);
    lv_obj_set_width(ct_ratio_btn_value_3, 79);
    lv_obj_set_height(ct_ratio_btn_value_3, 32);
    lv_obj_set_style_bg_opa(ct_ratio_btn_value_3, 0, 0);
    lv_obj_set_style_border_width(ct_ratio_btn_value_3, 0, 0);
    lv_obj_set_style_shadow_width(ct_ratio_btn_value_3, 0, 0);
    lv_obj_bind_flag_if_not_eq(ct_ratio_btn_value_3, &meter_ratio_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
    lv_subject_increment_dsc_t * subject_increment_event_4 = lv_obj_add_subject_increment_event(ct_ratio_btn_value_3, &meter_ct_ratio_digit_3, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ct_ratio_btn_value_3, subject_increment_event_4, 0);
    lv_obj_set_subject_increment_event_max_value(ct_ratio_btn_value_3, subject_increment_event_4, 9);
    lv_obj_set_subject_increment_event_rollover(ct_ratio_btn_value_3, subject_increment_event_4, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

