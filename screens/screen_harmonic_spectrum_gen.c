/**
 * @file screen_harmonic_spectrum_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_harmonic_spectrum_gen.h"
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

lv_obj_t * screen_harmonic_spectrum_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_harmonic_spectrum_#");
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
        lv_obj_t * harmonic_title_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_title_label, "谐波频谱");
        lv_obj_set_x(harmonic_title_label, 170);
        lv_obj_set_y(harmonic_title_label, 17);
        lv_obj_set_width(harmonic_title_label, 126);
        lv_obj_set_name(harmonic_title_label, "harmonic_title_label");
        lv_obj_add_style(harmonic_title_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(harmonic_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_mode_voltage = lv_button_create(page_content);
        lv_obj_set_name(harmonic_mode_voltage, "harmonic_mode_voltage");
        lv_obj_set_x(harmonic_mode_voltage, 24);
        lv_obj_set_y(harmonic_mode_voltage, 39);
        lv_obj_set_width(harmonic_mode_voltage, 58);
        lv_obj_set_height(harmonic_mode_voltage, 28);
        lv_obj_set_style_pad_all(harmonic_mode_voltage, 0, 0);
        lv_obj_add_style(harmonic_mode_voltage, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(harmonic_mode_voltage, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_mode_voltage, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * harmonic_mode_voltage_selected_bg = lv_obj_create(harmonic_mode_voltage);
        lv_obj_set_name(harmonic_mode_voltage_selected_bg, "harmonic_mode_voltage_selected_bg");
        lv_obj_set_x(harmonic_mode_voltage_selected_bg, 0);
        lv_obj_set_y(harmonic_mode_voltage_selected_bg, 0);
        lv_obj_set_width(harmonic_mode_voltage_selected_bg, 58);
        lv_obj_set_height(harmonic_mode_voltage_selected_bg, 28);
        lv_obj_set_style_pad_all(harmonic_mode_voltage_selected_bg, 0, 0);
        lv_obj_set_style_border_width(harmonic_mode_voltage_selected_bg, 0, 0);
        lv_obj_set_flag(harmonic_mode_voltage_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(harmonic_mode_voltage_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(harmonic_mode_voltage_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_mode_voltage_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_mode_voltage_selected_bg, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_add_subject_set_int_event(harmonic_mode_voltage, &meter_harmonic_spectrum_mode, LV_EVENT_CLICKED, 0);
        lv_obj_t * harmonic_harmonic_mode_voltage_label = lv_label_create(harmonic_mode_voltage);
        lv_label_set_text(harmonic_harmonic_mode_voltage_label, "电压");
        lv_obj_set_align(harmonic_harmonic_mode_voltage_label, LV_ALIGN_CENTER);
        lv_obj_set_width(harmonic_harmonic_mode_voltage_label, 58);
        lv_obj_set_height(harmonic_harmonic_mode_voltage_label, 18);
        lv_obj_set_name(harmonic_harmonic_mode_voltage_label, "harmonic_harmonic_mode_voltage_label");
        lv_obj_add_style(harmonic_harmonic_mode_voltage_label, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_harmonic_mode_voltage_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_mode_voltage_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_style(harmonic_harmonic_mode_voltage_label, &me106_text_14_white_center, 0, &meter_harmonic_spectrum_mode, 0);

        lv_obj_t * harmonic_mode_current = lv_button_create(page_content);
        lv_obj_set_name(harmonic_mode_current, "harmonic_mode_current");
        lv_obj_set_x(harmonic_mode_current, 86);
        lv_obj_set_y(harmonic_mode_current, 39);
        lv_obj_set_width(harmonic_mode_current, 58);
        lv_obj_set_height(harmonic_mode_current, 28);
        lv_obj_set_style_pad_all(harmonic_mode_current, 0, 0);
        lv_obj_add_style(harmonic_mode_current, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(harmonic_mode_current, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_mode_current, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * harmonic_mode_current_selected_bg = lv_obj_create(harmonic_mode_current);
        lv_obj_set_name(harmonic_mode_current_selected_bg, "harmonic_mode_current_selected_bg");
        lv_obj_set_x(harmonic_mode_current_selected_bg, 0);
        lv_obj_set_y(harmonic_mode_current_selected_bg, 0);
        lv_obj_set_width(harmonic_mode_current_selected_bg, 58);
        lv_obj_set_height(harmonic_mode_current_selected_bg, 28);
        lv_obj_set_style_pad_all(harmonic_mode_current_selected_bg, 0, 0);
        lv_obj_set_style_border_width(harmonic_mode_current_selected_bg, 0, 0);
        lv_obj_set_flag(harmonic_mode_current_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(harmonic_mode_current_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(harmonic_mode_current_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_mode_current_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_mode_current_selected_bg, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_add_subject_set_int_event(harmonic_mode_current, &meter_harmonic_spectrum_mode, LV_EVENT_CLICKED, 1);
        lv_obj_t * harmonic_harmonic_mode_current_label = lv_label_create(harmonic_mode_current);
        lv_label_set_text(harmonic_harmonic_mode_current_label, "电流");
        lv_obj_set_align(harmonic_harmonic_mode_current_label, LV_ALIGN_CENTER);
        lv_obj_set_width(harmonic_harmonic_mode_current_label, 58);
        lv_obj_set_height(harmonic_harmonic_mode_current_label, 18);
        lv_obj_set_name(harmonic_harmonic_mode_current_label, "harmonic_harmonic_mode_current_label");
        lv_obj_add_style(harmonic_harmonic_mode_current_label, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_harmonic_mode_current_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_mode_current_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_style(harmonic_harmonic_mode_current_label, &me106_text_14_white_center, 0, &meter_harmonic_spectrum_mode, 1);

        lv_obj_t * harmonic_voltage_legend = lv_obj_create(page_content);
        lv_obj_set_name(harmonic_voltage_legend, "harmonic_voltage_legend");
        lv_obj_set_x(harmonic_voltage_legend, 155);
        lv_obj_set_y(harmonic_voltage_legend, 46);
        lv_obj_set_width(harmonic_voltage_legend, 140);
        lv_obj_set_height(harmonic_voltage_legend, 18);
        lv_obj_set_style_bg_opa(harmonic_voltage_legend, 0, 0);
        lv_obj_set_style_border_width(harmonic_voltage_legend, 0, 0);
        lv_obj_set_style_pad_all(harmonic_voltage_legend, 0, 0);
        lv_obj_set_flag(harmonic_voltage_legend, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_flag_if_not_eq(harmonic_voltage_legend, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * harmonic_harmonic_voltage_phase_a_label = lv_label_create(harmonic_voltage_legend);
        lv_label_set_text(harmonic_harmonic_voltage_phase_a_label, "A相");
        lv_obj_set_x(harmonic_harmonic_voltage_phase_a_label, 0);
        lv_obj_set_y(harmonic_harmonic_voltage_phase_a_label, 0);
        lv_obj_set_width(harmonic_harmonic_voltage_phase_a_label, 38);
        lv_obj_set_name(harmonic_harmonic_voltage_phase_a_label, "harmonic_harmonic_voltage_phase_a_label");
        lv_obj_add_style(harmonic_harmonic_voltage_phase_a_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_a_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_a_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_harmonic_voltage_phase_b_label = lv_label_create(harmonic_voltage_legend);
        lv_label_set_text(harmonic_harmonic_voltage_phase_b_label, "B相");
        lv_obj_set_x(harmonic_harmonic_voltage_phase_b_label, 47);
        lv_obj_set_y(harmonic_harmonic_voltage_phase_b_label, 0);
        lv_obj_set_width(harmonic_harmonic_voltage_phase_b_label, 38);
        lv_obj_set_name(harmonic_harmonic_voltage_phase_b_label, "harmonic_harmonic_voltage_phase_b_label");
        lv_obj_add_style(harmonic_harmonic_voltage_phase_b_label, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_b_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_b_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_harmonic_voltage_phase_c_label = lv_label_create(harmonic_voltage_legend);
        lv_label_set_text(harmonic_harmonic_voltage_phase_c_label, "C相");
        lv_obj_set_x(harmonic_harmonic_voltage_phase_c_label, 94);
        lv_obj_set_y(harmonic_harmonic_voltage_phase_c_label, 0);
        lv_obj_set_width(harmonic_harmonic_voltage_phase_c_label, 38);
        lv_obj_set_name(harmonic_harmonic_voltage_phase_c_label, "harmonic_harmonic_voltage_phase_c_label");
        lv_obj_add_style(harmonic_harmonic_voltage_phase_c_label, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_c_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_voltage_phase_c_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_current_legend = lv_obj_create(page_content);
        lv_obj_set_name(harmonic_current_legend, "harmonic_current_legend");
        lv_obj_set_x(harmonic_current_legend, 155);
        lv_obj_set_y(harmonic_current_legend, 46);
        lv_obj_set_width(harmonic_current_legend, 140);
        lv_obj_set_height(harmonic_current_legend, 18);
        lv_obj_set_style_bg_opa(harmonic_current_legend, 0, 0);
        lv_obj_set_style_border_width(harmonic_current_legend, 0, 0);
        lv_obj_set_style_pad_all(harmonic_current_legend, 0, 0);
        lv_obj_set_flag(harmonic_current_legend, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_flag_if_not_eq(harmonic_current_legend, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * harmonic_harmonic_current_phase_a_label = lv_label_create(harmonic_current_legend);
        lv_label_set_text(harmonic_harmonic_current_phase_a_label, "A相");
        lv_obj_set_x(harmonic_harmonic_current_phase_a_label, 0);
        lv_obj_set_y(harmonic_harmonic_current_phase_a_label, 0);
        lv_obj_set_width(harmonic_harmonic_current_phase_a_label, 38);
        lv_obj_set_name(harmonic_harmonic_current_phase_a_label, "harmonic_harmonic_current_phase_a_label");
        lv_obj_add_style(harmonic_harmonic_current_phase_a_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_harmonic_current_phase_a_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_current_phase_a_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_harmonic_current_phase_b_label = lv_label_create(harmonic_current_legend);
        lv_label_set_text(harmonic_harmonic_current_phase_b_label, "B相");
        lv_obj_set_x(harmonic_harmonic_current_phase_b_label, 47);
        lv_obj_set_y(harmonic_harmonic_current_phase_b_label, 0);
        lv_obj_set_width(harmonic_harmonic_current_phase_b_label, 38);
        lv_obj_set_name(harmonic_harmonic_current_phase_b_label, "harmonic_harmonic_current_phase_b_label");
        lv_obj_add_style(harmonic_harmonic_current_phase_b_label, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_harmonic_current_phase_b_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_current_phase_b_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_harmonic_current_phase_c_label = lv_label_create(harmonic_current_legend);
        lv_label_set_text(harmonic_harmonic_current_phase_c_label, "C相");
        lv_obj_set_x(harmonic_harmonic_current_phase_c_label, 94);
        lv_obj_set_y(harmonic_harmonic_current_phase_c_label, 0);
        lv_obj_set_width(harmonic_harmonic_current_phase_c_label, 38);
        lv_obj_set_name(harmonic_harmonic_current_phase_c_label, "harmonic_harmonic_current_phase_c_label");
        lv_obj_add_style(harmonic_harmonic_current_phase_c_label, &me106_text_14_orange, 0);
        lv_obj_bind_style(harmonic_harmonic_current_phase_c_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_harmonic_current_phase_c_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_ratio_percent_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_ratio_percent_label, "含有率(%)");
        lv_obj_set_x(harmonic_ratio_percent_label, 42);
        lv_obj_set_y(harmonic_ratio_percent_label, 66);
        lv_obj_set_width(harmonic_ratio_percent_label, 92);
        lv_obj_set_name(harmonic_ratio_percent_label, "harmonic_ratio_percent_label");
        lv_obj_add_style(harmonic_ratio_percent_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_ratio_percent_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_ratio_percent_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_1_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_1_label, "1");
        lv_obj_set_x(harmonic_tick_1_label, 21);
        lv_obj_set_y(harmonic_tick_1_label, 82);
        lv_obj_set_width(harmonic_tick_1_label, 18);
        lv_obj_set_name(harmonic_tick_1_label, "harmonic_tick_1_label");
        lv_obj_add_style(harmonic_tick_1_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_1_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_1_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_tick_1_label, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * harmonic_0_5_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_0_5_label, "0.5");
        lv_obj_set_x(harmonic_0_5_label, 8);
        lv_obj_set_y(harmonic_0_5_label, 128);
        lv_obj_set_width(harmonic_0_5_label, 30);
        lv_obj_set_name(harmonic_0_5_label, "harmonic_0_5_label");
        lv_obj_add_style(harmonic_0_5_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_0_5_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_0_5_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_0_5_label, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * harmonic_tick_25_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_25_label, "25");
        lv_obj_set_x(harmonic_tick_25_label, 15);
        lv_obj_set_y(harmonic_tick_25_label, 82);
        lv_obj_set_width(harmonic_tick_25_label, 24);
        lv_obj_set_name(harmonic_tick_25_label, "harmonic_tick_25_label");
        lv_obj_add_style(harmonic_tick_25_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_25_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_25_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_tick_25_label, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * harmonic_12_5_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_12_5_label, "12.5");
        lv_obj_set_x(harmonic_12_5_label, 2);
        lv_obj_set_y(harmonic_12_5_label, 128);
        lv_obj_set_width(harmonic_12_5_label, 36);
        lv_obj_set_name(harmonic_12_5_label, "harmonic_12_5_label");
        lv_obj_add_style(harmonic_12_5_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_12_5_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_12_5_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_12_5_label, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * harmonic_tick_0_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_0_label, "0");
        lv_obj_set_x(harmonic_tick_0_label, 24);
        lv_obj_set_y(harmonic_tick_0_label, 174);
        lv_obj_set_width(harmonic_tick_0_label, 16);
        lv_obj_set_name(harmonic_tick_0_label, "harmonic_tick_0_label");
        lv_obj_add_style(harmonic_tick_0_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_0_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_0_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_voltage_chart = lv_chart_create(page_content);
        lv_obj_set_name(harmonic_voltage_chart, "harmonic_voltage_chart");
        lv_obj_set_x(harmonic_voltage_chart, 42);
        lv_obj_set_y(harmonic_voltage_chart, 82);
        lv_obj_set_width(harmonic_voltage_chart, 250);
        lv_obj_set_height(harmonic_voltage_chart, 103);
        lv_chart_set_type(harmonic_voltage_chart, LV_CHART_TYPE_BAR);
        lv_chart_set_point_count(harmonic_voltage_chart, 62);
        lv_chart_set_hor_div_line_count(harmonic_voltage_chart, 5);
        lv_chart_set_ver_div_line_count(harmonic_voltage_chart, 7);
        lv_obj_set_style_bg_opa(harmonic_voltage_chart, 0, 0);
        lv_obj_set_style_border_width(harmonic_voltage_chart, 0, 0);
        lv_obj_set_style_pad_all(harmonic_voltage_chart, 0, 0);
        lv_obj_set_style_pad_column(harmonic_voltage_chart, 1, 0);
        lv_obj_set_style_line_opa(harmonic_voltage_chart, 180, 0);
        lv_obj_add_style(harmonic_voltage_chart, &me106_chart_frame, 0);
        lv_obj_bind_style(harmonic_voltage_chart, &me106_theme_light_chart, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_voltage_chart, &me106_theme_alarm_chart, 0, &meter_theme_index, 2);
        lv_obj_add_style(harmonic_voltage_chart, &me106_chart_bar_spectrum_items, LV_PART_ITEMS);
        lv_obj_bind_flag_if_not_eq(harmonic_voltage_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_bind_flag_if_not_eq(harmonic_voltage_chart, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);
        lv_chart_set_axis_min_value(harmonic_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, 0);
        lv_chart_set_axis_max_value(harmonic_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, 100);
        lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(harmonic_voltage_chart, lv_color_hex(0x52A3FF), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_voltage_chart_values_0[] = {16, 48, 2, 76, 3, 77, 2, 15, 3, 19, 6, 15, 8, 9, 4, 14, 0, 7, 1, 5, 0, 6, 0, 2, 0, 5, 0, 1, 0, 1, 0, 3, 0, 2, 0, 0, 0, 2, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
        lv_chart_set_series_values(harmonic_voltage_chart, lv_chart_series_0, harmonic_voltage_chart_values_0, 62);
        lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(harmonic_voltage_chart, lv_color_hex(0x20D3D5), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_voltage_chart_values_1[] = {14, 52, 3, 89, 2, 96, 2, 33, 2, 20, 4, 10, 6, 20, 3, 13, 1, 2, 2, 9, 1, 3, 1, 2, 0, 4, 1, 6, 0, 3, 0, 1, 0, 2, 0, 2, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
        lv_chart_set_series_values(harmonic_voltage_chart, lv_chart_series_1, harmonic_voltage_chart_values_1, 62);
        lv_chart_series_t * lv_chart_series_2 = lv_chart_add_series(harmonic_voltage_chart, lv_color_hex(0xF59E0B), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_voltage_chart_values_2[] = {15, 68, 1, 96, 1, 93, 2, 16, 2, 25, 2, 5, 2, 20, 2, 14, 0, 8, 1, 8, 1, 8, 1, 7, 0, 5, 1, 2, 0, 4, 0, 3, 0, 3, 0, 1, 0, 2, 0, 2, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(harmonic_voltage_chart, lv_chart_series_2, harmonic_voltage_chart_values_2, 62);

        lv_obj_t * harmonic_current_chart = lv_chart_create(page_content);
        lv_obj_set_name(harmonic_current_chart, "harmonic_current_chart");
        lv_obj_set_x(harmonic_current_chart, 42);
        lv_obj_set_y(harmonic_current_chart, 82);
        lv_obj_set_width(harmonic_current_chart, 250);
        lv_obj_set_height(harmonic_current_chart, 103);
        lv_chart_set_type(harmonic_current_chart, LV_CHART_TYPE_BAR);
        lv_chart_set_point_count(harmonic_current_chart, 62);
        lv_chart_set_hor_div_line_count(harmonic_current_chart, 5);
        lv_chart_set_ver_div_line_count(harmonic_current_chart, 7);
        lv_obj_set_style_bg_opa(harmonic_current_chart, 0, 0);
        lv_obj_set_style_border_width(harmonic_current_chart, 0, 0);
        lv_obj_set_style_pad_all(harmonic_current_chart, 0, 0);
        lv_obj_set_style_pad_column(harmonic_current_chart, 1, 0);
        lv_obj_set_style_line_opa(harmonic_current_chart, 180, 0);
        lv_obj_add_style(harmonic_current_chart, &me106_chart_frame, 0);
        lv_obj_bind_style(harmonic_current_chart, &me106_theme_light_chart, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_current_chart, &me106_theme_alarm_chart, 0, &meter_theme_index, 2);
        lv_obj_add_style(harmonic_current_chart, &me106_chart_bar_spectrum_items, LV_PART_ITEMS);
        lv_obj_bind_flag_if_not_eq(harmonic_current_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_bind_flag_if_not_eq(harmonic_current_chart, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);
        lv_chart_set_axis_min_value(harmonic_current_chart, LV_CHART_AXIS_PRIMARY_Y, 0);
        lv_chart_set_axis_max_value(harmonic_current_chart, LV_CHART_AXIS_PRIMARY_Y, 2500);
        lv_chart_series_t * lv_chart_series_3 = lv_chart_add_series(harmonic_current_chart, lv_color_hex(0x52A3FF), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_current_chart_values_0[] = {15, 744, 6, 1177, 9, 550, 7, 143, 2, 59, 11, 53, 18, 18, 19, 38, 6, 36, 7, 6, 5, 20, 3, 15, 1, 12, 2, 15, 3, 3, 2, 6, 1, 3, 0, 1, 2, 4, 1, 1, 1, 1, 0, 2, 1, 3, 1, 1, 0, 1, 0, 2, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
        lv_chart_set_series_values(harmonic_current_chart, lv_chart_series_3, harmonic_current_chart_values_0, 62);
        lv_chart_series_t * lv_chart_series_4 = lv_chart_add_series(harmonic_current_chart, lv_color_hex(0x20D3D5), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_current_chart_values_1[] = {16, 581, 15, 1172, 5, 633, 13, 90, 5, 64, 14, 54, 34, 78, 20, 27, 20, 37, 10, 28, 1, 8, 2, 10, 4, 11, 1, 16, 2, 7, 1, 4, 3, 4, 2, 3, 2, 2, 0, 3, 0, 1, 0, 1, 2, 4, 0, 1, 1, 1, 1, 0, 0, 1, 2, 1, 1, 1, 0, 0, 0, 0};
        lv_chart_set_series_values(harmonic_current_chart, lv_chart_series_4, harmonic_current_chart_values_1, 62);
        lv_chart_series_t * lv_chart_series_5 = lv_chart_add_series(harmonic_current_chart, lv_color_hex(0xF59E0B), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t harmonic_current_chart_values_2[] = {35, 1257, 17, 2464, 25, 1060, 5, 412, 13, 221, 18, 317, 51, 410, 29, 113, 53, 147, 31, 174, 14, 149, 9, 78, 2, 111, 3, 82, 1, 56, 4, 52, 7, 30, 5, 14, 1, 21, 3, 14, 1, 14, 4, 16, 2, 2, 1, 16, 1, 3, 1, 5, 1, 3, 1, 4, 0, 2, 1, 2, 1, 1};
        lv_chart_set_series_values(harmonic_current_chart, lv_chart_series_5, harmonic_current_chart_values_2, 62);

        lv_obj_t * harmonic_tick_2_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_2_label, "2");
        lv_obj_set_x(harmonic_tick_2_label, 42);
        lv_obj_set_y(harmonic_tick_2_label, 187);
        lv_obj_set_width(harmonic_tick_2_label, 18);
        lv_obj_set_name(harmonic_tick_2_label, "harmonic_tick_2_label");
        lv_obj_add_style(harmonic_tick_2_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_2_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_2_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_9_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_9_label, "9");
        lv_obj_set_x(harmonic_tick_9_label, 70);
        lv_obj_set_y(harmonic_tick_9_label, 187);
        lv_obj_set_width(harmonic_tick_9_label, 18);
        lv_obj_set_name(harmonic_tick_9_label, "harmonic_tick_9_label");
        lv_obj_add_style(harmonic_tick_9_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_9_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_9_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_16_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_16_label, "16");
        lv_obj_set_x(harmonic_tick_16_label, 97);
        lv_obj_set_y(harmonic_tick_16_label, 187);
        lv_obj_set_width(harmonic_tick_16_label, 24);
        lv_obj_set_name(harmonic_tick_16_label, "harmonic_tick_16_label");
        lv_obj_add_style(harmonic_tick_16_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_16_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_16_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_23_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_23_label, "23");
        lv_obj_set_x(harmonic_tick_23_label, 126);
        lv_obj_set_y(harmonic_tick_23_label, 187);
        lv_obj_set_width(harmonic_tick_23_label, 24);
        lv_obj_set_name(harmonic_tick_23_label, "harmonic_tick_23_label");
        lv_obj_add_style(harmonic_tick_23_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_23_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_23_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_30_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_30_label, "30");
        lv_obj_set_x(harmonic_tick_30_label, 154);
        lv_obj_set_y(harmonic_tick_30_label, 187);
        lv_obj_set_width(harmonic_tick_30_label, 24);
        lv_obj_set_name(harmonic_tick_30_label, "harmonic_tick_30_label");
        lv_obj_add_style(harmonic_tick_30_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_30_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_30_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_37_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_37_label, "37");
        lv_obj_set_x(harmonic_tick_37_label, 183);
        lv_obj_set_y(harmonic_tick_37_label, 187);
        lv_obj_set_width(harmonic_tick_37_label, 24);
        lv_obj_set_name(harmonic_tick_37_label, "harmonic_tick_37_label");
        lv_obj_add_style(harmonic_tick_37_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_37_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_37_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_44_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_44_label, "44");
        lv_obj_set_x(harmonic_tick_44_label, 212);
        lv_obj_set_y(harmonic_tick_44_label, 187);
        lv_obj_set_width(harmonic_tick_44_label, 24);
        lv_obj_set_name(harmonic_tick_44_label, "harmonic_tick_44_label");
        lv_obj_add_style(harmonic_tick_44_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_44_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_44_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_51_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_51_label, "51");
        lv_obj_set_x(harmonic_tick_51_label, 240);
        lv_obj_set_y(harmonic_tick_51_label, 187);
        lv_obj_set_width(harmonic_tick_51_label, 24);
        lv_obj_set_name(harmonic_tick_51_label, "harmonic_tick_51_label");
        lv_obj_add_style(harmonic_tick_51_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_51_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_51_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_tick_58_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_tick_58_label, "58");
        lv_obj_set_x(harmonic_tick_58_label, 269);
        lv_obj_set_y(harmonic_tick_58_label, 187);
        lv_obj_set_width(harmonic_tick_58_label, 24);
        lv_obj_set_name(harmonic_tick_58_label, "harmonic_tick_58_label");
        lv_obj_add_style(harmonic_tick_58_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_tick_58_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_tick_58_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_loading_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_loading_label, "加载中");
        lv_obj_set_x(harmonic_loading_label, 70);
        lv_obj_set_y(harmonic_loading_label, 121);
        lv_obj_set_width(harmonic_loading_label, 180);
        lv_obj_set_name(harmonic_loading_label, "harmonic_loading_label");
        lv_obj_add_style(harmonic_loading_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_loading_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_loading_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_loading_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * harmonic_no_harmonic_data_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_no_harmonic_data_label, "暂无谐波数据");
        lv_obj_set_x(harmonic_no_harmonic_data_label, 70);
        lv_obj_set_y(harmonic_no_harmonic_data_label, 121);
        lv_obj_set_width(harmonic_no_harmonic_data_label, 180);
        lv_obj_set_name(harmonic_no_harmonic_data_label, "harmonic_no_harmonic_data_label");
        lv_obj_add_style(harmonic_no_harmonic_data_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_no_harmonic_data_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_no_harmonic_data_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_no_harmonic_data_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * harmonic_data_error_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_data_error_label, "数据异常");
        lv_obj_set_x(harmonic_data_error_label, 70);
        lv_obj_set_y(harmonic_data_error_label, 121);
        lv_obj_set_width(harmonic_data_error_label, 180);
        lv_obj_set_name(harmonic_data_error_label, "harmonic_data_error_label");
        lv_obj_add_style(harmonic_data_error_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_data_error_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_data_error_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_data_error_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * screen_harmonic_spectrum_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_harmonic_spectrum_bottom_bar, "screen_harmonic_spectrum_bottom_bar");
        lv_obj_set_x(screen_harmonic_spectrum_bottom_bar, 0);
        lv_obj_set_y(screen_harmonic_spectrum_bottom_bar, 207);
        lv_obj_set_width(screen_harmonic_spectrum_bottom_bar, 320);
        lv_obj_set_height(screen_harmonic_spectrum_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_harmonic_spectrum_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_harmonic_spectrum_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_harmonic_spectrum_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_harmonic_spectrum_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_harmonic_spectrum_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_harmonic_spectrum_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(harmonic_btn_return, "harmonic_btn_return");
        lv_obj_set_x(harmonic_btn_return, 0);
        lv_obj_set_y(harmonic_btn_return, 207);
        lv_obj_set_width(harmonic_btn_return, 79);
        lv_obj_set_height(harmonic_btn_return, 32);
        lv_obj_add_style(harmonic_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(harmonic_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(harmonic_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(harmonic_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * harmonic_btn_left = lv_button_create(lv_obj_0);
        lv_obj_set_name(harmonic_btn_left, "harmonic_btn_left");
        lv_obj_set_x(harmonic_btn_left, 80);
        lv_obj_set_y(harmonic_btn_left, 207);
        lv_obj_set_width(harmonic_btn_left, 79);
        lv_obj_set_height(harmonic_btn_left, 32);
        lv_obj_add_style(harmonic_btn_left, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(harmonic_btn_left, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_btn_left, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(harmonic_btn_left);
        lv_image_set_src(lv_image_1, meter_arrow_left);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_1, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 120, 0);

        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(harmonic_btn_left, &meter_harmonic_spectrum_mode, LV_EVENT_CLICKED, -1);
        lv_obj_set_subject_increment_event_min_value(harmonic_btn_left, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(harmonic_btn_left, subject_increment_event_0, 1);
        lv_obj_set_subject_increment_event_rollover(harmonic_btn_left, subject_increment_event_0, true);

        lv_obj_t * harmonic_btn_right = lv_button_create(lv_obj_0);
        lv_obj_set_name(harmonic_btn_right, "harmonic_btn_right");
        lv_obj_set_x(harmonic_btn_right, 160);
        lv_obj_set_y(harmonic_btn_right, 207);
        lv_obj_set_width(harmonic_btn_right, 79);
        lv_obj_set_height(harmonic_btn_right, 32);
        lv_obj_add_style(harmonic_btn_right, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(harmonic_btn_right, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_btn_right, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(harmonic_btn_right);
        lv_image_set_src(lv_image_2, meter_arrow_right);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_2, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);

        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(harmonic_btn_right, &meter_harmonic_spectrum_mode, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(harmonic_btn_right, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(harmonic_btn_right, subject_increment_event_1, 1);
        lv_obj_set_subject_increment_event_rollover(harmonic_btn_right, subject_increment_event_1, true);

        lv_obj_t * harmonic_btn_table_voltage = lv_button_create(lv_obj_0);
        lv_obj_set_name(harmonic_btn_table_voltage, "harmonic_btn_table_voltage");
        lv_obj_set_x(harmonic_btn_table_voltage, 240);
        lv_obj_set_y(harmonic_btn_table_voltage, 207);
        lv_obj_set_width(harmonic_btn_table_voltage, 80);
        lv_obj_set_height(harmonic_btn_table_voltage, 32);
        lv_obj_add_style(harmonic_btn_table_voltage, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(harmonic_btn_table_voltage, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_btn_table_voltage, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_btn_table_voltage, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * lv_image_3 = lv_image_create(harmonic_btn_table_voltage);
        lv_image_set_src(lv_image_3, meter_icon_table);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 12, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 12, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 150, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 150, 0);

        lv_obj_add_screen_create_event(harmonic_btn_table_voltage, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * harmonic_btn_table_current = lv_button_create(lv_obj_0);
        lv_obj_set_name(harmonic_btn_table_current, "harmonic_btn_table_current");
        lv_obj_set_x(harmonic_btn_table_current, 240);
        lv_obj_set_y(harmonic_btn_table_current, 207);
        lv_obj_set_width(harmonic_btn_table_current, 80);
        lv_obj_set_height(harmonic_btn_table_current, 32);
        lv_obj_add_style(harmonic_btn_table_current, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(harmonic_btn_table_current, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_btn_table_current, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_btn_table_current, &meter_harmonic_spectrum_mode, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * lv_image_4 = lv_image_create(harmonic_btn_table_current);
        lv_image_set_src(lv_image_4, meter_icon_table);
        lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_4, 12, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_4, 12, 0);
        lv_obj_set_style_transform_scale_x(lv_image_4, 150, 0);
        lv_obj_set_style_transform_scale_y(lv_image_4, 150, 0);

        lv_obj_add_screen_create_event(harmonic_btn_table_current, LV_EVENT_CLICKED, screen_harmonic_spectrum_table_current_0_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

