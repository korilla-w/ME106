/**
 * @file screen_settings_uart_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_uart_gen.h"
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

lv_obj_t * screen_settings_uart_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_uart_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_uart_selected_index, LV_EVENT_SCREEN_LOADED, 0);
        lv_obj_t * uart_content = lv_obj_create(lv_obj_0);
        lv_obj_set_name(uart_content, "uart_content");
        lv_obj_set_x(uart_content, 0);
        lv_obj_set_y(uart_content, 0);
        lv_obj_set_width(uart_content, 320);
        lv_obj_set_height(uart_content, 207);
        lv_obj_set_style_bg_opa(uart_content, 0, 0);
        lv_obj_set_style_border_width(uart_content, 0, 0);
        lv_obj_set_style_pad_all(uart_content, 0, 0);
        lv_obj_set_flag(uart_content, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_uart_title_label = lv_label_create(uart_content);
        lv_label_set_text(settings_uart_title_label, "串口设置");
        lv_obj_set_x(settings_uart_title_label, 152);
        lv_obj_set_y(settings_uart_title_label, 17);
        lv_obj_set_width(settings_uart_title_label, 144);
        lv_obj_set_name(settings_uart_title_label, "settings_uart_title_label");
        lv_obj_add_style(settings_uart_title_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_uart_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * uart_row_baud = lv_button_create(uart_content);
        lv_obj_set_name(uart_row_baud, "uart_row_baud");
        lv_obj_set_x(uart_row_baud, 22);
        lv_obj_set_y(uart_row_baud, 58);
        lv_obj_set_width(uart_row_baud, 276);
        lv_obj_set_height(uart_row_baud, 32);
        lv_obj_set_style_pad_all(uart_row_baud, 0, 0);
        lv_obj_add_style(uart_row_baud, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(uart_row_baud, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_baud, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * uart_row_baud_selected_bg = lv_obj_create(uart_row_baud);
        lv_obj_set_name(uart_row_baud_selected_bg, "uart_row_baud_selected_bg");
        lv_obj_set_x(uart_row_baud_selected_bg, 0);
        lv_obj_set_y(uart_row_baud_selected_bg, 0);
        lv_obj_set_width(uart_row_baud_selected_bg, 276);
        lv_obj_set_height(uart_row_baud_selected_bg, 32);
        lv_obj_set_style_pad_all(uart_row_baud_selected_bg, 0, 0);
        lv_obj_set_style_border_width(uart_row_baud_selected_bg, 0, 0);
        lv_obj_set_flag(uart_row_baud_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(uart_row_baud_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(uart_row_baud_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_baud_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(uart_row_baud_selected_bg, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_uart_row_baud_row_baud_label = lv_label_create(uart_row_baud);
        lv_label_set_text(settings_uart_row_baud_row_baud_label, "波特率");
        lv_obj_set_align(settings_uart_row_baud_row_baud_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_uart_row_baud_row_baud_label, 16);
        lv_obj_set_y(settings_uart_row_baud_row_baud_label, 0);
        lv_obj_set_width(settings_uart_row_baud_row_baud_label, 88);
        lv_obj_set_name(settings_uart_row_baud_row_baud_label, "settings_uart_row_baud_row_baud_label");
        lv_obj_add_style(settings_uart_row_baud_row_baud_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_uart_row_baud_row_baud_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_row_baud_row_baud_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_row_baud_row_baud_label, &me106_text_16_white, 0, &meter_uart_selected_index, 0);

        lv_obj_t * uart_value_baud = lv_obj_create(uart_row_baud);
        lv_obj_set_name(uart_value_baud, "uart_value_baud");
        lv_obj_set_align(uart_value_baud, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(uart_value_baud, -34);
        lv_obj_set_y(uart_value_baud, 0);
        lv_obj_set_width(uart_value_baud, 118);
        lv_obj_set_height(uart_value_baud, 24);
        lv_obj_set_style_bg_opa(uart_value_baud, 0, 0);
        lv_obj_set_style_border_width(uart_value_baud, 0, 0);
        lv_obj_set_style_pad_all(uart_value_baud, 0, 0);
        lv_obj_set_flag(uart_value_baud, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_uart_value_baud_tick_4800_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_4800_label, "4800");
        lv_obj_set_align(settings_uart_value_baud_tick_4800_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_4800_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_4800_label, "settings_uart_value_baud_tick_4800_label");
        lv_obj_add_style(settings_uart_value_baud_tick_4800_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_4800_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_4800_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_4800_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_4800_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_uart_value_baud_tick_9600_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_9600_label, "9600");
        lv_obj_set_align(settings_uart_value_baud_tick_9600_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_9600_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_9600_label, "settings_uart_value_baud_tick_9600_label");
        lv_obj_add_style(settings_uart_value_baud_tick_9600_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_9600_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_9600_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_9600_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_9600_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_uart_value_baud_tick_19200_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_19200_label, "19200");
        lv_obj_set_align(settings_uart_value_baud_tick_19200_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_19200_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_19200_label, "settings_uart_value_baud_tick_19200_label");
        lv_obj_add_style(settings_uart_value_baud_tick_19200_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_19200_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_19200_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_19200_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_19200_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * settings_uart_value_baud_tick_38400_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_38400_label, "38400");
        lv_obj_set_align(settings_uart_value_baud_tick_38400_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_38400_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_38400_label, "settings_uart_value_baud_tick_38400_label");
        lv_obj_add_style(settings_uart_value_baud_tick_38400_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_38400_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_38400_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_38400_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_38400_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * settings_uart_value_baud_tick_57600_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_57600_label, "57600");
        lv_obj_set_align(settings_uart_value_baud_tick_57600_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_57600_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_57600_label, "settings_uart_value_baud_tick_57600_label");
        lv_obj_add_style(settings_uart_value_baud_tick_57600_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_57600_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_57600_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_57600_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_57600_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 4);

        lv_obj_t * settings_uart_value_baud_tick_115200_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_115200_label, "115200");
        lv_obj_set_align(settings_uart_value_baud_tick_115200_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_115200_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_115200_label, "settings_uart_value_baud_tick_115200_label");
        lv_obj_add_style(settings_uart_value_baud_tick_115200_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_115200_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_115200_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_115200_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_115200_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 5);

        lv_obj_t * settings_uart_value_baud_tick_230400_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_230400_label, "230400");
        lv_obj_set_align(settings_uart_value_baud_tick_230400_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_230400_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_230400_label, "settings_uart_value_baud_tick_230400_label");
        lv_obj_add_style(settings_uart_value_baud_tick_230400_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_230400_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_230400_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_230400_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_230400_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 6);

        lv_obj_t * settings_uart_value_baud_tick_460800_label = lv_label_create(uart_value_baud);
        lv_label_set_text(settings_uart_value_baud_tick_460800_label, "460800");
        lv_obj_set_align(settings_uart_value_baud_tick_460800_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_baud_tick_460800_label, 118);
        lv_obj_set_name(settings_uart_value_baud_tick_460800_label, "settings_uart_value_baud_tick_460800_label");
        lv_obj_add_style(settings_uart_value_baud_tick_460800_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_baud_tick_460800_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_baud_tick_460800_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_baud_tick_460800_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_baud_tick_460800_label, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 7);

        lv_obj_t * lv_image_0 = lv_image_create(uart_row_baud);
        lv_image_set_src(lv_image_0, meter_arrow_right);
        lv_obj_set_align(lv_image_0, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_image_0, -14);
        lv_obj_set_y(lv_image_0, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 90, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 90, 0);
        lv_obj_add_style(lv_image_0, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_0, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_0, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_image_0, &me106_icon_white, 0, &meter_uart_selected_index, 0);

        lv_obj_add_subject_set_int_event(uart_row_baud, &meter_uart_selected_index, LV_EVENT_CLICKED, 0);

        lv_obj_t * uart_row_data_bits = lv_button_create(uart_content);
        lv_obj_set_name(uart_row_data_bits, "uart_row_data_bits");
        lv_obj_set_x(uart_row_data_bits, 22);
        lv_obj_set_y(uart_row_data_bits, 94);
        lv_obj_set_width(uart_row_data_bits, 276);
        lv_obj_set_height(uart_row_data_bits, 32);
        lv_obj_set_style_pad_all(uart_row_data_bits, 0, 0);
        lv_obj_add_style(uart_row_data_bits, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(uart_row_data_bits, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_data_bits, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * uart_row_data_bits_selected_bg = lv_obj_create(uart_row_data_bits);
        lv_obj_set_name(uart_row_data_bits_selected_bg, "uart_row_data_bits_selected_bg");
        lv_obj_set_x(uart_row_data_bits_selected_bg, 0);
        lv_obj_set_y(uart_row_data_bits_selected_bg, 0);
        lv_obj_set_width(uart_row_data_bits_selected_bg, 276);
        lv_obj_set_height(uart_row_data_bits_selected_bg, 32);
        lv_obj_set_style_pad_all(uart_row_data_bits_selected_bg, 0, 0);
        lv_obj_set_style_border_width(uart_row_data_bits_selected_bg, 0, 0);
        lv_obj_set_flag(uart_row_data_bits_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(uart_row_data_bits_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(uart_row_data_bits_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_data_bits_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(uart_row_data_bits_selected_bg, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_uart_row_data_bits_row_data_bits_label = lv_label_create(uart_row_data_bits);
        lv_label_set_text(settings_uart_row_data_bits_row_data_bits_label, "数据位");
        lv_obj_set_align(settings_uart_row_data_bits_row_data_bits_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_uart_row_data_bits_row_data_bits_label, 16);
        lv_obj_set_y(settings_uart_row_data_bits_row_data_bits_label, 0);
        lv_obj_set_width(settings_uart_row_data_bits_row_data_bits_label, 88);
        lv_obj_set_name(settings_uart_row_data_bits_row_data_bits_label, "settings_uart_row_data_bits_row_data_bits_label");
        lv_obj_add_style(settings_uart_row_data_bits_row_data_bits_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_uart_row_data_bits_row_data_bits_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_row_data_bits_row_data_bits_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_row_data_bits_row_data_bits_label, &me106_text_16_white, 0, &meter_uart_selected_index, 1);

        lv_obj_t * uart_value_data_bits = lv_obj_create(uart_row_data_bits);
        lv_obj_set_name(uart_value_data_bits, "uart_value_data_bits");
        lv_obj_set_align(uart_value_data_bits, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(uart_value_data_bits, -34);
        lv_obj_set_y(uart_value_data_bits, 0);
        lv_obj_set_width(uart_value_data_bits, 118);
        lv_obj_set_height(uart_value_data_bits, 24);
        lv_obj_set_style_bg_opa(uart_value_data_bits, 0, 0);
        lv_obj_set_style_border_width(uart_value_data_bits, 0, 0);
        lv_obj_set_style_pad_all(uart_value_data_bits, 0, 0);
        lv_obj_set_flag(uart_value_data_bits, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_uart_value_data_bits_tick_5_label = lv_label_create(uart_value_data_bits);
        lv_label_set_text(settings_uart_value_data_bits_tick_5_label, "5");
        lv_obj_set_align(settings_uart_value_data_bits_tick_5_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_data_bits_tick_5_label, 118);
        lv_obj_set_name(settings_uart_value_data_bits_tick_5_label, "settings_uart_value_data_bits_tick_5_label");
        lv_obj_add_style(settings_uart_value_data_bits_tick_5_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_5_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_5_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_5_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_data_bits_tick_5_label, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_uart_value_data_bits_tick_6_label = lv_label_create(uart_value_data_bits);
        lv_label_set_text(settings_uart_value_data_bits_tick_6_label, "6");
        lv_obj_set_align(settings_uart_value_data_bits_tick_6_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_data_bits_tick_6_label, 118);
        lv_obj_set_name(settings_uart_value_data_bits_tick_6_label, "settings_uart_value_data_bits_tick_6_label");
        lv_obj_add_style(settings_uart_value_data_bits_tick_6_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_6_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_6_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_6_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_data_bits_tick_6_label, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_uart_value_data_bits_tick_7_label = lv_label_create(uart_value_data_bits);
        lv_label_set_text(settings_uart_value_data_bits_tick_7_label, "7");
        lv_obj_set_align(settings_uart_value_data_bits_tick_7_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_data_bits_tick_7_label, 118);
        lv_obj_set_name(settings_uart_value_data_bits_tick_7_label, "settings_uart_value_data_bits_tick_7_label");
        lv_obj_add_style(settings_uart_value_data_bits_tick_7_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_7_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_7_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_7_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_data_bits_tick_7_label, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * settings_uart_value_data_bits_tick_8_label = lv_label_create(uart_value_data_bits);
        lv_label_set_text(settings_uart_value_data_bits_tick_8_label, "8");
        lv_obj_set_align(settings_uart_value_data_bits_tick_8_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_data_bits_tick_8_label, 118);
        lv_obj_set_name(settings_uart_value_data_bits_tick_8_label, "settings_uart_value_data_bits_tick_8_label");
        lv_obj_add_style(settings_uart_value_data_bits_tick_8_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_8_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_8_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_data_bits_tick_8_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_data_bits_tick_8_label, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * lv_image_1 = lv_image_create(uart_row_data_bits);
        lv_image_set_src(lv_image_1, meter_arrow_right);
        lv_obj_set_align(lv_image_1, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_image_1, -14);
        lv_obj_set_y(lv_image_1, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 90, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 90, 0);
        lv_obj_add_style(lv_image_1, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_1, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_1, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_image_1, &me106_icon_white, 0, &meter_uart_selected_index, 1);

        lv_obj_add_subject_set_int_event(uart_row_data_bits, &meter_uart_selected_index, LV_EVENT_CLICKED, 1);

        lv_obj_t * uart_row_parity = lv_button_create(uart_content);
        lv_obj_set_name(uart_row_parity, "uart_row_parity");
        lv_obj_set_x(uart_row_parity, 22);
        lv_obj_set_y(uart_row_parity, 130);
        lv_obj_set_width(uart_row_parity, 276);
        lv_obj_set_height(uart_row_parity, 32);
        lv_obj_set_style_pad_all(uart_row_parity, 0, 0);
        lv_obj_add_style(uart_row_parity, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(uart_row_parity, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_parity, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * uart_row_parity_selected_bg = lv_obj_create(uart_row_parity);
        lv_obj_set_name(uart_row_parity_selected_bg, "uart_row_parity_selected_bg");
        lv_obj_set_x(uart_row_parity_selected_bg, 0);
        lv_obj_set_y(uart_row_parity_selected_bg, 0);
        lv_obj_set_width(uart_row_parity_selected_bg, 276);
        lv_obj_set_height(uart_row_parity_selected_bg, 32);
        lv_obj_set_style_pad_all(uart_row_parity_selected_bg, 0, 0);
        lv_obj_set_style_border_width(uart_row_parity_selected_bg, 0, 0);
        lv_obj_set_flag(uart_row_parity_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(uart_row_parity_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(uart_row_parity_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_parity_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(uart_row_parity_selected_bg, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * settings_uart_row_parity_row_parity_label = lv_label_create(uart_row_parity);
        lv_label_set_text(settings_uart_row_parity_row_parity_label, "校验位");
        lv_obj_set_align(settings_uart_row_parity_row_parity_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_uart_row_parity_row_parity_label, 16);
        lv_obj_set_y(settings_uart_row_parity_row_parity_label, 0);
        lv_obj_set_width(settings_uart_row_parity_row_parity_label, 88);
        lv_obj_set_name(settings_uart_row_parity_row_parity_label, "settings_uart_row_parity_row_parity_label");
        lv_obj_add_style(settings_uart_row_parity_row_parity_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_uart_row_parity_row_parity_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_row_parity_row_parity_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_row_parity_row_parity_label, &me106_text_16_white, 0, &meter_uart_selected_index, 2);

        lv_obj_t * uart_value_parity = lv_obj_create(uart_row_parity);
        lv_obj_set_name(uart_value_parity, "uart_value_parity");
        lv_obj_set_align(uart_value_parity, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(uart_value_parity, -34);
        lv_obj_set_y(uart_value_parity, 0);
        lv_obj_set_width(uart_value_parity, 118);
        lv_obj_set_height(uart_value_parity, 24);
        lv_obj_set_style_bg_opa(uart_value_parity, 0, 0);
        lv_obj_set_style_border_width(uart_value_parity, 0, 0);
        lv_obj_set_style_pad_all(uart_value_parity, 0, 0);
        lv_obj_set_flag(uart_value_parity, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_uart_value_parity_none_label = lv_label_create(uart_value_parity);
        lv_label_set_text(settings_uart_value_parity_none_label, "None");
        lv_obj_set_align(settings_uart_value_parity_none_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_parity_none_label, 118);
        lv_obj_set_name(settings_uart_value_parity_none_label, "settings_uart_value_parity_none_label");
        lv_obj_add_style(settings_uart_value_parity_none_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_parity_none_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_parity_none_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_parity_none_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_parity_none_label, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_uart_value_parity_odd_label = lv_label_create(uart_value_parity);
        lv_label_set_text(settings_uart_value_parity_odd_label, "Odd");
        lv_obj_set_align(settings_uart_value_parity_odd_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_parity_odd_label, 118);
        lv_obj_set_name(settings_uart_value_parity_odd_label, "settings_uart_value_parity_odd_label");
        lv_obj_add_style(settings_uart_value_parity_odd_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_parity_odd_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_parity_odd_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_parity_odd_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_parity_odd_label, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_uart_value_parity_even_label = lv_label_create(uart_value_parity);
        lv_label_set_text(settings_uart_value_parity_even_label, "Even");
        lv_obj_set_align(settings_uart_value_parity_even_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_parity_even_label, 118);
        lv_obj_set_name(settings_uart_value_parity_even_label, "settings_uart_value_parity_even_label");
        lv_obj_add_style(settings_uart_value_parity_even_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_parity_even_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_parity_even_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_parity_even_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_parity_even_label, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * lv_image_2 = lv_image_create(uart_row_parity);
        lv_image_set_src(lv_image_2, meter_arrow_right);
        lv_obj_set_align(lv_image_2, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_image_2, -14);
        lv_obj_set_y(lv_image_2, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 90, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 90, 0);
        lv_obj_add_style(lv_image_2, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_2, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_2, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_image_2, &me106_icon_white, 0, &meter_uart_selected_index, 2);

        lv_obj_add_subject_set_int_event(uart_row_parity, &meter_uart_selected_index, LV_EVENT_CLICKED, 2);

        lv_obj_t * uart_row_stop_bits = lv_button_create(uart_content);
        lv_obj_set_name(uart_row_stop_bits, "uart_row_stop_bits");
        lv_obj_set_x(uart_row_stop_bits, 22);
        lv_obj_set_y(uart_row_stop_bits, 166);
        lv_obj_set_width(uart_row_stop_bits, 276);
        lv_obj_set_height(uart_row_stop_bits, 32);
        lv_obj_set_style_pad_all(uart_row_stop_bits, 0, 0);
        lv_obj_add_style(uart_row_stop_bits, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(uart_row_stop_bits, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_stop_bits, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * uart_row_stop_bits_selected_bg = lv_obj_create(uart_row_stop_bits);
        lv_obj_set_name(uart_row_stop_bits_selected_bg, "uart_row_stop_bits_selected_bg");
        lv_obj_set_x(uart_row_stop_bits_selected_bg, 0);
        lv_obj_set_y(uart_row_stop_bits_selected_bg, 0);
        lv_obj_set_width(uart_row_stop_bits_selected_bg, 276);
        lv_obj_set_height(uart_row_stop_bits_selected_bg, 32);
        lv_obj_set_style_pad_all(uart_row_stop_bits_selected_bg, 0, 0);
        lv_obj_set_style_border_width(uart_row_stop_bits_selected_bg, 0, 0);
        lv_obj_set_flag(uart_row_stop_bits_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(uart_row_stop_bits_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(uart_row_stop_bits_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_row_stop_bits_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(uart_row_stop_bits_selected_bg, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * settings_uart_row_stop_bits_row_stop_bits_label = lv_label_create(uart_row_stop_bits);
        lv_label_set_text(settings_uart_row_stop_bits_row_stop_bits_label, "停止位");
        lv_obj_set_align(settings_uart_row_stop_bits_row_stop_bits_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_uart_row_stop_bits_row_stop_bits_label, 16);
        lv_obj_set_y(settings_uart_row_stop_bits_row_stop_bits_label, 0);
        lv_obj_set_width(settings_uart_row_stop_bits_row_stop_bits_label, 88);
        lv_obj_set_name(settings_uart_row_stop_bits_row_stop_bits_label, "settings_uart_row_stop_bits_row_stop_bits_label");
        lv_obj_add_style(settings_uart_row_stop_bits_row_stop_bits_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_uart_row_stop_bits_row_stop_bits_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_row_stop_bits_row_stop_bits_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_row_stop_bits_row_stop_bits_label, &me106_text_16_white, 0, &meter_uart_selected_index, 3);

        lv_obj_t * uart_value_stop_bits = lv_obj_create(uart_row_stop_bits);
        lv_obj_set_name(uart_value_stop_bits, "uart_value_stop_bits");
        lv_obj_set_align(uart_value_stop_bits, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(uart_value_stop_bits, -34);
        lv_obj_set_y(uart_value_stop_bits, 0);
        lv_obj_set_width(uart_value_stop_bits, 118);
        lv_obj_set_height(uart_value_stop_bits, 24);
        lv_obj_set_style_bg_opa(uart_value_stop_bits, 0, 0);
        lv_obj_set_style_border_width(uart_value_stop_bits, 0, 0);
        lv_obj_set_style_pad_all(uart_value_stop_bits, 0, 0);
        lv_obj_set_flag(uart_value_stop_bits, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_uart_value_stop_bits_tick_1_label = lv_label_create(uart_value_stop_bits);
        lv_label_set_text(settings_uart_value_stop_bits_tick_1_label, "1");
        lv_obj_set_align(settings_uart_value_stop_bits_tick_1_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_stop_bits_tick_1_label, 118);
        lv_obj_set_name(settings_uart_value_stop_bits_tick_1_label, "settings_uart_value_stop_bits_tick_1_label");
        lv_obj_add_style(settings_uart_value_stop_bits_tick_1_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_1_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_1_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_1_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_stop_bits_tick_1_label, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_uart_value_stop_bits_1_5_label = lv_label_create(uart_value_stop_bits);
        lv_label_set_text(settings_uart_value_stop_bits_1_5_label, "1.5");
        lv_obj_set_align(settings_uart_value_stop_bits_1_5_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_stop_bits_1_5_label, 118);
        lv_obj_set_name(settings_uart_value_stop_bits_1_5_label, "settings_uart_value_stop_bits_1_5_label");
        lv_obj_add_style(settings_uart_value_stop_bits_1_5_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_stop_bits_1_5_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_stop_bits_1_5_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_stop_bits_1_5_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_stop_bits_1_5_label, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_uart_value_stop_bits_tick_2_label = lv_label_create(uart_value_stop_bits);
        lv_label_set_text(settings_uart_value_stop_bits_tick_2_label, "2");
        lv_obj_set_align(settings_uart_value_stop_bits_tick_2_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_width(settings_uart_value_stop_bits_tick_2_label, 118);
        lv_obj_set_name(settings_uart_value_stop_bits_tick_2_label, "settings_uart_value_stop_bits_tick_2_label");
        lv_obj_add_style(settings_uart_value_stop_bits_tick_2_label, &me106_text_16_gray_ba_right, 0);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_2_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_2_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_uart_value_stop_bits_tick_2_label, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
        lv_obj_bind_flag_if_not_eq(settings_uart_value_stop_bits_tick_2_label, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * lv_image_3 = lv_image_create(uart_row_stop_bits);
        lv_image_set_src(lv_image_3, meter_arrow_right);
        lv_obj_set_align(lv_image_3, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_image_3, -14);
        lv_obj_set_y(lv_image_3, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 90, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 90, 0);
        lv_obj_add_style(lv_image_3, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_3, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_3, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_image_3, &me106_icon_white, 0, &meter_uart_selected_index, 3);

        lv_obj_add_subject_set_int_event(uart_row_stop_bits, &meter_uart_selected_index, LV_EVENT_CLICKED, 3);

        lv_obj_t * screen_settings_uart_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_uart_bottom_bar, "screen_settings_uart_bottom_bar");
        lv_obj_set_x(screen_settings_uart_bottom_bar, 0);
        lv_obj_set_y(screen_settings_uart_bottom_bar, 207);
        lv_obj_set_width(screen_settings_uart_bottom_bar, 320);
        lv_obj_set_height(screen_settings_uart_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_uart_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_uart_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_uart_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_uart_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_uart_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_uart_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * uart_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_return, "uart_btn_return");
        lv_obj_set_x(uart_btn_return, 0);
        lv_obj_set_y(uart_btn_return, 207);
        lv_obj_set_width(uart_btn_return, 79);
        lv_obj_set_height(uart_btn_return, 32);
        lv_obj_add_style(uart_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(uart_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_4 = lv_image_create(uart_btn_return);
        lv_image_set_src(lv_image_4, meter_icon_return);
        lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_4, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_4, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_4, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_4, 230, 0);

        lv_obj_add_screen_create_event(uart_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * uart_btn_down = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_down, "uart_btn_down");
        lv_obj_set_x(uart_btn_down, 80);
        lv_obj_set_y(uart_btn_down, 207);
        lv_obj_set_width(uart_btn_down, 79);
        lv_obj_set_height(uart_btn_down, 32);
        lv_obj_add_style(uart_btn_down, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(uart_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_5 = lv_image_create(uart_btn_down);
        lv_image_set_src(lv_image_5, meter_arrow_down);
        lv_obj_set_align(lv_image_5, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_5, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_5, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_5, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_5, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(uart_btn_down, &meter_uart_selected_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(uart_btn_down, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(uart_btn_down, subject_increment_event_0, 3);
        lv_obj_set_subject_increment_event_rollover(uart_btn_down, subject_increment_event_0, true);

        lv_obj_t * uart_btn_set = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_set, "uart_btn_set");
        lv_obj_set_x(uart_btn_set, 160);
        lv_obj_set_y(uart_btn_set, 207);
        lv_obj_set_width(uart_btn_set, 79);
        lv_obj_set_height(uart_btn_set, 32);
        lv_obj_add_style(uart_btn_set, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(uart_btn_set, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_btn_set, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_6 = lv_image_create(uart_btn_set);
        lv_image_set_src(lv_image_6, meter_icon_select);
        lv_obj_set_align(lv_image_6, LV_ALIGN_CENTER);

        lv_obj_t * uart_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_yes, "uart_btn_yes");
        lv_obj_set_x(uart_btn_yes, 240);
        lv_obj_set_y(uart_btn_yes, 207);
        lv_obj_set_width(uart_btn_yes, 80);
        lv_obj_set_height(uart_btn_yes, 32);
        lv_obj_add_style(uart_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(uart_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(uart_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_7 = lv_image_create(uart_btn_yes);
        lv_image_set_src(lv_image_7, meter_yes);
        lv_obj_set_align(lv_image_7, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_7, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_7, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_7, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_7, 230, 0);

        lv_obj_t * uart_btn_set_baud = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_set_baud, "uart_btn_set_baud");
        lv_obj_set_x(uart_btn_set_baud, 160);
        lv_obj_set_y(uart_btn_set_baud, 207);
        lv_obj_set_width(uart_btn_set_baud, 79);
        lv_obj_set_height(uart_btn_set_baud, 32);
        lv_obj_set_style_bg_opa(uart_btn_set_baud, 0, 0);
        lv_obj_set_style_border_width(uart_btn_set_baud, 0, 0);
        lv_obj_set_style_shadow_width(uart_btn_set_baud, 0, 0);
        lv_obj_bind_flag_if_not_eq(uart_btn_set_baud, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(uart_btn_set_baud, &meter_uart_baud_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(uart_btn_set_baud, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(uart_btn_set_baud, subject_increment_event_1, 7);
        lv_obj_set_subject_increment_event_rollover(uart_btn_set_baud, subject_increment_event_1, true);

        lv_obj_t * uart_btn_set_data_bits = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_set_data_bits, "uart_btn_set_data_bits");
        lv_obj_set_x(uart_btn_set_data_bits, 160);
        lv_obj_set_y(uart_btn_set_data_bits, 207);
        lv_obj_set_width(uart_btn_set_data_bits, 79);
        lv_obj_set_height(uart_btn_set_data_bits, 32);
        lv_obj_set_style_bg_opa(uart_btn_set_data_bits, 0, 0);
        lv_obj_set_style_border_width(uart_btn_set_data_bits, 0, 0);
        lv_obj_set_style_shadow_width(uart_btn_set_data_bits, 0, 0);
        lv_obj_bind_flag_if_not_eq(uart_btn_set_data_bits, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
        lv_subject_increment_dsc_t * subject_increment_event_2 = lv_obj_add_subject_increment_event(uart_btn_set_data_bits, &meter_uart_data_bits_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(uart_btn_set_data_bits, subject_increment_event_2, 0);
        lv_obj_set_subject_increment_event_max_value(uart_btn_set_data_bits, subject_increment_event_2, 3);
        lv_obj_set_subject_increment_event_rollover(uart_btn_set_data_bits, subject_increment_event_2, true);

        lv_obj_t * uart_btn_set_parity = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_set_parity, "uart_btn_set_parity");
        lv_obj_set_x(uart_btn_set_parity, 160);
        lv_obj_set_y(uart_btn_set_parity, 207);
        lv_obj_set_width(uart_btn_set_parity, 79);
        lv_obj_set_height(uart_btn_set_parity, 32);
        lv_obj_set_style_bg_opa(uart_btn_set_parity, 0, 0);
        lv_obj_set_style_border_width(uart_btn_set_parity, 0, 0);
        lv_obj_set_style_shadow_width(uart_btn_set_parity, 0, 0);
        lv_obj_bind_flag_if_not_eq(uart_btn_set_parity, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
        lv_subject_increment_dsc_t * subject_increment_event_3 = lv_obj_add_subject_increment_event(uart_btn_set_parity, &meter_uart_parity_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(uart_btn_set_parity, subject_increment_event_3, 0);
        lv_obj_set_subject_increment_event_max_value(uart_btn_set_parity, subject_increment_event_3, 2);
        lv_obj_set_subject_increment_event_rollover(uart_btn_set_parity, subject_increment_event_3, true);

        lv_obj_t * uart_btn_set_stop_bits = lv_button_create(lv_obj_0);
        lv_obj_set_name(uart_btn_set_stop_bits, "uart_btn_set_stop_bits");
        lv_obj_set_x(uart_btn_set_stop_bits, 160);
        lv_obj_set_y(uart_btn_set_stop_bits, 207);
        lv_obj_set_width(uart_btn_set_stop_bits, 79);
        lv_obj_set_height(uart_btn_set_stop_bits, 32);
        lv_obj_set_style_bg_opa(uart_btn_set_stop_bits, 0, 0);
        lv_obj_set_style_border_width(uart_btn_set_stop_bits, 0, 0);
        lv_obj_set_style_shadow_width(uart_btn_set_stop_bits, 0, 0);
        lv_obj_bind_flag_if_not_eq(uart_btn_set_stop_bits, &meter_uart_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
        lv_subject_increment_dsc_t * subject_increment_event_4 = lv_obj_add_subject_increment_event(uart_btn_set_stop_bits, &meter_uart_stop_bits_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(uart_btn_set_stop_bits, subject_increment_event_4, 0);
        lv_obj_set_subject_increment_event_max_value(uart_btn_set_stop_bits, subject_increment_event_4, 2);
        lv_obj_set_subject_increment_event_rollover(uart_btn_set_stop_bits, subject_increment_event_4, true);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

