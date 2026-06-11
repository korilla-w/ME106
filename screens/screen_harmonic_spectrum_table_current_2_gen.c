/**
 * @file screen_harmonic_spectrum_table_current_2_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_harmonic_spectrum_table_current_2_gen.h"
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

lv_obj_t * screen_harmonic_spectrum_table_current_2_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_harmonic_spectrum_table_current_2_#");
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
    lv_label_set_text(lv_label_0, "谐波表格");
    lv_obj_set_x(lv_label_0, 172);
    lv_obj_set_y(lv_label_0, 16);
    lv_obj_set_width(lv_label_0, 124);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_set_text(lv_label_1, "I  2-63次  %");
    lv_obj_set_x(lv_label_1, 12);
    lv_obj_set_y(lv_label_1, 17);
    lv_obj_set_width(lv_label_1, 120);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_set_text(lv_label_2, "3/8");
    lv_obj_set_x(lv_label_2, 132);
    lv_obj_set_y(lv_label_2, 17);
    lv_obj_set_width(lv_label_2, 42);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * spectrum_table_shell = lv_obj_create(page_content);
    lv_obj_set_name(spectrum_table_shell, "spectrum_table_shell");
    lv_obj_set_x(spectrum_table_shell, 8);
    lv_obj_set_y(spectrum_table_shell, 40);
    lv_obj_set_width(spectrum_table_shell, 304);
    lv_obj_set_height(spectrum_table_shell, 154);
    lv_obj_set_style_bg_opa(spectrum_table_shell, 0, 0);
    lv_obj_set_style_border_width(spectrum_table_shell, 0, 0);
    lv_obj_set_style_pad_all(spectrum_table_shell, 0, 0);
    lv_obj_set_flag(spectrum_table_shell, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(spectrum_table_shell, &me106_chart_frame, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "次数");
    lv_obj_set_x(lv_label_3, 16);
    lv_obj_set_y(lv_label_3, 45);
    lv_obj_set_width(lv_label_3, 44);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "A");
    lv_obj_set_x(lv_label_4, 94);
    lv_obj_set_y(lv_label_4, 45);
    lv_obj_set_width(lv_label_4, 24);
    lv_obj_add_style(lv_label_4, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_set_text(lv_label_5, "B");
    lv_obj_set_x(lv_label_5, 172);
    lv_obj_set_y(lv_label_5, 45);
    lv_obj_set_width(lv_label_5, 24);
    lv_obj_add_style(lv_label_5, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "C");
    lv_obj_set_x(lv_label_6, 250);
    lv_obj_set_y(lv_label_6, 45);
    lv_obj_set_width(lv_label_6, 24);
    lv_obj_add_style(lv_label_6, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * table_header_line = lv_obj_create(page_content);
    lv_obj_set_name(table_header_line, "table_header_line");
    lv_obj_set_x(table_header_line, 12);
    lv_obj_set_y(table_header_line, 63);
    lv_obj_set_width(table_header_line, 296);
    lv_obj_set_height(table_header_line, 1);
    lv_obj_set_style_border_width(table_header_line, 0, 0);
    lv_obj_set_style_pad_all(table_header_line, 0, 0);
    lv_obj_set_flag(table_header_line, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(table_header_line, &me106_line_gray30, 0);
    lv_obj_bind_style(table_header_line, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(table_header_line, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "18次");
    lv_obj_set_x(lv_label_7, 16);
    lv_obj_set_y(lv_label_7, 68);
    lv_obj_set_width(lv_label_7, 48);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_set_text(lv_label_8, "0.06");
    lv_obj_set_x(lv_label_8, 82);
    lv_obj_set_y(lv_label_8, 68);
    lv_obj_set_width(lv_label_8, 58);
    lv_obj_add_style(lv_label_8, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "0.20");
    lv_obj_set_x(lv_label_9, 160);
    lv_obj_set_y(lv_label_9, 68);
    lv_obj_set_width(lv_label_9, 58);
    lv_obj_add_style(lv_label_9, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_10 = lv_label_create(page_content);
    lv_label_set_text(lv_label_10, "0.53");
    lv_obj_set_x(lv_label_10, 238);
    lv_obj_set_y(lv_label_10, 68);
    lv_obj_set_width(lv_label_10, 58);
    lv_obj_add_style(lv_label_10, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(page_content);
    lv_label_set_text(lv_label_11, "19次");
    lv_obj_set_x(lv_label_11, 16);
    lv_obj_set_y(lv_label_11, 83);
    lv_obj_set_width(lv_label_11, 48);
    lv_obj_add_style(lv_label_11, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_12 = lv_label_create(page_content);
    lv_label_set_text(lv_label_12, "0.36");
    lv_obj_set_x(lv_label_12, 82);
    lv_obj_set_y(lv_label_12, 83);
    lv_obj_set_width(lv_label_12, 58);
    lv_obj_add_style(lv_label_12, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_13 = lv_label_create(page_content);
    lv_label_set_text(lv_label_13, "0.37");
    lv_obj_set_x(lv_label_13, 160);
    lv_obj_set_y(lv_label_13, 83);
    lv_obj_set_width(lv_label_13, 58);
    lv_obj_add_style(lv_label_13, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_14 = lv_label_create(page_content);
    lv_label_set_text(lv_label_14, "1.47");
    lv_obj_set_x(lv_label_14, 238);
    lv_obj_set_y(lv_label_14, 83);
    lv_obj_set_width(lv_label_14, 58);
    lv_obj_add_style(lv_label_14, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_15 = lv_label_create(page_content);
    lv_label_set_text(lv_label_15, "20次");
    lv_obj_set_x(lv_label_15, 16);
    lv_obj_set_y(lv_label_15, 98);
    lv_obj_set_width(lv_label_15, 48);
    lv_obj_add_style(lv_label_15, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_15, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_15, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_16 = lv_label_create(page_content);
    lv_label_set_text(lv_label_16, "0.07");
    lv_obj_set_x(lv_label_16, 82);
    lv_obj_set_y(lv_label_16, 98);
    lv_obj_set_width(lv_label_16, 58);
    lv_obj_add_style(lv_label_16, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_17 = lv_label_create(page_content);
    lv_label_set_text(lv_label_17, "0.10");
    lv_obj_set_x(lv_label_17, 160);
    lv_obj_set_y(lv_label_17, 98);
    lv_obj_set_width(lv_label_17, 58);
    lv_obj_add_style(lv_label_17, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_18 = lv_label_create(page_content);
    lv_label_set_text(lv_label_18, "0.31");
    lv_obj_set_x(lv_label_18, 238);
    lv_obj_set_y(lv_label_18, 98);
    lv_obj_set_width(lv_label_18, 58);
    lv_obj_add_style(lv_label_18, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_18, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_18, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_19 = lv_label_create(page_content);
    lv_label_set_text(lv_label_19, "21次");
    lv_obj_set_x(lv_label_19, 16);
    lv_obj_set_y(lv_label_19, 113);
    lv_obj_set_width(lv_label_19, 48);
    lv_obj_add_style(lv_label_19, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_19, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_19, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_20 = lv_label_create(page_content);
    lv_label_set_text(lv_label_20, "0.06");
    lv_obj_set_x(lv_label_20, 82);
    lv_obj_set_y(lv_label_20, 113);
    lv_obj_set_width(lv_label_20, 58);
    lv_obj_add_style(lv_label_20, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_21 = lv_label_create(page_content);
    lv_label_set_text(lv_label_21, "0.28");
    lv_obj_set_x(lv_label_21, 160);
    lv_obj_set_y(lv_label_21, 113);
    lv_obj_set_width(lv_label_21, 58);
    lv_obj_add_style(lv_label_21, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_22 = lv_label_create(page_content);
    lv_label_set_text(lv_label_22, "1.74");
    lv_obj_set_x(lv_label_22, 238);
    lv_obj_set_y(lv_label_22, 113);
    lv_obj_set_width(lv_label_22, 58);
    lv_obj_add_style(lv_label_22, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_22, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_22, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_23 = lv_label_create(page_content);
    lv_label_set_text(lv_label_23, "22次");
    lv_obj_set_x(lv_label_23, 16);
    lv_obj_set_y(lv_label_23, 128);
    lv_obj_set_width(lv_label_23, 48);
    lv_obj_add_style(lv_label_23, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_23, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_23, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_24 = lv_label_create(page_content);
    lv_label_set_text(lv_label_24, "0.05");
    lv_obj_set_x(lv_label_24, 82);
    lv_obj_set_y(lv_label_24, 128);
    lv_obj_set_width(lv_label_24, 58);
    lv_obj_add_style(lv_label_24, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_25 = lv_label_create(page_content);
    lv_label_set_text(lv_label_25, "0.01");
    lv_obj_set_x(lv_label_25, 160);
    lv_obj_set_y(lv_label_25, 128);
    lv_obj_set_width(lv_label_25, 58);
    lv_obj_add_style(lv_label_25, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_26 = lv_label_create(page_content);
    lv_label_set_text(lv_label_26, "0.14");
    lv_obj_set_x(lv_label_26, 238);
    lv_obj_set_y(lv_label_26, 128);
    lv_obj_set_width(lv_label_26, 58);
    lv_obj_add_style(lv_label_26, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_26, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_26, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_27 = lv_label_create(page_content);
    lv_label_set_text(lv_label_27, "23次");
    lv_obj_set_x(lv_label_27, 16);
    lv_obj_set_y(lv_label_27, 143);
    lv_obj_set_width(lv_label_27, 48);
    lv_obj_add_style(lv_label_27, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_27, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_27, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_28 = lv_label_create(page_content);
    lv_label_set_text(lv_label_28, "0.20");
    lv_obj_set_x(lv_label_28, 82);
    lv_obj_set_y(lv_label_28, 143);
    lv_obj_set_width(lv_label_28, 58);
    lv_obj_add_style(lv_label_28, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_29 = lv_label_create(page_content);
    lv_label_set_text(lv_label_29, "0.08");
    lv_obj_set_x(lv_label_29, 160);
    lv_obj_set_y(lv_label_29, 143);
    lv_obj_set_width(lv_label_29, 58);
    lv_obj_add_style(lv_label_29, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_30 = lv_label_create(page_content);
    lv_label_set_text(lv_label_30, "1.49");
    lv_obj_set_x(lv_label_30, 238);
    lv_obj_set_y(lv_label_30, 143);
    lv_obj_set_width(lv_label_30, 58);
    lv_obj_add_style(lv_label_30, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_30, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_30, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_31 = lv_label_create(page_content);
    lv_label_set_text(lv_label_31, "24次");
    lv_obj_set_x(lv_label_31, 16);
    lv_obj_set_y(lv_label_31, 158);
    lv_obj_set_width(lv_label_31, 48);
    lv_obj_add_style(lv_label_31, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_31, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_31, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_32 = lv_label_create(page_content);
    lv_label_set_text(lv_label_32, "0.03");
    lv_obj_set_x(lv_label_32, 82);
    lv_obj_set_y(lv_label_32, 158);
    lv_obj_set_width(lv_label_32, 58);
    lv_obj_add_style(lv_label_32, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_33 = lv_label_create(page_content);
    lv_label_set_text(lv_label_33, "0.02");
    lv_obj_set_x(lv_label_33, 160);
    lv_obj_set_y(lv_label_33, 158);
    lv_obj_set_width(lv_label_33, 58);
    lv_obj_add_style(lv_label_33, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_34 = lv_label_create(page_content);
    lv_label_set_text(lv_label_34, "0.09");
    lv_obj_set_x(lv_label_34, 238);
    lv_obj_set_y(lv_label_34, 158);
    lv_obj_set_width(lv_label_34, 58);
    lv_obj_add_style(lv_label_34, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_34, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_34, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_35 = lv_label_create(page_content);
    lv_label_set_text(lv_label_35, "25次");
    lv_obj_set_x(lv_label_35, 16);
    lv_obj_set_y(lv_label_35, 173);
    lv_obj_set_width(lv_label_35, 48);
    lv_obj_add_style(lv_label_35, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_35, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_35, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_36 = lv_label_create(page_content);
    lv_label_set_text(lv_label_36, "0.15");
    lv_obj_set_x(lv_label_36, 82);
    lv_obj_set_y(lv_label_36, 173);
    lv_obj_set_width(lv_label_36, 58);
    lv_obj_add_style(lv_label_36, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_37 = lv_label_create(page_content);
    lv_label_set_text(lv_label_37, "0.10");
    lv_obj_set_x(lv_label_37, 160);
    lv_obj_set_y(lv_label_37, 173);
    lv_obj_set_width(lv_label_37, 58);
    lv_obj_add_style(lv_label_37, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_38 = lv_label_create(page_content);
    lv_label_set_text(lv_label_38, "0.78");
    lv_obj_set_x(lv_label_38, 238);
    lv_obj_set_y(lv_label_38, 173);
    lv_obj_set_width(lv_label_38, 58);
    lv_obj_add_style(lv_label_38, &me106_text_14_orange, 0);
    lv_obj_bind_style(lv_label_38, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_38, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
    
    lv_obj_t * screen_harmonic_spectrum_table_current_2_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_harmonic_spectrum_table_current_2_bottom_bar, "screen_harmonic_spectrum_table_current_2_bottom_bar");
    lv_obj_set_x(screen_harmonic_spectrum_table_current_2_bottom_bar, 0);
    lv_obj_set_y(screen_harmonic_spectrum_table_current_2_bottom_bar, 207);
    lv_obj_set_width(screen_harmonic_spectrum_table_current_2_bottom_bar, 320);
    lv_obj_set_height(screen_harmonic_spectrum_table_current_2_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_harmonic_spectrum_table_current_2_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_harmonic_spectrum_table_current_2_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_harmonic_spectrum_table_current_2_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_harmonic_spectrum_table_current_2_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_harmonic_spectrum_table_current_2_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_harmonic_spectrum_table_current_2_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * spectrum_table_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(spectrum_table_btn_return, "spectrum_table_btn_return");
    lv_obj_set_x(spectrum_table_btn_return, 0);
    lv_obj_set_y(spectrum_table_btn_return, 207);
    lv_obj_set_width(spectrum_table_btn_return, 79);
    lv_obj_set_height(spectrum_table_btn_return, 32);
    lv_obj_add_style(spectrum_table_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(spectrum_table_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(spectrum_table_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(spectrum_table_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(spectrum_table_btn_return, LV_EVENT_CLICKED, screen_harmonic_spectrum_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * spectrum_table_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(spectrum_table_btn_down, "spectrum_table_btn_down");
    lv_obj_set_x(spectrum_table_btn_down, 80);
    lv_obj_set_y(spectrum_table_btn_down, 207);
    lv_obj_set_width(spectrum_table_btn_down, 79);
    lv_obj_set_height(spectrum_table_btn_down, 32);
    lv_obj_add_style(spectrum_table_btn_down, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(spectrum_table_btn_down, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(spectrum_table_btn_down, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(spectrum_table_btn_down);
    lv_image_set_src(lv_image_1, meter_arrow_down);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_obj_add_screen_create_event(spectrum_table_btn_down, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_current_3_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * spectrum_table_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(spectrum_table_btn_up, "spectrum_table_btn_up");
    lv_obj_set_x(spectrum_table_btn_up, 160);
    lv_obj_set_y(spectrum_table_btn_up, 207);
    lv_obj_set_width(spectrum_table_btn_up, 79);
    lv_obj_set_height(spectrum_table_btn_up, 32);
    lv_obj_add_style(spectrum_table_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(spectrum_table_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(spectrum_table_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(spectrum_table_btn_up);
    lv_image_set_src(lv_image_2, meter_arrow_up);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_obj_add_screen_create_event(spectrum_table_btn_up, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_current_1_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * spectrum_table_btn_idle = lv_button_create(lv_obj_0);
    lv_obj_set_name(spectrum_table_btn_idle, "spectrum_table_btn_idle");
    lv_obj_set_x(spectrum_table_btn_idle, 240);
    lv_obj_set_y(spectrum_table_btn_idle, 207);
    lv_obj_set_width(spectrum_table_btn_idle, 80);
    lv_obj_set_height(spectrum_table_btn_idle, 32);
    lv_obj_add_style(spectrum_table_btn_idle, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(spectrum_table_btn_idle, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(spectrum_table_btn_idle, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

