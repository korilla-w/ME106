/**
 * @file screen_settings_address_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_address_gen.h"
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

lv_obj_t * screen_settings_address_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_address_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_address_digit_selected_index, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_address_invalid_popup, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_t * address_content = lv_obj_create(lv_obj_0);
    lv_obj_set_name(address_content, "address_content");
    lv_obj_set_x(address_content, 0);
    lv_obj_set_y(address_content, 0);
    lv_obj_set_width(address_content, 320);
    lv_obj_set_height(address_content, 207);
    lv_obj_set_style_bg_opa(address_content, 0, 0);
    lv_obj_set_style_border_width(address_content, 0, 0);
    lv_obj_set_style_pad_all(address_content, 0, 0);
    lv_obj_set_flag(address_content, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_0 = lv_label_create(address_content);
    lv_label_set_text(lv_label_0, "电表地址");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * address_badge = lv_obj_create(address_content);
    lv_obj_set_name(address_badge, "address_badge");
    lv_obj_set_x(address_badge, 32);
    lv_obj_set_y(address_badge, 48);
    lv_obj_set_width(address_badge, 256);
    lv_obj_set_height(address_badge, 26);
    lv_obj_set_style_bg_opa(address_badge, 0, 0);
    lv_obj_set_style_border_width(address_badge, 0, 0);
    lv_obj_set_style_pad_all(address_badge, 0, 0);
    lv_obj_set_flag(address_badge, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_1 = lv_label_create(address_badge);
    lv_label_set_text(lv_label_1, "当前地址");
    lv_obj_set_x(lv_label_1, 0);
    lv_obj_set_y(lv_label_1, 5);
    lv_obj_set_width(lv_label_1, 78);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(address_badge);
    lv_label_bind_text(lv_label_2, &meter_address_current_value, "%03d");
    lv_obj_set_x(lv_label_2, 86);
    lv_obj_set_y(lv_label_2, 2);
    lv_obj_set_width(lv_label_2, 54);
    lv_obj_add_style(lv_label_2, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(address_badge);
    lv_label_set_text(lv_label_3, "001-247");
    lv_obj_set_x(lv_label_3, 158);
    lv_obj_set_y(lv_label_3, 5);
    lv_obj_set_width(lv_label_3, 98);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * address_digit_0 = lv_button_create(address_content);
    lv_obj_set_name(address_digit_0, "address_digit_0");
    lv_obj_set_x(address_digit_0, 56);
    lv_obj_set_y(address_digit_0, 92);
    lv_obj_set_width(address_digit_0, 56);
    lv_obj_set_height(address_digit_0, 60);
    lv_obj_set_style_pad_all(address_digit_0, 0, 0);
    lv_obj_add_style(address_digit_0, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(address_digit_0, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_0, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * address_digit_0_selected_bg = lv_obj_create(address_digit_0);
    lv_obj_set_name(address_digit_0_selected_bg, "address_digit_0_selected_bg");
    lv_obj_set_x(address_digit_0_selected_bg, 0);
    lv_obj_set_y(address_digit_0_selected_bg, 0);
    lv_obj_set_width(address_digit_0_selected_bg, 56);
    lv_obj_set_height(address_digit_0_selected_bg, 60);
    lv_obj_set_style_pad_all(address_digit_0_selected_bg, 0, 0);
    lv_obj_set_style_border_width(address_digit_0_selected_bg, 0, 0);
    lv_obj_set_flag(address_digit_0_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(address_digit_0_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(address_digit_0_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_0_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_digit_0_selected_bg, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(address_digit_0);
    lv_label_bind_text(lv_label_4, &meter_address_digit_0, "%d");
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_4, 56);
    lv_obj_add_style(lv_label_4, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(address_digit_0, &meter_address_digit_selected_index, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * address_digit_1 = lv_button_create(address_content);
    lv_obj_set_name(address_digit_1, "address_digit_1");
    lv_obj_set_x(address_digit_1, 132);
    lv_obj_set_y(address_digit_1, 92);
    lv_obj_set_width(address_digit_1, 56);
    lv_obj_set_height(address_digit_1, 60);
    lv_obj_set_style_pad_all(address_digit_1, 0, 0);
    lv_obj_add_style(address_digit_1, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(address_digit_1, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_1, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * address_digit_1_selected_bg = lv_obj_create(address_digit_1);
    lv_obj_set_name(address_digit_1_selected_bg, "address_digit_1_selected_bg");
    lv_obj_set_x(address_digit_1_selected_bg, 0);
    lv_obj_set_y(address_digit_1_selected_bg, 0);
    lv_obj_set_width(address_digit_1_selected_bg, 56);
    lv_obj_set_height(address_digit_1_selected_bg, 60);
    lv_obj_set_style_pad_all(address_digit_1_selected_bg, 0, 0);
    lv_obj_set_style_border_width(address_digit_1_selected_bg, 0, 0);
    lv_obj_set_flag(address_digit_1_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(address_digit_1_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(address_digit_1_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_1_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_digit_1_selected_bg, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_5 = lv_label_create(address_digit_1);
    lv_label_bind_text(lv_label_5, &meter_address_digit_1, "%d");
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_5, 56);
    lv_obj_add_style(lv_label_5, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(address_digit_1, &meter_address_digit_selected_index, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_digit_2 = lv_button_create(address_content);
    lv_obj_set_name(address_digit_2, "address_digit_2");
    lv_obj_set_x(address_digit_2, 208);
    lv_obj_set_y(address_digit_2, 92);
    lv_obj_set_width(address_digit_2, 56);
    lv_obj_set_height(address_digit_2, 60);
    lv_obj_set_style_pad_all(address_digit_2, 0, 0);
    lv_obj_add_style(address_digit_2, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(address_digit_2, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_2, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * address_digit_2_selected_bg = lv_obj_create(address_digit_2);
    lv_obj_set_name(address_digit_2_selected_bg, "address_digit_2_selected_bg");
    lv_obj_set_x(address_digit_2_selected_bg, 0);
    lv_obj_set_y(address_digit_2_selected_bg, 0);
    lv_obj_set_width(address_digit_2_selected_bg, 56);
    lv_obj_set_height(address_digit_2_selected_bg, 60);
    lv_obj_set_style_pad_all(address_digit_2_selected_bg, 0, 0);
    lv_obj_set_style_border_width(address_digit_2_selected_bg, 0, 0);
    lv_obj_set_flag(address_digit_2_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(address_digit_2_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(address_digit_2_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_digit_2_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_digit_2_selected_bg, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(address_digit_2);
    lv_label_bind_text(lv_label_6, &meter_address_digit_2, "%d");
    lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_6, 56);
    lv_obj_add_style(lv_label_6, &me106_text_36_white_center, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(address_digit_2, &meter_address_digit_selected_index, LV_EVENT_CLICKED, 2);
    
    lv_obj_t * address_hex_preview = lv_obj_create(address_content);
    lv_obj_set_name(address_hex_preview, "address_hex_preview");
    lv_obj_set_x(address_hex_preview, 74);
    lv_obj_set_y(address_hex_preview, 162);
    lv_obj_set_width(address_hex_preview, 172);
    lv_obj_set_height(address_hex_preview, 28);
    lv_obj_set_style_bg_opa(address_hex_preview, 0, 0);
    lv_obj_set_style_border_width(address_hex_preview, 0, 0);
    lv_obj_set_style_pad_all(address_hex_preview, 0, 0);
    lv_obj_set_flag(address_hex_preview, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_7 = lv_label_create(address_hex_preview);
    lv_label_set_text(lv_label_7, "HEX");
    lv_obj_set_x(lv_label_7, 0);
    lv_obj_set_y(lv_label_7, 7);
    lv_obj_set_width(lv_label_7, 44);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_8 = lv_label_create(address_hex_preview);
    lv_label_bind_text(lv_label_8, &meter_address_edit_hex_text, NULL);
    lv_obj_set_x(lv_label_8, 52);
    lv_obj_set_y(lv_label_8, 3);
    lv_obj_set_width(lv_label_8, 120);
    lv_obj_add_style(lv_label_8, &me106_text_18_cyan, 0);
    
    lv_obj_t * screen_settings_address_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_address_bottom_bar, "screen_settings_address_bottom_bar");
    lv_obj_set_x(screen_settings_address_bottom_bar, 0);
    lv_obj_set_y(screen_settings_address_bottom_bar, 207);
    lv_obj_set_width(screen_settings_address_bottom_bar, 320);
    lv_obj_set_height(screen_settings_address_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_address_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_address_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_address_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_address_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_address_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_address_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * address_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_return, "address_btn_return");
    lv_obj_set_x(address_btn_return, 0);
    lv_obj_set_y(address_btn_return, 207);
    lv_obj_set_width(address_btn_return, 79);
    lv_obj_set_height(address_btn_return, 32);
    lv_obj_add_style(address_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_eq(address_btn_return, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_0 = lv_image_create(address_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(address_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * address_btn_digit = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_digit, "address_btn_digit");
    lv_obj_set_x(address_btn_digit, 80);
    lv_obj_set_y(address_btn_digit, 207);
    lv_obj_set_width(address_btn_digit, 79);
    lv_obj_set_height(address_btn_digit, 32);
    lv_obj_add_style(address_btn_digit, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_btn_digit, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_btn_digit, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_eq(address_btn_digit, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_1 = lv_image_create(address_btn_digit);
    lv_image_set_src(lv_image_1, meter_arrow_up);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_obj_t * address_btn_next = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_next, "address_btn_next");
    lv_obj_set_x(address_btn_next, 160);
    lv_obj_set_y(address_btn_next, 207);
    lv_obj_set_width(address_btn_next, 79);
    lv_obj_set_height(address_btn_next, 32);
    lv_obj_add_style(address_btn_next, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_eq(address_btn_next, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_2 = lv_image_create(address_btn_next);
    lv_image_set_src(lv_image_2, meter_arrow_right);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(address_btn_next, &meter_address_digit_selected_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(address_btn_next, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(address_btn_next, subject_increment_event_0, 2);
    lv_obj_set_subject_increment_event_rollover(address_btn_next, subject_increment_event_0, true);
    
    lv_obj_t * address_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_yes, "address_btn_yes");
    lv_obj_set_x(address_btn_yes, 240);
    lv_obj_set_y(address_btn_yes, 207);
    lv_obj_set_width(address_btn_yes, 80);
    lv_obj_set_height(address_btn_yes, 32);
    lv_obj_add_style(address_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(address_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_eq(address_btn_yes, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_3 = lv_image_create(address_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_t * address_btn_value_0 = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_value_0, "address_btn_value_0");
    lv_obj_set_x(address_btn_value_0, 80);
    lv_obj_set_y(address_btn_value_0, 207);
    lv_obj_set_width(address_btn_value_0, 79);
    lv_obj_set_height(address_btn_value_0, 32);
    lv_obj_set_style_bg_opa(address_btn_value_0, 0, 0);
    lv_obj_set_style_border_width(address_btn_value_0, 0, 0);
    lv_obj_set_style_shadow_width(address_btn_value_0, 0, 0);
    lv_obj_bind_flag_if_eq(address_btn_value_0, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_bind_flag_if_not_eq(address_btn_value_0, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(address_btn_value_0, &meter_address_digit_0, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(address_btn_value_0, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(address_btn_value_0, subject_increment_event_1, 2);
    lv_obj_set_subject_increment_event_rollover(address_btn_value_0, subject_increment_event_1, true);
    
    lv_obj_t * address_btn_value_1 = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_value_1, "address_btn_value_1");
    lv_obj_set_x(address_btn_value_1, 80);
    lv_obj_set_y(address_btn_value_1, 207);
    lv_obj_set_width(address_btn_value_1, 79);
    lv_obj_set_height(address_btn_value_1, 32);
    lv_obj_set_style_bg_opa(address_btn_value_1, 0, 0);
    lv_obj_set_style_border_width(address_btn_value_1, 0, 0);
    lv_obj_set_style_shadow_width(address_btn_value_1, 0, 0);
    lv_obj_bind_flag_if_eq(address_btn_value_1, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_bind_flag_if_not_eq(address_btn_value_1, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_subject_increment_dsc_t * subject_increment_event_2 = lv_obj_add_subject_increment_event(address_btn_value_1, &meter_address_digit_1, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(address_btn_value_1, subject_increment_event_2, 0);
    lv_obj_set_subject_increment_event_max_value(address_btn_value_1, subject_increment_event_2, 9);
    lv_obj_set_subject_increment_event_rollover(address_btn_value_1, subject_increment_event_2, true);
    
    lv_obj_t * address_btn_value_2 = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_btn_value_2, "address_btn_value_2");
    lv_obj_set_x(address_btn_value_2, 80);
    lv_obj_set_y(address_btn_value_2, 207);
    lv_obj_set_width(address_btn_value_2, 79);
    lv_obj_set_height(address_btn_value_2, 32);
    lv_obj_set_style_bg_opa(address_btn_value_2, 0, 0);
    lv_obj_set_style_border_width(address_btn_value_2, 0, 0);
    lv_obj_set_style_shadow_width(address_btn_value_2, 0, 0);
    lv_obj_bind_flag_if_eq(address_btn_value_2, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_bind_flag_if_not_eq(address_btn_value_2, &meter_address_digit_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    lv_subject_increment_dsc_t * subject_increment_event_3 = lv_obj_add_subject_increment_event(address_btn_value_2, &meter_address_digit_2, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(address_btn_value_2, subject_increment_event_3, 0);
    lv_obj_set_subject_increment_event_max_value(address_btn_value_2, subject_increment_event_3, 9);
    lv_obj_set_subject_increment_event_rollover(address_btn_value_2, subject_increment_event_3, true);
    
    lv_obj_t * address_invalid_return_gate = lv_obj_create(lv_obj_0);
    lv_obj_set_name(address_invalid_return_gate, "address_invalid_return_gate");
    lv_obj_set_x(address_invalid_return_gate, 0);
    lv_obj_set_y(address_invalid_return_gate, 207);
    lv_obj_set_width(address_invalid_return_gate, 79);
    lv_obj_set_height(address_invalid_return_gate, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_gate, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_gate, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_gate, 0, 0);
    lv_obj_set_flag(address_invalid_return_gate, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_return_gate, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_eq(address_invalid_return_gate, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * address_invalid_return_000_h0 = lv_obj_create(address_invalid_return_gate);
    lv_obj_set_name(address_invalid_return_000_h0, "address_invalid_return_000_h0");
    lv_obj_set_x(address_invalid_return_000_h0, 0);
    lv_obj_set_y(address_invalid_return_000_h0, 0);
    lv_obj_set_width(address_invalid_return_000_h0, 79);
    lv_obj_set_height(address_invalid_return_000_h0, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_000_h0, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_000_h0, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_000_h0, 0, 0);
    lv_obj_set_flag(address_invalid_return_000_h0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_return_000_h0, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_000_h0, &meter_address_digit_0, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * address_invalid_return_000_t0 = lv_obj_create(address_invalid_return_000_h0);
    lv_obj_set_name(address_invalid_return_000_t0, "address_invalid_return_000_t0");
    lv_obj_set_x(address_invalid_return_000_t0, 0);
    lv_obj_set_y(address_invalid_return_000_t0, 0);
    lv_obj_set_width(address_invalid_return_000_t0, 79);
    lv_obj_set_height(address_invalid_return_000_t0, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_000_t0, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_000_t0, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_000_t0, 0, 0);
    lv_obj_set_flag(address_invalid_return_000_t0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_return_000_t0, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_000_t0, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * address_invalid_return_000 = lv_button_create(address_invalid_return_000_t0);
    lv_obj_set_name(address_invalid_return_000, "address_invalid_return_000");
    lv_obj_set_x(address_invalid_return_000, 0);
    lv_obj_set_y(address_invalid_return_000, 0);
    lv_obj_set_width(address_invalid_return_000, 79);
    lv_obj_set_height(address_invalid_return_000, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_000, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_000, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_000, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_000, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_000, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_subject_set_int_event(address_invalid_return_000, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_2xx_h2 = lv_obj_create(address_invalid_return_gate);
    lv_obj_set_name(address_invalid_return_2xx_h2, "address_invalid_return_2xx_h2");
    lv_obj_set_x(address_invalid_return_2xx_h2, 0);
    lv_obj_set_y(address_invalid_return_2xx_h2, 0);
    lv_obj_set_width(address_invalid_return_2xx_h2, 79);
    lv_obj_set_height(address_invalid_return_2xx_h2, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_2xx_h2, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_2xx_h2, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_2xx_h2, 0, 0);
    lv_obj_set_flag(address_invalid_return_2xx_h2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_return_2xx_h2, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_2xx_h2, &meter_address_digit_0, LV_OBJ_FLAG_HIDDEN, 2);
    lv_obj_t * address_invalid_return_t5 = lv_button_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t5, "address_invalid_return_t5");
    lv_obj_set_x(address_invalid_return_t5, 0);
    lv_obj_set_y(address_invalid_return_t5, 0);
    lv_obj_set_width(address_invalid_return_t5, 79);
    lv_obj_set_height(address_invalid_return_t5, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t5, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t5, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_t5, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t5, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t5, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 5);
    lv_obj_add_subject_set_int_event(address_invalid_return_t5, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_t6 = lv_button_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t6, "address_invalid_return_t6");
    lv_obj_set_x(address_invalid_return_t6, 0);
    lv_obj_set_y(address_invalid_return_t6, 0);
    lv_obj_set_width(address_invalid_return_t6, 79);
    lv_obj_set_height(address_invalid_return_t6, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t6, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t6, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_t6, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t6, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t6, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 6);
    lv_obj_add_subject_set_int_event(address_invalid_return_t6, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_t7 = lv_button_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t7, "address_invalid_return_t7");
    lv_obj_set_x(address_invalid_return_t7, 0);
    lv_obj_set_y(address_invalid_return_t7, 0);
    lv_obj_set_width(address_invalid_return_t7, 79);
    lv_obj_set_height(address_invalid_return_t7, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t7, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t7, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_t7, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t7, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t7, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 7);
    lv_obj_add_subject_set_int_event(address_invalid_return_t7, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_t8 = lv_button_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t8, "address_invalid_return_t8");
    lv_obj_set_x(address_invalid_return_t8, 0);
    lv_obj_set_y(address_invalid_return_t8, 0);
    lv_obj_set_width(address_invalid_return_t8, 79);
    lv_obj_set_height(address_invalid_return_t8, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t8, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t8, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_t8, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t8, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t8, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 8);
    lv_obj_add_subject_set_int_event(address_invalid_return_t8, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_t9 = lv_button_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t9, "address_invalid_return_t9");
    lv_obj_set_x(address_invalid_return_t9, 0);
    lv_obj_set_y(address_invalid_return_t9, 0);
    lv_obj_set_width(address_invalid_return_t9, 79);
    lv_obj_set_height(address_invalid_return_t9, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t9, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t9, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_t9, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t9, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t9, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 9);
    lv_obj_add_subject_set_int_event(address_invalid_return_t9, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_t4 = lv_obj_create(address_invalid_return_2xx_h2);
    lv_obj_set_name(address_invalid_return_t4, "address_invalid_return_t4");
    lv_obj_set_x(address_invalid_return_t4, 0);
    lv_obj_set_y(address_invalid_return_t4, 0);
    lv_obj_set_width(address_invalid_return_t4, 79);
    lv_obj_set_height(address_invalid_return_t4, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_t4, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_t4, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_t4, 0, 0);
    lv_obj_set_flag(address_invalid_return_t4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_return_t4, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_t4, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 4);
    lv_obj_t * address_invalid_return_248 = lv_button_create(address_invalid_return_t4);
    lv_obj_set_name(address_invalid_return_248, "address_invalid_return_248");
    lv_obj_set_x(address_invalid_return_248, 0);
    lv_obj_set_y(address_invalid_return_248, 0);
    lv_obj_set_width(address_invalid_return_248, 79);
    lv_obj_set_height(address_invalid_return_248, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_248, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_248, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_248, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_248, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_248, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 8);
    lv_obj_add_subject_set_int_event(address_invalid_return_248, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_return_249 = lv_button_create(address_invalid_return_t4);
    lv_obj_set_name(address_invalid_return_249, "address_invalid_return_249");
    lv_obj_set_x(address_invalid_return_249, 0);
    lv_obj_set_y(address_invalid_return_249, 0);
    lv_obj_set_width(address_invalid_return_249, 79);
    lv_obj_set_height(address_invalid_return_249, 32);
    lv_obj_set_style_bg_opa(address_invalid_return_249, 0, 0);
    lv_obj_set_style_border_width(address_invalid_return_249, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_return_249, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_return_249, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_return_249, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 9);
    lv_obj_add_subject_set_int_event(address_invalid_return_249, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_gate = lv_obj_create(lv_obj_0);
    lv_obj_set_name(address_invalid_confirm_gate, "address_invalid_confirm_gate");
    lv_obj_set_x(address_invalid_confirm_gate, 240);
    lv_obj_set_y(address_invalid_confirm_gate, 207);
    lv_obj_set_width(address_invalid_confirm_gate, 80);
    lv_obj_set_height(address_invalid_confirm_gate, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_gate, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_gate, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_gate, 0, 0);
    lv_obj_set_flag(address_invalid_confirm_gate, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_confirm_gate, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_eq(address_invalid_confirm_gate, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * address_invalid_confirm_000_h0 = lv_obj_create(address_invalid_confirm_gate);
    lv_obj_set_name(address_invalid_confirm_000_h0, "address_invalid_confirm_000_h0");
    lv_obj_set_x(address_invalid_confirm_000_h0, 0);
    lv_obj_set_y(address_invalid_confirm_000_h0, 0);
    lv_obj_set_width(address_invalid_confirm_000_h0, 80);
    lv_obj_set_height(address_invalid_confirm_000_h0, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_000_h0, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_000_h0, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_000_h0, 0, 0);
    lv_obj_set_flag(address_invalid_confirm_000_h0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_confirm_000_h0, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_000_h0, &meter_address_digit_0, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * address_invalid_confirm_000_t0 = lv_obj_create(address_invalid_confirm_000_h0);
    lv_obj_set_name(address_invalid_confirm_000_t0, "address_invalid_confirm_000_t0");
    lv_obj_set_x(address_invalid_confirm_000_t0, 0);
    lv_obj_set_y(address_invalid_confirm_000_t0, 0);
    lv_obj_set_width(address_invalid_confirm_000_t0, 80);
    lv_obj_set_height(address_invalid_confirm_000_t0, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_000_t0, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_000_t0, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_000_t0, 0, 0);
    lv_obj_set_flag(address_invalid_confirm_000_t0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_confirm_000_t0, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_000_t0, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * address_invalid_confirm_000 = lv_button_create(address_invalid_confirm_000_t0);
    lv_obj_set_name(address_invalid_confirm_000, "address_invalid_confirm_000");
    lv_obj_set_x(address_invalid_confirm_000, 0);
    lv_obj_set_y(address_invalid_confirm_000, 0);
    lv_obj_set_width(address_invalid_confirm_000, 80);
    lv_obj_set_height(address_invalid_confirm_000, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_000, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_000, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_000, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_000, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_000, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_000, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_2xx_h2 = lv_obj_create(address_invalid_confirm_gate);
    lv_obj_set_name(address_invalid_confirm_2xx_h2, "address_invalid_confirm_2xx_h2");
    lv_obj_set_x(address_invalid_confirm_2xx_h2, 0);
    lv_obj_set_y(address_invalid_confirm_2xx_h2, 0);
    lv_obj_set_width(address_invalid_confirm_2xx_h2, 80);
    lv_obj_set_height(address_invalid_confirm_2xx_h2, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_2xx_h2, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_2xx_h2, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_2xx_h2, 0, 0);
    lv_obj_set_flag(address_invalid_confirm_2xx_h2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_confirm_2xx_h2, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_2xx_h2, &meter_address_digit_0, LV_OBJ_FLAG_HIDDEN, 2);
    lv_obj_t * address_invalid_confirm_t5 = lv_button_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t5, "address_invalid_confirm_t5");
    lv_obj_set_x(address_invalid_confirm_t5, 0);
    lv_obj_set_y(address_invalid_confirm_t5, 0);
    lv_obj_set_width(address_invalid_confirm_t5, 80);
    lv_obj_set_height(address_invalid_confirm_t5, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t5, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t5, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_t5, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t5, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t5, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 5);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_t5, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_t6 = lv_button_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t6, "address_invalid_confirm_t6");
    lv_obj_set_x(address_invalid_confirm_t6, 0);
    lv_obj_set_y(address_invalid_confirm_t6, 0);
    lv_obj_set_width(address_invalid_confirm_t6, 80);
    lv_obj_set_height(address_invalid_confirm_t6, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t6, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t6, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_t6, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t6, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t6, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 6);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_t6, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_t7 = lv_button_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t7, "address_invalid_confirm_t7");
    lv_obj_set_x(address_invalid_confirm_t7, 0);
    lv_obj_set_y(address_invalid_confirm_t7, 0);
    lv_obj_set_width(address_invalid_confirm_t7, 80);
    lv_obj_set_height(address_invalid_confirm_t7, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t7, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t7, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_t7, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t7, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t7, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 7);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_t7, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_t8 = lv_button_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t8, "address_invalid_confirm_t8");
    lv_obj_set_x(address_invalid_confirm_t8, 0);
    lv_obj_set_y(address_invalid_confirm_t8, 0);
    lv_obj_set_width(address_invalid_confirm_t8, 80);
    lv_obj_set_height(address_invalid_confirm_t8, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t8, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t8, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_t8, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t8, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t8, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 8);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_t8, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_t9 = lv_button_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t9, "address_invalid_confirm_t9");
    lv_obj_set_x(address_invalid_confirm_t9, 0);
    lv_obj_set_y(address_invalid_confirm_t9, 0);
    lv_obj_set_width(address_invalid_confirm_t9, 80);
    lv_obj_set_height(address_invalid_confirm_t9, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t9, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t9, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_t9, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t9, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t9, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 9);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_t9, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_t4 = lv_obj_create(address_invalid_confirm_2xx_h2);
    lv_obj_set_name(address_invalid_confirm_t4, "address_invalid_confirm_t4");
    lv_obj_set_x(address_invalid_confirm_t4, 0);
    lv_obj_set_y(address_invalid_confirm_t4, 0);
    lv_obj_set_width(address_invalid_confirm_t4, 80);
    lv_obj_set_height(address_invalid_confirm_t4, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_t4, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_t4, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_t4, 0, 0);
    lv_obj_set_flag(address_invalid_confirm_t4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_flag(address_invalid_confirm_t4, LV_OBJ_FLAG_CLICKABLE, false);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_t4, &meter_address_digit_1, LV_OBJ_FLAG_HIDDEN, 4);
    lv_obj_t * address_invalid_confirm_248 = lv_button_create(address_invalid_confirm_t4);
    lv_obj_set_name(address_invalid_confirm_248, "address_invalid_confirm_248");
    lv_obj_set_x(address_invalid_confirm_248, 0);
    lv_obj_set_y(address_invalid_confirm_248, 0);
    lv_obj_set_width(address_invalid_confirm_248, 80);
    lv_obj_set_height(address_invalid_confirm_248, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_248, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_248, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_248, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_248, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_248, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 8);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_248, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_invalid_confirm_249 = lv_button_create(address_invalid_confirm_t4);
    lv_obj_set_name(address_invalid_confirm_249, "address_invalid_confirm_249");
    lv_obj_set_x(address_invalid_confirm_249, 0);
    lv_obj_set_y(address_invalid_confirm_249, 0);
    lv_obj_set_width(address_invalid_confirm_249, 80);
    lv_obj_set_height(address_invalid_confirm_249, 32);
    lv_obj_set_style_bg_opa(address_invalid_confirm_249, 0, 0);
    lv_obj_set_style_border_width(address_invalid_confirm_249, 0, 0);
    lv_obj_set_style_shadow_width(address_invalid_confirm_249, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_confirm_249, 0, 0);
    lv_obj_bind_flag_if_not_eq(address_invalid_confirm_249, &meter_address_digit_2, LV_OBJ_FLAG_HIDDEN, 9);
    lv_obj_add_subject_set_int_event(address_invalid_confirm_249, &meter_address_invalid_popup, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * address_popup_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_popup_btn_return, "address_popup_btn_return");
    lv_obj_set_x(address_popup_btn_return, 0);
    lv_obj_set_y(address_popup_btn_return, 207);
    lv_obj_set_width(address_popup_btn_return, 79);
    lv_obj_set_height(address_popup_btn_return, 32);
    lv_obj_add_style(address_popup_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_popup_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_popup_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_popup_btn_return, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_4 = lv_image_create(address_popup_btn_return);
    lv_image_set_src(lv_image_4, meter_icon_return);
    lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_4, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_4, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_4, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_4, 230, 0);
    
    lv_obj_add_subject_set_int_event(address_popup_btn_return, &meter_address_invalid_popup, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * address_popup_btn_idle_left = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_popup_btn_idle_left, "address_popup_btn_idle_left");
    lv_obj_set_x(address_popup_btn_idle_left, 80);
    lv_obj_set_y(address_popup_btn_idle_left, 207);
    lv_obj_set_width(address_popup_btn_idle_left, 79);
    lv_obj_set_height(address_popup_btn_idle_left, 32);
    lv_obj_add_style(address_popup_btn_idle_left, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_popup_btn_idle_left, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_popup_btn_idle_left, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_popup_btn_idle_left, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * address_popup_btn_idle_right = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_popup_btn_idle_right, "address_popup_btn_idle_right");
    lv_obj_set_x(address_popup_btn_idle_right, 160);
    lv_obj_set_y(address_popup_btn_idle_right, 207);
    lv_obj_set_width(address_popup_btn_idle_right, 79);
    lv_obj_set_height(address_popup_btn_idle_right, 32);
    lv_obj_add_style(address_popup_btn_idle_right, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(address_popup_btn_idle_right, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_popup_btn_idle_right, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_popup_btn_idle_right, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * address_popup_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(address_popup_btn_yes, "address_popup_btn_yes");
    lv_obj_set_x(address_popup_btn_yes, 240);
    lv_obj_set_y(address_popup_btn_yes, 207);
    lv_obj_set_width(address_popup_btn_yes, 80);
    lv_obj_set_height(address_popup_btn_yes, 32);
    lv_obj_add_style(address_popup_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(address_popup_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_popup_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_popup_btn_yes, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_5 = lv_image_create(address_popup_btn_yes);
    lv_image_set_src(lv_image_5, meter_yes);
    lv_obj_set_align(lv_image_5, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_5, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_5, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_5, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_5, 230, 0);
    
    lv_obj_add_subject_set_int_event(address_popup_btn_yes, &meter_address_invalid_popup, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * address_invalid_popup = lv_obj_create(lv_obj_0);
    lv_obj_set_name(address_invalid_popup, "address_invalid_popup");
    lv_obj_set_x(address_invalid_popup, 44);
    lv_obj_set_y(address_invalid_popup, 56);
    lv_obj_set_width(address_invalid_popup, 232);
    lv_obj_set_height(address_invalid_popup, 98);
    lv_obj_set_style_pad_all(address_invalid_popup, 0, 0);
    lv_obj_set_style_border_width(address_invalid_popup, 0, 0);
    lv_obj_set_style_bg_opa(address_invalid_popup, 255, 0);
    lv_obj_set_flag(address_invalid_popup, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(address_invalid_popup, &me106_panel_soft_r8, 0);
    lv_obj_bind_style(address_invalid_popup, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_invalid_popup, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(address_invalid_popup, &meter_address_invalid_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * address_invalid_popup_accent = lv_obj_create(address_invalid_popup);
    lv_obj_set_name(address_invalid_popup_accent, "address_invalid_popup_accent");
    lv_obj_set_x(address_invalid_popup_accent, 92);
    lv_obj_set_y(address_invalid_popup_accent, 14);
    lv_obj_set_width(address_invalid_popup_accent, 48);
    lv_obj_set_height(address_invalid_popup_accent, 4);
    lv_obj_set_style_border_width(address_invalid_popup_accent, 0, 0);
    lv_obj_set_style_pad_all(address_invalid_popup_accent, 0, 0);
    lv_obj_set_style_radius(address_invalid_popup_accent, 2, 0);
    lv_obj_set_style_bg_opa(address_invalid_popup_accent, 116, 0);
    lv_obj_set_flag(address_invalid_popup_accent, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(address_invalid_popup_accent, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(address_invalid_popup_accent, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(address_invalid_popup_accent, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_9 = lv_label_create(address_invalid_popup);
    lv_label_set_text(lv_label_9, "地址超出范围");
    lv_obj_set_x(lv_label_9, 42);
    lv_obj_set_y(lv_label_9, 24);
    lv_obj_set_width(lv_label_9, 148);
    lv_obj_add_style(lv_label_9, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_10 = lv_label_create(address_invalid_popup);
    lv_label_set_text(lv_label_10, "请选择 001-247 的地址");
    lv_obj_set_x(lv_label_10, 28);
    lv_obj_set_y(lv_label_10, 52);
    lv_obj_set_width(lv_label_10, 176);
    lv_obj_add_style(lv_label_10, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(address_invalid_popup);
    lv_label_set_text(lv_label_11, "按返回或确认关闭");
    lv_obj_set_x(lv_label_11, 24);
    lv_obj_set_y(lv_label_11, 72);
    lv_obj_set_width(lv_label_11, 184);
    lv_obj_add_style(lv_label_11, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

