/**
 * @file screen_settings_theme_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_theme_gen.h"
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

lv_obj_t * screen_settings_theme_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_theme_#");
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
    lv_label_set_text(lv_label_0, "主题选择");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * theme_list = lv_obj_create(page_content);
    lv_obj_set_name(theme_list, "theme_list");
    lv_obj_set_x(theme_list, 22);
    lv_obj_set_y(theme_list, 52);
    lv_obj_set_width(theme_list, 276);
    lv_obj_set_height(theme_list, 142);
    lv_obj_set_style_bg_opa(theme_list, 0, 0);
    lv_obj_set_style_border_width(theme_list, 0, 0);
    lv_obj_set_style_pad_all(theme_list, 0, 0);
    lv_obj_set_flag(theme_list, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * theme_item_dark = lv_button_create(theme_list);
    lv_obj_set_name(theme_item_dark, "theme_item_dark");
    lv_obj_set_x(theme_item_dark, 0);
    lv_obj_set_y(theme_item_dark, 0);
    lv_obj_set_width(theme_item_dark, 276);
    lv_obj_set_height(theme_item_dark, 42);
    lv_obj_set_style_pad_all(theme_item_dark, 0, 0);
    lv_obj_add_style(theme_item_dark, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(theme_item_dark, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_dark, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * theme_item_dark_selected_bg = lv_obj_create(theme_item_dark);
    lv_obj_set_name(theme_item_dark_selected_bg, "theme_item_dark_selected_bg");
    lv_obj_set_x(theme_item_dark_selected_bg, 0);
    lv_obj_set_y(theme_item_dark_selected_bg, 0);
    lv_obj_set_width(theme_item_dark_selected_bg, 276);
    lv_obj_set_height(theme_item_dark_selected_bg, 42);
    lv_obj_set_style_pad_all(theme_item_dark_selected_bg, 0, 0);
    lv_obj_set_style_border_width(theme_item_dark_selected_bg, 0, 0);
    lv_obj_set_flag(theme_item_dark_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(theme_item_dark_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(theme_item_dark_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_dark_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(theme_item_dark_selected_bg, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * theme_dark_swatch_bg = lv_obj_create(theme_item_dark);
    lv_obj_set_name(theme_dark_swatch_bg, "theme_dark_swatch_bg");
    lv_obj_set_x(theme_dark_swatch_bg, 16);
    lv_obj_set_y(theme_dark_swatch_bg, 12);
    lv_obj_set_width(theme_dark_swatch_bg, 14);
    lv_obj_set_height(theme_dark_swatch_bg, 14);
    lv_obj_set_style_radius(theme_dark_swatch_bg, 7, 0);
    lv_obj_set_style_bg_color(theme_dark_swatch_bg, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(theme_dark_swatch_bg, 255, 0);
    lv_obj_set_style_border_width(theme_dark_swatch_bg, 1, 0);
    lv_obj_set_style_border_color(theme_dark_swatch_bg, lv_color_hex(0x666666), 0);
    lv_obj_set_flag(theme_dark_swatch_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * theme_dark_swatch_accent = lv_obj_create(theme_item_dark);
    lv_obj_set_name(theme_dark_swatch_accent, "theme_dark_swatch_accent");
    lv_obj_set_x(theme_dark_swatch_accent, 36);
    lv_obj_set_y(theme_dark_swatch_accent, 12);
    lv_obj_set_width(theme_dark_swatch_accent, 14);
    lv_obj_set_height(theme_dark_swatch_accent, 14);
    lv_obj_set_style_radius(theme_dark_swatch_accent, 7, 0);
    lv_obj_set_style_bg_color(theme_dark_swatch_accent, lv_color_hex(0x52A3FF), 0);
    lv_obj_set_style_bg_opa(theme_dark_swatch_accent, 255, 0);
    lv_obj_set_style_border_width(theme_dark_swatch_accent, 0, 0);
    lv_obj_set_flag(theme_dark_swatch_accent, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_label_1 = lv_label_create(theme_item_dark);
    lv_label_set_text(lv_label_1, "1 深色");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_1, 64);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 104);
    lv_obj_add_style(lv_label_1, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_1, &me106_text_16_white, 0, &meter_theme_index, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(theme_item_dark);
    lv_label_set_text(lv_label_2, "默认");
    lv_obj_set_align(lv_label_2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_2, -14);
    lv_obj_set_y(lv_label_2, 0);
    lv_obj_set_width(lv_label_2, 72);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_2, &me106_text_14_white_right, 0, &meter_theme_index, 0);
    
    lv_obj_add_subject_set_int_event(theme_item_dark, &meter_theme_index, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * theme_item_light = lv_button_create(theme_list);
    lv_obj_set_name(theme_item_light, "theme_item_light");
    lv_obj_set_x(theme_item_light, 0);
    lv_obj_set_y(theme_item_light, 50);
    lv_obj_set_width(theme_item_light, 276);
    lv_obj_set_height(theme_item_light, 42);
    lv_obj_set_style_pad_all(theme_item_light, 0, 0);
    lv_obj_add_style(theme_item_light, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(theme_item_light, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_light, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * theme_item_light_selected_bg = lv_obj_create(theme_item_light);
    lv_obj_set_name(theme_item_light_selected_bg, "theme_item_light_selected_bg");
    lv_obj_set_x(theme_item_light_selected_bg, 0);
    lv_obj_set_y(theme_item_light_selected_bg, 0);
    lv_obj_set_width(theme_item_light_selected_bg, 276);
    lv_obj_set_height(theme_item_light_selected_bg, 42);
    lv_obj_set_style_pad_all(theme_item_light_selected_bg, 0, 0);
    lv_obj_set_style_border_width(theme_item_light_selected_bg, 0, 0);
    lv_obj_set_flag(theme_item_light_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(theme_item_light_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(theme_item_light_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_light_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(theme_item_light_selected_bg, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * theme_light_swatch_bg = lv_obj_create(theme_item_light);
    lv_obj_set_name(theme_light_swatch_bg, "theme_light_swatch_bg");
    lv_obj_set_x(theme_light_swatch_bg, 16);
    lv_obj_set_y(theme_light_swatch_bg, 12);
    lv_obj_set_width(theme_light_swatch_bg, 14);
    lv_obj_set_height(theme_light_swatch_bg, 14);
    lv_obj_set_style_radius(theme_light_swatch_bg, 7, 0);
    lv_obj_set_style_bg_color(theme_light_swatch_bg, lv_color_hex(0xFFFFFF), 0);
    lv_obj_set_style_bg_opa(theme_light_swatch_bg, 255, 0);
    lv_obj_set_style_border_width(theme_light_swatch_bg, 1, 0);
    lv_obj_set_style_border_color(theme_light_swatch_bg, lv_color_hex(0xC9D5E3), 0);
    lv_obj_set_flag(theme_light_swatch_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * theme_light_swatch_accent = lv_obj_create(theme_item_light);
    lv_obj_set_name(theme_light_swatch_accent, "theme_light_swatch_accent");
    lv_obj_set_x(theme_light_swatch_accent, 36);
    lv_obj_set_y(theme_light_swatch_accent, 12);
    lv_obj_set_width(theme_light_swatch_accent, 14);
    lv_obj_set_height(theme_light_swatch_accent, 14);
    lv_obj_set_style_radius(theme_light_swatch_accent, 7, 0);
    lv_obj_set_style_bg_color(theme_light_swatch_accent, lv_color_hex(0x6366F1), 0);
    lv_obj_set_style_bg_opa(theme_light_swatch_accent, 255, 0);
    lv_obj_set_style_border_width(theme_light_swatch_accent, 0, 0);
    lv_obj_set_flag(theme_light_swatch_accent, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_label_3 = lv_label_create(theme_item_light);
    lv_label_set_text(lv_label_3, "2 浅色");
    lv_obj_set_align(lv_label_3, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_3, 64);
    lv_obj_set_y(lv_label_3, 0);
    lv_obj_set_width(lv_label_3, 104);
    lv_obj_add_style(lv_label_3, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_3, &me106_text_16_white, 0, &meter_theme_index, 1);
    
    lv_obj_t * lv_label_4 = lv_label_create(theme_item_light);
    lv_label_set_text(lv_label_4, "轻 UI");
    lv_obj_set_align(lv_label_4, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_4, -14);
    lv_obj_set_y(lv_label_4, 0);
    lv_obj_set_width(lv_label_4, 72);
    lv_obj_add_style(lv_label_4, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_4, &me106_text_14_white_right, 0, &meter_theme_index, 1);
    
    lv_obj_add_subject_set_int_event(theme_item_light, &meter_theme_index, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * theme_item_alarm = lv_button_create(theme_list);
    lv_obj_set_name(theme_item_alarm, "theme_item_alarm");
    lv_obj_set_x(theme_item_alarm, 0);
    lv_obj_set_y(theme_item_alarm, 100);
    lv_obj_set_width(theme_item_alarm, 276);
    lv_obj_set_height(theme_item_alarm, 42);
    lv_obj_set_style_pad_all(theme_item_alarm, 0, 0);
    lv_obj_add_style(theme_item_alarm, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(theme_item_alarm, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_alarm, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * theme_item_alarm_selected_bg = lv_obj_create(theme_item_alarm);
    lv_obj_set_name(theme_item_alarm_selected_bg, "theme_item_alarm_selected_bg");
    lv_obj_set_x(theme_item_alarm_selected_bg, 0);
    lv_obj_set_y(theme_item_alarm_selected_bg, 0);
    lv_obj_set_width(theme_item_alarm_selected_bg, 276);
    lv_obj_set_height(theme_item_alarm_selected_bg, 42);
    lv_obj_set_style_pad_all(theme_item_alarm_selected_bg, 0, 0);
    lv_obj_set_style_border_width(theme_item_alarm_selected_bg, 0, 0);
    lv_obj_set_flag(theme_item_alarm_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(theme_item_alarm_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(theme_item_alarm_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_item_alarm_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(theme_item_alarm_selected_bg, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * theme_alarm_swatch_red = lv_obj_create(theme_item_alarm);
    lv_obj_set_name(theme_alarm_swatch_red, "theme_alarm_swatch_red");
    lv_obj_set_x(theme_alarm_swatch_red, 16);
    lv_obj_set_y(theme_alarm_swatch_red, 12);
    lv_obj_set_width(theme_alarm_swatch_red, 10);
    lv_obj_set_height(theme_alarm_swatch_red, 14);
    lv_obj_set_style_radius(theme_alarm_swatch_red, 5, 0);
    lv_obj_set_style_bg_color(theme_alarm_swatch_red, lv_color_hex(0xEB5757), 0);
    lv_obj_set_style_bg_opa(theme_alarm_swatch_red, 255, 0);
    lv_obj_set_style_border_width(theme_alarm_swatch_red, 0, 0);
    lv_obj_set_flag(theme_alarm_swatch_red, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * theme_alarm_swatch_yellow = lv_obj_create(theme_item_alarm);
    lv_obj_set_name(theme_alarm_swatch_yellow, "theme_alarm_swatch_yellow");
    lv_obj_set_x(theme_alarm_swatch_yellow, 30);
    lv_obj_set_y(theme_alarm_swatch_yellow, 12);
    lv_obj_set_width(theme_alarm_swatch_yellow, 10);
    lv_obj_set_height(theme_alarm_swatch_yellow, 14);
    lv_obj_set_style_radius(theme_alarm_swatch_yellow, 5, 0);
    lv_obj_set_style_bg_color(theme_alarm_swatch_yellow, lv_color_hex(0xF2C94C), 0);
    lv_obj_set_style_bg_opa(theme_alarm_swatch_yellow, 255, 0);
    lv_obj_set_style_border_width(theme_alarm_swatch_yellow, 0, 0);
    lv_obj_set_flag(theme_alarm_swatch_yellow, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * theme_alarm_swatch_green = lv_obj_create(theme_item_alarm);
    lv_obj_set_name(theme_alarm_swatch_green, "theme_alarm_swatch_green");
    lv_obj_set_x(theme_alarm_swatch_green, 44);
    lv_obj_set_y(theme_alarm_swatch_green, 12);
    lv_obj_set_width(theme_alarm_swatch_green, 10);
    lv_obj_set_height(theme_alarm_swatch_green, 14);
    lv_obj_set_style_radius(theme_alarm_swatch_green, 5, 0);
    lv_obj_set_style_bg_color(theme_alarm_swatch_green, lv_color_hex(0x6FCF97), 0);
    lv_obj_set_style_bg_opa(theme_alarm_swatch_green, 255, 0);
    lv_obj_set_style_border_width(theme_alarm_swatch_green, 0, 0);
    lv_obj_set_flag(theme_alarm_swatch_green, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_label_5 = lv_label_create(theme_item_alarm);
    lv_label_set_text(lv_label_5, "3 告警/工业色");
    lv_obj_set_align(lv_label_5, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_5, 64);
    lv_obj_set_y(lv_label_5, 0);
    lv_obj_set_width(lv_label_5, 122);
    lv_obj_add_style(lv_label_5, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_5, &me106_text_16_white, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(theme_item_alarm);
    lv_label_set_text(lv_label_6, "高识别");
    lv_obj_set_align(lv_label_6, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_6, -14);
    lv_obj_set_y(lv_label_6, 0);
    lv_obj_set_width(lv_label_6, 72);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_6, &me106_text_14_white_right, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(theme_item_alarm, &meter_theme_index, LV_EVENT_CLICKED, 2);
    
    lv_obj_t * screen_settings_theme_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_theme_bottom_bar, "screen_settings_theme_bottom_bar");
    lv_obj_set_x(screen_settings_theme_bottom_bar, 0);
    lv_obj_set_y(screen_settings_theme_bottom_bar, 207);
    lv_obj_set_width(screen_settings_theme_bottom_bar, 320);
    lv_obj_set_height(screen_settings_theme_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_theme_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_theme_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_theme_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_theme_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_theme_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_theme_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * theme_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(theme_btn_return, "theme_btn_return");
    lv_obj_set_x(theme_btn_return, 0);
    lv_obj_set_y(theme_btn_return, 207);
    lv_obj_set_width(theme_btn_return, 79);
    lv_obj_set_height(theme_btn_return, 32);
    lv_obj_add_style(theme_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(theme_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(theme_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(theme_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * theme_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(theme_btn_down, "theme_btn_down");
    lv_obj_set_x(theme_btn_down, 80);
    lv_obj_set_y(theme_btn_down, 207);
    lv_obj_set_width(theme_btn_down, 79);
    lv_obj_set_height(theme_btn_down, 32);
    lv_obj_add_style(theme_btn_down, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(theme_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(theme_btn_down);
    lv_image_set_src(lv_image_1, meter_arrow_down);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(theme_btn_down, &meter_theme_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(theme_btn_down, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(theme_btn_down, subject_increment_event_0, 2);
    lv_obj_set_subject_increment_event_rollover(theme_btn_down, subject_increment_event_0, true);
    
    lv_obj_t * theme_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(theme_btn_up, "theme_btn_up");
    lv_obj_set_x(theme_btn_up, 160);
    lv_obj_set_y(theme_btn_up, 207);
    lv_obj_set_width(theme_btn_up, 79);
    lv_obj_set_height(theme_btn_up, 32);
    lv_obj_add_style(theme_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(theme_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(theme_btn_up);
    lv_image_set_src(lv_image_2, meter_arrow_up);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(theme_btn_up, &meter_theme_index, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(theme_btn_up, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(theme_btn_up, subject_increment_event_1, 2);
    lv_obj_set_subject_increment_event_rollover(theme_btn_up, subject_increment_event_1, true);
    
    lv_obj_t * theme_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(theme_btn_yes, "theme_btn_yes");
    lv_obj_set_x(theme_btn_yes, 240);
    lv_obj_set_y(theme_btn_yes, 207);
    lv_obj_set_width(theme_btn_yes, 80);
    lv_obj_set_height(theme_btn_yes, 32);
    lv_obj_add_style(theme_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(theme_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(theme_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(theme_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

