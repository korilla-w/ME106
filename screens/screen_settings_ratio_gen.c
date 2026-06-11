/**
 * @file screen_settings_ratio_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_ratio_gen.h"
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

lv_obj_t * screen_settings_ratio_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_ratio_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
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
    lv_label_set_text(lv_label_0, "变比设置");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_item_ct = lv_button_create(page_content);
    lv_obj_set_name(ratio_item_ct, "ratio_item_ct");
    lv_obj_set_x(ratio_item_ct, 40);
    lv_obj_set_y(ratio_item_ct, 74);
    lv_obj_set_width(ratio_item_ct, 240);
    lv_obj_set_height(ratio_item_ct, 44);
    lv_obj_set_style_pad_all(ratio_item_ct, 0, 0);
    lv_obj_add_style(ratio_item_ct, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ratio_item_ct, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_item_ct, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ratio_item_ct_selected_bg = lv_obj_create(ratio_item_ct);
    lv_obj_set_name(ratio_item_ct_selected_bg, "ratio_item_ct_selected_bg");
    lv_obj_set_x(ratio_item_ct_selected_bg, 0);
    lv_obj_set_y(ratio_item_ct_selected_bg, 0);
    lv_obj_set_width(ratio_item_ct_selected_bg, 240);
    lv_obj_set_height(ratio_item_ct_selected_bg, 44);
    lv_obj_set_style_pad_all(ratio_item_ct_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ratio_item_ct_selected_bg, 0, 0);
    lv_obj_set_flag(ratio_item_ct_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ratio_item_ct_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ratio_item_ct_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_item_ct_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ratio_item_ct_selected_bg, &meter_ratio_selected_kind, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(ratio_item_ct);
    lv_label_set_text(lv_label_1, "CT变比");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_1, 18);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 100);
    lv_obj_add_style(lv_label_1, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_1, &me106_text_16_white, 0, &meter_ratio_selected_kind, 0);
    
    lv_obj_t * ratio_ct_value = lv_obj_create(ratio_item_ct);
    lv_obj_set_name(ratio_ct_value, "ratio_ct_value");
    lv_obj_set_align(ratio_ct_value, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(ratio_ct_value, -14);
    lv_obj_set_y(ratio_ct_value, 0);
    lv_obj_set_width(ratio_ct_value, 90);
    lv_obj_set_height(ratio_ct_value, 24);
    lv_obj_set_style_bg_opa(ratio_ct_value, 0, 0);
    lv_obj_set_style_border_width(ratio_ct_value, 0, 0);
    lv_obj_set_style_pad_all(ratio_ct_value, 0, 0);
    lv_obj_set_flag(ratio_ct_value, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * ratio_ct_digit_0_slot = lv_obj_create(ratio_ct_value);
    lv_obj_set_name(ratio_ct_digit_0_slot, "ratio_ct_digit_0_slot");
    lv_obj_set_x(ratio_ct_digit_0_slot, 0);
    lv_obj_set_y(ratio_ct_digit_0_slot, 0);
    lv_obj_set_width(ratio_ct_digit_0_slot, 20);
    lv_obj_set_height(ratio_ct_digit_0_slot, 24);
    lv_obj_set_style_bg_color(ratio_ct_digit_0_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_ct_digit_0_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_ct_digit_0_slot, 0, 0);
    lv_obj_set_style_radius(ratio_ct_digit_0_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_ct_digit_0_slot, 0, 0);
    lv_obj_set_flag(ratio_ct_digit_0_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_2 = lv_label_create(ratio_ct_digit_0_slot);
    lv_label_bind_text(lv_label_2, &meter_ct_ratio_current_digit_0, "%d");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_2, 20);
    lv_obj_add_style(lv_label_2, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_ct_digit_1_slot = lv_obj_create(ratio_ct_value);
    lv_obj_set_name(ratio_ct_digit_1_slot, "ratio_ct_digit_1_slot");
    lv_obj_set_x(ratio_ct_digit_1_slot, 23);
    lv_obj_set_y(ratio_ct_digit_1_slot, 0);
    lv_obj_set_width(ratio_ct_digit_1_slot, 20);
    lv_obj_set_height(ratio_ct_digit_1_slot, 24);
    lv_obj_set_style_bg_color(ratio_ct_digit_1_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_ct_digit_1_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_ct_digit_1_slot, 0, 0);
    lv_obj_set_style_radius(ratio_ct_digit_1_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_ct_digit_1_slot, 0, 0);
    lv_obj_set_flag(ratio_ct_digit_1_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_3 = lv_label_create(ratio_ct_digit_1_slot);
    lv_label_bind_text(lv_label_3, &meter_ct_ratio_current_digit_1, "%d");
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_3, 20);
    lv_obj_add_style(lv_label_3, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_ct_digit_2_slot = lv_obj_create(ratio_ct_value);
    lv_obj_set_name(ratio_ct_digit_2_slot, "ratio_ct_digit_2_slot");
    lv_obj_set_x(ratio_ct_digit_2_slot, 46);
    lv_obj_set_y(ratio_ct_digit_2_slot, 0);
    lv_obj_set_width(ratio_ct_digit_2_slot, 20);
    lv_obj_set_height(ratio_ct_digit_2_slot, 24);
    lv_obj_set_style_bg_color(ratio_ct_digit_2_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_ct_digit_2_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_ct_digit_2_slot, 0, 0);
    lv_obj_set_style_radius(ratio_ct_digit_2_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_ct_digit_2_slot, 0, 0);
    lv_obj_set_flag(ratio_ct_digit_2_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_4 = lv_label_create(ratio_ct_digit_2_slot);
    lv_label_bind_text(lv_label_4, &meter_ct_ratio_current_digit_2, "%d");
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_4, 20);
    lv_obj_add_style(lv_label_4, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_ct_digit_3_slot = lv_obj_create(ratio_ct_value);
    lv_obj_set_name(ratio_ct_digit_3_slot, "ratio_ct_digit_3_slot");
    lv_obj_set_x(ratio_ct_digit_3_slot, 69);
    lv_obj_set_y(ratio_ct_digit_3_slot, 0);
    lv_obj_set_width(ratio_ct_digit_3_slot, 20);
    lv_obj_set_height(ratio_ct_digit_3_slot, 24);
    lv_obj_set_style_bg_color(ratio_ct_digit_3_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_ct_digit_3_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_ct_digit_3_slot, 0, 0);
    lv_obj_set_style_radius(ratio_ct_digit_3_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_ct_digit_3_slot, 0, 0);
    lv_obj_set_flag(ratio_ct_digit_3_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_5 = lv_label_create(ratio_ct_digit_3_slot);
    lv_label_bind_text(lv_label_5, &meter_ct_ratio_current_digit_3, "%d");
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_5, 20);
    lv_obj_add_style(lv_label_5, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ratio_item_ct, &meter_ratio_selected_kind, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * ratio_item_pt = lv_button_create(page_content);
    lv_obj_set_name(ratio_item_pt, "ratio_item_pt");
    lv_obj_set_x(ratio_item_pt, 40);
    lv_obj_set_y(ratio_item_pt, 130);
    lv_obj_set_width(ratio_item_pt, 240);
    lv_obj_set_height(ratio_item_pt, 44);
    lv_obj_set_style_pad_all(ratio_item_pt, 0, 0);
    lv_obj_add_style(ratio_item_pt, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(ratio_item_pt, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_item_pt, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * ratio_item_pt_selected_bg = lv_obj_create(ratio_item_pt);
    lv_obj_set_name(ratio_item_pt_selected_bg, "ratio_item_pt_selected_bg");
    lv_obj_set_x(ratio_item_pt_selected_bg, 0);
    lv_obj_set_y(ratio_item_pt_selected_bg, 0);
    lv_obj_set_width(ratio_item_pt_selected_bg, 240);
    lv_obj_set_height(ratio_item_pt_selected_bg, 44);
    lv_obj_set_style_pad_all(ratio_item_pt_selected_bg, 0, 0);
    lv_obj_set_style_border_width(ratio_item_pt_selected_bg, 0, 0);
    lv_obj_set_flag(ratio_item_pt_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(ratio_item_pt_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(ratio_item_pt_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_item_pt_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(ratio_item_pt_selected_bg, &meter_ratio_selected_kind, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_6 = lv_label_create(ratio_item_pt);
    lv_label_set_text(lv_label_6, "PT变比");
    lv_obj_set_align(lv_label_6, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_6, 18);
    lv_obj_set_y(lv_label_6, 0);
    lv_obj_set_width(lv_label_6, 100);
    lv_obj_add_style(lv_label_6, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_6, &me106_text_16_white, 0, &meter_ratio_selected_kind, 1);
    
    lv_obj_t * ratio_pt_value = lv_obj_create(ratio_item_pt);
    lv_obj_set_name(ratio_pt_value, "ratio_pt_value");
    lv_obj_set_align(ratio_pt_value, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(ratio_pt_value, -14);
    lv_obj_set_y(ratio_pt_value, 0);
    lv_obj_set_width(ratio_pt_value, 90);
    lv_obj_set_height(ratio_pt_value, 24);
    lv_obj_set_style_bg_opa(ratio_pt_value, 0, 0);
    lv_obj_set_style_border_width(ratio_pt_value, 0, 0);
    lv_obj_set_style_pad_all(ratio_pt_value, 0, 0);
    lv_obj_set_flag(ratio_pt_value, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * ratio_pt_digit_0_slot = lv_obj_create(ratio_pt_value);
    lv_obj_set_name(ratio_pt_digit_0_slot, "ratio_pt_digit_0_slot");
    lv_obj_set_x(ratio_pt_digit_0_slot, 0);
    lv_obj_set_y(ratio_pt_digit_0_slot, 0);
    lv_obj_set_width(ratio_pt_digit_0_slot, 20);
    lv_obj_set_height(ratio_pt_digit_0_slot, 24);
    lv_obj_set_style_bg_color(ratio_pt_digit_0_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_pt_digit_0_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_pt_digit_0_slot, 0, 0);
    lv_obj_set_style_radius(ratio_pt_digit_0_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_pt_digit_0_slot, 0, 0);
    lv_obj_set_flag(ratio_pt_digit_0_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_7 = lv_label_create(ratio_pt_digit_0_slot);
    lv_label_bind_text(lv_label_7, &meter_pt_ratio_current_digit_0, "%d");
    lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_7, 20);
    lv_obj_add_style(lv_label_7, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_pt_digit_1_slot = lv_obj_create(ratio_pt_value);
    lv_obj_set_name(ratio_pt_digit_1_slot, "ratio_pt_digit_1_slot");
    lv_obj_set_x(ratio_pt_digit_1_slot, 23);
    lv_obj_set_y(ratio_pt_digit_1_slot, 0);
    lv_obj_set_width(ratio_pt_digit_1_slot, 20);
    lv_obj_set_height(ratio_pt_digit_1_slot, 24);
    lv_obj_set_style_bg_color(ratio_pt_digit_1_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_pt_digit_1_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_pt_digit_1_slot, 0, 0);
    lv_obj_set_style_radius(ratio_pt_digit_1_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_pt_digit_1_slot, 0, 0);
    lv_obj_set_flag(ratio_pt_digit_1_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_8 = lv_label_create(ratio_pt_digit_1_slot);
    lv_label_bind_text(lv_label_8, &meter_pt_ratio_current_digit_1, "%d");
    lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_8, 20);
    lv_obj_add_style(lv_label_8, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_pt_digit_2_slot = lv_obj_create(ratio_pt_value);
    lv_obj_set_name(ratio_pt_digit_2_slot, "ratio_pt_digit_2_slot");
    lv_obj_set_x(ratio_pt_digit_2_slot, 46);
    lv_obj_set_y(ratio_pt_digit_2_slot, 0);
    lv_obj_set_width(ratio_pt_digit_2_slot, 20);
    lv_obj_set_height(ratio_pt_digit_2_slot, 24);
    lv_obj_set_style_bg_color(ratio_pt_digit_2_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_pt_digit_2_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_pt_digit_2_slot, 0, 0);
    lv_obj_set_style_radius(ratio_pt_digit_2_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_pt_digit_2_slot, 0, 0);
    lv_obj_set_flag(ratio_pt_digit_2_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_9 = lv_label_create(ratio_pt_digit_2_slot);
    lv_label_bind_text(lv_label_9, &meter_pt_ratio_current_digit_2, "%d");
    lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_9, 20);
    lv_obj_add_style(lv_label_9, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_pt_digit_3_slot = lv_obj_create(ratio_pt_value);
    lv_obj_set_name(ratio_pt_digit_3_slot, "ratio_pt_digit_3_slot");
    lv_obj_set_x(ratio_pt_digit_3_slot, 69);
    lv_obj_set_y(ratio_pt_digit_3_slot, 0);
    lv_obj_set_width(ratio_pt_digit_3_slot, 20);
    lv_obj_set_height(ratio_pt_digit_3_slot, 24);
    lv_obj_set_style_bg_color(ratio_pt_digit_3_slot, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(ratio_pt_digit_3_slot, 56, 0);
    lv_obj_set_style_border_width(ratio_pt_digit_3_slot, 0, 0);
    lv_obj_set_style_radius(ratio_pt_digit_3_slot, 4, 0);
    lv_obj_set_style_pad_all(ratio_pt_digit_3_slot, 0, 0);
    lv_obj_set_flag(ratio_pt_digit_3_slot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_10 = lv_label_create(ratio_pt_digit_3_slot);
    lv_label_bind_text(lv_label_10, &meter_pt_ratio_current_digit_3, "%d");
    lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_10, 20);
    lv_obj_add_style(lv_label_10, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(ratio_item_pt, &meter_ratio_selected_kind, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * screen_settings_ratio_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_ratio_bottom_bar, "screen_settings_ratio_bottom_bar");
    lv_obj_set_x(screen_settings_ratio_bottom_bar, 0);
    lv_obj_set_y(screen_settings_ratio_bottom_bar, 207);
    lv_obj_set_width(screen_settings_ratio_bottom_bar, 320);
    lv_obj_set_height(screen_settings_ratio_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_ratio_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_ratio_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_ratio_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_ratio_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_ratio_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_ratio_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * ratio_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_return, "ratio_btn_return");
    lv_obj_set_x(ratio_btn_return, 0);
    lv_obj_set_y(ratio_btn_return, 207);
    lv_obj_set_width(ratio_btn_return, 79);
    lv_obj_set_height(ratio_btn_return, 32);
    lv_obj_add_style(ratio_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ratio_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(ratio_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(ratio_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * ratio_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_down, "ratio_btn_down");
    lv_obj_set_x(ratio_btn_down, 80);
    lv_obj_set_y(ratio_btn_down, 207);
    lv_obj_set_width(ratio_btn_down, 79);
    lv_obj_set_height(ratio_btn_down, 32);
    lv_obj_add_style(ratio_btn_down, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ratio_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(ratio_btn_down);
    lv_image_set_src(lv_image_1, meter_arrow_down);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(ratio_btn_down, &meter_ratio_selected_kind, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(ratio_btn_down, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(ratio_btn_down, subject_increment_event_0, 1);
    lv_obj_set_subject_increment_event_rollover(ratio_btn_down, subject_increment_event_0, true);
    
    lv_obj_t * ratio_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_up, "ratio_btn_up");
    lv_obj_set_x(ratio_btn_up, 160);
    lv_obj_set_y(ratio_btn_up, 207);
    lv_obj_set_width(ratio_btn_up, 79);
    lv_obj_set_height(ratio_btn_up, 32);
    lv_obj_add_style(ratio_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(ratio_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(ratio_btn_up);
    lv_image_set_src(lv_image_2, meter_arrow_up);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(ratio_btn_up, &meter_ratio_selected_kind, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(ratio_btn_up, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(ratio_btn_up, subject_increment_event_1, 1);
    lv_obj_set_subject_increment_event_rollover(ratio_btn_up, subject_increment_event_1, true);
    
    lv_obj_t * ratio_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_yes, "ratio_btn_yes");
    lv_obj_set_x(ratio_btn_yes, 240);
    lv_obj_set_y(ratio_btn_yes, 207);
    lv_obj_set_width(ratio_btn_yes, 80);
    lv_obj_set_height(ratio_btn_yes, 32);
    lv_obj_add_style(ratio_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(ratio_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(ratio_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(ratio_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_t * ratio_btn_yes_ct = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_yes_ct, "ratio_btn_yes_ct");
    lv_obj_set_x(ratio_btn_yes_ct, 240);
    lv_obj_set_y(ratio_btn_yes_ct, 207);
    lv_obj_set_width(ratio_btn_yes_ct, 80);
    lv_obj_set_height(ratio_btn_yes_ct, 32);
    lv_obj_set_style_bg_opa(ratio_btn_yes_ct, 0, 0);
    lv_obj_set_style_border_width(ratio_btn_yes_ct, 0, 0);
    lv_obj_set_style_shadow_width(ratio_btn_yes_ct, 0, 0);
    lv_obj_bind_flag_if_not_eq(ratio_btn_yes_ct, &meter_ratio_selected_kind, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_screen_create_event(ratio_btn_yes_ct, LV_EVENT_CLICKED, screen_settings_ratio_ct_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * ratio_btn_yes_pt = lv_button_create(lv_obj_0);
    lv_obj_set_name(ratio_btn_yes_pt, "ratio_btn_yes_pt");
    lv_obj_set_x(ratio_btn_yes_pt, 240);
    lv_obj_set_y(ratio_btn_yes_pt, 207);
    lv_obj_set_width(ratio_btn_yes_pt, 80);
    lv_obj_set_height(ratio_btn_yes_pt, 32);
    lv_obj_set_style_bg_opa(ratio_btn_yes_pt, 0, 0);
    lv_obj_set_style_border_width(ratio_btn_yes_pt, 0, 0);
    lv_obj_set_style_shadow_width(ratio_btn_yes_pt, 0, 0);
    lv_obj_bind_flag_if_not_eq(ratio_btn_yes_pt, &meter_ratio_selected_kind, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_screen_create_event(ratio_btn_yes_pt, LV_EVENT_CLICKED, screen_settings_ratio_pt_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

