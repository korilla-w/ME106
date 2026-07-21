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


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

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
    lv_obj_t * lv_label_0 = lv_label_create(page_content);
    lv_label_set_text(lv_label_0, "总压");
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
    lv_obj_add_style(lv_label_3, &me106_text_14_yellow, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "A压");
    lv_obj_set_x(lv_label_4, 126);
    lv_obj_set_y(lv_label_4, 43);
    lv_obj_set_width(lv_label_4, 38);
    lv_obj_add_style(lv_label_4, &me106_text_14_yellow, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_set_text(lv_label_5, "●");
    lv_obj_set_x(lv_label_5, 163);
    lv_obj_set_y(lv_label_5, 43);
    lv_obj_set_width(lv_label_5, 12);
    lv_obj_add_style(lv_label_5, &me106_text_14_green, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "B压");
    lv_obj_set_x(lv_label_6, 176);
    lv_obj_set_y(lv_label_6, 43);
    lv_obj_set_width(lv_label_6, 38);
    lv_obj_add_style(lv_label_6, &me106_text_14_green, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "●");
    lv_obj_set_x(lv_label_7, 213);
    lv_obj_set_y(lv_label_7, 43);
    lv_obj_set_width(lv_label_7, 12);
    lv_obj_add_style(lv_label_7, &me106_text_14_red, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_set_text(lv_label_8, "C压");
    lv_obj_set_x(lv_label_8, 226);
    lv_obj_set_y(lv_label_8, 43);
    lv_obj_set_width(lv_label_8, 38);
    lv_obj_add_style(lv_label_8, &me106_text_14_red, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "V");
    lv_obj_set_x(lv_label_9, 18);
    lv_obj_set_y(lv_label_9, 70);
    lv_obj_set_width(lv_label_9, 18);
    lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

    lv_obj_t * lv_label_10 = lv_label_create(page_content);
    lv_label_set_text(lv_label_10, "320");
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
    lv_label_set_text(lv_label_12, "-320");
    lv_obj_set_x(lv_label_12, 3);
    lv_obj_set_y(lv_label_12, 170);
    lv_obj_set_width(lv_label_12, 36);
    lv_obj_add_style(lv_label_12, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

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
    lv_obj_set_style_line_color(waveform_voltage_chart, lv_color_hex(0x303030), 0);
    lv_obj_set_style_line_opa(waveform_voltage_chart, 180, 0);
    lv_obj_bind_flag_if_not_eq(waveform_voltage_chart, &meter_harmonic_data_state, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_style(waveform_voltage_chart, &me106_chart_point_hidden, LV_PART_INDICATOR);
    lv_obj_add_style(waveform_voltage_chart, &me106_chart_wave_line, LV_PART_ITEMS);
    lv_chart_set_axis_min_value(waveform_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, -360);
    lv_chart_set_axis_max_value(waveform_voltage_chart, LV_CHART_AXIS_PRIMARY_Y, 360);
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0xFFEB3B), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_voltage_chart_values_0[] = {299, 290, 282, 273, 265, 256, 247, 237, 227, 217, 207, 197, 184, 170, 156, 140, 125, 109, 94, 80, 66, 50, 34, 18, 3, -11, -26, -41, -57, -73, -90, -105, -120, -134, -148, -163, -178, -191, -203, -214, -224, -234, -243, -252, -260, -268, -275, -281, -288, -294, -300, -307, -312, -316, -319, -321, -322, -322, -322, -322, -321, -317, -312, -306, -299, -291, -282, -274, -265, -256, -247, -237, -227, -217, -207, -197, -184, -171, -156, -140, -125, -109, -94, -80, -67, -51, -35, -19, -4, 11, 26, 41, 57, 73, 89, 105, 120, 134, 148, 163, 177, 191, 203, 214, 224, 234, 243, 252, 260, 268, 275, 281, 288, 294, 300, 306, 312, 316, 319, 321, 322, 323, 323, 322, 321, 317, 312, 306, 299, 291, 282, 273, 265, 257, 247, 237, 227, 217, 207, 196, 184, 170, 155, 141, 125, 111, 96, 81, 67, 51, 34, 18, 3, -11, -25, -40, -56, -72, -89, -105, -120, -135, -149, -164, -178, -191, -202, -213, -223, -233, -243, -252, -260, -268, -275, -281, -288, -294, -300, -306, -312, -316, -319, -321, -322, -322, -322, -322, -321, -317, -312, -306, -299, -291, -282, -273, -265, -257, -247, -238, -228, -218, -207, -196, -184, -170, -155, -141, -126, -111, -96, -81, -67, -51, -34, -18, -3, 11, 26, 41, 56, 73, 89, 105, 121, 135, 149, 164, 178, 191, 202, 213, 223, 233, 243, 252, 260, 268, 274, 281, 287, 294, 300, 306, 312, 316, 319, 321, 322, 322, 322, 322, 321, 317, 312, 306};
    lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_0, waveform_voltage_chart_values_0, 256);
    lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0x32E67A), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_voltage_chart_values_1[] = {-44, -27, -11, 4, 18, 33, 49, 64, 80, 96, 111, 125, 139, 153, 168, 182, 196, 207, 217, 227, 237, 246, 254, 262, 269, 276, 282, 288, 295, 302, 308, 314, 319, 322, 323, 323, 324, 323, 322, 320, 317, 310, 302, 294, 286, 278, 269, 261, 253, 244, 234, 224, 214, 204, 192, 180, 166, 151, 136, 120, 104, 89, 74, 60, 44, 28, 12, -2, -17, -33, -48, -64, -80, -95, -110, -125, -139, -154, -168, -183, -196, -207, -217, -227, -237, -246, -254, -262, -269, -276, -282, -289, -295, -302, -308, -314, -319, -322, -323, -323, -324, -324, -323, -321, -317, -310, -302, -294, -286, -278, -270, -261, -253, -244, -235, -225, -214, -204, -193, -180, -166, -152, -136, -120, -104, -88, -74, -60, -44, -28, -12, 3, 18, 33, 48, 64, 80, 95, 110, 126, 140, 155, 169, 182, 195, 206, 216, 226, 236, 246, 254, 263, 270, 276, 282, 288, 295, 301, 308, 314, 319, 322, 323, 323, 324, 324, 323, 320, 317, 310, 302, 294, 286, 278, 269, 261, 253, 244, 235, 225, 215, 204, 193, 180, 166, 151, 136, 120, 104, 89, 75, 60, 44, 28, 12, -3, -17, -33, -48, -63, -79, -94, -110, -126, -140, -155, -169, -182, -195, -206, -216, -226, -237, -246, -255, -263, -269, -276, -282, -288, -295, -302, -308, -314, -319, -322, -323, -323, -324, -324, -323, -320, -317, -310, -302, -294, -286, -278, -270, -262, -253, -244, -235, -225, -215, -204, -193, -180, -166, -151, -136, -120, -104, -89, -75, -60};
    lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_1, waveform_voltage_chart_values_1, 256);
    lv_chart_series_t * lv_chart_series_2 = lv_chart_add_series(waveform_voltage_chart, lv_color_hex(0xE33C64), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t waveform_voltage_chart_values_2[] = {-249, -257, -265, -273, -280, -287, -294, -300, -307, -313, -318, -321, -324, -324, -325, -325, -325, -323, -321, -316, -310, -302, -294, -285, -277, -269, -261, -253, -243, -232, -222, -212, -201, -190, -176, -162, -147, -131, -115, -100, -85, -72, -57, -41, -24, -7, 9, 24, 39, 54, 70, 86, 101, 116, 130, 144, 158, 172, 186, 199, 210, 220, 230, 240, 249, 257, 264, 272, 279, 286, 293, 300, 307, 313, 318, 321, 323, 324, 325, 325, 324, 323, 321, 316, 309, 302, 294, 285, 277, 270, 261, 253, 243, 232, 222, 212, 202, 190, 176, 162, 147, 131, 116, 100, 85, 72, 57, 41, 24, 8, -8, -23, -38, -54, -70, -86, -101, -116, -130, -144, -158, -172, -186, -199, -210, -220, -230, -240, -249, -257, -265, -272, -279, -286, -293, -300, -306, -312, -318, -322, -324, -325, -325, -325, -324, -323, -321, -317, -310, -302, -294, -284, -277, -269, -262, -253, -244, -233, -222, -212, -201, -190, -176, -162, -147, -132, -116, -101, -86, -72, -57, -40, -24, -8, 8, 23, 38, 54, 70, 86, 101, 115, 130, 144, 158, 172, 186, 199, 210, 220, 230, 240, 249, 257, 265, 272, 279, 286, 293, 300, 306, 312, 318, 322, 324, 324, 325, 325, 325, 323, 321, 317, 310, 302, 293, 284, 277, 270, 262, 253, 243, 233, 222, 212, 201, 190, 176, 162, 147, 132, 116, 101, 86, 72, 57, 41, 24, 8, -7, -22, -38, -54, -70, -86, -101, -116, -130, -144, -158, -172, -186, -198, -210, -220, -230, -240};
    lv_chart_set_series_values(waveform_voltage_chart, lv_chart_series_2, waveform_voltage_chart_values_2, 256);

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

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

