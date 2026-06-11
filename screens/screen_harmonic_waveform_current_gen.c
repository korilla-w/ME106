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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_harmonic_waveform_current_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

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
    lv_obj_t * lv_label_0 = lv_label_create(page_content);
    lv_label_set_text(lv_label_0, "总流");
    lv_obj_set_x(lv_label_0, 24);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 60);
    lv_obj_add_style(lv_label_0, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_set_text(lv_label_1, "波形曲线");
    lv_obj_set_x(lv_label_1, 170);
    lv_obj_set_y(lv_label_1, 17);
    lv_obj_set_width(lv_label_1, 126);
    lv_obj_add_style(lv_label_1, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_set_text(lv_label_2, "幅值(V/A)");
    lv_obj_set_x(lv_label_2, 24);
    lv_obj_set_y(lv_label_2, 58);
    lv_obj_set_width(lv_label_2, 90);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "●");
    lv_obj_set_x(lv_label_3, 113);
    lv_obj_set_y(lv_label_3, 43);
    lv_obj_set_width(lv_label_3, 12);
    lv_obj_add_style(lv_label_3, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "A流");
    lv_obj_set_x(lv_label_4, 126);
    lv_obj_set_y(lv_label_4, 43);
    lv_obj_set_width(lv_label_4, 38);
    lv_obj_add_style(lv_label_4, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_set_text(lv_label_5, "●");
    lv_obj_set_x(lv_label_5, 163);
    lv_obj_set_y(lv_label_5, 43);
    lv_obj_set_width(lv_label_5, 12);
    lv_obj_add_style(lv_label_5, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "B流");
    lv_obj_set_x(lv_label_6, 176);
    lv_obj_set_y(lv_label_6, 43);
    lv_obj_set_width(lv_label_6, 38);
    lv_obj_add_style(lv_label_6, &me106_text_14_cyan, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "●");
    lv_obj_set_x(lv_label_7, 213);
    lv_obj_set_y(lv_label_7, 43);
    lv_obj_set_width(lv_label_7, 12);
    lv_obj_add_style(lv_label_7, &me106_text_14_purple, 0);
    
    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_set_text(lv_label_8, "C流");
    lv_obj_set_x(lv_label_8, 226);
    lv_obj_set_y(lv_label_8, 43);
    lv_obj_set_width(lv_label_8, 38);
    lv_obj_add_style(lv_label_8, &me106_text_14_purple, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "A");
    lv_obj_set_x(lv_label_9, 18);
    lv_obj_set_y(lv_label_9, 70);
    lv_obj_set_width(lv_label_9, 18);
    lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_10 = lv_label_create(page_content);
    lv_label_set_text(lv_label_10, "1.0");
    lv_obj_set_x(lv_label_10, 8);
    lv_obj_set_y(lv_label_10, 86);
    lv_obj_set_width(lv_label_10, 30);
    lv_obj_add_style(lv_label_10, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(page_content);
    lv_label_set_text(lv_label_11, "0");
    lv_obj_set_x(lv_label_11, 24);
    lv_obj_set_y(lv_label_11, 128);
    lv_obj_set_width(lv_label_11, 16);
    lv_obj_add_style(lv_label_11, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_12 = lv_label_create(page_content);
    lv_label_set_text(lv_label_12, "-1.0");
    lv_obj_set_x(lv_label_12, 4);
    lv_obj_set_y(lv_label_12, 170);
    lv_obj_set_width(lv_label_12, 34);
    lv_obj_add_style(lv_label_12, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
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
    lv_obj_set_style_line_color(waveform_current_chart, lv_color_hex(0x303030), 0);
    lv_obj_set_style_line_opa(waveform_current_chart, 180, 0);
    lv_obj_bind_flag_if_not_eq(waveform_current_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_style(waveform_current_chart, &me106_chart_point_hidden, LV_PART_INDICATOR);
    lv_obj_add_style(waveform_current_chart, &me106_chart_wave_line, LV_PART_ITEMS);
    lv_chart_set_axis_min_value(waveform_current_chart, LV_CHART_AXIS_PRIMARY_Y, -120);
    lv_chart_set_axis_max_value(waveform_current_chart, LV_CHART_AXIS_PRIMARY_Y, 120);
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x52A3FF), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_current_chart_values_0[] = {-22, -19, -16, -14, -11, -8, -5, -2, 1, 3, 5, 8, 12, 15, 19, 23, 28, 35, 42, 50, 58, 65, 72, 78, 83, 87, 90, 92, 93, 93, 93, 91, 89, 87, 85, 83, 80, 78, 78, 79, 82, 84, 87, 89, 90, 91, 91, 90, 88, 86, 82, 76, 70, 63, 56, 50, 45, 40, 35, 32, 29, 27, 25, 23, 22, 19, 17, 14, 11, 8, 4, 1, -1, -3, -6, -9, -12, -16, -19, -23, -28, -35, -43, -51, -58, -66, -72, -78, -82, -86, -90, -92, -93, -93, -93, -91, -89, -87, -85, -83, -80, -78, -77, -79, -81, -84, -86, -88, -90, -91, -90, -89, -88, -85, -81, -76, -69, -63, -56, -50, -44, -39, -35, -32, -30, -27, -25, -24, -21, -19, -17, -15, -11, -8, -5, -2, 1, 3, 5, 7, 11, 15, 19, 23, 28, 35, 42, 50, 58, 66, 72, 77, 82, 86, 89, 91, 92, 93, 92, 90, 88, 87, 85, 83, 81, 78, 78, 79, 81, 83, 86, 89, 91, 92, 92, 90, 87, 84, 80, 76, 71, 64, 57, 51, 45, 38, 34, 31, 30, 28, 26, 24, 22, 20, 17, 14, 11, 8, 5, 2, -1, -3, -5, -8, -12, -15, -19, -23, -28, -35, -42, -50, -57, -65, -72, -77, -82, -86, -89, -92, -93, -93, -92, -91, -89, -87, -86, -83, -81, -78, -78, -78, -81, -83, -86, -89, -91, -92, -91, -90, -87, -84, -80, -76, -70, -64, -57, -51, -44, -38, -34, -31, -30, -28, -26, -24};
    lv_chart_set_series_values(waveform_current_chart, lv_chart_series_0, waveform_current_chart_values_0, 256);
    lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x20D3D5), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_current_chart_values_1[] = {-65, -72, -77, -82, -86, -89, -92, -93, -93, -91, -89, -87, -85, -83, -81, -78, -77, -77, -78, -82, -86, -90, -93, -95, -96, -95, -93, -90, -86, -81, -76, -71, -64, -58, -52, -45, -40, -36, -35, -34, -32, -30, -27, -23, -20, -17, -15, -13, -10, -7, -4, 0, 4, 7, 10, 13, 16, 19, 24, 30, 37, 44, 52, 59, 66, 72, 77, 82, 87, 90, 93, 94, 93, 92, 89, 87, 85, 83, 81, 78, 77, 77, 78, 81, 86, 90, 93, 95, 95, 95, 93, 90, 86, 82, 77, 71, 64, 58, 52, 45, 40, 36, 35, 34, 32, 29, 26, 23, 20, 17, 15, 13, 10, 7, 3, 0, -4, -7, -10, -13, -16, -19, -23, -29, -36, -43, -51, -58, -97, -95, -92, -89, -84, -79, -73, -67, -60, -53, -47, -42, -38, -35, -34, -32, -29, -26, -23, -21, -18, -15, -12, -9, -6, -2, 1, 4, 7, 10, 14, 17, 20, 24, 30, 37, 44, 52, 60, 67, 74, 79, 84, 88, 91, 94, 96, 96, 95, 93, 90, 87, 85, 83, 81, 80, 79, 80, 83, 87, 92, 95, 96, 97, 97, 96, 93, 89, 85, 79, 74, 67, 61, 54, 48, 42, 38, 36, 34, 32, 29, 26, 24, 21, 18, 15, 12, 9, 6, 2, -1, -4, -7, -11, -14, -18, -21, -25, -31, -38, -44, -52, -60, -67, -74, -79, -84, -88, -91, -94, -96, -97, -96, -93, -91, -89, -87, -85, -82, -80, -80, -80, -83, -87, -91, -95, -97, -98};
    lv_chart_set_series_values(waveform_current_chart, lv_chart_series_1, waveform_current_chart_values_1, 256);
    lv_chart_series_t * lv_chart_series_2 = lv_chart_add_series(waveform_current_chart, lv_color_hex(0x8D5CFF), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_current_chart_values_2[] = {-2, -3, -5, -6, -7, -8, -10, -12, -15, -18, -22, -26, -35, -48, -60, -66, -69, -74, -78, -78, -78, -78, -77, -74, -70, -66, -61, -55, -50, -46, -44, -41, -37, -34, -33, -39, -48, -55, -59, -63, -64, -61, -58, -55, -52, -49, -46, -42, -36, -29, -23, -19, -15, -12, -11, -12, -16, -17, -12, -6, -4, -2, -1, 0, 2, 2, 4, 5, 7, 9, 10, 12, 15, 18, 21, 25, 34, 47, 59, 65, 68, 73, 77, 78, 78, 78, 77, 75, 71, 65, 60, 55, 50, 46, 44, 42, 38, 34, 33, 38, 47, 54, 59, 62, 63, 62, 59, 56, 52, 49, 47, 43, 38, 31, 24, 19, 15, 12, 11, 12, 16, 17, 12, 7, 4, 2, 0, -1, -2, -3, -4, -5, -6, -8, -10, -13, -16, -19, -22, -25, -33, -46, -58, -65, -69, -74, -78, -79, -78, -78, -77, -75, -71, -66, -61, -55, -50, -46, -44, -41, -38, -34, -33, -37, -46, -52, -57, -62, -65, -64, -61, -57, -51, -46, -44, -41, -38, -32, -25, -18, -13, -11, -11, -13, -17, -18, -12, -5, -3, -1, -1, -1, 1, 2, 5, 7, 7, 8, 9, 12, 15, 19, 22, 25, 33, 45, 58, 65, 69, 73, 77, 79, 78, 78, 77, 74, 71, 67, 61, 55, 50, 47, 44, 42, 38, 34, 33, 38, 47, 53, 57, 62, 65, 64, 61, 57, 52, 48, 45, 42, 38, 32, 25, 20, 16, 12, 10, 12, 16, 17, 12, 6, 4, 3, 1, -1};
    lv_chart_set_series_values(waveform_current_chart, lv_chart_series_2, waveform_current_chart_values_2, 256);
    
    lv_obj_t * lv_label_13 = lv_label_create(page_content);
    lv_label_set_text(lv_label_13, "1");
    lv_obj_set_x(lv_label_13, 40);
    lv_obj_set_y(lv_label_13, 188);
    lv_obj_set_width(lv_label_13, 18);
    lv_obj_add_style(lv_label_13, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_13, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_13, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_14 = lv_label_create(page_content);
    lv_label_set_text(lv_label_14, "64");
    lv_obj_set_x(lv_label_14, 95);
    lv_obj_set_y(lv_label_14, 188);
    lv_obj_set_width(lv_label_14, 24);
    lv_obj_add_style(lv_label_14, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_15 = lv_label_create(page_content);
    lv_label_set_text(lv_label_15, "128");
    lv_obj_set_x(lv_label_15, 151);
    lv_obj_set_y(lv_label_15, 188);
    lv_obj_set_width(lv_label_15, 32);
    lv_obj_add_style(lv_label_15, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_15, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_15, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_16 = lv_label_create(page_content);
    lv_label_set_text(lv_label_16, "192");
    lv_obj_set_x(lv_label_16, 210);
    lv_obj_set_y(lv_label_16, 188);
    lv_obj_set_width(lv_label_16, 32);
    lv_obj_add_style(lv_label_16, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_16, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_16, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_17 = lv_label_create(page_content);
    lv_label_set_text(lv_label_17, "256点");
    lv_obj_set_x(lv_label_17, 257);
    lv_obj_set_y(lv_label_17, 188);
    lv_obj_set_width(lv_label_17, 48);
    lv_obj_add_style(lv_label_17, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_17, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_17, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_18 = lv_label_create(page_content);
    lv_label_set_text(lv_label_18, "加载中");
    lv_obj_set_x(lv_label_18, 70);
    lv_obj_set_y(lv_label_18, 121);
    lv_obj_set_width(lv_label_18, 180);
    lv_obj_add_style(lv_label_18, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_18, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_18, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_18, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_19 = lv_label_create(page_content);
    lv_label_set_text(lv_label_19, "暂无谐波数据");
    lv_obj_set_x(lv_label_19, 70);
    lv_obj_set_y(lv_label_19, 121);
    lv_obj_set_width(lv_label_19, 180);
    lv_obj_add_style(lv_label_19, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_19, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_19, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_19, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_20 = lv_label_create(page_content);
    lv_label_set_text(lv_label_20, "数据异常");
    lv_obj_set_x(lv_label_20, 70);
    lv_obj_set_y(lv_label_20, 121);
    lv_obj_set_width(lv_label_20, 180);
    lv_obj_add_style(lv_label_20, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_20, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_20, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_20, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 3);
    
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
    
    lv_obj_add_screen_create_event(waveform_current_btn_next_page, LV_EVENT_CLICKED, screen_harmonic_waveform_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
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
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_HARMONIC_WAVEFORM_CURRENT_TIMELINE_CNT);
    at_array[SCREEN_HARMONIC_WAVEFORM_CURRENT_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_harmonic_waveform_current_get_timeline(lv_obj_0, SCREEN_HARMONIC_WAVEFORM_CURRENT_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_harmonic_waveform_current_get_timeline(lv_obj_t * obj, screen_harmonic_waveform_current_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_HARMONIC_WAVEFORM_CURRENT_TIMELINE_CNT) {
        LV_LOG_WARN("screen_harmonic_waveform_current has no timeline with %d ID", timeline_id);
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
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "page_content"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "page_content"));
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
    for(i = 0; i < _SCREEN_HARMONIC_WAVEFORM_CURRENT_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

