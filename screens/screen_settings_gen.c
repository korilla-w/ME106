/**
 * @file screen_settings_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_gen.h"
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

lv_obj_t * screen_settings_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_#");
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
    lv_label_set_text(lv_label_0, "设置");
    lv_obj_set_x(lv_label_0, 156);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 140);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * settings_list = lv_obj_create(page_content);
    lv_obj_set_name(settings_list, "settings_list");
    lv_obj_set_x(settings_list, 24);
    lv_obj_set_y(settings_list, 48);
    lv_obj_set_width(settings_list, 270);
    lv_obj_set_height(settings_list, 154);
    lv_obj_set_style_bg_opa(settings_list, 0, 0);
    lv_obj_set_style_border_width(settings_list, 0, 0);
    lv_obj_set_style_pad_all(settings_list, 0, 0);
    lv_obj_set_scrollbar_mode(settings_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_flag(settings_list, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * settings_items = lv_obj_create(settings_list);
    lv_obj_set_name(settings_items, "settings_items");
    lv_obj_set_x(settings_items, 0);
    lv_obj_set_y(settings_items, 0);
    lv_obj_set_width(settings_items, 270);
    lv_obj_set_height(settings_items, 500);
    lv_obj_set_style_bg_opa(settings_items, 0, 0);
    lv_obj_set_style_border_width(settings_items, 0, 0);
    lv_obj_set_style_pad_all(settings_items, 0, 0);
    lv_obj_set_flag(settings_items, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(settings_items, &me106_move_y_n24, 0, &meter_settings_selected_index, 2);
    lv_obj_bind_style(settings_items, &me106_move_y_n70, 0, &meter_settings_selected_index, 3);
    lv_obj_bind_style(settings_items, &me106_move_y_n116, 0, &meter_settings_selected_index, 4);
    lv_obj_bind_style(settings_items, &me106_move_y_n162, 0, &meter_settings_selected_index, 5);
    lv_obj_bind_style(settings_items, &me106_move_y_n208, 0, &meter_settings_selected_index, 6);
    lv_obj_bind_style(settings_items, &me106_move_y_n254, 0, &meter_settings_selected_index, 7);
    lv_obj_bind_style(settings_items, &me106_move_y_n300, 0, &meter_settings_selected_index, 8);
    lv_obj_bind_style(settings_items, &me106_move_y_n346, 0, &meter_settings_selected_index, 9);
    lv_obj_bind_style(settings_items, &me106_move_y_n392, 0, &meter_settings_selected_index, 10);
    lv_obj_t * settings_item_wifi = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_wifi, "settings_item_wifi");
    lv_obj_set_x(settings_item_wifi, 0);
    lv_obj_set_y(settings_item_wifi, 0);
    lv_obj_set_width(settings_item_wifi, 270);
    lv_obj_set_height(settings_item_wifi, 40);
    lv_obj_set_style_pad_all(settings_item_wifi, 0, 0);
    lv_obj_add_style(settings_item_wifi, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_wifi, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_wifi, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_wifi_selected_bg = lv_obj_create(settings_item_wifi);
    lv_obj_set_name(settings_item_wifi_selected_bg, "settings_item_wifi_selected_bg");
    lv_obj_set_x(settings_item_wifi_selected_bg, 0);
    lv_obj_set_y(settings_item_wifi_selected_bg, 0);
    lv_obj_set_width(settings_item_wifi_selected_bg, 270);
    lv_obj_set_height(settings_item_wifi_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_wifi_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_wifi_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_wifi_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_wifi_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_wifi_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_wifi_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_wifi_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_image_0 = lv_image_create(settings_item_wifi);
    lv_image_set_src(lv_image_0, meter_icon_wifi);
    lv_obj_set_align(lv_image_0, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_0, 12);
    lv_obj_set_y(lv_image_0, 0);
    lv_obj_add_style(lv_image_0, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_0, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_0, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(settings_item_wifi);
    lv_label_set_text(lv_label_1, "WiFi配置");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_1, 40);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 180);
    lv_obj_add_style(lv_label_1, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_1, &me106_text_16_white, 0, &meter_settings_selected_index, 0);
    
    lv_obj_t * lv_image_1 = lv_image_create(settings_item_wifi);
    lv_image_set_src(lv_image_1, meter_arrow_right);
    lv_obj_set_align(lv_image_1, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_1, -14);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 90, 0);
    
    lv_obj_t * settings_item_uart = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_uart, "settings_item_uart");
    lv_obj_set_x(settings_item_uart, 0);
    lv_obj_set_y(settings_item_uart, 46);
    lv_obj_set_width(settings_item_uart, 270);
    lv_obj_set_height(settings_item_uart, 40);
    lv_obj_set_style_pad_all(settings_item_uart, 0, 0);
    lv_obj_add_style(settings_item_uart, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_uart, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_uart, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_uart_selected_bg = lv_obj_create(settings_item_uart);
    lv_obj_set_name(settings_item_uart_selected_bg, "settings_item_uart_selected_bg");
    lv_obj_set_x(settings_item_uart_selected_bg, 0);
    lv_obj_set_y(settings_item_uart_selected_bg, 0);
    lv_obj_set_width(settings_item_uart_selected_bg, 270);
    lv_obj_set_height(settings_item_uart_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_uart_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_uart_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_uart_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_uart_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_uart_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_uart_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_uart_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_image_2 = lv_image_create(settings_item_uart);
    lv_image_set_src(lv_image_2, meter_icon_serial);
    lv_obj_set_align(lv_image_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_2, 15);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_add_style(lv_image_2, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_2, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_2, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(settings_item_uart);
    lv_label_set_text(lv_label_2, "串口设置");
    lv_obj_set_align(lv_label_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_2, 40);
    lv_obj_set_y(lv_label_2, 0);
    lv_obj_set_width(lv_label_2, 180);
    lv_obj_add_style(lv_label_2, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_2, &me106_text_16_white, 0, &meter_settings_selected_index, 1);
    
    lv_obj_t * lv_image_3 = lv_image_create(settings_item_uart);
    lv_image_set_src(lv_image_3, meter_arrow_right);
    lv_obj_set_align(lv_image_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_3, -14);
    lv_obj_set_y(lv_image_3, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 90, 0);
    
    lv_obj_t * settings_item_ratio = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_ratio, "settings_item_ratio");
    lv_obj_set_x(settings_item_ratio, 0);
    lv_obj_set_y(settings_item_ratio, 92);
    lv_obj_set_width(settings_item_ratio, 270);
    lv_obj_set_height(settings_item_ratio, 40);
    lv_obj_set_style_pad_all(settings_item_ratio, 0, 0);
    lv_obj_add_style(settings_item_ratio, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_ratio, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_ratio, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_ratio_selected_bg = lv_obj_create(settings_item_ratio);
    lv_obj_set_name(settings_item_ratio_selected_bg, "settings_item_ratio_selected_bg");
    lv_obj_set_x(settings_item_ratio_selected_bg, 0);
    lv_obj_set_y(settings_item_ratio_selected_bg, 0);
    lv_obj_set_width(settings_item_ratio_selected_bg, 270);
    lv_obj_set_height(settings_item_ratio_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_ratio_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_ratio_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_ratio_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_ratio_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_ratio_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_ratio_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_ratio_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_image_4 = lv_image_create(settings_item_ratio);
    lv_image_set_src(lv_image_4, meter_icon_ratio);
    lv_obj_set_align(lv_image_4, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_4, 12);
    lv_obj_set_y(lv_image_4, 0);
    lv_obj_add_style(lv_image_4, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_4, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_4, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(settings_item_ratio);
    lv_label_set_text(lv_label_3, "变比设置");
    lv_obj_set_align(lv_label_3, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_3, 40);
    lv_obj_set_y(lv_label_3, 0);
    lv_obj_set_width(lv_label_3, 180);
    lv_obj_add_style(lv_label_3, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_3, &me106_text_16_white, 0, &meter_settings_selected_index, 2);
    
    lv_obj_t * lv_image_5 = lv_image_create(settings_item_ratio);
    lv_image_set_src(lv_image_5, meter_arrow_right);
    lv_obj_set_align(lv_image_5, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_5, -14);
    lv_obj_set_y(lv_image_5, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_5, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_5, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_5, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_5, 90, 0);
    
    lv_obj_t * settings_item_meter_addr = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_meter_addr, "settings_item_meter_addr");
    lv_obj_set_x(settings_item_meter_addr, 0);
    lv_obj_set_y(settings_item_meter_addr, 138);
    lv_obj_set_width(settings_item_meter_addr, 270);
    lv_obj_set_height(settings_item_meter_addr, 40);
    lv_obj_set_style_pad_all(settings_item_meter_addr, 0, 0);
    lv_obj_add_style(settings_item_meter_addr, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_meter_addr, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_meter_addr, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_meter_addr_selected_bg = lv_obj_create(settings_item_meter_addr);
    lv_obj_set_name(settings_item_meter_addr_selected_bg, "settings_item_meter_addr_selected_bg");
    lv_obj_set_x(settings_item_meter_addr_selected_bg, 0);
    lv_obj_set_y(settings_item_meter_addr_selected_bg, 0);
    lv_obj_set_width(settings_item_meter_addr_selected_bg, 270);
    lv_obj_set_height(settings_item_meter_addr_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_meter_addr_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_meter_addr_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_meter_addr_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_meter_addr_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_meter_addr_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_meter_addr_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_meter_addr_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
    
    lv_obj_t * lv_image_6 = lv_image_create(settings_item_meter_addr);
    lv_image_set_src(lv_image_6, meter_icon_address);
    lv_obj_set_align(lv_image_6, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_6, 13);
    lv_obj_set_y(lv_image_6, 0);
    lv_obj_add_style(lv_image_6, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_6, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_6, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_4 = lv_label_create(settings_item_meter_addr);
    lv_label_set_text(lv_label_4, "电表地址");
    lv_obj_set_align(lv_label_4, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_4, 40);
    lv_obj_set_y(lv_label_4, 0);
    lv_obj_set_width(lv_label_4, 180);
    lv_obj_add_style(lv_label_4, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_4, &me106_text_16_white, 0, &meter_settings_selected_index, 3);
    
    lv_obj_t * lv_image_7 = lv_image_create(settings_item_meter_addr);
    lv_image_set_src(lv_image_7, meter_arrow_right);
    lv_obj_set_align(lv_image_7, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_7, -14);
    lv_obj_set_y(lv_image_7, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_7, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_7, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_7, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_7, 90, 0);
    
    lv_obj_t * settings_item_theme = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_theme, "settings_item_theme");
    lv_obj_set_x(settings_item_theme, 0);
    lv_obj_set_y(settings_item_theme, 184);
    lv_obj_set_width(settings_item_theme, 270);
    lv_obj_set_height(settings_item_theme, 40);
    lv_obj_set_style_pad_all(settings_item_theme, 0, 0);
    lv_obj_add_style(settings_item_theme, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_theme, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_theme, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_theme_selected_bg = lv_obj_create(settings_item_theme);
    lv_obj_set_name(settings_item_theme_selected_bg, "settings_item_theme_selected_bg");
    lv_obj_set_x(settings_item_theme_selected_bg, 0);
    lv_obj_set_y(settings_item_theme_selected_bg, 0);
    lv_obj_set_width(settings_item_theme_selected_bg, 270);
    lv_obj_set_height(settings_item_theme_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_theme_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_theme_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_theme_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_theme_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_theme_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_theme_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_theme_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 4);
    
    lv_obj_t * lv_image_8 = lv_image_create(settings_item_theme);
    lv_image_set_src(lv_image_8, meter_icon_theme);
    lv_obj_set_align(lv_image_8, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_8, 12);
    lv_obj_set_y(lv_image_8, 0);
    lv_obj_add_style(lv_image_8, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_8, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_8, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(settings_item_theme);
    lv_label_set_text(lv_label_5, "主题设置");
    lv_obj_set_align(lv_label_5, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_5, 40);
    lv_obj_set_y(lv_label_5, 0);
    lv_obj_set_width(lv_label_5, 120);
    lv_obj_add_style(lv_label_5, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_5, &me106_text_16_white, 0, &meter_settings_selected_index, 4);
    
    lv_obj_t * settings_theme_value = lv_obj_create(settings_item_theme);
    lv_obj_set_name(settings_theme_value, "settings_theme_value");
    lv_obj_set_align(settings_theme_value, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(settings_theme_value, -34);
    lv_obj_set_y(settings_theme_value, 0);
    lv_obj_set_width(settings_theme_value, 52);
    lv_obj_set_height(settings_theme_value, 18);
    lv_obj_set_style_bg_opa(settings_theme_value, 0, 0);
    lv_obj_set_style_border_width(settings_theme_value, 0, 0);
    lv_obj_set_style_pad_all(settings_theme_value, 0, 0);
    lv_obj_set_flag(settings_theme_value, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_6 = lv_label_create(settings_theme_value);
    lv_label_set_text(lv_label_6, "深色");
    lv_obj_set_align(lv_label_6, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_6, 52);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_6, &me106_text_14_white_right, 0, &meter_settings_selected_index, 4);
    lv_obj_bind_flag_if_not_eq(lv_label_6, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(settings_theme_value);
    lv_label_set_text(lv_label_7, "浅色");
    lv_obj_set_align(lv_label_7, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_7, 52);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_7, &me106_text_14_white_right, 0, &meter_settings_selected_index, 4);
    lv_obj_bind_flag_if_not_eq(lv_label_7, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_8 = lv_label_create(settings_theme_value);
    lv_label_set_text(lv_label_8, "告警");
    lv_obj_set_align(lv_label_8, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_8, 52);
    lv_obj_add_style(lv_label_8, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_8, &me106_text_14_white_right, 0, &meter_settings_selected_index, 4);
    lv_obj_bind_flag_if_not_eq(lv_label_8, &meter_theme_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_image_9 = lv_image_create(settings_item_theme);
    lv_image_set_src(lv_image_9, meter_arrow_right);
    lv_obj_set_align(lv_image_9, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_9, -14);
    lv_obj_set_y(lv_image_9, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_9, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_9, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_9, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_9, 90, 0);
    
    lv_obj_t * settings_item_alarm = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_alarm, "settings_item_alarm");
    lv_obj_set_x(settings_item_alarm, 0);
    lv_obj_set_y(settings_item_alarm, 230);
    lv_obj_set_width(settings_item_alarm, 270);
    lv_obj_set_height(settings_item_alarm, 40);
    lv_obj_set_style_pad_all(settings_item_alarm, 0, 0);
    lv_obj_add_style(settings_item_alarm, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_alarm, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_alarm, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_alarm_selected_bg = lv_obj_create(settings_item_alarm);
    lv_obj_set_name(settings_item_alarm_selected_bg, "settings_item_alarm_selected_bg");
    lv_obj_set_x(settings_item_alarm_selected_bg, 0);
    lv_obj_set_y(settings_item_alarm_selected_bg, 0);
    lv_obj_set_width(settings_item_alarm_selected_bg, 270);
    lv_obj_set_height(settings_item_alarm_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_alarm_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_alarm_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_alarm_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_alarm_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_alarm_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_alarm_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_alarm_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 5);
    
    lv_obj_t * lv_image_10 = lv_image_create(settings_item_alarm);
    lv_image_set_src(lv_image_10, meter_icon_alarm);
    lv_obj_set_align(lv_image_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_10, 13);
    lv_obj_set_y(lv_image_10, 0);
    lv_obj_add_style(lv_image_10, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_10, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_10, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_9 = lv_label_create(settings_item_alarm);
    lv_label_set_text(lv_label_9, "告警阈值");
    lv_obj_set_align(lv_label_9, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_9, 40);
    lv_obj_set_y(lv_label_9, 0);
    lv_obj_set_width(lv_label_9, 180);
    lv_obj_add_style(lv_label_9, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_9, &me106_text_16_white, 0, &meter_settings_selected_index, 5);
    
    lv_obj_t * lv_image_11 = lv_image_create(settings_item_alarm);
    lv_image_set_src(lv_image_11, meter_arrow_right);
    lv_obj_set_align(lv_image_11, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_11, -14);
    lv_obj_set_y(lv_image_11, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_11, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_11, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_11, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_11, 90, 0);
    
    lv_obj_t * settings_item_brightness = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_brightness, "settings_item_brightness");
    lv_obj_set_x(settings_item_brightness, 0);
    lv_obj_set_y(settings_item_brightness, 276);
    lv_obj_set_width(settings_item_brightness, 270);
    lv_obj_set_height(settings_item_brightness, 40);
    lv_obj_set_style_pad_all(settings_item_brightness, 0, 0);
    lv_obj_add_style(settings_item_brightness, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_brightness, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_brightness, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_brightness_selected_bg = lv_obj_create(settings_item_brightness);
    lv_obj_set_name(settings_item_brightness_selected_bg, "settings_item_brightness_selected_bg");
    lv_obj_set_x(settings_item_brightness_selected_bg, 0);
    lv_obj_set_y(settings_item_brightness_selected_bg, 0);
    lv_obj_set_width(settings_item_brightness_selected_bg, 270);
    lv_obj_set_height(settings_item_brightness_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_brightness_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_brightness_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_brightness_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_brightness_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_brightness_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_brightness_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_brightness_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 6);
    
    lv_obj_t * lv_image_12 = lv_image_create(settings_item_brightness);
    lv_image_set_src(lv_image_12, meter_icon_screen);
    lv_obj_set_align(lv_image_12, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_12, 15);
    lv_obj_set_y(lv_image_12, 0);
    lv_obj_add_style(lv_image_12, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_12, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_12, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_10 = lv_label_create(settings_item_brightness);
    lv_label_set_text(lv_label_10, "屏幕亮度");
    lv_obj_set_align(lv_label_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_10, 40);
    lv_obj_set_y(lv_label_10, 0);
    lv_obj_set_width(lv_label_10, 180);
    lv_obj_add_style(lv_label_10, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_10, &me106_text_16_white, 0, &meter_settings_selected_index, 6);
    
    lv_obj_t * lv_image_13 = lv_image_create(settings_item_brightness);
    lv_image_set_src(lv_image_13, meter_arrow_right);
    lv_obj_set_align(lv_image_13, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_13, -14);
    lv_obj_set_y(lv_image_13, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_13, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_13, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_13, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_13, 90, 0);
    
    lv_obj_t * settings_item_screen_timeout = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_screen_timeout, "settings_item_screen_timeout");
    lv_obj_set_x(settings_item_screen_timeout, 0);
    lv_obj_set_y(settings_item_screen_timeout, 322);
    lv_obj_set_width(settings_item_screen_timeout, 270);
    lv_obj_set_height(settings_item_screen_timeout, 40);
    lv_obj_set_style_pad_all(settings_item_screen_timeout, 0, 0);
    lv_obj_add_style(settings_item_screen_timeout, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_screen_timeout, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_screen_timeout, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_screen_timeout_selected_bg = lv_obj_create(settings_item_screen_timeout);
    lv_obj_set_name(settings_item_screen_timeout_selected_bg, "settings_item_screen_timeout_selected_bg");
    lv_obj_set_x(settings_item_screen_timeout_selected_bg, 0);
    lv_obj_set_y(settings_item_screen_timeout_selected_bg, 0);
    lv_obj_set_width(settings_item_screen_timeout_selected_bg, 270);
    lv_obj_set_height(settings_item_screen_timeout_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_screen_timeout_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_screen_timeout_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_screen_timeout_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_screen_timeout_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_screen_timeout_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_screen_timeout_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_screen_timeout_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 7);
    
    lv_obj_t * lv_image_14 = lv_image_create(settings_item_screen_timeout);
    lv_image_set_src(lv_image_14, meter_icon_select);
    lv_obj_set_align(lv_image_14, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_14, 13);
    lv_obj_set_y(lv_image_14, 0);
    lv_obj_add_style(lv_image_14, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_14, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_14, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(settings_item_screen_timeout);
    lv_label_set_text(lv_label_11, "息屏时间");
    lv_obj_set_align(lv_label_11, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_11, 40);
    lv_obj_set_y(lv_label_11, 0);
    lv_obj_set_width(lv_label_11, 180);
    lv_obj_add_style(lv_label_11, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_11, &me106_text_16_white, 0, &meter_settings_selected_index, 7);
    
    lv_obj_t * lv_image_15 = lv_image_create(settings_item_screen_timeout);
    lv_image_set_src(lv_image_15, meter_arrow_right);
    lv_obj_set_align(lv_image_15, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_15, -14);
    lv_obj_set_y(lv_image_15, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_15, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_15, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_15, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_15, 90, 0);
    
    lv_obj_t * settings_item_factory = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_factory, "settings_item_factory");
    lv_obj_set_x(settings_item_factory, 0);
    lv_obj_set_y(settings_item_factory, 368);
    lv_obj_set_width(settings_item_factory, 270);
    lv_obj_set_height(settings_item_factory, 40);
    lv_obj_set_style_pad_all(settings_item_factory, 0, 0);
    lv_obj_add_style(settings_item_factory, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_factory, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_factory, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_factory_selected_bg = lv_obj_create(settings_item_factory);
    lv_obj_set_name(settings_item_factory_selected_bg, "settings_item_factory_selected_bg");
    lv_obj_set_x(settings_item_factory_selected_bg, 0);
    lv_obj_set_y(settings_item_factory_selected_bg, 0);
    lv_obj_set_width(settings_item_factory_selected_bg, 270);
    lv_obj_set_height(settings_item_factory_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_factory_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_factory_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_factory_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_factory_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_factory_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_factory_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_factory_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 8);
    
    lv_obj_t * lv_image_16 = lv_image_create(settings_item_factory);
    lv_image_set_src(lv_image_16, meter_icon_restart);
    lv_obj_set_align(lv_image_16, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_16, 12);
    lv_obj_set_y(lv_image_16, 0);
    lv_obj_add_style(lv_image_16, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_16, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_16, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_12 = lv_label_create(settings_item_factory);
    lv_label_set_text(lv_label_12, "恢复出厂");
    lv_obj_set_align(lv_label_12, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_12, 40);
    lv_obj_set_y(lv_label_12, 0);
    lv_obj_set_width(lv_label_12, 180);
    lv_obj_add_style(lv_label_12, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_12, &me106_text_16_white, 0, &meter_settings_selected_index, 8);
    
    lv_obj_t * lv_image_17 = lv_image_create(settings_item_factory);
    lv_image_set_src(lv_image_17, meter_arrow_right);
    lv_obj_set_align(lv_image_17, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_17, -14);
    lv_obj_set_y(lv_image_17, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_17, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_17, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_17, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_17, 90, 0);
    
    lv_obj_t * settings_item_upgrade = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_upgrade, "settings_item_upgrade");
    lv_obj_set_x(settings_item_upgrade, 0);
    lv_obj_set_y(settings_item_upgrade, 414);
    lv_obj_set_width(settings_item_upgrade, 270);
    lv_obj_set_height(settings_item_upgrade, 40);
    lv_obj_set_style_pad_all(settings_item_upgrade, 0, 0);
    lv_obj_add_style(settings_item_upgrade, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_upgrade, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_upgrade, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_upgrade_selected_bg = lv_obj_create(settings_item_upgrade);
    lv_obj_set_name(settings_item_upgrade_selected_bg, "settings_item_upgrade_selected_bg");
    lv_obj_set_x(settings_item_upgrade_selected_bg, 0);
    lv_obj_set_y(settings_item_upgrade_selected_bg, 0);
    lv_obj_set_width(settings_item_upgrade_selected_bg, 270);
    lv_obj_set_height(settings_item_upgrade_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_upgrade_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_upgrade_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_upgrade_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_upgrade_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_upgrade_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_upgrade_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_upgrade_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 9);
    
    lv_obj_t * lv_image_18 = lv_image_create(settings_item_upgrade);
    lv_image_set_src(lv_image_18, meter_icon_update);
    lv_obj_set_align(lv_image_18, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_18, 12);
    lv_obj_set_y(lv_image_18, 0);
    lv_obj_add_style(lv_image_18, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_18, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_18, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_13 = lv_label_create(settings_item_upgrade);
    lv_label_set_text(lv_label_13, "固件升级");
    lv_obj_set_align(lv_label_13, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_13, 40);
    lv_obj_set_y(lv_label_13, 0);
    lv_obj_set_width(lv_label_13, 180);
    lv_obj_add_style(lv_label_13, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_13, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_13, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_13, &me106_text_16_white, 0, &meter_settings_selected_index, 9);
    
    lv_obj_t * lv_image_19 = lv_image_create(settings_item_upgrade);
    lv_image_set_src(lv_image_19, meter_arrow_right);
    lv_obj_set_align(lv_image_19, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_19, -14);
    lv_obj_set_y(lv_image_19, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_19, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_19, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_19, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_19, 90, 0);
    
    lv_obj_t * settings_item_system = lv_button_create(settings_items);
    lv_obj_set_name(settings_item_system, "settings_item_system");
    lv_obj_set_x(settings_item_system, 0);
    lv_obj_set_y(settings_item_system, 460);
    lv_obj_set_width(settings_item_system, 270);
    lv_obj_set_height(settings_item_system, 40);
    lv_obj_set_style_pad_all(settings_item_system, 0, 0);
    lv_obj_add_style(settings_item_system, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(settings_item_system, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_system, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * settings_item_system_selected_bg = lv_obj_create(settings_item_system);
    lv_obj_set_name(settings_item_system_selected_bg, "settings_item_system_selected_bg");
    lv_obj_set_x(settings_item_system_selected_bg, 0);
    lv_obj_set_y(settings_item_system_selected_bg, 0);
    lv_obj_set_width(settings_item_system_selected_bg, 270);
    lv_obj_set_height(settings_item_system_selected_bg, 40);
    lv_obj_set_style_pad_all(settings_item_system_selected_bg, 0, 0);
    lv_obj_set_style_border_width(settings_item_system_selected_bg, 0, 0);
    lv_obj_set_flag(settings_item_system_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(settings_item_system_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(settings_item_system_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_item_system_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(settings_item_system_selected_bg, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 10);
    
    lv_obj_t * lv_image_20 = lv_image_create(settings_item_system);
    lv_image_set_src(lv_image_20, meter_icon_information);
    lv_obj_set_align(lv_image_20, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_20, 12);
    lv_obj_set_y(lv_image_20, 0);
    lv_obj_add_style(lv_image_20, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_20, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_20, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_14 = lv_label_create(settings_item_system);
    lv_label_set_text(lv_label_14, "系统信息");
    lv_obj_set_align(lv_label_14, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_14, 40);
    lv_obj_set_y(lv_label_14, 0);
    lv_obj_set_width(lv_label_14, 180);
    lv_obj_add_style(lv_label_14, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_14, &me106_text_16_white, 0, &meter_settings_selected_index, 10);
    
    lv_obj_t * lv_image_21 = lv_image_create(settings_item_system);
    lv_image_set_src(lv_image_21, meter_arrow_right);
    lv_obj_set_align(lv_image_21, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_21, -14);
    lv_obj_set_y(lv_image_21, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_21, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_21, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_21, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_21, 90, 0);
    
    lv_obj_t * screen_settings_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_bottom_bar, "screen_settings_bottom_bar");
    lv_obj_set_x(screen_settings_bottom_bar, 0);
    lv_obj_set_y(screen_settings_bottom_bar, 207);
    lv_obj_set_width(screen_settings_bottom_bar, 320);
    lv_obj_set_height(screen_settings_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * settings_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_return, "settings_btn_return");
    lv_obj_set_x(settings_btn_return, 0);
    lv_obj_set_y(settings_btn_return, 207);
    lv_obj_set_width(settings_btn_return, 79);
    lv_obj_set_height(settings_btn_return, 32);
    lv_obj_add_style(settings_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(settings_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_22 = lv_image_create(settings_btn_return);
    lv_image_set_src(lv_image_22, meter_icon_return);
    lv_obj_set_align(lv_image_22, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_22, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_22, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_22, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_22, 230, 0);
    
    lv_obj_add_screen_create_event(settings_btn_return, LV_EVENT_CLICKED, screen_home_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_down, "settings_btn_down");
    lv_obj_set_x(settings_btn_down, 80);
    lv_obj_set_y(settings_btn_down, 207);
    lv_obj_set_width(settings_btn_down, 79);
    lv_obj_set_height(settings_btn_down, 32);
    lv_obj_add_style(settings_btn_down, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(settings_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_23 = lv_image_create(settings_btn_down);
    lv_image_set_src(lv_image_23, meter_arrow_down);
    lv_obj_set_align(lv_image_23, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_23, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_23, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_23, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_23, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(settings_btn_down, &meter_settings_selected_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(settings_btn_down, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(settings_btn_down, subject_increment_event_0, 10);
    lv_obj_set_subject_increment_event_rollover(settings_btn_down, subject_increment_event_0, true);
    
    lv_obj_t * settings_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_up, "settings_btn_up");
    lv_obj_set_x(settings_btn_up, 160);
    lv_obj_set_y(settings_btn_up, 207);
    lv_obj_set_width(settings_btn_up, 79);
    lv_obj_set_height(settings_btn_up, 32);
    lv_obj_add_style(settings_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(settings_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_24 = lv_image_create(settings_btn_up);
    lv_image_set_src(lv_image_24, meter_arrow_up);
    lv_obj_set_align(lv_image_24, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_24, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_24, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_24, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_24, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(settings_btn_up, &meter_settings_selected_index, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(settings_btn_up, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(settings_btn_up, subject_increment_event_1, 10);
    lv_obj_set_subject_increment_event_rollover(settings_btn_up, subject_increment_event_1, true);
    
    lv_obj_t * settings_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes, "settings_btn_yes");
    lv_obj_set_x(settings_btn_yes, 240);
    lv_obj_set_y(settings_btn_yes, 207);
    lv_obj_set_width(settings_btn_yes, 80);
    lv_obj_set_height(settings_btn_yes, 32);
    lv_obj_add_style(settings_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(settings_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(settings_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_25 = lv_image_create(settings_btn_yes);
    lv_image_set_src(lv_image_25, meter_yes);
    lv_obj_set_align(lv_image_25, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_25, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_25, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_25, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_25, 230, 0);
    
    lv_obj_t * settings_btn_yes_wifi = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_wifi, "settings_btn_yes_wifi");
    lv_obj_set_x(settings_btn_yes_wifi, 240);
    lv_obj_set_y(settings_btn_yes_wifi, 207);
    lv_obj_set_width(settings_btn_yes_wifi, 80);
    lv_obj_set_height(settings_btn_yes_wifi, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_wifi, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_wifi, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_wifi, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_wifi, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_screen_create_event(settings_btn_yes_wifi, LV_EVENT_CLICKED, screen_settings_wifi_sta_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_uart = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_uart, "settings_btn_yes_uart");
    lv_obj_set_x(settings_btn_yes_uart, 240);
    lv_obj_set_y(settings_btn_yes_uart, 207);
    lv_obj_set_width(settings_btn_yes_uart, 80);
    lv_obj_set_height(settings_btn_yes_uart, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_uart, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_uart, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_uart, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_uart, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_screen_create_event(settings_btn_yes_uart, LV_EVENT_CLICKED, screen_settings_uart_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_ratio = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_ratio, "settings_btn_yes_ratio");
    lv_obj_set_x(settings_btn_yes_ratio, 240);
    lv_obj_set_y(settings_btn_yes_ratio, 207);
    lv_obj_set_width(settings_btn_yes_ratio, 80);
    lv_obj_set_height(settings_btn_yes_ratio, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_ratio, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_ratio, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_ratio, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_ratio, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    lv_obj_add_screen_create_event(settings_btn_yes_ratio, LV_EVENT_CLICKED, screen_settings_ratio_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_meter_addr = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_meter_addr, "settings_btn_yes_meter_addr");
    lv_obj_set_x(settings_btn_yes_meter_addr, 240);
    lv_obj_set_y(settings_btn_yes_meter_addr, 207);
    lv_obj_set_width(settings_btn_yes_meter_addr, 80);
    lv_obj_set_height(settings_btn_yes_meter_addr, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_meter_addr, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_meter_addr, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_meter_addr, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_meter_addr, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
    lv_obj_add_screen_create_event(settings_btn_yes_meter_addr, LV_EVENT_CLICKED, screen_settings_address_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_theme = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_theme, "settings_btn_yes_theme");
    lv_obj_set_x(settings_btn_yes_theme, 240);
    lv_obj_set_y(settings_btn_yes_theme, 207);
    lv_obj_set_width(settings_btn_yes_theme, 80);
    lv_obj_set_height(settings_btn_yes_theme, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_theme, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_theme, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_theme, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_theme, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 4);
    lv_obj_add_screen_create_event(settings_btn_yes_theme, LV_EVENT_CLICKED, screen_settings_theme_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_alarm_threshold = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_alarm_threshold, "settings_btn_yes_alarm_threshold");
    lv_obj_set_x(settings_btn_yes_alarm_threshold, 240);
    lv_obj_set_y(settings_btn_yes_alarm_threshold, 207);
    lv_obj_set_width(settings_btn_yes_alarm_threshold, 80);
    lv_obj_set_height(settings_btn_yes_alarm_threshold, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_alarm_threshold, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_alarm_threshold, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_alarm_threshold, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_alarm_threshold, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 5);
    lv_obj_add_screen_create_event(settings_btn_yes_alarm_threshold, LV_EVENT_CLICKED, screen_settings_alarm_threshold_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_brightness = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_brightness, "settings_btn_yes_brightness");
    lv_obj_set_x(settings_btn_yes_brightness, 240);
    lv_obj_set_y(settings_btn_yes_brightness, 207);
    lv_obj_set_width(settings_btn_yes_brightness, 80);
    lv_obj_set_height(settings_btn_yes_brightness, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_brightness, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_brightness, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_brightness, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_brightness, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 6);
    lv_obj_add_screen_create_event(settings_btn_yes_brightness, LV_EVENT_CLICKED, screen_settings_brightness_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_screen_timeout = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_screen_timeout, "settings_btn_yes_screen_timeout");
    lv_obj_set_x(settings_btn_yes_screen_timeout, 240);
    lv_obj_set_y(settings_btn_yes_screen_timeout, 207);
    lv_obj_set_width(settings_btn_yes_screen_timeout, 80);
    lv_obj_set_height(settings_btn_yes_screen_timeout, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_screen_timeout, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_screen_timeout, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_screen_timeout, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_screen_timeout, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 7);
    lv_obj_add_screen_create_event(settings_btn_yes_screen_timeout, LV_EVENT_CLICKED, screen_settings_screen_timeout_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_factory = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_factory, "settings_btn_yes_factory");
    lv_obj_set_x(settings_btn_yes_factory, 240);
    lv_obj_set_y(settings_btn_yes_factory, 207);
    lv_obj_set_width(settings_btn_yes_factory, 80);
    lv_obj_set_height(settings_btn_yes_factory, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_factory, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_factory, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_factory, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_factory, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 8);
    lv_obj_add_screen_create_event(settings_btn_yes_factory, LV_EVENT_CLICKED, screen_settings_factory_reset_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_upgrade = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_upgrade, "settings_btn_yes_upgrade");
    lv_obj_set_x(settings_btn_yes_upgrade, 240);
    lv_obj_set_y(settings_btn_yes_upgrade, 207);
    lv_obj_set_width(settings_btn_yes_upgrade, 80);
    lv_obj_set_height(settings_btn_yes_upgrade, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_upgrade, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_upgrade, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_upgrade, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_upgrade, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 9);
    lv_obj_add_screen_create_event(settings_btn_yes_upgrade, LV_EVENT_CLICKED, screen_settings_upgrade_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * settings_btn_yes_system = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_btn_yes_system, "settings_btn_yes_system");
    lv_obj_set_x(settings_btn_yes_system, 240);
    lv_obj_set_y(settings_btn_yes_system, 207);
    lv_obj_set_width(settings_btn_yes_system, 80);
    lv_obj_set_height(settings_btn_yes_system, 32);
    lv_obj_set_style_bg_opa(settings_btn_yes_system, 0, 0);
    lv_obj_set_style_border_width(settings_btn_yes_system, 0, 0);
    lv_obj_set_style_shadow_width(settings_btn_yes_system, 0, 0);
    lv_obj_bind_flag_if_not_eq(settings_btn_yes_system, &meter_settings_selected_index, LV_OBJ_FLAG_HIDDEN, 10);
    lv_obj_add_screen_create_event(settings_btn_yes_system, LV_EVENT_CLICKED, screen_settings_system_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

