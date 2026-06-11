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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_settings_uart_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

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
    lv_obj_t * lv_label_0 = lv_label_create(uart_content);
    lv_label_set_text(lv_label_0, "串口设置");
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 160);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_center, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
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
    
    lv_obj_t * lv_label_1 = lv_label_create(uart_row_baud);
    lv_label_set_text(lv_label_1, "波特率");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_1, 16);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 88);
    lv_obj_add_style(lv_label_1, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_1, &me106_text_16_white, 0, &meter_uart_selected_index, 0);
    
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
    lv_obj_t * lv_label_2 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_2, "4800");
    lv_obj_set_align(lv_label_2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_2, 118);
    lv_obj_add_style(lv_label_2, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_2, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_2, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_3, "9600");
    lv_obj_set_align(lv_label_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_3, 118);
    lv_obj_add_style(lv_label_3, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_3, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_3, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_4 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_4, "19200");
    lv_obj_set_align(lv_label_4, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_4, 118);
    lv_obj_add_style(lv_label_4, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_4, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_4, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_5, "38400");
    lv_obj_set_align(lv_label_5, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_5, 118);
    lv_obj_add_style(lv_label_5, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_5, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_5, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 3);
    
    lv_obj_t * lv_label_6 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_6, "57600");
    lv_obj_set_align(lv_label_6, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_6, 118);
    lv_obj_add_style(lv_label_6, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_6, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_6, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 4);
    
    lv_obj_t * lv_label_7 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_7, "115200");
    lv_obj_set_align(lv_label_7, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_7, 118);
    lv_obj_add_style(lv_label_7, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_7, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_7, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 5);
    
    lv_obj_t * lv_label_8 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_8, "230400");
    lv_obj_set_align(lv_label_8, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_8, 118);
    lv_obj_add_style(lv_label_8, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_8, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_8, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 6);
    
    lv_obj_t * lv_label_9 = lv_label_create(uart_value_baud);
    lv_label_set_text(lv_label_9, "460800");
    lv_obj_set_align(lv_label_9, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_9, 118);
    lv_obj_add_style(lv_label_9, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_9, &me106_text_16_white_right, 0, &meter_uart_selected_index, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_9, &meter_uart_baud_index, LV_OBJ_FLAG_HIDDEN, 7);
    
    lv_obj_t * lv_image_0 = lv_image_create(uart_row_baud);
    lv_image_set_src(lv_image_0, meter_arrow_right);
    lv_obj_set_align(lv_image_0, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_0, -14);
    lv_obj_set_y(lv_image_0, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 90, 0);
    
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
    
    lv_obj_t * lv_label_10 = lv_label_create(uart_row_data_bits);
    lv_label_set_text(lv_label_10, "数据位");
    lv_obj_set_align(lv_label_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_10, 16);
    lv_obj_set_y(lv_label_10, 0);
    lv_obj_set_width(lv_label_10, 88);
    lv_obj_add_style(lv_label_10, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_10, &me106_text_16_white, 0, &meter_uart_selected_index, 1);
    
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
    lv_obj_t * lv_label_11 = lv_label_create(uart_value_data_bits);
    lv_label_set_text(lv_label_11, "5");
    lv_obj_set_align(lv_label_11, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_11, 118);
    lv_obj_add_style(lv_label_11, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_11, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
    lv_obj_bind_flag_if_not_eq(lv_label_11, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_12 = lv_label_create(uart_value_data_bits);
    lv_label_set_text(lv_label_12, "6");
    lv_obj_set_align(lv_label_12, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_12, 118);
    lv_obj_add_style(lv_label_12, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_12, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
    lv_obj_bind_flag_if_not_eq(lv_label_12, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_13 = lv_label_create(uart_value_data_bits);
    lv_label_set_text(lv_label_13, "7");
    lv_obj_set_align(lv_label_13, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_13, 118);
    lv_obj_add_style(lv_label_13, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_13, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_13, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_13, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
    lv_obj_bind_flag_if_not_eq(lv_label_13, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_14 = lv_label_create(uart_value_data_bits);
    lv_label_set_text(lv_label_14, "8");
    lv_obj_set_align(lv_label_14, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_14, 118);
    lv_obj_add_style(lv_label_14, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_14, &me106_text_16_white_right, 0, &meter_uart_selected_index, 1);
    lv_obj_bind_flag_if_not_eq(lv_label_14, &meter_uart_data_bits_index, LV_OBJ_FLAG_HIDDEN, 3);
    
    lv_obj_t * lv_image_1 = lv_image_create(uart_row_data_bits);
    lv_image_set_src(lv_image_1, meter_arrow_right);
    lv_obj_set_align(lv_image_1, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_1, -14);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 90, 0);
    
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
    
    lv_obj_t * lv_label_15 = lv_label_create(uart_row_parity);
    lv_label_set_text(lv_label_15, "校验位");
    lv_obj_set_align(lv_label_15, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_15, 16);
    lv_obj_set_y(lv_label_15, 0);
    lv_obj_set_width(lv_label_15, 88);
    lv_obj_add_style(lv_label_15, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_15, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_15, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_15, &me106_text_16_white, 0, &meter_uart_selected_index, 2);
    
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
    lv_obj_t * lv_label_16 = lv_label_create(uart_value_parity);
    lv_label_set_text(lv_label_16, "None");
    lv_obj_set_align(lv_label_16, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_16, 118);
    lv_obj_add_style(lv_label_16, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_16, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_16, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_16, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_16, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_17 = lv_label_create(uart_value_parity);
    lv_label_set_text(lv_label_17, "Odd");
    lv_obj_set_align(lv_label_17, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_17, 118);
    lv_obj_add_style(lv_label_17, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_17, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_17, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_17, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_17, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_18 = lv_label_create(uart_value_parity);
    lv_label_set_text(lv_label_18, "Even");
    lv_obj_set_align(lv_label_18, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_18, 118);
    lv_obj_add_style(lv_label_18, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_18, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_18, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_18, &me106_text_16_white_right, 0, &meter_uart_selected_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_18, &meter_uart_parity_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_image_2 = lv_image_create(uart_row_parity);
    lv_image_set_src(lv_image_2, meter_arrow_right);
    lv_obj_set_align(lv_image_2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_2, -14);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 90, 0);
    
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
    
    lv_obj_t * lv_label_19 = lv_label_create(uart_row_stop_bits);
    lv_label_set_text(lv_label_19, "停止位");
    lv_obj_set_align(lv_label_19, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_19, 16);
    lv_obj_set_y(lv_label_19, 0);
    lv_obj_set_width(lv_label_19, 88);
    lv_obj_add_style(lv_label_19, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_19, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_19, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_19, &me106_text_16_white, 0, &meter_uart_selected_index, 3);
    
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
    lv_obj_t * lv_label_20 = lv_label_create(uart_value_stop_bits);
    lv_label_set_text(lv_label_20, "1");
    lv_obj_set_align(lv_label_20, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_20, 118);
    lv_obj_add_style(lv_label_20, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_20, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_20, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_20, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
    lv_obj_bind_flag_if_not_eq(lv_label_20, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_21 = lv_label_create(uart_value_stop_bits);
    lv_label_set_text(lv_label_21, "1.5");
    lv_obj_set_align(lv_label_21, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_21, 118);
    lv_obj_add_style(lv_label_21, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_21, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_21, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_21, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
    lv_obj_bind_flag_if_not_eq(lv_label_21, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_22 = lv_label_create(uart_value_stop_bits);
    lv_label_set_text(lv_label_22, "2");
    lv_obj_set_align(lv_label_22, LV_ALIGN_RIGHT_MID);
    lv_obj_set_width(lv_label_22, 118);
    lv_obj_add_style(lv_label_22, &me106_text_16_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_22, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_22, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_22, &me106_text_16_white_right, 0, &meter_uart_selected_index, 3);
    lv_obj_bind_flag_if_not_eq(lv_label_22, &meter_uart_stop_bits_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_image_3 = lv_image_create(uart_row_stop_bits);
    lv_image_set_src(lv_image_3, meter_arrow_right);
    lv_obj_set_align(lv_image_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_image_3, -14);
    lv_obj_set_y(lv_image_3, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 90, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 90, 0);
    
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
    
    lv_obj_add_screen_create_event(uart_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
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
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_UART_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_UART_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_uart_get_timeline(lv_obj_0, SCREEN_SETTINGS_UART_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_uart_get_timeline(lv_obj_t * obj, screen_settings_uart_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_UART_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_uart has no timeline with %d ID", timeline_id);
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
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "uart_content"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "uart_content"));
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
    for(i = 0; i < _SCREEN_SETTINGS_UART_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

