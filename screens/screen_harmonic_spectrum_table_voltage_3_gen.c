/**
 * @file screen_harmonic_spectrum_table_voltage_3_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_harmonic_spectrum_table_voltage_3_gen.h"
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

lv_obj_t * screen_harmonic_spectrum_table_voltage_3_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_harmonic_spectrum_table_voltage_3_#");
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
        lv_obj_t * harmonic_table_voltage_3_title_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_title_label, "谐波表格");
        lv_obj_set_x(harmonic_table_voltage_3_title_label, 172);
        lv_obj_set_y(harmonic_table_voltage_3_title_label, 16);
        lv_obj_set_width(harmonic_table_voltage_3_title_label, 124);
        lv_obj_set_name(harmonic_table_voltage_3_title_label, "harmonic_table_voltage_3_title_label");
        lv_obj_add_style(harmonic_table_voltage_3_title_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_u_2_63_percent_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_u_2_63_percent_label, "U  2-63次  %");
        lv_obj_set_x(harmonic_table_voltage_3_u_2_63_percent_label, 12);
        lv_obj_set_y(harmonic_table_voltage_3_u_2_63_percent_label, 17);
        lv_obj_set_width(harmonic_table_voltage_3_u_2_63_percent_label, 120);
        lv_obj_set_name(harmonic_table_voltage_3_u_2_63_percent_label, "harmonic_table_voltage_3_u_2_63_percent_label");
        lv_obj_add_style(harmonic_table_voltage_3_u_2_63_percent_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_u_2_63_percent_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_u_2_63_percent_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_tick_4_per_8_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_tick_4_per_8_label, "4/8");
        lv_obj_set_x(harmonic_table_voltage_3_tick_4_per_8_label, 132);
        lv_obj_set_y(harmonic_table_voltage_3_tick_4_per_8_label, 17);
        lv_obj_set_width(harmonic_table_voltage_3_tick_4_per_8_label, 42);
        lv_obj_set_name(harmonic_table_voltage_3_tick_4_per_8_label, "harmonic_table_voltage_3_tick_4_per_8_label");
        lv_obj_add_style(harmonic_table_voltage_3_tick_4_per_8_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_tick_4_per_8_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_tick_4_per_8_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

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
        lv_obj_bind_style(spectrum_table_shell, &me106_theme_light_chart, 0, &meter_theme_index, 1);
        lv_obj_bind_style(spectrum_table_shell, &me106_theme_alarm_chart, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_order_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_order_label, "次数");
        lv_obj_set_x(harmonic_table_voltage_3_order_label, 16);
        lv_obj_set_y(harmonic_table_voltage_3_order_label, 45);
        lv_obj_set_width(harmonic_table_voltage_3_order_label, 44);
        lv_obj_set_name(harmonic_table_voltage_3_order_label, "harmonic_table_voltage_3_order_label");
        lv_obj_add_style(harmonic_table_voltage_3_order_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_order_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_order_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_a_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_a_label, "A");
        lv_obj_set_x(harmonic_table_voltage_3_a_label, 94);
        lv_obj_set_y(harmonic_table_voltage_3_a_label, 45);
        lv_obj_set_width(harmonic_table_voltage_3_a_label, 24);
        lv_obj_set_name(harmonic_table_voltage_3_a_label, "harmonic_table_voltage_3_a_label");
        lv_obj_add_style(harmonic_table_voltage_3_a_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_a_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_a_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_b_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_b_label, "B");
        lv_obj_set_x(harmonic_table_voltage_3_b_label, 172);
        lv_obj_set_y(harmonic_table_voltage_3_b_label, 45);
        lv_obj_set_width(harmonic_table_voltage_3_b_label, 24);
        lv_obj_set_name(harmonic_table_voltage_3_b_label, "harmonic_table_voltage_3_b_label");
        lv_obj_add_style(harmonic_table_voltage_3_b_label, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_b_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_b_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_table_voltage_3_c_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_table_voltage_3_c_label, "C");
        lv_obj_set_x(harmonic_table_voltage_3_c_label, 250);
        lv_obj_set_y(harmonic_table_voltage_3_c_label, 45);
        lv_obj_set_width(harmonic_table_voltage_3_c_label, 24);
        lv_obj_set_name(harmonic_table_voltage_3_c_label, "harmonic_table_voltage_3_c_label");
        lv_obj_add_style(harmonic_table_voltage_3_c_label, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_table_voltage_3_c_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_table_voltage_3_c_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

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

        lv_obj_t * harmonic_voltage_order_26_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_26_label, "harmonic_voltage_order_26_label");
        lv_label_set_text(harmonic_voltage_order_26_label, "26次");
        lv_obj_set_x(harmonic_voltage_order_26_label, 16);
        lv_obj_set_y(harmonic_voltage_order_26_label, 68);
        lv_obj_set_width(harmonic_voltage_order_26_label, 48);
        lv_obj_add_style(harmonic_voltage_order_26_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_26_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_26_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_26_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_26_value, "harmonic_voltage_phase_a_order_26_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_26_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_a_order_26_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_26_value, 68);
        lv_obj_set_width(harmonic_voltage_phase_a_order_26_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_26_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_26_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_26_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_26_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_26_value, "harmonic_voltage_phase_b_order_26_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_26_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_b_order_26_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_26_value, 68);
        lv_obj_set_width(harmonic_voltage_phase_b_order_26_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_26_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_26_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_26_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_26_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_26_value, "harmonic_voltage_phase_c_order_26_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_26_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_c_order_26_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_26_value, 68);
        lv_obj_set_width(harmonic_voltage_phase_c_order_26_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_26_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_26_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_26_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_27_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_27_label, "harmonic_voltage_order_27_label");
        lv_label_set_text(harmonic_voltage_order_27_label, "27次");
        lv_obj_set_x(harmonic_voltage_order_27_label, 16);
        lv_obj_set_y(harmonic_voltage_order_27_label, 83);
        lv_obj_set_width(harmonic_voltage_order_27_label, 48);
        lv_obj_add_style(harmonic_voltage_order_27_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_27_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_27_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_27_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_27_value, "harmonic_voltage_phase_a_order_27_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_27_value, "0.05");
        lv_obj_set_x(harmonic_voltage_phase_a_order_27_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_27_value, 83);
        lv_obj_set_width(harmonic_voltage_phase_a_order_27_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_27_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_27_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_27_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_27_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_27_value, "harmonic_voltage_phase_b_order_27_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_27_value, "0.04");
        lv_obj_set_x(harmonic_voltage_phase_b_order_27_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_27_value, 83);
        lv_obj_set_width(harmonic_voltage_phase_b_order_27_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_27_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_27_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_27_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_27_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_27_value, "harmonic_voltage_phase_c_order_27_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_27_value, "0.05");
        lv_obj_set_x(harmonic_voltage_phase_c_order_27_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_27_value, 83);
        lv_obj_set_width(harmonic_voltage_phase_c_order_27_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_27_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_27_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_27_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_28_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_28_label, "harmonic_voltage_order_28_label");
        lv_label_set_text(harmonic_voltage_order_28_label, "28次");
        lv_obj_set_x(harmonic_voltage_order_28_label, 16);
        lv_obj_set_y(harmonic_voltage_order_28_label, 98);
        lv_obj_set_width(harmonic_voltage_order_28_label, 48);
        lv_obj_add_style(harmonic_voltage_order_28_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_28_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_28_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_28_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_28_value, "harmonic_voltage_phase_a_order_28_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_28_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_a_order_28_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_28_value, 98);
        lv_obj_set_width(harmonic_voltage_phase_a_order_28_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_28_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_28_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_28_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_28_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_28_value, "harmonic_voltage_phase_b_order_28_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_28_value, "0.01");
        lv_obj_set_x(harmonic_voltage_phase_b_order_28_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_28_value, 98);
        lv_obj_set_width(harmonic_voltage_phase_b_order_28_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_28_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_28_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_28_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_28_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_28_value, "harmonic_voltage_phase_c_order_28_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_28_value, "0.01");
        lv_obj_set_x(harmonic_voltage_phase_c_order_28_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_28_value, 98);
        lv_obj_set_width(harmonic_voltage_phase_c_order_28_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_28_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_28_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_28_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_29_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_29_label, "harmonic_voltage_order_29_label");
        lv_label_set_text(harmonic_voltage_order_29_label, "29次");
        lv_obj_set_x(harmonic_voltage_order_29_label, 16);
        lv_obj_set_y(harmonic_voltage_order_29_label, 113);
        lv_obj_set_width(harmonic_voltage_order_29_label, 48);
        lv_obj_add_style(harmonic_voltage_order_29_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_29_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_29_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_29_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_29_value, "harmonic_voltage_phase_a_order_29_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_29_value, "0.01");
        lv_obj_set_x(harmonic_voltage_phase_a_order_29_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_29_value, 113);
        lv_obj_set_width(harmonic_voltage_phase_a_order_29_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_29_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_29_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_29_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_29_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_29_value, "harmonic_voltage_phase_b_order_29_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_29_value, "0.06");
        lv_obj_set_x(harmonic_voltage_phase_b_order_29_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_29_value, 113);
        lv_obj_set_width(harmonic_voltage_phase_b_order_29_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_29_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_29_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_29_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_29_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_29_value, "harmonic_voltage_phase_c_order_29_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_29_value, "0.02");
        lv_obj_set_x(harmonic_voltage_phase_c_order_29_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_29_value, 113);
        lv_obj_set_width(harmonic_voltage_phase_c_order_29_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_29_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_29_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_29_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_30_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_30_label, "harmonic_voltage_order_30_label");
        lv_label_set_text(harmonic_voltage_order_30_label, "30次");
        lv_obj_set_x(harmonic_voltage_order_30_label, 16);
        lv_obj_set_y(harmonic_voltage_order_30_label, 128);
        lv_obj_set_width(harmonic_voltage_order_30_label, 48);
        lv_obj_add_style(harmonic_voltage_order_30_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_30_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_30_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_30_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_30_value, "harmonic_voltage_phase_a_order_30_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_30_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_a_order_30_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_30_value, 128);
        lv_obj_set_width(harmonic_voltage_phase_a_order_30_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_30_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_30_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_30_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_30_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_30_value, "harmonic_voltage_phase_b_order_30_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_30_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_b_order_30_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_30_value, 128);
        lv_obj_set_width(harmonic_voltage_phase_b_order_30_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_30_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_30_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_30_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_30_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_30_value, "harmonic_voltage_phase_c_order_30_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_30_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_c_order_30_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_30_value, 128);
        lv_obj_set_width(harmonic_voltage_phase_c_order_30_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_30_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_30_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_30_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_31_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_31_label, "harmonic_voltage_order_31_label");
        lv_label_set_text(harmonic_voltage_order_31_label, "31次");
        lv_obj_set_x(harmonic_voltage_order_31_label, 16);
        lv_obj_set_y(harmonic_voltage_order_31_label, 143);
        lv_obj_set_width(harmonic_voltage_order_31_label, 48);
        lv_obj_add_style(harmonic_voltage_order_31_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_31_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_31_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_31_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_31_value, "harmonic_voltage_phase_a_order_31_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_31_value, "0.01");
        lv_obj_set_x(harmonic_voltage_phase_a_order_31_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_31_value, 143);
        lv_obj_set_width(harmonic_voltage_phase_a_order_31_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_31_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_31_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_31_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_31_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_31_value, "harmonic_voltage_phase_b_order_31_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_31_value, "0.03");
        lv_obj_set_x(harmonic_voltage_phase_b_order_31_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_31_value, 143);
        lv_obj_set_width(harmonic_voltage_phase_b_order_31_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_31_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_31_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_31_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_31_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_31_value, "harmonic_voltage_phase_c_order_31_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_31_value, "0.04");
        lv_obj_set_x(harmonic_voltage_phase_c_order_31_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_31_value, 143);
        lv_obj_set_width(harmonic_voltage_phase_c_order_31_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_31_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_31_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_31_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_32_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_32_label, "harmonic_voltage_order_32_label");
        lv_label_set_text(harmonic_voltage_order_32_label, "32次");
        lv_obj_set_x(harmonic_voltage_order_32_label, 16);
        lv_obj_set_y(harmonic_voltage_order_32_label, 158);
        lv_obj_set_width(harmonic_voltage_order_32_label, 48);
        lv_obj_add_style(harmonic_voltage_order_32_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_32_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_32_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_32_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_32_value, "harmonic_voltage_phase_a_order_32_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_32_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_a_order_32_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_32_value, 158);
        lv_obj_set_width(harmonic_voltage_phase_a_order_32_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_32_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_32_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_32_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_32_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_32_value, "harmonic_voltage_phase_b_order_32_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_32_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_b_order_32_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_32_value, 158);
        lv_obj_set_width(harmonic_voltage_phase_b_order_32_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_32_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_32_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_32_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_32_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_32_value, "harmonic_voltage_phase_c_order_32_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_32_value, "0.00");
        lv_obj_set_x(harmonic_voltage_phase_c_order_32_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_32_value, 158);
        lv_obj_set_width(harmonic_voltage_phase_c_order_32_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_32_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_32_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_32_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_order_33_label = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_order_33_label, "harmonic_voltage_order_33_label");
        lv_label_set_text(harmonic_voltage_order_33_label, "33次");
        lv_obj_set_x(harmonic_voltage_order_33_label, 16);
        lv_obj_set_y(harmonic_voltage_order_33_label, 173);
        lv_obj_set_width(harmonic_voltage_order_33_label, 48);
        lv_obj_add_style(harmonic_voltage_order_33_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_voltage_order_33_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_order_33_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_a_order_33_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_a_order_33_value, "harmonic_voltage_phase_a_order_33_value");
        lv_label_set_text(harmonic_voltage_phase_a_order_33_value, "0.03");
        lv_obj_set_x(harmonic_voltage_phase_a_order_33_value, 82);
        lv_obj_set_y(harmonic_voltage_phase_a_order_33_value, 173);
        lv_obj_set_width(harmonic_voltage_phase_a_order_33_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_a_order_33_value, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_33_value, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_a_order_33_value, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_b_order_33_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_b_order_33_value, "harmonic_voltage_phase_b_order_33_value");
        lv_label_set_text(harmonic_voltage_phase_b_order_33_value, "0.01");
        lv_obj_set_x(harmonic_voltage_phase_b_order_33_value, 160);
        lv_obj_set_y(harmonic_voltage_phase_b_order_33_value, 173);
        lv_obj_set_width(harmonic_voltage_phase_b_order_33_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_b_order_33_value, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_33_value, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_b_order_33_value, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_phase_c_order_33_value = lv_label_create(page_content);
        lv_obj_set_name(harmonic_voltage_phase_c_order_33_value, "harmonic_voltage_phase_c_order_33_value");
        lv_label_set_text(harmonic_voltage_phase_c_order_33_value, "0.03");
        lv_obj_set_x(harmonic_voltage_phase_c_order_33_value, 238);
        lv_obj_set_y(harmonic_voltage_phase_c_order_33_value, 173);
        lv_obj_set_width(harmonic_voltage_phase_c_order_33_value, 58);
        lv_obj_add_style(harmonic_voltage_phase_c_order_33_value, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_33_value, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_phase_c_order_33_value, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * screen_harmonic_spectrum_table_voltage_3_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_harmonic_spectrum_table_voltage_3_bottom_bar, "screen_harmonic_spectrum_table_voltage_3_bottom_bar");
        lv_obj_set_x(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 0);
        lv_obj_set_y(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 207);
        lv_obj_set_width(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 320);
        lv_obj_set_height(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_harmonic_spectrum_table_voltage_3_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_harmonic_spectrum_table_voltage_3_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_harmonic_spectrum_table_voltage_3_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_harmonic_spectrum_table_voltage_3_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_harmonic_spectrum_table_voltage_3_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

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

        lv_obj_add_screen_create_event(spectrum_table_btn_down, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_voltage_4_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

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

        lv_obj_add_screen_create_event(spectrum_table_btn_up, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_voltage_2_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * spectrum_table_btn_idle = lv_button_create(lv_obj_0);
        lv_obj_set_name(spectrum_table_btn_idle, "spectrum_table_btn_idle");
        lv_obj_set_x(spectrum_table_btn_idle, 240);
        lv_obj_set_y(spectrum_table_btn_idle, 207);
        lv_obj_set_width(spectrum_table_btn_idle, 80);
        lv_obj_set_height(spectrum_table_btn_idle, 32);
        lv_obj_add_style(spectrum_table_btn_idle, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(spectrum_table_btn_idle, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(spectrum_table_btn_idle, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

