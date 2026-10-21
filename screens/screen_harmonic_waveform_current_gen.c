/**
 * @file screen_harmonic_waveform_current_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_harmonic_waveform_current_gen.h"
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

lv_obj_t * screen_harmonic_waveform_current_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_harmonic_waveform_current_#");
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
        lv_obj_t * harmonic_waveform_current_content_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_content_label, "总流");
        lv_obj_set_x(harmonic_waveform_current_content_label, 24);
        lv_obj_set_y(harmonic_waveform_current_content_label, 17);
        lv_obj_set_width(harmonic_waveform_current_content_label, 60);
        lv_obj_set_name(harmonic_waveform_current_content_label, "harmonic_waveform_current_content_label");
        lv_obj_add_style(harmonic_waveform_current_content_label, &me106_text_16_white, 0);
        lv_obj_bind_style(harmonic_waveform_current_content_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_content_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_waveform_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_waveform_label, "波形曲线");
        lv_obj_set_x(harmonic_waveform_current_waveform_label, 170);
        lv_obj_set_y(harmonic_waveform_current_waveform_label, 17);
        lv_obj_set_width(harmonic_waveform_current_waveform_label, 126);
        lv_obj_set_name(harmonic_waveform_current_waveform_label, "harmonic_waveform_current_waveform_label");
        lv_obj_add_style(harmonic_waveform_current_waveform_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(harmonic_waveform_current_waveform_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_waveform_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_amplitude_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_amplitude_label, "幅值(V/A)");
        lv_obj_set_x(harmonic_waveform_current_amplitude_label, 24);
        lv_obj_set_y(harmonic_waveform_current_amplitude_label, 58);
        lv_obj_set_width(harmonic_waveform_current_amplitude_label, 90);
        lv_obj_set_name(harmonic_waveform_current_amplitude_label, "harmonic_waveform_current_amplitude_label");
        lv_obj_add_style(harmonic_waveform_current_amplitude_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_waveform_current_amplitude_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_amplitude_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_content_label_2 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_content_label_2, "●");
        lv_obj_set_x(harmonic_waveform_current_content_label_2, 113);
        lv_obj_set_y(harmonic_waveform_current_content_label_2, 43);
        lv_obj_set_width(harmonic_waveform_current_content_label_2, 12);
        lv_obj_set_name(harmonic_waveform_current_content_label_2, "harmonic_waveform_current_content_label_2");
        lv_obj_add_style(harmonic_waveform_current_content_label_2, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_waveform_current_content_label_2, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_content_label_2, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_phase_a_current_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_phase_a_current_label, "A流");
        lv_obj_set_x(harmonic_waveform_current_phase_a_current_label, 126);
        lv_obj_set_y(harmonic_waveform_current_phase_a_current_label, 43);
        lv_obj_set_width(harmonic_waveform_current_phase_a_current_label, 38);
        lv_obj_set_name(harmonic_waveform_current_phase_a_current_label, "harmonic_waveform_current_phase_a_current_label");
        lv_obj_add_style(harmonic_waveform_current_phase_a_current_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(harmonic_waveform_current_phase_a_current_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_phase_a_current_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_content_label_3 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_content_label_3, "●");
        lv_obj_set_x(harmonic_waveform_current_content_label_3, 163);
        lv_obj_set_y(harmonic_waveform_current_content_label_3, 43);
        lv_obj_set_width(harmonic_waveform_current_content_label_3, 12);
        lv_obj_set_name(harmonic_waveform_current_content_label_3, "harmonic_waveform_current_content_label_3");
        lv_obj_add_style(harmonic_waveform_current_content_label_3, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_waveform_current_content_label_3, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_content_label_3, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_phase_b_current_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_phase_b_current_label, "B流");
        lv_obj_set_x(harmonic_waveform_current_phase_b_current_label, 176);
        lv_obj_set_y(harmonic_waveform_current_phase_b_current_label, 43);
        lv_obj_set_width(harmonic_waveform_current_phase_b_current_label, 38);
        lv_obj_set_name(harmonic_waveform_current_phase_b_current_label, "harmonic_waveform_current_phase_b_current_label");
        lv_obj_add_style(harmonic_waveform_current_phase_b_current_label, &me106_text_14_cyan, 0);
        lv_obj_bind_style(harmonic_waveform_current_phase_b_current_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_phase_b_current_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_content_label_4 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_content_label_4, "●");
        lv_obj_set_x(harmonic_waveform_current_content_label_4, 213);
        lv_obj_set_y(harmonic_waveform_current_content_label_4, 43);
        lv_obj_set_width(harmonic_waveform_current_content_label_4, 12);
        lv_obj_set_name(harmonic_waveform_current_content_label_4, "harmonic_waveform_current_content_label_4");
        lv_obj_add_style(harmonic_waveform_current_content_label_4, &me106_text_14_purple, 0);
        lv_obj_bind_style(harmonic_waveform_current_content_label_4, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_content_label_4, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_phase_c_current_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_phase_c_current_label, "C流");
        lv_obj_set_x(harmonic_waveform_current_phase_c_current_label, 226);
        lv_obj_set_y(harmonic_waveform_current_phase_c_current_label, 43);
        lv_obj_set_width(harmonic_waveform_current_phase_c_current_label, 38);
        lv_obj_set_name(harmonic_waveform_current_phase_c_current_label, "harmonic_waveform_current_phase_c_current_label");
        lv_obj_add_style(harmonic_waveform_current_phase_c_current_label, &me106_text_14_purple, 0);
        lv_obj_bind_style(harmonic_waveform_current_phase_c_current_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_phase_c_current_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_a_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_a_label, "A");
        lv_obj_set_x(harmonic_waveform_current_a_label, 18);
        lv_obj_set_y(harmonic_waveform_current_a_label, 70);
        lv_obj_set_width(harmonic_waveform_current_a_label, 18);
        lv_obj_set_name(harmonic_waveform_current_a_label, "harmonic_waveform_current_a_label");
        lv_obj_add_style(harmonic_waveform_current_a_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(harmonic_waveform_current_a_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_a_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_1_0_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_1_0_label, "1.0");
        lv_obj_set_x(harmonic_waveform_current_1_0_label, 8);
        lv_obj_set_y(harmonic_waveform_current_1_0_label, 86);
        lv_obj_set_width(harmonic_waveform_current_1_0_label, 30);
        lv_obj_set_name(harmonic_waveform_current_1_0_label, "harmonic_waveform_current_1_0_label");
        lv_obj_add_style(harmonic_waveform_current_1_0_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_1_0_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_1_0_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_tick_0_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_0_label, "0");
        lv_obj_set_x(harmonic_waveform_current_tick_0_label, 24);
        lv_obj_set_y(harmonic_waveform_current_tick_0_label, 128);
        lv_obj_set_width(harmonic_waveform_current_tick_0_label, 16);
        lv_obj_set_name(harmonic_waveform_current_tick_0_label, "harmonic_waveform_current_tick_0_label");
        lv_obj_add_style(harmonic_waveform_current_tick_0_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_0_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_0_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_1_0_label_2 = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_1_0_label_2, "-1.0");
        lv_obj_set_x(harmonic_waveform_current_1_0_label_2, 4);
        lv_obj_set_y(harmonic_waveform_current_1_0_label_2, 170);
        lv_obj_set_width(harmonic_waveform_current_1_0_label_2, 34);
        lv_obj_set_name(harmonic_waveform_current_1_0_label_2, "harmonic_waveform_current_1_0_label_2");
        lv_obj_add_style(harmonic_waveform_current_1_0_label_2, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_1_0_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_1_0_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * waveform_current_chart = lv_chart_create(page_content);
        lv_obj_set_name(waveform_current_chart, "waveform_current_chart");
        lv_obj_set_x(waveform_current_chart, 40);
        lv_obj_set_y(waveform_current_chart, 78);
        lv_obj_set_width(waveform_current_chart, 240);
        lv_obj_set_height(waveform_current_chart, 108);
        lv_chart_set_type(waveform_current_chart, LV_CHART_TYPE_LINE);
        lv_chart_set_point_count(waveform_current_chart, 256);
        lv_chart_set_hor_div_line_count(waveform_current_chart, 5);
        lv_chart_set_ver_div_line_count(waveform_current_chart, 8);
        lv_obj_set_style_bg_opa(waveform_current_chart, 0, 0);
        lv_obj_set_style_border_width(waveform_current_chart, 0, 0);
        lv_obj_set_style_pad_all(waveform_current_chart, 0, 0);
        lv_obj_set_style_line_opa(waveform_current_chart, 180, 0);
        lv_obj_add_style(waveform_current_chart, &me106_theme_dark_chart, 0);
        lv_obj_bind_style(waveform_current_chart, &me106_theme_light_chart, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_current_chart, &me106_theme_alarm_chart, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(waveform_current_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_add_style(waveform_current_chart, &me106_chart_point_hidden, LV_PART_INDICATOR);
        lv_obj_add_style(waveform_current_chart, &me106_chart_wave_line, LV_PART_ITEMS);
        lv_chart_set_axis_min_value(waveform_current_chart, LV_CHART_AXIS_PRIMARY_Y, -120);
        lv_chart_set_axis_max_value(waveform_current_chart, LV_CHART_AXIS_PRIMARY_Y, 120);
        lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x52A3FF), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_current_chart_values_0[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_current_chart, lv_chart_series_0, waveform_current_chart_values_0, 256);
        lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x20D3D5), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_current_chart_values_1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_current_chart, lv_chart_series_1, waveform_current_chart_values_1, 256);
        lv_chart_series_t * lv_chart_series_2 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x8D5CFF), LV_CHART_AXIS_PRIMARY_Y);
        static const int32_t waveform_current_chart_values_2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        lv_chart_set_series_values(waveform_current_chart, lv_chart_series_2, waveform_current_chart_values_2, 256);

        lv_obj_t * harmonic_waveform_current_tick_1_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_1_label, "1");
        lv_obj_set_x(harmonic_waveform_current_tick_1_label, 40);
        lv_obj_set_y(harmonic_waveform_current_tick_1_label, 188);
        lv_obj_set_width(harmonic_waveform_current_tick_1_label, 18);
        lv_obj_set_name(harmonic_waveform_current_tick_1_label, "harmonic_waveform_current_tick_1_label");
        lv_obj_add_style(harmonic_waveform_current_tick_1_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_1_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_1_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_tick_64_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_64_label, "64");
        lv_obj_set_x(harmonic_waveform_current_tick_64_label, 95);
        lv_obj_set_y(harmonic_waveform_current_tick_64_label, 188);
        lv_obj_set_width(harmonic_waveform_current_tick_64_label, 24);
        lv_obj_set_name(harmonic_waveform_current_tick_64_label, "harmonic_waveform_current_tick_64_label");
        lv_obj_add_style(harmonic_waveform_current_tick_64_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_64_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_64_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_tick_128_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_128_label, "128");
        lv_obj_set_x(harmonic_waveform_current_tick_128_label, 151);
        lv_obj_set_y(harmonic_waveform_current_tick_128_label, 188);
        lv_obj_set_width(harmonic_waveform_current_tick_128_label, 32);
        lv_obj_set_name(harmonic_waveform_current_tick_128_label, "harmonic_waveform_current_tick_128_label");
        lv_obj_add_style(harmonic_waveform_current_tick_128_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_128_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_128_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_tick_192_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_192_label, "192");
        lv_obj_set_x(harmonic_waveform_current_tick_192_label, 210);
        lv_obj_set_y(harmonic_waveform_current_tick_192_label, 188);
        lv_obj_set_width(harmonic_waveform_current_tick_192_label, 32);
        lv_obj_set_name(harmonic_waveform_current_tick_192_label, "harmonic_waveform_current_tick_192_label");
        lv_obj_add_style(harmonic_waveform_current_tick_192_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_192_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_192_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_tick_256_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_tick_256_label, "256点");
        lv_obj_set_x(harmonic_waveform_current_tick_256_label, 257);
        lv_obj_set_y(harmonic_waveform_current_tick_256_label, 188);
        lv_obj_set_width(harmonic_waveform_current_tick_256_label, 48);
        lv_obj_set_name(harmonic_waveform_current_tick_256_label, "harmonic_waveform_current_tick_256_label");
        lv_obj_add_style(harmonic_waveform_current_tick_256_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(harmonic_waveform_current_tick_256_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_tick_256_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * harmonic_waveform_current_loading_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_loading_label, "加载中");
        lv_obj_set_x(harmonic_waveform_current_loading_label, 70);
        lv_obj_set_y(harmonic_waveform_current_loading_label, 121);
        lv_obj_set_width(harmonic_waveform_current_loading_label, 180);
        lv_obj_set_name(harmonic_waveform_current_loading_label, "harmonic_waveform_current_loading_label");
        lv_obj_add_style(harmonic_waveform_current_loading_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_current_loading_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_loading_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_current_loading_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * harmonic_waveform_current_no_harmonic_data_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_no_harmonic_data_label, "暂无谐波数据");
        lv_obj_set_x(harmonic_waveform_current_no_harmonic_data_label, 70);
        lv_obj_set_y(harmonic_waveform_current_no_harmonic_data_label, 121);
        lv_obj_set_width(harmonic_waveform_current_no_harmonic_data_label, 180);
        lv_obj_set_name(harmonic_waveform_current_no_harmonic_data_label, "harmonic_waveform_current_no_harmonic_data_label");
        lv_obj_add_style(harmonic_waveform_current_no_harmonic_data_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_current_no_harmonic_data_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_no_harmonic_data_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_current_no_harmonic_data_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * harmonic_waveform_current_data_error_label = lv_label_create(page_content);
        lv_label_set_text(harmonic_waveform_current_data_error_label, "数据异常");
        lv_obj_set_x(harmonic_waveform_current_data_error_label, 70);
        lv_obj_set_y(harmonic_waveform_current_data_error_label, 121);
        lv_obj_set_width(harmonic_waveform_current_data_error_label, 180);
        lv_obj_set_name(harmonic_waveform_current_data_error_label, "harmonic_waveform_current_data_error_label");
        lv_obj_add_style(harmonic_waveform_current_data_error_label, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(harmonic_waveform_current_data_error_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(harmonic_waveform_current_data_error_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(harmonic_waveform_current_data_error_label, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * screen_harmonic_waveform_current_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_harmonic_waveform_current_bottom_bar, "screen_harmonic_waveform_current_bottom_bar");
        lv_obj_set_x(screen_harmonic_waveform_current_bottom_bar, 0);
        lv_obj_set_y(screen_harmonic_waveform_current_bottom_bar, 207);
        lv_obj_set_width(screen_harmonic_waveform_current_bottom_bar, 320);
        lv_obj_set_height(screen_harmonic_waveform_current_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_harmonic_waveform_current_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_harmonic_waveform_current_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_harmonic_waveform_current_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_harmonic_waveform_current_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_harmonic_waveform_current_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_harmonic_waveform_current_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * waveform_current_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_current_btn_return, "waveform_current_btn_return");
        lv_obj_set_x(waveform_current_btn_return, 0);
        lv_obj_set_y(waveform_current_btn_return, 207);
        lv_obj_set_width(waveform_current_btn_return, 79);
        lv_obj_set_height(waveform_current_btn_return, 32);
        lv_obj_add_style(waveform_current_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_current_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_current_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(waveform_current_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(waveform_current_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_current_btn_next_page = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_current_btn_next_page, "waveform_current_btn_next_page");
        lv_obj_set_x(waveform_current_btn_next_page, 80);
        lv_obj_set_y(waveform_current_btn_next_page, 207);
        lv_obj_set_width(waveform_current_btn_next_page, 79);
        lv_obj_set_height(waveform_current_btn_next_page, 32);
        lv_obj_add_style(waveform_current_btn_next_page, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_current_btn_next_page, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_current_btn_next_page, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(waveform_current_btn_next_page);
        lv_image_set_src(lv_image_1, meter_arrow_down);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_obj_add_screen_create_event(waveform_current_btn_next_page, LV_EVENT_CLICKED, screen_harmonic_waveform_phase_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_current_btn_prev_page = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_current_btn_prev_page, "waveform_current_btn_prev_page");
        lv_obj_set_x(waveform_current_btn_prev_page, 160);
        lv_obj_set_y(waveform_current_btn_prev_page, 207);
        lv_obj_set_width(waveform_current_btn_prev_page, 79);
        lv_obj_set_height(waveform_current_btn_prev_page, 32);
        lv_obj_add_style(waveform_current_btn_prev_page, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_current_btn_prev_page, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_current_btn_prev_page, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(waveform_current_btn_prev_page);
        lv_image_set_src(lv_image_2, meter_arrow_up);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);

        lv_obj_add_screen_create_event(waveform_current_btn_prev_page, LV_EVENT_CLICKED, screen_harmonic_waveform_voltage_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * waveform_current_btn_idle = lv_button_create(lv_obj_0);
        lv_obj_set_name(waveform_current_btn_idle, "waveform_current_btn_idle");
        lv_obj_set_x(waveform_current_btn_idle, 240);
        lv_obj_set_y(waveform_current_btn_idle, 207);
        lv_obj_set_width(waveform_current_btn_idle, 80);
        lv_obj_set_height(waveform_current_btn_idle, 32);
        lv_obj_add_style(waveform_current_btn_idle, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(waveform_current_btn_idle, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(waveform_current_btn_idle, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

