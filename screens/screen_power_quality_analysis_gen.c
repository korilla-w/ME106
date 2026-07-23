/**
 * @file screen_power_quality_analysis_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_power_quality_analysis_gen.h"
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

lv_obj_t * screen_power_quality_analysis_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_power_quality_analysis_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_power_quality_page_index, LV_EVENT_SCREEN_LOADED, 0);
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
        lv_obj_t * power_quality_pages = lv_obj_create(page_content);
        lv_obj_set_name(power_quality_pages, "power_quality_pages");
        lv_obj_set_x(power_quality_pages, 0);
        lv_obj_set_y(power_quality_pages, 0);
        lv_obj_set_width(power_quality_pages, 320);
        lv_obj_set_height(power_quality_pages, 624);
        lv_obj_set_style_bg_opa(power_quality_pages, 0, 0);
        lv_obj_set_style_border_width(power_quality_pages, 0, 0);
        lv_obj_set_style_pad_all(power_quality_pages, 0, 0);
        lv_obj_set_flag(power_quality_pages, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_style(power_quality_pages, &me106_move_y_n208, 0, &meter_power_quality_page_index, 1);
        lv_obj_bind_style(power_quality_pages, &me106_move_y_n416, 0, &meter_power_quality_page_index, 2);
        lv_obj_t * power_quality_summary_page = lv_obj_create(power_quality_pages);
        lv_obj_set_name(power_quality_summary_page, "power_quality_summary_page");
        lv_obj_set_x(power_quality_summary_page, 0);
        lv_obj_set_y(power_quality_summary_page, 0);
        lv_obj_set_width(power_quality_summary_page, 320);
        lv_obj_set_height(power_quality_summary_page, 207);
        lv_obj_set_style_bg_opa(power_quality_summary_page, 0, 0);
        lv_obj_set_style_border_width(power_quality_summary_page, 0, 0);
        lv_obj_set_style_pad_all(power_quality_summary_page, 0, 0);
        lv_obj_set_flag(power_quality_summary_page, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_0 = lv_label_create(power_quality_summary_page);
        lv_label_set_text(lv_label_0, "电能质量分析");
        lv_obj_set_x(lv_label_0, 124);
        lv_obj_set_y(lv_label_0, 15);
        lv_obj_set_width(lv_label_0, 172);
        lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_1 = lv_label_create(power_quality_summary_page);
        lv_label_set_text(lv_label_1, "质量总览");
        lv_obj_set_x(lv_label_1, 24);
        lv_obj_set_y(lv_label_1, 20);
        lv_obj_set_width(lv_label_1, 140);
        lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_score_panel = lv_obj_create(power_quality_summary_page);
        lv_obj_set_name(power_quality_score_panel, "power_quality_score_panel");
        lv_obj_set_x(power_quality_score_panel, 22);
        lv_obj_set_y(power_quality_score_panel, 48);
        lv_obj_set_width(power_quality_score_panel, 276);
        lv_obj_set_height(power_quality_score_panel, 72);
        lv_obj_set_style_pad_all(power_quality_score_panel, 0, 0);
        lv_obj_set_flag(power_quality_score_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_score_panel, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(power_quality_score_panel, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_score_panel, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(power_quality_score_panel);
        lv_image_set_src(lv_image_0, meter_icon_electric_energy);
        lv_obj_set_x(lv_image_0, 14);
        lv_obj_set_y(lv_image_0, 16);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 260, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 260, 0);
        lv_obj_add_style(lv_image_0, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_0, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_0, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_2 = lv_label_create(power_quality_score_panel);
        lv_label_set_text(lv_label_2, "正常");
        lv_obj_set_x(lv_label_2, 52);
        lv_obj_set_y(lv_label_2, 13);
        lv_obj_set_width(lv_label_2, 96);
        lv_obj_add_style(lv_label_2, &me106_text_36_white_center, 0);
        lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_2, &meter_power_quality_issue_count, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_3 = lv_label_create(power_quality_score_panel);
        lv_label_set_text(lv_label_3, "越限");
        lv_obj_set_x(lv_label_3, 52);
        lv_obj_set_y(lv_label_3, 13);
        lv_obj_set_width(lv_label_3, 96);
        lv_obj_add_style(lv_label_3, &me106_text_36_white_center, 0);
        lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_eq(lv_label_3, &meter_power_quality_issue_count, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_4 = lv_label_create(power_quality_score_panel);
        lv_label_set_text(lv_label_4, "正常时无越限记录");
        lv_obj_set_x(lv_label_4, 158);
        lv_obj_set_y(lv_label_4, 15);
        lv_obj_set_width(lv_label_4, 102);
        lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_WRAP);
        lv_obj_add_style(lv_label_4, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_4, &meter_power_quality_issue_count, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_5 = lv_label_create(power_quality_score_panel);
        lv_label_bind_text(lv_label_5, &meter_power_quality_issue_count, "%d");
        lv_obj_set_x(lv_label_5, 164);
        lv_obj_set_y(lv_label_5, 7);
        lv_obj_set_width(lv_label_5, 40);
        lv_obj_add_style(lv_label_5, &me106_text_36_white_center, 0);
        lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_eq(lv_label_5, &meter_power_quality_issue_count, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_6 = lv_label_create(power_quality_score_panel);
        lv_label_set_text(lv_label_6, "项需复核");
        lv_obj_set_x(lv_label_6, 207);
        lv_obj_set_y(lv_label_6, 24);
        lv_obj_set_width(lv_label_6, 62);
        lv_obj_add_style(lv_label_6, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_eq(lv_label_6, &meter_power_quality_issue_count, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * power_quality_trend_panel = lv_obj_create(power_quality_summary_page);
        lv_obj_set_name(power_quality_trend_panel, "power_quality_trend_panel");
        lv_obj_set_x(power_quality_trend_panel, 22);
        lv_obj_set_y(power_quality_trend_panel, 130);
        lv_obj_set_width(power_quality_trend_panel, 276);
        lv_obj_set_height(power_quality_trend_panel, 62);
        lv_obj_set_style_pad_all(power_quality_trend_panel, 0, 0);
        lv_obj_set_flag(power_quality_trend_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_trend_panel, &me106_panel_gray1f_r8, 0);
        lv_obj_bind_style(power_quality_trend_panel, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_trend_panel, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_label_7 = lv_label_create(power_quality_trend_panel);
        lv_label_set_text(lv_label_7, "电压");
        lv_obj_set_x(lv_label_7, 16);
        lv_obj_set_y(lv_label_7, 10);
        lv_obj_set_width(lv_label_7, 34);
        lv_obj_add_style(lv_label_7, &me106_text_16_yellow, 0);
        lv_obj_bind_style(lv_label_7, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_7, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_u_bar_track = lv_obj_create(power_quality_trend_panel);
        lv_obj_set_name(power_quality_u_bar_track, "power_quality_u_bar_track");
        lv_obj_set_x(power_quality_u_bar_track, 56);
        lv_obj_set_y(power_quality_u_bar_track, 17);
        lv_obj_set_width(power_quality_u_bar_track, 80);
        lv_obj_set_height(power_quality_u_bar_track, 8);
        lv_obj_set_style_radius(power_quality_u_bar_track, 4, 0);
        lv_obj_set_style_border_width(power_quality_u_bar_track, 0, 0);
        lv_obj_set_style_pad_all(power_quality_u_bar_track, 0, 0);
        lv_obj_set_flag(power_quality_u_bar_track, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_u_bar_track, &me106_theme_dark_control_track, 0);
        lv_obj_bind_style(power_quality_u_bar_track, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_u_bar_track, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_t * power_quality_u_bar_fill = lv_obj_create(power_quality_u_bar_track);
        lv_obj_set_name(power_quality_u_bar_fill, "power_quality_u_bar_fill");
        lv_obj_set_x(power_quality_u_bar_fill, 0);
        lv_obj_set_y(power_quality_u_bar_fill, 0);
        lv_obj_set_width(power_quality_u_bar_fill, 60);
        lv_obj_set_height(power_quality_u_bar_fill, 8);
        lv_obj_set_style_radius(power_quality_u_bar_fill, 4, 0);
        lv_obj_set_style_border_width(power_quality_u_bar_fill, 0, 0);
        lv_obj_set_flag(power_quality_u_bar_fill, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_u_bar_fill, &me106_theme_dark_secondary, 0);
        lv_obj_bind_style(power_quality_u_bar_fill, &me106_theme_light_secondary, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_u_bar_fill, &me106_theme_alarm_secondary, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_8 = lv_label_create(power_quality_trend_panel);
        lv_label_set_text(lv_label_8, "电流");
        lv_obj_set_x(lv_label_8, 150);
        lv_obj_set_y(lv_label_8, 10);
        lv_obj_set_width(lv_label_8, 34);
        lv_obj_add_style(lv_label_8, &me106_text_16_cyan, 0);
        lv_obj_bind_style(lv_label_8, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_8, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_i_bar_track = lv_obj_create(power_quality_trend_panel);
        lv_obj_set_name(power_quality_i_bar_track, "power_quality_i_bar_track");
        lv_obj_set_x(power_quality_i_bar_track, 190);
        lv_obj_set_y(power_quality_i_bar_track, 17);
        lv_obj_set_width(power_quality_i_bar_track, 64);
        lv_obj_set_height(power_quality_i_bar_track, 8);
        lv_obj_set_style_radius(power_quality_i_bar_track, 4, 0);
        lv_obj_set_style_border_width(power_quality_i_bar_track, 0, 0);
        lv_obj_set_style_pad_all(power_quality_i_bar_track, 0, 0);
        lv_obj_set_flag(power_quality_i_bar_track, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_i_bar_track, &me106_theme_dark_control_track, 0);
        lv_obj_bind_style(power_quality_i_bar_track, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_i_bar_track, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_t * power_quality_i_bar_fill = lv_obj_create(power_quality_i_bar_track);
        lv_obj_set_name(power_quality_i_bar_fill, "power_quality_i_bar_fill");
        lv_obj_set_x(power_quality_i_bar_fill, 0);
        lv_obj_set_y(power_quality_i_bar_fill, 0);
        lv_obj_set_width(power_quality_i_bar_fill, 42);
        lv_obj_set_height(power_quality_i_bar_fill, 8);
        lv_obj_set_style_radius(power_quality_i_bar_fill, 4, 0);
        lv_obj_set_style_border_width(power_quality_i_bar_fill, 0, 0);
        lv_obj_set_flag(power_quality_i_bar_fill, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_i_bar_fill, &me106_theme_dark_info, 0);
        lv_obj_bind_style(power_quality_i_bar_fill, &me106_theme_light_info, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_i_bar_fill, &me106_theme_alarm_info, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_9 = lv_label_create(power_quality_trend_panel);
        lv_label_set_text(lv_label_9, "功率");
        lv_obj_set_x(lv_label_9, 16);
        lv_obj_set_y(lv_label_9, 36);
        lv_obj_set_width(lv_label_9, 34);
        lv_obj_add_style(lv_label_9, &me106_text_16_orange, 0);
        lv_obj_bind_style(lv_label_9, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_9, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_p_bar_track = lv_obj_create(power_quality_trend_panel);
        lv_obj_set_name(power_quality_p_bar_track, "power_quality_p_bar_track");
        lv_obj_set_x(power_quality_p_bar_track, 56);
        lv_obj_set_y(power_quality_p_bar_track, 43);
        lv_obj_set_width(power_quality_p_bar_track, 80);
        lv_obj_set_height(power_quality_p_bar_track, 8);
        lv_obj_set_style_radius(power_quality_p_bar_track, 4, 0);
        lv_obj_set_style_border_width(power_quality_p_bar_track, 0, 0);
        lv_obj_set_style_pad_all(power_quality_p_bar_track, 0, 0);
        lv_obj_set_flag(power_quality_p_bar_track, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_p_bar_track, &me106_theme_dark_control_track, 0);
        lv_obj_bind_style(power_quality_p_bar_track, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_p_bar_track, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_t * power_quality_p_bar_fill = lv_obj_create(power_quality_p_bar_track);
        lv_obj_set_name(power_quality_p_bar_fill, "power_quality_p_bar_fill");
        lv_obj_set_x(power_quality_p_bar_fill, 0);
        lv_obj_set_y(power_quality_p_bar_fill, 0);
        lv_obj_set_width(power_quality_p_bar_fill, 52);
        lv_obj_set_height(power_quality_p_bar_fill, 8);
        lv_obj_set_style_radius(power_quality_p_bar_fill, 4, 0);
        lv_obj_set_style_border_width(power_quality_p_bar_fill, 0, 0);
        lv_obj_set_flag(power_quality_p_bar_fill, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_p_bar_fill, &me106_theme_dark_warning, 0);
        lv_obj_bind_style(power_quality_p_bar_fill, &me106_theme_light_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_p_bar_fill, &me106_theme_alarm_warning, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_10 = lv_label_create(power_quality_trend_panel);
        lv_label_set_text(lv_label_10, "电能");
        lv_obj_set_x(lv_label_10, 150);
        lv_obj_set_y(lv_label_10, 36);
        lv_obj_set_width(lv_label_10, 34);
        lv_obj_add_style(lv_label_10, &me106_text_16_green, 0);
        lv_obj_bind_style(lv_label_10, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_10, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_e_bar_track = lv_obj_create(power_quality_trend_panel);
        lv_obj_set_name(power_quality_e_bar_track, "power_quality_e_bar_track");
        lv_obj_set_x(power_quality_e_bar_track, 190);
        lv_obj_set_y(power_quality_e_bar_track, 43);
        lv_obj_set_width(power_quality_e_bar_track, 64);
        lv_obj_set_height(power_quality_e_bar_track, 8);
        lv_obj_set_style_radius(power_quality_e_bar_track, 4, 0);
        lv_obj_set_style_border_width(power_quality_e_bar_track, 0, 0);
        lv_obj_set_style_pad_all(power_quality_e_bar_track, 0, 0);
        lv_obj_set_flag(power_quality_e_bar_track, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_e_bar_track, &me106_theme_dark_control_track, 0);
        lv_obj_bind_style(power_quality_e_bar_track, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_e_bar_track, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_t * power_quality_e_bar_fill = lv_obj_create(power_quality_e_bar_track);
        lv_obj_set_name(power_quality_e_bar_fill, "power_quality_e_bar_fill");
        lv_obj_set_x(power_quality_e_bar_fill, 0);
        lv_obj_set_y(power_quality_e_bar_fill, 0);
        lv_obj_set_width(power_quality_e_bar_fill, 50);
        lv_obj_set_height(power_quality_e_bar_fill, 8);
        lv_obj_set_style_radius(power_quality_e_bar_fill, 4, 0);
        lv_obj_set_style_border_width(power_quality_e_bar_fill, 0, 0);
        lv_obj_set_flag(power_quality_e_bar_fill, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_e_bar_fill, &me106_theme_dark_success, 0);
        lv_obj_bind_style(power_quality_e_bar_fill, &me106_theme_light_success, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_e_bar_fill, &me106_theme_alarm_success, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_status_page = lv_obj_create(power_quality_pages);
        lv_obj_set_name(power_quality_status_page, "power_quality_status_page");
        lv_obj_set_x(power_quality_status_page, 0);
        lv_obj_set_y(power_quality_status_page, 208);
        lv_obj_set_width(power_quality_status_page, 320);
        lv_obj_set_height(power_quality_status_page, 207);
        lv_obj_set_style_bg_opa(power_quality_status_page, 0, 0);
        lv_obj_set_style_border_width(power_quality_status_page, 0, 0);
        lv_obj_set_style_pad_all(power_quality_status_page, 0, 0);
        lv_obj_set_flag(power_quality_status_page, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_11 = lv_label_create(power_quality_status_page);
        lv_label_set_text(lv_label_11, "状态标记");
        lv_obj_set_x(lv_label_11, 156);
        lv_obj_set_y(lv_label_11, 15);
        lv_obj_set_width(lv_label_11, 140);
        lv_obj_add_style(lv_label_11, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_11, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_11, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_12 = lv_label_create(power_quality_status_page);
        lv_label_set_text(lv_label_12, "状态标记");
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 20);
        lv_obj_set_width(lv_label_12, 120);
        lv_obj_add_style(lv_label_12, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_12, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_12, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * quality_tag_u_step = lv_obj_create(power_quality_status_page);
        lv_obj_set_name(quality_tag_u_step, "quality_tag_u_step");
        lv_obj_set_x(quality_tag_u_step, 22);
        lv_obj_set_y(quality_tag_u_step, 48);
        lv_obj_set_width(quality_tag_u_step, 132);
        lv_obj_set_height(quality_tag_u_step, 34);
        lv_obj_set_style_pad_all(quality_tag_u_step, 0, 0);
        lv_obj_set_flag(quality_tag_u_step, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(quality_tag_u_step, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(quality_tag_u_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(quality_tag_u_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_obj_1 = lv_obj_create(quality_tag_u_step);
        lv_obj_set_x(lv_obj_1, 9);
        lv_obj_set_y(lv_obj_1, 8);
        lv_obj_set_width(lv_obj_1, 18);
        lv_obj_set_height(lv_obj_1, 18);
        lv_obj_set_style_radius(lv_obj_1, 9, 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(lv_obj_1, &me106_theme_dark_secondary, 0);
        lv_obj_bind_style(lv_obj_1, &me106_theme_light_secondary, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_1, &me106_theme_alarm_secondary, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_13 = lv_label_create(quality_tag_u_step);
        lv_label_set_text(lv_label_13, "电压");
        lv_obj_set_align(lv_label_13, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_13, 34);
        lv_obj_set_y(lv_label_13, 0);
        lv_obj_set_width(lv_label_13, 42);
        lv_obj_add_style(lv_label_13, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_13, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_13, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_14 = lv_label_create(quality_tag_u_step);
        lv_label_set_text(lv_label_14, "正常");
        lv_obj_set_align(lv_label_14, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_14, 78);
        lv_obj_set_y(lv_label_14, 0);
        lv_obj_set_width(lv_label_14, 42);
        lv_obj_add_style(lv_label_14, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_14, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_14, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_14, &meter_power_quality_u_step_issue, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_15 = lv_label_create(quality_tag_u_step);
        lv_label_set_text(lv_label_15, "越限");
        lv_obj_set_align(lv_label_15, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_15, 78);
        lv_obj_set_y(lv_label_15, 0);
        lv_obj_set_width(lv_label_15, 46);
        lv_obj_add_style(lv_label_15, &me106_text_14_orange, 0);
        lv_obj_bind_style(lv_label_15, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_15, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_15, &meter_power_quality_u_step_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * quality_tag_i_step = lv_obj_create(power_quality_status_page);
        lv_obj_set_name(quality_tag_i_step, "quality_tag_i_step");
        lv_obj_set_x(quality_tag_i_step, 166);
        lv_obj_set_y(quality_tag_i_step, 48);
        lv_obj_set_width(quality_tag_i_step, 132);
        lv_obj_set_height(quality_tag_i_step, 34);
        lv_obj_set_style_pad_all(quality_tag_i_step, 0, 0);
        lv_obj_set_flag(quality_tag_i_step, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(quality_tag_i_step, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(quality_tag_i_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(quality_tag_i_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_obj_2 = lv_obj_create(quality_tag_i_step);
        lv_obj_set_x(lv_obj_2, 9);
        lv_obj_set_y(lv_obj_2, 8);
        lv_obj_set_width(lv_obj_2, 18);
        lv_obj_set_height(lv_obj_2, 18);
        lv_obj_set_style_radius(lv_obj_2, 9, 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(lv_obj_2, &me106_theme_dark_info, 0);
        lv_obj_bind_style(lv_obj_2, &me106_theme_light_info, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_2, &me106_theme_alarm_info, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_16 = lv_label_create(quality_tag_i_step);
        lv_label_set_text(lv_label_16, "电流");
        lv_obj_set_align(lv_label_16, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_16, 34);
        lv_obj_set_y(lv_label_16, 0);
        lv_obj_set_width(lv_label_16, 42);
        lv_obj_add_style(lv_label_16, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_16, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_16, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_17 = lv_label_create(quality_tag_i_step);
        lv_label_set_text(lv_label_17, "正常");
        lv_obj_set_align(lv_label_17, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_17, 78);
        lv_obj_set_y(lv_label_17, 0);
        lv_obj_set_width(lv_label_17, 42);
        lv_obj_add_style(lv_label_17, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_17, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_17, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_17, &meter_power_quality_i_step_issue, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_18 = lv_label_create(quality_tag_i_step);
        lv_label_set_text(lv_label_18, "越限");
        lv_obj_set_align(lv_label_18, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_18, 78);
        lv_obj_set_y(lv_label_18, 0);
        lv_obj_set_width(lv_label_18, 46);
        lv_obj_add_style(lv_label_18, &me106_text_14_orange, 0);
        lv_obj_bind_style(lv_label_18, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_18, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_18, &meter_power_quality_i_step_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * quality_tag_p_step = lv_obj_create(power_quality_status_page);
        lv_obj_set_name(quality_tag_p_step, "quality_tag_p_step");
        lv_obj_set_x(quality_tag_p_step, 22);
        lv_obj_set_y(quality_tag_p_step, 90);
        lv_obj_set_width(quality_tag_p_step, 132);
        lv_obj_set_height(quality_tag_p_step, 34);
        lv_obj_set_style_pad_all(quality_tag_p_step, 0, 0);
        lv_obj_set_flag(quality_tag_p_step, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(quality_tag_p_step, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(quality_tag_p_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(quality_tag_p_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_obj_3 = lv_obj_create(quality_tag_p_step);
        lv_obj_set_x(lv_obj_3, 9);
        lv_obj_set_y(lv_obj_3, 8);
        lv_obj_set_width(lv_obj_3, 18);
        lv_obj_set_height(lv_obj_3, 18);
        lv_obj_set_style_radius(lv_obj_3, 9, 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);
        lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(lv_obj_3, &me106_theme_dark_warning, 0);
        lv_obj_bind_style(lv_obj_3, &me106_theme_light_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_3, &me106_theme_alarm_warning, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_19 = lv_label_create(quality_tag_p_step);
        lv_label_set_text(lv_label_19, "功率");
        lv_obj_set_align(lv_label_19, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_19, 34);
        lv_obj_set_y(lv_label_19, 0);
        lv_obj_set_width(lv_label_19, 42);
        lv_obj_add_style(lv_label_19, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_19, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_19, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_20 = lv_label_create(quality_tag_p_step);
        lv_label_set_text(lv_label_20, "正常");
        lv_obj_set_align(lv_label_20, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_20, 78);
        lv_obj_set_y(lv_label_20, 0);
        lv_obj_set_width(lv_label_20, 42);
        lv_obj_add_style(lv_label_20, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_20, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_20, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_20, &meter_power_quality_p_step_issue, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_21 = lv_label_create(quality_tag_p_step);
        lv_label_set_text(lv_label_21, "越限");
        lv_obj_set_align(lv_label_21, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_21, 78);
        lv_obj_set_y(lv_label_21, 0);
        lv_obj_set_width(lv_label_21, 46);
        lv_obj_add_style(lv_label_21, &me106_text_14_orange, 0);
        lv_obj_bind_style(lv_label_21, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_21, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_21, &meter_power_quality_p_step_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * quality_tag_e_inc = lv_obj_create(power_quality_status_page);
        lv_obj_set_name(quality_tag_e_inc, "quality_tag_e_inc");
        lv_obj_set_x(quality_tag_e_inc, 166);
        lv_obj_set_y(quality_tag_e_inc, 90);
        lv_obj_set_width(quality_tag_e_inc, 132);
        lv_obj_set_height(quality_tag_e_inc, 34);
        lv_obj_set_style_pad_all(quality_tag_e_inc, 0, 0);
        lv_obj_set_flag(quality_tag_e_inc, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(quality_tag_e_inc, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(quality_tag_e_inc, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(quality_tag_e_inc, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_obj_4 = lv_obj_create(quality_tag_e_inc);
        lv_obj_set_x(lv_obj_4, 9);
        lv_obj_set_y(lv_obj_4, 8);
        lv_obj_set_width(lv_obj_4, 18);
        lv_obj_set_height(lv_obj_4, 18);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(lv_obj_4, &me106_theme_dark_success, 0);
        lv_obj_bind_style(lv_obj_4, &me106_theme_light_success, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_4, &me106_theme_alarm_success, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_22 = lv_label_create(quality_tag_e_inc);
        lv_label_set_text(lv_label_22, "电能");
        lv_obj_set_align(lv_label_22, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_22, 34);
        lv_obj_set_y(lv_label_22, 0);
        lv_obj_set_width(lv_label_22, 42);
        lv_obj_add_style(lv_label_22, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_22, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_22, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_23 = lv_label_create(quality_tag_e_inc);
        lv_label_set_text(lv_label_23, "正常");
        lv_obj_set_align(lv_label_23, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_23, 78);
        lv_obj_set_y(lv_label_23, 0);
        lv_obj_set_width(lv_label_23, 42);
        lv_obj_add_style(lv_label_23, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_23, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_23, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_23, &meter_power_quality_e_inc_issue, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_24 = lv_label_create(quality_tag_e_inc);
        lv_label_set_text(lv_label_24, "越限");
        lv_obj_set_align(lv_label_24, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_24, 78);
        lv_obj_set_y(lv_label_24, 0);
        lv_obj_set_width(lv_label_24, 46);
        lv_obj_add_style(lv_label_24, &me106_text_14_orange, 0);
        lv_obj_bind_style(lv_label_24, &me106_theme_light_status_warning, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_24, &me106_theme_alarm_status_warning, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_24, &meter_power_quality_e_inc_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * quality_alarm_strip = lv_obj_create(power_quality_status_page);
        lv_obj_set_name(quality_alarm_strip, "quality_alarm_strip");
        lv_obj_set_x(quality_alarm_strip, 22);
        lv_obj_set_y(quality_alarm_strip, 139);
        lv_obj_set_width(quality_alarm_strip, 276);
        lv_obj_set_height(quality_alarm_strip, 44);
        lv_obj_set_style_pad_all(quality_alarm_strip, 0, 0);
        lv_obj_set_flag(quality_alarm_strip, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(quality_alarm_strip, &me106_panel_gray1f_r8, 0);
        lv_obj_bind_style(quality_alarm_strip, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(quality_alarm_strip, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(quality_alarm_strip);
        lv_image_set_src(lv_image_1, meter_icon_alarm);
        lv_obj_set_x(lv_image_1, 12);
        lv_obj_set_y(lv_image_1, 10);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 220, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 220, 0);
        lv_obj_add_style(lv_image_1, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_1, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_1, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_25 = lv_label_create(quality_alarm_strip);
        lv_label_set_text(lv_label_25, "失压");
        lv_obj_set_align(lv_label_25, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_25, 46);
        lv_obj_set_y(lv_label_25, 0);
        lv_obj_set_width(lv_label_25, 48);
        lv_obj_add_style(lv_label_25, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_25, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_25, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_26 = lv_label_create(quality_alarm_strip);
        lv_label_set_text(lv_label_26, "跌落");
        lv_obj_set_align(lv_label_26, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_26, 100);
        lv_obj_set_y(lv_label_26, 0);
        lv_obj_set_width(lv_label_26, 48);
        lv_obj_add_style(lv_label_26, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_26, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_26, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_27 = lv_label_create(quality_alarm_strip);
        lv_label_set_text(lv_label_27, "过压");
        lv_obj_set_align(lv_label_27, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_27, 154);
        lv_obj_set_y(lv_label_27, 0);
        lv_obj_set_width(lv_label_27, 48);
        lv_obj_add_style(lv_label_27, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_27, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_27, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_28 = lv_label_create(quality_alarm_strip);
        lv_label_set_text(lv_label_28, "过流");
        lv_obj_set_align(lv_label_28, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_28, 208);
        lv_obj_set_y(lv_label_28, 0);
        lv_obj_set_width(lv_label_28, 48);
        lv_obj_add_style(lv_label_28, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_28, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_28, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_qr_page = lv_obj_create(power_quality_pages);
        lv_obj_set_name(power_quality_qr_page, "power_quality_qr_page");
        lv_obj_set_x(power_quality_qr_page, 0);
        lv_obj_set_y(power_quality_qr_page, 416);
        lv_obj_set_width(power_quality_qr_page, 320);
        lv_obj_set_height(power_quality_qr_page, 207);
        lv_obj_set_style_bg_opa(power_quality_qr_page, 0, 0);
        lv_obj_set_style_border_width(power_quality_qr_page, 0, 0);
        lv_obj_set_style_pad_all(power_quality_qr_page, 0, 0);
        lv_obj_set_flag(power_quality_qr_page, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_29 = lv_label_create(power_quality_qr_page);
        lv_label_set_text(lv_label_29, "设备智能诊断");
        lv_obj_set_x(lv_label_29, 122);
        lv_obj_set_y(lv_label_29, 15);
        lv_obj_set_width(lv_label_29, 174);
        lv_obj_add_style(lv_label_29, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_29, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_29, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_30 = lv_label_create(power_quality_qr_page);
        lv_label_set_text(lv_label_30, "诊断云");
        lv_obj_set_x(lv_label_30, 24);
        lv_obj_set_y(lv_label_30, 20);
        lv_obj_set_width(lv_label_30, 130);
        lv_obj_add_style(lv_label_30, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_30, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_30, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_diagnose_panel = lv_obj_create(power_quality_qr_page);
        lv_obj_set_name(power_quality_diagnose_panel, "power_quality_diagnose_panel");
        lv_obj_set_x(power_quality_diagnose_panel, 22);
        lv_obj_set_y(power_quality_diagnose_panel, 46);
        lv_obj_set_width(power_quality_diagnose_panel, 276);
        lv_obj_set_height(power_quality_diagnose_panel, 132);
        lv_obj_set_style_pad_all(power_quality_diagnose_panel, 0, 0);
        lv_obj_set_flag(power_quality_diagnose_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_diagnose_panel, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(power_quality_diagnose_panel, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_diagnose_panel, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(power_quality_diagnose_panel);
        lv_image_set_src(lv_image_2, meter_icon_waveform);
        lv_obj_set_x(lv_image_2, 16);
        lv_obj_set_y(lv_image_2, 14);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 240, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 240, 0);
        lv_obj_add_style(lv_image_2, &me106_icon_white, 0);
        lv_obj_bind_style(lv_image_2, &me106_theme_light_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_2, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_31 = lv_label_create(power_quality_diagnose_panel);
        lv_label_set_text(lv_label_31, "高级诊断网址");
        lv_obj_set_x(lv_label_31, 48);
        lv_obj_set_y(lv_label_31, 13);
        lv_obj_set_width(lv_label_31, 150);
        lv_obj_add_style(lv_label_31, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_31, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_31, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_32 = lv_label_create(power_quality_diagnose_panel);
        lv_label_set_text(lv_label_32, "diagno.qinggrid.com");
        lv_obj_set_x(lv_label_32, 48);
        lv_obj_set_y(lv_label_32, 40);
        lv_obj_set_width(lv_label_32, 168);
        lv_obj_add_style(lv_label_32, &me106_text_16_cyan, 0);
        lv_obj_bind_style(lv_label_32, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_32, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_33 = lv_label_create(power_quality_diagnose_panel);
        lv_label_set_text(lv_label_33, "请在手机或电脑浏览器中输入上述网址，登录诊断云查看更完整的越限诊断分析与故障波形曲线。");
        lv_obj_set_x(lv_label_33, 16);
        lv_obj_set_y(lv_label_33, 74);
        lv_obj_set_width(lv_label_33, 244);
        lv_label_set_long_mode(lv_label_33, LV_LABEL_LONG_MODE_WRAP);
        lv_obj_add_style(lv_label_33, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_33, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_33, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_power_quality_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_power_quality_bottom_bar, "screen_power_quality_bottom_bar");
        lv_obj_set_x(screen_power_quality_bottom_bar, 0);
        lv_obj_set_y(screen_power_quality_bottom_bar, 207);
        lv_obj_set_width(screen_power_quality_bottom_bar, 320);
        lv_obj_set_height(screen_power_quality_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_power_quality_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_power_quality_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_power_quality_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_power_quality_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_power_quality_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_power_quality_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * power_quality_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(power_quality_btn_return, "power_quality_btn_return");
        lv_obj_set_x(power_quality_btn_return, 0);
        lv_obj_set_y(power_quality_btn_return, 207);
        lv_obj_set_width(power_quality_btn_return, 79);
        lv_obj_set_height(power_quality_btn_return, 32);
        lv_obj_add_style(power_quality_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(power_quality_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(power_quality_btn_return);
        lv_image_set_src(lv_image_3, meter_icon_return);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);

        lv_obj_add_screen_create_event(power_quality_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * power_quality_btn_down = lv_button_create(lv_obj_0);
        lv_obj_set_name(power_quality_btn_down, "power_quality_btn_down");
        lv_obj_set_x(power_quality_btn_down, 80);
        lv_obj_set_y(power_quality_btn_down, 207);
        lv_obj_set_width(power_quality_btn_down, 79);
        lv_obj_set_height(power_quality_btn_down, 32);
        lv_obj_add_style(power_quality_btn_down, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(power_quality_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_4 = lv_image_create(power_quality_btn_down);
        lv_image_set_src(lv_image_4, meter_arrow_down);
        lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_4, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_4, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_4, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_4, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(power_quality_btn_down, &meter_power_quality_page_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(power_quality_btn_down, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(power_quality_btn_down, subject_increment_event_0, 2);
        lv_obj_set_subject_increment_event_rollover(power_quality_btn_down, subject_increment_event_0, true);

        lv_obj_t * power_quality_btn_up = lv_button_create(lv_obj_0);
        lv_obj_set_name(power_quality_btn_up, "power_quality_btn_up");
        lv_obj_set_x(power_quality_btn_up, 160);
        lv_obj_set_y(power_quality_btn_up, 207);
        lv_obj_set_width(power_quality_btn_up, 79);
        lv_obj_set_height(power_quality_btn_up, 32);
        lv_obj_add_style(power_quality_btn_up, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(power_quality_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_5 = lv_image_create(power_quality_btn_up);
        lv_image_set_src(lv_image_5, meter_arrow_up);
        lv_obj_set_align(lv_image_5, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_5, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_5, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_5, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_5, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(power_quality_btn_up, &meter_power_quality_page_index, LV_EVENT_CLICKED, -1);
        lv_obj_set_subject_increment_event_min_value(power_quality_btn_up, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(power_quality_btn_up, subject_increment_event_1, 2);
        lv_obj_set_subject_increment_event_rollover(power_quality_btn_up, subject_increment_event_1, true);

        lv_obj_t * power_quality_btn_empty = lv_obj_create(lv_obj_0);
        lv_obj_set_name(power_quality_btn_empty, "power_quality_btn_empty");
        lv_obj_set_x(power_quality_btn_empty, 240);
        lv_obj_set_y(power_quality_btn_empty, 207);
        lv_obj_set_width(power_quality_btn_empty, 80);
        lv_obj_set_height(power_quality_btn_empty, 32);
        lv_obj_set_style_border_width(power_quality_btn_empty, 0, 0);
        lv_obj_set_style_pad_all(power_quality_btn_empty, 0, 0);
        lv_obj_set_flag(power_quality_btn_empty, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(power_quality_btn_empty, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(power_quality_btn_empty, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(power_quality_btn_empty, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

