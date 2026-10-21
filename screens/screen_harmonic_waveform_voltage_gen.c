/**
 * @file screen_harmonic_waveform_voltage_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_harmonic_waveform_voltage_gen.h"
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

lv_obj_t * screen_harmonic_waveform_voltage_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_harmonic_waveform_voltage_#");
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
        lv_obj_t * harmonic_waveform_voltage_content_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_content_label, "总压");
        lv_obj_set_x(harmonic_waveform_voltage_content_label, 24);
        lv_obj_set_y(harmonic_waveform_voltage_content_label, 17);
        lv_obj_set_width(harmonic_waveform_voltage_content_label, 60);
        lv_obj_set_name(harmonic_waveform_voltage_content_label, "harmonic_waveform_voltage_content_label");
        lv_obj_add_style(harmonic_waveform_voltage_content_label, &me106_text_16_white, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_waveform_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_waveform_label, "波形曲线");
        lv_obj_set_x(harmonic_waveform_voltage_waveform_label, 170);
        lv_obj_set_y(harmonic_waveform_voltage_waveform_label, 17);
        lv_obj_set_width(harmonic_waveform_voltage_waveform_label, 126);
        lv_obj_set_name(harmonic_waveform_voltage_waveform_label, "harmonic_waveform_voltage_waveform_label");
        lv_obj_add_style(harmonic_waveform_voltage_waveform_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_waveform_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_waveform_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_amplitude_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_amplitude_label, "幅值(V/A)");
        lv_obj_set_x(harmonic_waveform_voltage_amplitude_label, 24);
        lv_obj_set_y(harmonic_waveform_voltage_amplitude_label, 58);
        lv_obj_set_width(harmonic_waveform_voltage_amplitude_label, 90);
        lv_obj_set_name(harmonic_waveform_voltage_amplitude_label, "harmonic_waveform_voltage_amplitude_label");
        lv_obj_add_style(harmonic_waveform_voltage_amplitude_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_amplitude_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_amplitude_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_content_label_2 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_content_label_2, "●");
        lv_obj_set_x(harmonic_waveform_voltage_content_label_2, 113);
        lv_obj_set_y(harmonic_waveform_voltage_content_label_2, 43);
        lv_obj_set_width(harmonic_waveform_voltage_content_label_2, 12);
        lv_obj_set_name(harmonic_waveform_voltage_content_label_2, "harmonic_waveform_voltage_content_label_2");
        lv_obj_add_style(harmonic_waveform_voltage_content_label_2, &me106_text_14_yellow, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_2, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_2, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_phase_a_voltage_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_phase_a_voltage_label, "A压");
        lv_obj_set_x(harmonic_waveform_voltage_phase_a_voltage_label, 126);
        lv_obj_set_y(harmonic_waveform_voltage_phase_a_voltage_label, 43);
        lv_obj_set_width(harmonic_waveform_voltage_phase_a_voltage_label, 38);
        lv_obj_set_name(harmonic_waveform_voltage_phase_a_voltage_label, "harmonic_waveform_voltage_phase_a_voltage_label");
        lv_obj_add_style(harmonic_waveform_voltage_phase_a_voltage_label, &me106_text_14_yellow, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_a_voltage_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_a_voltage_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_content_label_3 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_content_label_3, "●");
        lv_obj_set_x(harmonic_waveform_voltage_content_label_3, 163);
        lv_obj_set_y(harmonic_waveform_voltage_content_label_3, 43);
        lv_obj_set_width(harmonic_waveform_voltage_content_label_3, 12);
        lv_obj_set_name(harmonic_waveform_voltage_content_label_3, "harmonic_waveform_voltage_content_label_3");
        lv_obj_add_style(harmonic_waveform_voltage_content_label_3, &me106_text_14_green, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_3, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_3, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_phase_b_voltage_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_phase_b_voltage_label, "B压");
        lv_obj_set_x(harmonic_waveform_voltage_phase_b_voltage_label, 176);
        lv_obj_set_y(harmonic_waveform_voltage_phase_b_voltage_label, 43);
        lv_obj_set_width(harmonic_waveform_voltage_phase_b_voltage_label, 38);
        lv_obj_set_name(harmonic_waveform_voltage_phase_b_voltage_label, "harmonic_waveform_voltage_phase_b_voltage_label");
        lv_obj_add_style(harmonic_waveform_voltage_phase_b_voltage_label, &me106_text_14_green, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_b_voltage_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_b_voltage_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_content_label_4 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_content_label_4, "●");
        lv_obj_set_x(harmonic_waveform_voltage_content_label_4, 213);
        lv_obj_set_y(harmonic_waveform_voltage_content_label_4, 43);
        lv_obj_set_width(harmonic_waveform_voltage_content_label_4, 12);
        lv_obj_set_name(harmonic_waveform_voltage_content_label_4, "harmonic_waveform_voltage_content_label_4");
        lv_obj_add_style(harmonic_waveform_voltage_content_label_4, &me106_text_14_red, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_4, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_content_label_4, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_phase_c_voltage_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_phase_c_voltage_label, "C压");
        lv_obj_set_x(harmonic_waveform_voltage_phase_c_voltage_label, 226);
        lv_obj_set_y(harmonic_waveform_voltage_phase_c_voltage_label, 43);
        lv_obj_set_width(harmonic_waveform_voltage_phase_c_voltage_label, 38);
        lv_obj_set_name(harmonic_waveform_voltage_phase_c_voltage_label, "harmonic_waveform_voltage_phase_c_voltage_label");
        lv_obj_add_style(harmonic_waveform_voltage_phase_c_voltage_label, &me106_text_14_red, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_c_voltage_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_phase_c_voltage_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_v_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_v_label, "V");
        lv_obj_set_x(harmonic_waveform_voltage_v_label, 18);
        lv_obj_set_y(harmonic_waveform_voltage_v_label, 70);
        lv_obj_set_width(harmonic_waveform_voltage_v_label, 18);
        lv_obj_set_name(harmonic_waveform_voltage_v_label, "harmonic_waveform_voltage_v_label");
        lv_obj_add_style(harmonic_waveform_voltage_v_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_v_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_v_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_320_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_320_label, "320");
        lv_obj_set_x(harmonic_waveform_voltage_tick_320_label, 8);
        lv_obj_set_y(harmonic_waveform_voltage_tick_320_label, 86);
        lv_obj_set_width(harmonic_waveform_voltage_tick_320_label, 30);
        lv_obj_set_name(harmonic_waveform_voltage_tick_320_label, "harmonic_waveform_voltage_tick_320_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_320_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_320_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_320_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_0_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_0_label, "0");
        lv_obj_set_x(harmonic_waveform_voltage_tick_0_label, 24);
        lv_obj_set_y(harmonic_waveform_voltage_tick_0_label, 128);
        lv_obj_set_width(harmonic_waveform_voltage_tick_0_label, 16);
        lv_obj_set_name(harmonic_waveform_voltage_tick_0_label, "harmonic_waveform_voltage_tick_0_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_0_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_0_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_0_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_320_label_2 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_320_label_2, "-320");
        lv_obj_set_x(harmonic_waveform_voltage_tick_320_label_2, 3);
        lv_obj_set_y(harmonic_waveform_voltage_tick_320_label_2, 170);
        lv_obj_set_width(harmonic_waveform_voltage_tick_320_label_2, 36);
        lv_obj_set_name(harmonic_waveform_voltage_tick_320_label_2, "harmonic_waveform_voltage_tick_320_label_2");
        lv_obj_add_style(harmonic_waveform_voltage_tick_320_label_2, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_320_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_320_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * waveform_voltage_chart = lv_chart_create(page_content);
        lv_obj_set_name(waveform_voltage_chart, "waveform_voltage_chart");
        lv_obj_set_x(waveform_voltage_chart, 40);
        lv_obj_set_y(waveform_voltage_chart, 78);
        lv_obj_set_width(waveform_voltage_chart, 240);
        lv_obj_set_height(waveform_voltage_chart, 108);
        lv_chart_set_type(waveform_voltage_chart, LV_CHART_TYPE_LINE);
        lv_chart_set_point_count(waveform_voltage_chart, 256);
        lv_chart_set_hor_div_line_count(waveform_voltage_chart, 5);
        lv_chart_set_ver_div_line_count(waveform_voltage_chart, 8);
        lv_obj_set_style_bg_opa(waveform_voltage_chart, 0, 0);
        lv_obj_set_style_border_width(waveform_voltage_chart, 0, 0);
        lv_obj_set_style_pad_all(waveform_voltage_chart, 0, 0);
        lv_obj_set_style_line_opa(waveform_voltage_chart, 180, 0);
        lv_obj_add_style(waveform_voltage_chart, &me106_theme_dark_chart, 0);
        lv_obj_bind_style(waveform_voltage_chart, &me106_theme_light_chart, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_voltage_chart, &me106_theme_alarm_chart, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(waveform_voltage_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_add_style(waveform_voltage_chart, &me106_chart_point_hidden, LV_PART_INDICATOR);
        lv_obj_add_style(waveform_voltage_chart, &me106_chart_wave_line, LV_PART_ITEMS);
        lv_chart_set_axis_min_value(waveform_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, -360);
        lv_chart_set_axis_max_value(waveform_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, 360);
        lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0xFFEB3B), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_voltage_chart_values_0[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_0, waveform_voltage_chart_values_0, 256);
        lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0x32E67A), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_voltage_chart_values_1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_1, waveform_voltage_chart_values_1, 256);
        lv_chart_series_t * lv_chart_series_2 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0xE33C64), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_voltage_chart_values_2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_2, waveform_voltage_chart_values_2, 256);

        lv_obj_t * harmonic_waveform_voltage_tick_1_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_1_label, "1");
        lv_obj_set_x(harmonic_waveform_voltage_tick_1_label, 40);
        lv_obj_set_y(harmonic_waveform_voltage_tick_1_label, 188);
        lv_obj_set_width(harmonic_waveform_voltage_tick_1_label, 18);
        lv_obj_set_name(harmonic_waveform_voltage_tick_1_label, "harmonic_waveform_voltage_tick_1_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_1_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_1_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_1_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_64_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_64_label, "64");
        lv_obj_set_x(harmonic_waveform_voltage_tick_64_label, 95);
        lv_obj_set_y(harmonic_waveform_voltage_tick_64_label, 188);
        lv_obj_set_width(harmonic_waveform_voltage_tick_64_label, 24);
        lv_obj_set_name(harmonic_waveform_voltage_tick_64_label, "harmonic_waveform_voltage_tick_64_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_64_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_64_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_64_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_128_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_128_label, "128");
        lv_obj_set_x(harmonic_waveform_voltage_tick_128_label, 151);
        lv_obj_set_y(harmonic_waveform_voltage_tick_128_label, 188);
        lv_obj_set_width(harmonic_waveform_voltage_tick_128_label, 32);
        lv_obj_set_name(harmonic_waveform_voltage_tick_128_label, "harmonic_waveform_voltage_tick_128_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_128_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_128_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_128_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_192_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_192_label, "192");
        lv_obj_set_x(harmonic_waveform_voltage_tick_192_label, 210);
        lv_obj_set_y(harmonic_waveform_voltage_tick_192_label, 188);
        lv_obj_set_width(harmonic_waveform_voltage_tick_192_label, 32);
        lv_obj_set_name(harmonic_waveform_voltage_tick_192_label, "harmonic_waveform_voltage_tick_192_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_192_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_192_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_192_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_tick_256_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_tick_256_label, "256点");
        lv_obj_set_x(harmonic_waveform_voltage_tick_256_label, 257);
        lv_obj_set_y(harmonic_waveform_voltage_tick_256_label, 188);
        lv_obj_set_width(harmonic_waveform_voltage_tick_256_label, 48);
        lv_obj_set_name(harmonic_waveform_voltage_tick_256_label, "harmonic_waveform_voltage_tick_256_label");
        lv_obj_add_style(harmonic_waveform_voltage_tick_256_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_256_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_tick_256_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_voltage_loading_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_loading_label, "加载中");
        lv_obj_set_x(harmonic_waveform_voltage_loading_label, 70);
        lv_obj_set_y(harmonic_waveform_voltage_loading_label, 121);
        lv_obj_set_width(harmonic_waveform_voltage_loading_label, 180);
        lv_obj_set_name(harmonic_waveform_voltage_loading_label, "harmonic_waveform_voltage_loading_label");
        lv_obj_add_style(harmonic_waveform_voltage_loading_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_loading_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_loading_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_voltage_loading_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * harmonic_waveform_voltage_no_harmonic_data_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_no_harmonic_data_label, "暂无谐波数据");
        lv_obj_set_x(harmonic_waveform_voltage_no_harmonic_data_label, 70);
        lv_obj_set_y(harmonic_waveform_voltage_no_harmonic_data_label, 121);
        lv_obj_set_width(harmonic_waveform_voltage_no_harmonic_data_label, 180);
        lv_obj_set_name(harmonic_waveform_voltage_no_harmonic_data_label, "harmonic_waveform_voltage_no_harmonic_data_label");
        lv_obj_add_style(harmonic_waveform_voltage_no_harmonic_data_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_no_harmonic_data_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_no_harmonic_data_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_voltage_no_harmonic_data_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * harmonic_waveform_voltage_data_error_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_voltage_data_error_label, "数据异常");
        lv_obj_set_x(harmonic_waveform_voltage_data_error_label, 70);
        lv_obj_set_y(harmonic_waveform_voltage_data_error_label, 121);
        lv_obj_set_width(harmonic_waveform_voltage_data_error_label, 180);
        lv_obj_set_name(harmonic_waveform_voltage_data_error_label, "harmonic_waveform_voltage_data_error_label");
        lv_obj_add_style(harmonic_waveform_voltage_data_error_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_voltage_data_error_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_voltage_data_error_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_voltage_data_error_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * screen_harmonic_waveform_voltage_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_harmonic_waveform_voltage_bottom_bar, "screen_harmonic_waveform_voltage_bottom_bar");
        lv_obj_set_x(screen_harmonic_waveform_voltage_bottom_bar, 0);
        lv_obj_set_y(screen_harmonic_waveform_voltage_bottom_bar, 207);
        lv_obj_set_width(screen_harmonic_waveform_voltage_bottom_bar, 320);
        lv_obj_set_height(screen_harmonic_waveform_voltage_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_harmonic_waveform_voltage_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_harmonic_waveform_voltage_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_harmonic_waveform_voltage_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_harmonic_waveform_voltage_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_harmonic_waveform_voltage_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_harmonic_waveform_voltage_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * waveform_voltage_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_voltage_btn_return, "waveform_voltage_btn_return");
        lv_obj_set_x(waveform_voltage_btn_return, 0);
        lv_obj_set_y(waveform_voltage_btn_return, 207);
        lv_obj_set_width(waveform_voltage_btn_return, 79);
        lv_obj_set_height(waveform_voltage_btn_return, 32);
        lv_obj_add_style(waveform_voltage_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_voltage_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_voltage_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(waveform_voltage_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(waveform_voltage_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_voltage_btn_next_page = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_voltage_btn_next_page, "waveform_voltage_btn_next_page");
        lv_obj_set_x(waveform_voltage_btn_next_page, 80);
        lv_obj_set_y(waveform_voltage_btn_next_page, 207);
        lv_obj_set_width(waveform_voltage_btn_next_page, 79);
        lv_obj_set_height(waveform_voltage_btn_next_page, 32);
        lv_obj_add_style(waveform_voltage_btn_next_page, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_voltage_btn_next_page, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_voltage_btn_next_page, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(waveform_voltage_btn_next_page);
        lv_image_set_src(lv_image_1, meter_arrow_down);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_obj_add_screen_create_event(waveform_voltage_btn_next_page, LV_EVENT_CLICKED, screen_harmonic_waveform_current_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_voltage_btn_prev_page = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_voltage_btn_prev_page, "waveform_voltage_btn_prev_page");
        lv_obj_set_x(waveform_voltage_btn_prev_page, 160);
        lv_obj_set_y(waveform_voltage_btn_prev_page, 207);
        lv_obj_set_width(waveform_voltage_btn_prev_page, 79);
        lv_obj_set_height(waveform_voltage_btn_prev_page, 32);
        lv_obj_add_style(waveform_voltage_btn_prev_page, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_voltage_btn_prev_page, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_voltage_btn_prev_page, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(waveform_voltage_btn_prev_page);
        lv_image_set_src(lv_image_2, meter_arrow_up);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);

        lv_obj_add_screen_create_event(waveform_voltage_btn_prev_page, LV_EVENT_CLICKED, screen_harmonic_waveform_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_voltage_btn_idle = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_voltage_btn_idle, "waveform_voltage_btn_idle");
        lv_obj_set_x(waveform_voltage_btn_idle, 240);
        lv_obj_set_y(waveform_voltage_btn_idle, 207);
        lv_obj_set_width(waveform_voltage_btn_idle, 80);
        lv_obj_set_height(waveform_voltage_btn_idle, 32);
        lv_obj_add_style(waveform_voltage_btn_idle, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_voltage_btn_idle, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_voltage_btn_idle, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

