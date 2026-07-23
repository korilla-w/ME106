/**
 * @file screen_settings_upgrade_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_upgrade_gen.h"
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

lv_obj_t * screen_settings_upgrade_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_upgrade_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_upgrade_request, LV_EVENT_SCREEN_LOADED, 0);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_upgrade_confirm_popup, LV_EVENT_SCREEN_LOADED, 0);
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
        lv_label_set_text(lv_label_0, "固件升级");
        lv_obj_set_x(lv_label_0, 152);
        lv_obj_set_y(lv_label_0, 17);
        lv_obj_set_width(lv_label_0, 144);
        lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_icon_halo = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_icon_halo, "upgrade_icon_halo");
        lv_obj_set_x(upgrade_icon_halo, 24);
        lv_obj_set_y(upgrade_icon_halo, 44);
        lv_obj_set_width(upgrade_icon_halo, 46);
        lv_obj_set_height(upgrade_icon_halo, 46);
        lv_obj_set_style_radius(upgrade_icon_halo, 12, 0);
        lv_obj_set_style_border_width(upgrade_icon_halo, 0, 0);
        lv_obj_set_style_pad_all(upgrade_icon_halo, 0, 0);
        lv_obj_set_flag(upgrade_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_icon_halo, &me106_theme_dark_info_soft, 0);
        lv_obj_bind_style(upgrade_icon_halo, &me106_theme_light_info_soft, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_icon_halo, &me106_theme_alarm_info_soft, 0, &meter_theme_index, 2);

        lv_obj_t * lv_image_0 = lv_image_create(page_content);
        lv_image_set_src(lv_image_0, meter_icon_update);
        lv_obj_set_x(lv_image_0, 35);
        lv_obj_set_y(lv_image_0, 55);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 245, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 245, 0);
        lv_obj_add_style(lv_image_0, &me106_theme_dark_info_icon, 0);
        lv_obj_bind_style(lv_image_0, &me106_theme_light_info_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_0, &me106_theme_alarm_info_icon, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_1 = lv_label_create(page_content);
        lv_label_set_text(lv_label_1, "OTA");
        lv_obj_set_x(lv_label_1, 82);
        lv_obj_set_y(lv_label_1, 57);
        lv_obj_set_width(lv_label_1, 42);
        lv_obj_add_style(lv_label_1, &me106_text_18_cyan, 0);
        lv_obj_bind_style(lv_label_1, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_1, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_2 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_2, &meter_upgrade_status_text, NULL);
        lv_obj_set_x(lv_label_2, 128);
        lv_obj_set_y(lv_label_2, 60);
        lv_obj_set_width(lv_label_2, 108);
        lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_status_dot = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_status_dot, "upgrade_status_dot");
        lv_obj_set_x(upgrade_status_dot, 250);
        lv_obj_set_y(upgrade_status_dot, 58);
        lv_obj_set_width(upgrade_status_dot, 8);
        lv_obj_set_height(upgrade_status_dot, 8);
        lv_obj_set_style_radius(upgrade_status_dot, 4, 0);
        lv_obj_set_style_border_width(upgrade_status_dot, 0, 0);
        lv_obj_set_flag(upgrade_status_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_status_dot, &me106_theme_dark_success, 0);
        lv_obj_bind_style(upgrade_status_dot, &me106_theme_light_success, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_status_dot, &me106_theme_alarm_success, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_status_dot, &meter_upgrade_request, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * lv_label_3 = lv_label_create(page_content);
        lv_label_set_text(lv_label_3, "已提交");
        lv_obj_set_x(lv_label_3, 262);
        lv_obj_set_y(lv_label_3, 52);
        lv_obj_set_width(lv_label_3, 44);
        lv_obj_add_style(lv_label_3, &me106_text_14_green, 0);
        lv_obj_bind_style(lv_label_3, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_3, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(lv_label_3, &meter_upgrade_request, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * upgrade_version_band = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_version_band, "upgrade_version_band");
        lv_obj_set_x(upgrade_version_band, 16);
        lv_obj_set_y(upgrade_version_band, 94);
        lv_obj_set_width(upgrade_version_band, 288);
        lv_obj_set_height(upgrade_version_band, 56);
        lv_obj_set_style_pad_all(upgrade_version_band, 0, 0);
        lv_obj_set_flag(upgrade_version_band, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_version_band, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(upgrade_version_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_version_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_current_mark = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_current_mark, "upgrade_current_mark");
        lv_obj_set_x(upgrade_current_mark, 28);
        lv_obj_set_y(upgrade_current_mark, 116);
        lv_obj_set_width(upgrade_current_mark, 6);
        lv_obj_set_height(upgrade_current_mark, 16);
        lv_obj_set_style_radius(upgrade_current_mark, 3, 0);
        lv_obj_set_style_border_width(upgrade_current_mark, 0, 0);
        lv_obj_set_flag(upgrade_current_mark, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_current_mark, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_current_mark, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_current_mark, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_4 = lv_label_create(page_content);
        lv_label_set_text(lv_label_4, "当前版本");
        lv_obj_set_x(lv_label_4, 44);
        lv_obj_set_y(lv_label_4, 100);
        lv_obj_set_width(lv_label_4, 90);
        lv_obj_add_style(lv_label_4, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_5 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_5, &meter_upgrade_current_version, NULL);
        lv_obj_set_x(lv_label_5, 44);
        lv_obj_set_y(lv_label_5, 121);
        lv_obj_set_width(lv_label_5, 84);
        lv_obj_add_style(lv_label_5, &me106_text_16_white, 0);
        lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_image_1 = lv_image_create(page_content);
        lv_image_set_src(lv_image_1, meter_arrow_right);
        lv_obj_set_x(lv_image_1, 148);
        lv_obj_set_y(lv_image_1, 112);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 120, 0);
        lv_obj_add_style(lv_image_1, &me106_theme_dark_info_icon, 0);
        lv_obj_bind_style(lv_image_1, &me106_theme_light_info_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_1, &me106_theme_alarm_info_icon, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_new_mark = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_new_mark, "upgrade_new_mark");
        lv_obj_set_x(upgrade_new_mark, 174);
        lv_obj_set_y(upgrade_new_mark, 116);
        lv_obj_set_width(upgrade_new_mark, 6);
        lv_obj_set_height(upgrade_new_mark, 16);
        lv_obj_set_style_radius(upgrade_new_mark, 3, 0);
        lv_obj_set_style_border_width(upgrade_new_mark, 0, 0);
        lv_obj_set_flag(upgrade_new_mark, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_new_mark, &me106_theme_dark_info, 0);
        lv_obj_bind_style(upgrade_new_mark, &me106_theme_light_info, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_new_mark, &me106_theme_alarm_info, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_6 = lv_label_create(page_content);
        lv_label_set_text(lv_label_6, "目标版本");
        lv_obj_set_x(lv_label_6, 190);
        lv_obj_set_y(lv_label_6, 100);
        lv_obj_set_width(lv_label_6, 90);
        lv_obj_add_style(lv_label_6, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_7 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_7, &meter_upgrade_new_version, NULL);
        lv_obj_set_x(lv_label_7, 190);
        lv_obj_set_y(lv_label_7, 121);
        lv_obj_set_width(lv_label_7, 84);
        lv_obj_add_style(lv_label_7, &me106_text_16_cyan, 0);
        lv_obj_bind_style(lv_label_7, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_7, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_summary_panel = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_summary_panel, "upgrade_summary_panel");
        lv_obj_set_x(upgrade_summary_panel, 16);
        lv_obj_set_y(upgrade_summary_panel, 154);
        lv_obj_set_width(upgrade_summary_panel, 288);
        lv_obj_set_height(upgrade_summary_panel, 49);
        lv_obj_set_style_pad_all(upgrade_summary_panel, 0, 0);
        lv_obj_set_flag(upgrade_summary_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_summary_panel, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(upgrade_summary_panel, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_summary_panel, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_8 = lv_label_create(page_content);
        lv_label_set_text(lv_label_8, "固件大小");
        lv_obj_set_x(lv_label_8, 28);
        lv_obj_set_y(lv_label_8, 157);
        lv_obj_set_width(lv_label_8, 72);
        lv_obj_add_style(lv_label_8, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_8, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_8, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_9 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_9, &meter_upgrade_file_size_text, NULL);
        lv_obj_set_x(lv_label_9, 102);
        lv_obj_set_y(lv_label_9, 157);
        lv_obj_set_width(lv_label_9, 116);
        lv_obj_add_style(lv_label_9, &me106_text_14_white, 0);
        lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_10 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_10, &meter_upgrade_release_notes, NULL);
        lv_obj_set_x(lv_label_10, 28);
        lv_obj_set_y(lv_label_10, 176);
        lv_obj_set_width(lv_label_10, 190);
        lv_obj_set_height(lv_label_10, 16);
        lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_WRAP);
        lv_obj_add_style(lv_label_10, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_10, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_10, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_progress_bar = lv_bar_create(page_content);
        lv_obj_set_name(upgrade_progress_bar, "upgrade_progress_bar");
        lv_obj_set_x(upgrade_progress_bar, 28);
        lv_obj_set_y(upgrade_progress_bar, 194);
        lv_obj_set_width(upgrade_progress_bar, 190);
        lv_obj_set_height(upgrade_progress_bar, 8);
        lv_bar_bind_value(upgrade_progress_bar, &meter_upgrade_progress);
        lv_bar_set_min_value(upgrade_progress_bar, 0);
        lv_bar_set_max_value(upgrade_progress_bar, 100);
        lv_obj_set_style_radius(upgrade_progress_bar, 4, 0);
        lv_obj_set_style_border_width(upgrade_progress_bar, 0, 0);
        lv_obj_set_style_pad_all(upgrade_progress_bar, 0, 0);
        lv_obj_set_style_radius(upgrade_progress_bar, 4, LV_PART_INDICATOR);
        lv_obj_add_style(upgrade_progress_bar, &me106_theme_dark_control_track, 0);
        lv_obj_add_style(upgrade_progress_bar, &me106_slider_indicator, LV_PART_INDICATOR);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_light_slider_indicator, LV_PART_INDICATOR, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_alarm_slider_indicator, LV_PART_INDICATOR, &meter_theme_index, 2);

        lv_obj_t * upgrade_action_btn = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_btn, "upgrade_action_btn");
        lv_obj_set_x(upgrade_action_btn, 240);
        lv_obj_set_y(upgrade_action_btn, 162);
        lv_obj_set_width(upgrade_action_btn, 72);
        lv_obj_set_height(upgrade_action_btn, 30);
        lv_obj_add_style(upgrade_action_btn, &me106_theme_dark_action, 0);
        lv_obj_bind_style(upgrade_action_btn, &me106_theme_light_action, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_btn, &me106_theme_alarm_action, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_btn, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * lv_label_11 = lv_label_create(upgrade_action_btn);
        lv_label_set_text(lv_label_11, "查找固件");
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_11, 72);
        lv_obj_add_style(lv_label_11, &me106_text_14_cyan_center, 0);
        lv_obj_bind_style(lv_label_11, &me106_theme_light_accent_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_11, &me106_theme_alarm_accent_text, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_action_btn, &meter_upgrade_request, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_int_event(upgrade_action_btn, &meter_upgrade_ui_state, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_string_event(upgrade_action_btn, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在查找固件");

        lv_obj_t * upgrade_action_check_again = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_check_again, "upgrade_action_check_again");
        lv_obj_set_x(upgrade_action_check_again, 240);
        lv_obj_set_y(upgrade_action_check_again, 162);
        lv_obj_set_width(upgrade_action_check_again, 72);
        lv_obj_set_height(upgrade_action_check_again, 30);
        lv_obj_add_style(upgrade_action_check_again, &me106_theme_dark_action, 0);
        lv_obj_bind_style(upgrade_action_check_again, &me106_theme_light_action, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_check_again, &me106_theme_alarm_action, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_check_again, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 2);
        lv_obj_t * lv_label_12 = lv_label_create(upgrade_action_check_again);
        lv_label_set_text(lv_label_12, "重新查找");
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_12, 72);
        lv_obj_add_style(lv_label_12, &me106_text_14_cyan_center, 0);
        lv_obj_bind_style(lv_label_12, &me106_theme_light_accent_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_12, &me106_theme_alarm_accent_text, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_action_check_again, &meter_upgrade_request, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_int_event(upgrade_action_check_again, &meter_upgrade_ui_state, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_string_event(upgrade_action_check_again, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在查找固件");

        lv_obj_t * upgrade_action_start = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_start, "upgrade_action_start");
        lv_obj_set_x(upgrade_action_start, 240);
        lv_obj_set_y(upgrade_action_start, 162);
        lv_obj_set_width(upgrade_action_start, 72);
        lv_obj_set_height(upgrade_action_start, 30);
        lv_obj_add_style(upgrade_action_start, &me106_theme_dark_action, 0);
        lv_obj_bind_style(upgrade_action_start, &me106_theme_light_action, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_start, &me106_theme_alarm_action, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_start, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 3);
        lv_obj_t * lv_label_13 = lv_label_create(upgrade_action_start);
        lv_label_set_text(lv_label_13, "刷写");
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_13, 72);
        lv_obj_add_style(lv_label_13, &me106_text_14_cyan_center, 0);
        lv_obj_bind_style(lv_label_13, &me106_theme_light_accent_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_13, &me106_theme_alarm_accent_text, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_action_start, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 1);

        lv_obj_t * upgrade_action_busy_check = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_busy_check, "upgrade_action_busy_check");
        lv_obj_set_x(upgrade_action_busy_check, 240);
        lv_obj_set_y(upgrade_action_busy_check, 162);
        lv_obj_set_width(upgrade_action_busy_check, 72);
        lv_obj_set_height(upgrade_action_busy_check, 30);
        lv_obj_add_style(upgrade_action_busy_check, &me106_btn_ota_busy, 0);
        lv_obj_bind_style(upgrade_action_busy_check, &me106_theme_light_inactive, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_busy_check, &me106_theme_alarm_inactive, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_busy_check, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * lv_label_14 = lv_label_create(upgrade_action_busy_check);
        lv_label_set_text(lv_label_14, "查询中");
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_14, 72);
        lv_obj_add_style(lv_label_14, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_14, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_14, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_action_busy_start = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_busy_start, "upgrade_action_busy_start");
        lv_obj_set_x(upgrade_action_busy_start, 240);
        lv_obj_set_y(upgrade_action_busy_start, 162);
        lv_obj_set_width(upgrade_action_busy_start, 72);
        lv_obj_set_height(upgrade_action_busy_start, 30);
        lv_obj_add_style(upgrade_action_busy_start, &me106_btn_ota_busy, 0);
        lv_obj_bind_style(upgrade_action_busy_start, &me106_theme_light_inactive, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_busy_start, &me106_theme_alarm_inactive, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_busy_start, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 4);
        lv_obj_t * lv_label_15 = lv_label_create(upgrade_action_busy_start);
        lv_label_set_text(lv_label_15, "启动中");
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_15, 72);
        lv_obj_add_style(lv_label_15, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_15, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_15, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_action_busy_download = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_busy_download, "upgrade_action_busy_download");
        lv_obj_set_x(upgrade_action_busy_download, 240);
        lv_obj_set_y(upgrade_action_busy_download, 162);
        lv_obj_set_width(upgrade_action_busy_download, 72);
        lv_obj_set_height(upgrade_action_busy_download, 30);
        lv_obj_add_style(upgrade_action_busy_download, &me106_btn_ota_busy, 0);
        lv_obj_bind_style(upgrade_action_busy_download, &me106_theme_light_inactive, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_busy_download, &me106_theme_alarm_inactive, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_busy_download, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 5);
        lv_obj_t * lv_label_16 = lv_label_create(upgrade_action_busy_download);
        lv_label_set_text(lv_label_16, "下载中");
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_16, 72);
        lv_obj_add_style(lv_label_16, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_16, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_16, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_action_busy_write = lv_button_create(page_content);
        lv_obj_set_name(upgrade_action_busy_write, "upgrade_action_busy_write");
        lv_obj_set_x(upgrade_action_busy_write, 240);
        lv_obj_set_y(upgrade_action_busy_write, 162);
        lv_obj_set_width(upgrade_action_busy_write, 72);
        lv_obj_set_height(upgrade_action_busy_write, 30);
        lv_obj_add_style(upgrade_action_busy_write, &me106_btn_ota_busy, 0);
        lv_obj_bind_style(upgrade_action_busy_write, &me106_theme_light_inactive, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_action_busy_write, &me106_theme_alarm_inactive, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_action_busy_write, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 6);
        lv_obj_t * lv_label_17 = lv_label_create(upgrade_action_busy_write);
        lv_label_set_text(lv_label_17, "写入中");
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_17, 72);
        lv_obj_add_style(lv_label_17, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_17, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_17, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_settings_upgrade_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_upgrade_bottom_bar, "screen_settings_upgrade_bottom_bar");
        lv_obj_set_x(screen_settings_upgrade_bottom_bar, 0);
        lv_obj_set_y(screen_settings_upgrade_bottom_bar, 207);
        lv_obj_set_width(screen_settings_upgrade_bottom_bar, 320);
        lv_obj_set_height(screen_settings_upgrade_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_upgrade_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_upgrade_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_upgrade_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_upgrade_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_upgrade_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_upgrade_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_return, "upgrade_btn_return");
        lv_obj_set_x(upgrade_btn_return, 0);
        lv_obj_set_y(upgrade_btn_return, 207);
        lv_obj_set_width(upgrade_btn_return, 79);
        lv_obj_set_height(upgrade_btn_return, 32);
        lv_obj_add_style(upgrade_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(upgrade_btn_return);
        lv_image_set_src(lv_image_2, meter_icon_return);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);

        lv_obj_add_screen_create_event(upgrade_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * upgrade_btn_placeholder_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_placeholder_1, "upgrade_btn_placeholder_1");
        lv_obj_set_x(upgrade_btn_placeholder_1, 80);
        lv_obj_set_y(upgrade_btn_placeholder_1, 207);
        lv_obj_set_width(upgrade_btn_placeholder_1, 79);
        lv_obj_set_height(upgrade_btn_placeholder_1, 32);
        lv_obj_add_style(upgrade_btn_placeholder_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_btn_wifi = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_wifi, "upgrade_btn_wifi");
        lv_obj_set_x(upgrade_btn_wifi, 160);
        lv_obj_set_y(upgrade_btn_wifi, 207);
        lv_obj_set_width(upgrade_btn_wifi, 79);
        lv_obj_set_height(upgrade_btn_wifi, 32);
        lv_obj_add_style(upgrade_btn_wifi, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_wifi, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_wifi, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(upgrade_btn_wifi);
        lv_image_set_src(lv_image_3, meter_icon_wifi);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 220, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 220, 0);
        lv_obj_add_style(lv_image_3, &me106_theme_dark_info_icon, 0);
        lv_obj_bind_style(lv_image_3, &me106_theme_light_info_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_3, &me106_theme_alarm_info_icon, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_btn_wifi, &meter_wifi_sta_connect_request, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_string_event(upgrade_btn_wifi, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在连接热点");

        lv_obj_t * upgrade_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_yes, "upgrade_btn_yes");
        lv_obj_set_x(upgrade_btn_yes, 240);
        lv_obj_set_y(upgrade_btn_yes, 207);
        lv_obj_set_width(upgrade_btn_yes, 80);
        lv_obj_set_height(upgrade_btn_yes, 32);
        lv_obj_add_style(upgrade_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_btn_yes, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * lv_image_4 = lv_image_create(upgrade_btn_yes);
        lv_image_set_src(lv_image_4, meter_yes);
        lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_4, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_4, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_4, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_4, 230, 0);

        lv_obj_add_subject_set_int_event(upgrade_btn_yes, &meter_upgrade_request, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_int_event(upgrade_btn_yes, &meter_upgrade_ui_state, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_string_event(upgrade_btn_yes, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在查找固件");

        lv_obj_t * upgrade_btn_yes_check_again = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_yes_check_again, "upgrade_btn_yes_check_again");
        lv_obj_set_x(upgrade_btn_yes_check_again, 240);
        lv_obj_set_y(upgrade_btn_yes_check_again, 207);
        lv_obj_set_width(upgrade_btn_yes_check_again, 80);
        lv_obj_set_height(upgrade_btn_yes_check_again, 32);
        lv_obj_add_style(upgrade_btn_yes_check_again, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_yes_check_again, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_yes_check_again, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_btn_yes_check_again, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 2);
        lv_obj_t * lv_image_5 = lv_image_create(upgrade_btn_yes_check_again);
        lv_image_set_src(lv_image_5, meter_yes);
        lv_obj_set_align(lv_image_5, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_5, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_5, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_5, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_5, 230, 0);

        lv_obj_add_subject_set_int_event(upgrade_btn_yes_check_again, &meter_upgrade_request, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_int_event(upgrade_btn_yes_check_again, &meter_upgrade_ui_state, LV_EVENT_CLICKED, 1);
        lv_obj_add_subject_set_string_event(upgrade_btn_yes_check_again, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在查找固件");

        lv_obj_t * upgrade_btn_yes_start = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_yes_start, "upgrade_btn_yes_start");
        lv_obj_set_x(upgrade_btn_yes_start, 240);
        lv_obj_set_y(upgrade_btn_yes_start, 207);
        lv_obj_set_width(upgrade_btn_yes_start, 80);
        lv_obj_set_height(upgrade_btn_yes_start, 32);
        lv_obj_add_style(upgrade_btn_yes_start, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_yes_start, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_yes_start, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_btn_yes_start, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 3);
        lv_obj_t * lv_image_6 = lv_image_create(upgrade_btn_yes_start);
        lv_image_set_src(lv_image_6, meter_yes);
        lv_obj_set_align(lv_image_6, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_6, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_6, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_6, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_6, 230, 0);

        lv_obj_add_subject_set_int_event(upgrade_btn_yes_start, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 1);

        lv_obj_t * upgrade_busy_guard_start = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_busy_guard_start, "upgrade_busy_guard_start");
        lv_obj_set_x(upgrade_busy_guard_start, 0);
        lv_obj_set_y(upgrade_busy_guard_start, 207);
        lv_obj_set_width(upgrade_busy_guard_start, 320);
        lv_obj_set_height(upgrade_busy_guard_start, 33);
        lv_obj_set_style_border_width(upgrade_busy_guard_start, 0, 0);
        lv_obj_set_style_pad_all(upgrade_busy_guard_start, 0, 0);
        lv_obj_set_flag(upgrade_busy_guard_start, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_busy_guard_start, &me106_theme_dark_busy_guard, 0);
        lv_obj_bind_style(upgrade_busy_guard_start, &me106_theme_light_busy_guard, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_busy_guard_start, &me106_theme_alarm_busy_guard, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_busy_guard_start, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 4);
        lv_obj_t * lv_label_18 = lv_label_create(upgrade_busy_guard_start);
        lv_label_set_text(lv_label_18, "刷写中，请勿操作");
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_18, 320);
        lv_obj_add_style(lv_label_18, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_18, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_18, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_busy_guard_download = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_busy_guard_download, "upgrade_busy_guard_download");
        lv_obj_set_x(upgrade_busy_guard_download, 0);
        lv_obj_set_y(upgrade_busy_guard_download, 207);
        lv_obj_set_width(upgrade_busy_guard_download, 320);
        lv_obj_set_height(upgrade_busy_guard_download, 33);
        lv_obj_set_style_border_width(upgrade_busy_guard_download, 0, 0);
        lv_obj_set_style_pad_all(upgrade_busy_guard_download, 0, 0);
        lv_obj_set_flag(upgrade_busy_guard_download, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_busy_guard_download, &me106_theme_dark_busy_guard, 0);
        lv_obj_bind_style(upgrade_busy_guard_download, &me106_theme_light_busy_guard, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_busy_guard_download, &me106_theme_alarm_busy_guard, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_busy_guard_download, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 5);
        lv_obj_t * lv_label_19 = lv_label_create(upgrade_busy_guard_download);
        lv_label_set_text(lv_label_19, "刷写中，请勿操作");
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_19, 320);
        lv_obj_add_style(lv_label_19, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_19, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_19, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_busy_guard_write = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_busy_guard_write, "upgrade_busy_guard_write");
        lv_obj_set_x(upgrade_busy_guard_write, 0);
        lv_obj_set_y(upgrade_busy_guard_write, 207);
        lv_obj_set_width(upgrade_busy_guard_write, 320);
        lv_obj_set_height(upgrade_busy_guard_write, 33);
        lv_obj_set_style_border_width(upgrade_busy_guard_write, 0, 0);
        lv_obj_set_style_pad_all(upgrade_busy_guard_write, 0, 0);
        lv_obj_set_flag(upgrade_busy_guard_write, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_busy_guard_write, &me106_theme_dark_busy_guard, 0);
        lv_obj_bind_style(upgrade_busy_guard_write, &me106_theme_light_busy_guard, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_busy_guard_write, &me106_theme_alarm_busy_guard, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_busy_guard_write, &meter_upgrade_ui_state, LV_OBJ_FLAG_HIDDEN, 6);
        lv_obj_t * lv_label_20 = lv_label_create(upgrade_busy_guard_write);
        lv_label_set_text(lv_label_20, "刷写中，请勿断电");
        lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_20, 320);
        lv_obj_add_style(lv_label_20, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_20, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_20, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_mask = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_confirm_mask, "upgrade_confirm_mask");
        lv_obj_set_x(upgrade_confirm_mask, 0);
        lv_obj_set_y(upgrade_confirm_mask, 0);
        lv_obj_set_width(upgrade_confirm_mask, 320);
        lv_obj_set_height(upgrade_confirm_mask, 240);
        lv_obj_set_style_border_width(upgrade_confirm_mask, 0, 0);
        lv_obj_set_style_pad_all(upgrade_confirm_mask, 0, 0);
        lv_obj_set_flag(upgrade_confirm_mask, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_confirm_mask, &me106_theme_dark_modal_overlay, 0);
        lv_obj_bind_style(upgrade_confirm_mask, &me106_theme_light_modal_overlay, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_mask, &me106_theme_alarm_modal_overlay, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_confirm_mask, &meter_upgrade_confirm_popup, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * upgrade_confirm_dialog = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_confirm_dialog, "upgrade_confirm_dialog");
        lv_obj_set_x(upgrade_confirm_dialog, 34);
        lv_obj_set_y(upgrade_confirm_dialog, 48);
        lv_obj_set_width(upgrade_confirm_dialog, 252);
        lv_obj_set_height(upgrade_confirm_dialog, 142);
        lv_obj_set_style_pad_all(upgrade_confirm_dialog, 0, 0);
        lv_obj_set_style_border_width(upgrade_confirm_dialog, 0, 0);
        lv_obj_set_flag(upgrade_confirm_dialog, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_confirm_dialog, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(upgrade_confirm_dialog, &me106_theme_light_dialog, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_dialog, &me106_theme_alarm_dialog, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_confirm_dialog, &meter_upgrade_confirm_popup, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * lv_image_7 = lv_image_create(upgrade_confirm_dialog);
        lv_image_set_src(lv_image_7, meter_icon_warning);
        lv_obj_set_x(lv_image_7, 112);
        lv_obj_set_y(lv_image_7, 14);

        lv_obj_t * lv_label_21 = lv_label_create(upgrade_confirm_dialog);
        lv_label_set_text(lv_label_21, "刷写过程中请勿断电");
        lv_obj_set_x(lv_label_21, 24);
        lv_obj_set_y(lv_label_21, 48);
        lv_obj_set_width(lv_label_21, 204);
        lv_obj_add_style(lv_label_21, &me106_text_16_white_center, 0);
        lv_obj_bind_style(lv_label_21, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_21, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_22 = lv_label_create(upgrade_confirm_dialog);
        lv_label_bind_text(lv_label_22, &meter_upgrade_confirm_text, NULL);
        lv_obj_set_x(lv_label_22, 24);
        lv_obj_set_y(lv_label_22, 72);
        lv_obj_set_width(lv_label_22, 204);
        lv_obj_add_style(lv_label_22, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_22, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_22, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_cancel = lv_button_create(upgrade_confirm_dialog);
        lv_obj_set_name(upgrade_confirm_cancel, "upgrade_confirm_cancel");
        lv_obj_set_x(upgrade_confirm_cancel, 18);
        lv_obj_set_y(upgrade_confirm_cancel, 100);
        lv_obj_set_width(upgrade_confirm_cancel, 98);
        lv_obj_set_height(upgrade_confirm_cancel, 30);
        lv_obj_add_style(upgrade_confirm_cancel, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_confirm_cancel, &me106_theme_light_inactive, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_cancel, &me106_theme_alarm_inactive, 0, &meter_theme_index, 2);
        lv_obj_t * lv_label_23 = lv_label_create(upgrade_confirm_cancel);
        lv_label_set_text(lv_label_23, "取消");
        lv_obj_set_align(lv_label_23, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_23, 98);
        lv_obj_add_style(lv_label_23, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_23, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_23, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_confirm_cancel, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 0);

        lv_obj_t * upgrade_confirm_yes = lv_button_create(upgrade_confirm_dialog);
        lv_obj_set_name(upgrade_confirm_yes, "upgrade_confirm_yes");
        lv_obj_set_x(upgrade_confirm_yes, 136);
        lv_obj_set_y(upgrade_confirm_yes, 100);
        lv_obj_set_width(upgrade_confirm_yes, 98);
        lv_obj_set_height(upgrade_confirm_yes, 30);
        lv_obj_add_style(upgrade_confirm_yes, &me106_panel_blue_r6, 0);
        lv_obj_bind_style(upgrade_confirm_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_label_24 = lv_label_create(upgrade_confirm_yes);
        lv_label_set_text(lv_label_24, "刷写");
        lv_obj_set_align(lv_label_24, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_24, 98);
        lv_obj_add_style(lv_label_24, &me106_text_14_white_center, 0);
        lv_obj_bind_style(lv_label_24, &me106_theme_light_on_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_24, &me106_theme_alarm_on_accent, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(upgrade_confirm_yes, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 0);
        lv_obj_add_subject_set_int_event(upgrade_confirm_yes, &meter_upgrade_request, LV_EVENT_CLICKED, 2);
        lv_obj_add_subject_set_int_event(upgrade_confirm_yes, &meter_upgrade_ui_state, LV_EVENT_CLICKED, 4);
        lv_obj_add_subject_set_string_event(upgrade_confirm_yes, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在请求刷写");

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

