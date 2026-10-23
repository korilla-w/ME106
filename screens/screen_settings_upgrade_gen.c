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

    static lv_style_t upgrade_title;
    static lv_style_t upgrade_separator;
    static lv_style_t upgrade_hint;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&upgrade_title);
        lv_style_init(&upgrade_separator);
        lv_style_init(&upgrade_hint);

        lv_style_set_text_color(&upgrade_title, METER_WHITE);
        lv_style_set_text_font(&upgrade_title, meter_Harmony_Sans_SC_Medium_18);
        lv_style_set_bg_color(&upgrade_separator, METER_GRAY_30);
        lv_style_set_bg_opa(&upgrade_separator, 255);
        lv_style_set_border_width(&upgrade_separator, 0);
        lv_style_set_text_color(&upgrade_hint, METER_GRAY_BA);
        lv_style_set_text_font(&upgrade_hint, meter_Harmony_Sans_SC_Medium_14);
        lv_style_set_text_line_space(&upgrade_hint, 8);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_upgrade_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
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
        lv_obj_set_style_border_width(page_content, 0, 0);
        lv_obj_set_style_pad_all(page_content, 0, 0);
        lv_obj_set_flag(page_content, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_style_bg_opa(page_content, 0, 0);
        lv_obj_t * upgrade_header_icon = lv_image_create(page_content);
        lv_obj_set_name(upgrade_header_icon, "upgrade_header_icon");
        lv_image_set_src(upgrade_header_icon, meter_icon_update);
        lv_obj_set_x(upgrade_header_icon, 16);
        lv_obj_set_y(upgrade_header_icon, 12);
        lv_obj_add_style(upgrade_header_icon, &me106_theme_dark_info_icon, 0);
        lv_obj_bind_style(upgrade_header_icon, &me106_theme_light_info_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_header_icon, &me106_theme_alarm_info_icon, 0, &meter_theme_index, 2);

        lv_obj_t * settings_upgrade_title_label = lv_label_create(page_content);
        lv_obj_set_name(settings_upgrade_title_label, "settings_upgrade_title_label");
        lv_obj_set_x(settings_upgrade_title_label, 48);
        lv_obj_set_y(settings_upgrade_title_label, 11);
        lv_obj_set_width(settings_upgrade_title_label, 248);
        lv_obj_set_height(settings_upgrade_title_label, 26);
        lv_label_set_long_mode(settings_upgrade_title_label, LV_LABEL_LONG_MODE_CLIP);
        lv_label_set_text(settings_upgrade_title_label, "固件升级");
        lv_obj_add_style(settings_upgrade_title_label, &upgrade_title, 0);
        lv_obj_bind_style(settings_upgrade_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_upgrade_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_header_separator = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_header_separator, "upgrade_header_separator");
        lv_obj_set_x(upgrade_header_separator, 16);
        lv_obj_set_y(upgrade_header_separator, 44);
        lv_obj_set_width(upgrade_header_separator, 288);
        lv_obj_set_height(upgrade_header_separator, 1);
        lv_obj_set_style_border_width(upgrade_header_separator, 0, 0);
        lv_obj_set_style_pad_all(upgrade_header_separator, 0, 0);
        lv_obj_set_flag(upgrade_header_separator, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_header_separator, &upgrade_separator, 0);
        lv_obj_bind_style(upgrade_header_separator, &me106_theme_light_line, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_header_separator, &me106_theme_alarm_line, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_status_value = lv_label_create(page_content);
        lv_obj_set_name(upgrade_status_value, "upgrade_status_value");
        lv_obj_set_x(upgrade_status_value, 24);
        lv_obj_set_y(upgrade_status_value, 55);
        lv_obj_set_width(upgrade_status_value, 272);
        lv_obj_set_height(upgrade_status_value, 24);
        lv_label_set_long_mode(upgrade_status_value, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_status_value, &meter_upgrade_status_text, NULL);
        lv_obj_add_style(upgrade_status_value, &me106_text_16_cyan, 0);
        lv_obj_bind_style(upgrade_status_value, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_status_value, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_eq(upgrade_status_value, &meter_upgrade_status_error, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * upgrade_status_error_value = lv_label_create(page_content);
        lv_obj_set_name(upgrade_status_error_value, "upgrade_status_error_value");
        lv_obj_set_x(upgrade_status_error_value, 24);
        lv_obj_set_y(upgrade_status_error_value, 55);
        lv_obj_set_width(upgrade_status_error_value, 272);
        lv_obj_set_height(upgrade_status_error_value, 24);
        lv_label_set_long_mode(upgrade_status_error_value, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_status_error_value, &meter_upgrade_status_text, NULL);
        lv_obj_add_style(upgrade_status_error_value, &me106_text_16_red, 0);
        lv_obj_bind_style(upgrade_status_error_value, &me106_theme_light_status_danger, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_status_error_value, &me106_theme_alarm_status_danger, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_status_error_value, &meter_upgrade_status_error, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * upgrade_hint_group = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_hint_group, "upgrade_hint_group");
        lv_obj_set_x(upgrade_hint_group, 0);
        lv_obj_set_y(upgrade_hint_group, 0);
        lv_obj_set_width(upgrade_hint_group, 320);
        lv_obj_set_height(upgrade_hint_group, 207);
        lv_obj_set_style_border_width(upgrade_hint_group, 0, 0);
        lv_obj_set_style_pad_all(upgrade_hint_group, 0, 0);
        lv_obj_set_flag(upgrade_hint_group, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(upgrade_hint_group, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_set_style_bg_opa(upgrade_hint_group, 0, 0);
        lv_obj_bind_flag_if_eq(upgrade_hint_group, &meter_upgrade_show_firmware, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * upgrade_hint_value = lv_label_create(upgrade_hint_group);
        lv_obj_set_name(upgrade_hint_value, "upgrade_hint_value");
        lv_obj_set_x(upgrade_hint_value, 24);
        lv_obj_set_y(upgrade_hint_value, 96);
        lv_obj_set_width(upgrade_hint_value, 272);
        lv_obj_set_height(upgrade_hint_value, 60);
        lv_label_set_long_mode(upgrade_hint_value, LV_LABEL_LONG_MODE_WRAP);
        lv_label_bind_text(upgrade_hint_value, &meter_upgrade_hint_text, NULL);
        lv_obj_add_style(upgrade_hint_value, &upgrade_hint, 0);
        lv_obj_bind_style(upgrade_hint_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_hint_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_hint_current_label = lv_label_create(upgrade_hint_group);
        lv_obj_set_name(upgrade_hint_current_label, "upgrade_hint_current_label");
        lv_obj_set_x(upgrade_hint_current_label, 24);
        lv_obj_set_y(upgrade_hint_current_label, 174);
        lv_obj_set_width(upgrade_hint_current_label, 76);
        lv_obj_set_height(upgrade_hint_current_label, 22);
        lv_label_set_text(upgrade_hint_current_label, "当前版本");
        lv_obj_add_style(upgrade_hint_current_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(upgrade_hint_current_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_hint_current_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_hint_current_value = lv_label_create(upgrade_hint_group);
        lv_obj_set_name(upgrade_hint_current_value, "upgrade_hint_current_value");
        lv_obj_set_x(upgrade_hint_current_value, 108);
        lv_obj_set_y(upgrade_hint_current_value, 174);
        lv_obj_set_width(upgrade_hint_current_value, 188);
        lv_obj_set_height(upgrade_hint_current_value, 22);
        lv_label_set_long_mode(upgrade_hint_current_value, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_hint_current_value, &meter_upgrade_current_version, NULL);
        lv_obj_add_style(upgrade_hint_current_value, &me106_text_16_white_right, 0);
        lv_obj_bind_style(upgrade_hint_current_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_hint_current_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_firmware_group = lv_obj_create(page_content);
        lv_obj_set_name(upgrade_firmware_group, "upgrade_firmware_group");
        lv_obj_set_x(upgrade_firmware_group, 0);
        lv_obj_set_y(upgrade_firmware_group, 0);
        lv_obj_set_width(upgrade_firmware_group, 320);
        lv_obj_set_height(upgrade_firmware_group, 207);
        lv_obj_set_style_border_width(upgrade_firmware_group, 0, 0);
        lv_obj_set_style_pad_all(upgrade_firmware_group, 0, 0);
        lv_obj_set_flag(upgrade_firmware_group, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(upgrade_firmware_group, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_set_style_bg_opa(upgrade_firmware_group, 0, 0);
        lv_obj_bind_flag_if_not_eq(upgrade_firmware_group, &meter_upgrade_show_firmware, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * upgrade_version_band = lv_obj_create(upgrade_firmware_group);
        lv_obj_set_name(upgrade_version_band, "upgrade_version_band");
        lv_obj_set_x(upgrade_version_band, 16);
        lv_obj_set_y(upgrade_version_band, 84);
        lv_obj_set_width(upgrade_version_band, 288);
        lv_obj_set_height(upgrade_version_band, 54);
        lv_obj_set_style_border_width(upgrade_version_band, 0, 0);
        lv_obj_set_style_pad_all(upgrade_version_band, 0, 0);
        lv_obj_set_flag(upgrade_version_band, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(upgrade_version_band, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(upgrade_version_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_version_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);
        lv_obj_t * settings_upgrade_current_version_label = lv_label_create(upgrade_version_band);
        lv_obj_set_name(settings_upgrade_current_version_label, "settings_upgrade_current_version_label");
        lv_obj_set_x(settings_upgrade_current_version_label, 8);
        lv_obj_set_y(settings_upgrade_current_version_label, 4);
        lv_obj_set_width(settings_upgrade_current_version_label, 76);
        lv_obj_set_height(settings_upgrade_current_version_label, 22);
        lv_label_set_text(settings_upgrade_current_version_label, "当前版本");
        lv_obj_add_style(settings_upgrade_current_version_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_upgrade_current_version_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_upgrade_current_version_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_current_version_value = lv_label_create(upgrade_version_band);
        lv_obj_set_name(upgrade_current_version_value, "upgrade_current_version_value");
        lv_obj_set_x(upgrade_current_version_value, 92);
        lv_obj_set_y(upgrade_current_version_value, 4);
        lv_obj_set_width(upgrade_current_version_value, 188);
        lv_obj_set_height(upgrade_current_version_value, 22);
        lv_label_set_long_mode(upgrade_current_version_value, LV_LABEL_LONG_MODE_DOTS);
        lv_obj_set_style_text_align(upgrade_current_version_value, LV_TEXT_ALIGN_RIGHT, 0);
        lv_label_bind_text(upgrade_current_version_value, &meter_upgrade_current_version, NULL);
        lv_obj_add_style(upgrade_current_version_value, &me106_text_16_white_right, 0);
        lv_obj_bind_style(upgrade_current_version_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_current_version_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_upgrade_target_version_label = lv_label_create(upgrade_version_band);
        lv_obj_set_name(settings_upgrade_target_version_label, "settings_upgrade_target_version_label");
        lv_obj_set_x(settings_upgrade_target_version_label, 8);
        lv_obj_set_y(settings_upgrade_target_version_label, 28);
        lv_obj_set_width(settings_upgrade_target_version_label, 76);
        lv_obj_set_height(settings_upgrade_target_version_label, 22);
        lv_label_set_text(settings_upgrade_target_version_label, "目标版本");
        lv_obj_add_style(settings_upgrade_target_version_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_upgrade_target_version_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_upgrade_target_version_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_new_version_value = lv_label_create(upgrade_version_band);
        lv_obj_set_name(upgrade_new_version_value, "upgrade_new_version_value");
        lv_obj_set_x(upgrade_new_version_value, 92);
        lv_obj_set_y(upgrade_new_version_value, 28);
        lv_obj_set_width(upgrade_new_version_value, 188);
        lv_obj_set_height(upgrade_new_version_value, 22);
        lv_label_set_long_mode(upgrade_new_version_value, LV_LABEL_LONG_MODE_DOTS);
        lv_obj_set_style_text_align(upgrade_new_version_value, LV_TEXT_ALIGN_RIGHT, 0);
        lv_label_bind_text(upgrade_new_version_value, &meter_upgrade_new_version, NULL);
        lv_obj_add_style(upgrade_new_version_value, &me106_text_16_cyan, 0);
        lv_obj_bind_style(upgrade_new_version_value, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_new_version_value, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_upgrade_firmware_size_label = lv_label_create(upgrade_firmware_group);
        lv_obj_set_name(settings_upgrade_firmware_size_label, "settings_upgrade_firmware_size_label");
        lv_obj_set_x(settings_upgrade_firmware_size_label, 24);
        lv_obj_set_y(settings_upgrade_firmware_size_label, 145);
        lv_obj_set_width(settings_upgrade_firmware_size_label, 100);
        lv_obj_set_height(settings_upgrade_firmware_size_label, 20);
        lv_label_set_text(settings_upgrade_firmware_size_label, "固件大小");
        lv_obj_add_style(settings_upgrade_firmware_size_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_upgrade_firmware_size_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_upgrade_firmware_size_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_file_size_value = lv_label_create(upgrade_firmware_group);
        lv_obj_set_name(upgrade_file_size_value, "upgrade_file_size_value");
        lv_obj_set_x(upgrade_file_size_value, 160);
        lv_obj_set_y(upgrade_file_size_value, 145);
        lv_obj_set_width(upgrade_file_size_value, 136);
        lv_obj_set_height(upgrade_file_size_value, 20);
        lv_label_set_long_mode(upgrade_file_size_value, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_file_size_value, &meter_upgrade_file_size_text, NULL);
        lv_obj_add_style(upgrade_file_size_value, &me106_text_14_gray_ba_right, 0);
        lv_obj_bind_style(upgrade_file_size_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_file_size_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_progress_caption = lv_label_create(upgrade_firmware_group);
        lv_obj_set_name(upgrade_progress_caption, "upgrade_progress_caption");
        lv_obj_set_x(upgrade_progress_caption, 24);
        lv_obj_set_y(upgrade_progress_caption, 169);
        lv_obj_set_width(upgrade_progress_caption, 200);
        lv_obj_set_height(upgrade_progress_caption, 20);
        lv_label_set_long_mode(upgrade_progress_caption, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_progress_caption, &meter_upgrade_progress_caption, NULL);
        lv_obj_add_style(upgrade_progress_caption, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(upgrade_progress_caption, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_caption, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_progress_value = lv_label_create(upgrade_firmware_group);
        lv_obj_set_name(upgrade_progress_value, "upgrade_progress_value");
        lv_obj_set_x(upgrade_progress_value, 240);
        lv_obj_set_y(upgrade_progress_value, 169);
        lv_obj_set_width(upgrade_progress_value, 56);
        lv_obj_set_height(upgrade_progress_value, 20);
        lv_label_bind_text(upgrade_progress_value, &meter_upgrade_progress_text, NULL);
        lv_obj_add_style(upgrade_progress_value, &me106_text_14_white_right, 0);
        lv_obj_bind_style(upgrade_progress_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_progress_bar = lv_bar_create(upgrade_firmware_group);
        lv_obj_set_name(upgrade_progress_bar, "upgrade_progress_bar");
        lv_obj_set_x(upgrade_progress_bar, 24);
        lv_obj_set_y(upgrade_progress_bar, 192);
        lv_obj_set_width(upgrade_progress_bar, 272);
        lv_obj_set_height(upgrade_progress_bar, 6);
        lv_bar_bind_value(upgrade_progress_bar, &meter_upgrade_progress);
        lv_bar_set_min_value(upgrade_progress_bar, 0);
        lv_bar_set_max_value(upgrade_progress_bar, 100);
        lv_obj_set_style_radius(upgrade_progress_bar, 3, 0);
        lv_obj_set_style_border_width(upgrade_progress_bar, 0, 0);
        lv_obj_set_style_pad_all(upgrade_progress_bar, 0, 0);
        lv_obj_set_style_radius(upgrade_progress_bar, 3, LV_PART_INDICATOR);
        lv_obj_add_style(upgrade_progress_bar, &me106_theme_dark_control_track, 0);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_light_control_track, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_alarm_control_track, 0, &meter_theme_index, 2);
        lv_obj_add_style(upgrade_progress_bar, &me106_slider_indicator, LV_PART_INDICATOR);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_light_slider_indicator, LV_PART_INDICATOR, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_progress_bar, &me106_theme_alarm_slider_indicator, LV_PART_INDICATOR, &meter_theme_index, 2);

        lv_obj_t * screen_settings_upgrade_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_upgrade_bottom_bar, "screen_settings_upgrade_bottom_bar");
        lv_obj_set_x(screen_settings_upgrade_bottom_bar, 0);
        lv_obj_set_y(screen_settings_upgrade_bottom_bar, 207);
        lv_obj_set_width(screen_settings_upgrade_bottom_bar, 320);
        lv_obj_set_height(screen_settings_upgrade_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_upgrade_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_upgrade_bottom_bar, 0, 0);
        lv_obj_set_style_radius(screen_settings_upgrade_bottom_bar, 0, 0);
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
        lv_obj_set_style_pad_all(upgrade_btn_return, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_return, 0, 0);
        lv_obj_add_style(upgrade_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_bind_state_if_eq(upgrade_btn_return, &meter_upgrade_busy, LV_STATE_DISABLED, 1);
        lv_obj_t * upgrade_return_icon = lv_image_create(upgrade_btn_return);
        lv_obj_set_name(upgrade_return_icon, "upgrade_return_icon");
        lv_image_set_src(upgrade_return_icon, meter_icon_return);
        lv_obj_set_align(upgrade_return_icon, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(upgrade_return_icon, 8, 0);
        lv_obj_set_style_transform_pivot_y(upgrade_return_icon, 7, 0);
        lv_obj_set_style_transform_scale_x(upgrade_return_icon, 230, 0);
        lv_obj_set_style_transform_scale_y(upgrade_return_icon, 230, 0);

        lv_obj_add_screen_create_event(upgrade_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * upgrade_btn_placeholder_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_placeholder_1, "upgrade_btn_placeholder_1");
        lv_obj_set_x(upgrade_btn_placeholder_1, 80);
        lv_obj_set_y(upgrade_btn_placeholder_1, 207);
        lv_obj_set_width(upgrade_btn_placeholder_1, 79);
        lv_obj_set_height(upgrade_btn_placeholder_1, 32);
        lv_obj_set_style_pad_all(upgrade_btn_placeholder_1, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_placeholder_1, 0, 0);
        lv_obj_set_flag(upgrade_btn_placeholder_1, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_add_style(upgrade_btn_placeholder_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_btn_recheck = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_recheck, "upgrade_btn_recheck");
        lv_obj_set_x(upgrade_btn_recheck, 160);
        lv_obj_set_y(upgrade_btn_recheck, 207);
        lv_obj_set_width(upgrade_btn_recheck, 79);
        lv_obj_set_height(upgrade_btn_recheck, 32);
        lv_obj_set_style_pad_all(upgrade_btn_recheck, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_recheck, 0, 0);
        lv_obj_add_style(upgrade_btn_recheck, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_btn_recheck, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_recheck, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * upgrade_recheck_label = lv_label_create(upgrade_btn_recheck);
        lv_obj_set_name(upgrade_recheck_label, "upgrade_recheck_label");
        lv_obj_set_align(upgrade_recheck_label, LV_ALIGN_CENTER);
        lv_obj_set_y(upgrade_recheck_label, 1);
        lv_obj_set_width(upgrade_recheck_label, 63);
        lv_obj_set_height(upgrade_recheck_label, LV_SIZE_CONTENT);
        lv_label_set_long_mode(upgrade_recheck_label, LV_LABEL_LONG_MODE_CLIP);
        lv_label_set_text(upgrade_recheck_label, "重新检查");
        lv_obj_add_style(upgrade_recheck_label, &me106_text_14_white_center, 0);

        lv_obj_bind_flag_if_not_eq(upgrade_btn_recheck, &meter_upgrade_can_recheck, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_bind_state_if_eq(upgrade_btn_recheck, &meter_upgrade_busy, LV_STATE_DISABLED, 1);
        lv_obj_add_subject_set_int_event(upgrade_btn_recheck, &meter_upgrade_request, LV_EVENT_CLICKED, 1);

        lv_obj_t * upgrade_primary_disabled = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_primary_disabled, "upgrade_primary_disabled");
        lv_obj_set_x(upgrade_primary_disabled, 240);
        lv_obj_set_y(upgrade_primary_disabled, 207);
        lv_obj_set_width(upgrade_primary_disabled, 80);
        lv_obj_set_height(upgrade_primary_disabled, 32);
        lv_obj_set_style_border_width(upgrade_primary_disabled, 0, 0);
        lv_obj_set_style_pad_all(upgrade_primary_disabled, 0, 0);
        lv_obj_set_style_radius(upgrade_primary_disabled, 0, 0);
        lv_obj_set_flag(upgrade_primary_disabled, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(upgrade_primary_disabled, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_add_style(upgrade_primary_disabled, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_primary_disabled, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_primary_disabled, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_primary_disabled, &meter_upgrade_primary_mode, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * upgrade_primary_disabled_text = lv_label_create(upgrade_primary_disabled);
        lv_obj_set_name(upgrade_primary_disabled_text, "upgrade_primary_disabled_text");
        lv_label_bind_text(upgrade_primary_disabled_text, &meter_upgrade_primary_text, NULL);
        lv_obj_set_align(upgrade_primary_disabled_text, LV_ALIGN_CENTER);
        lv_obj_set_y(upgrade_primary_disabled_text, 1);
        lv_obj_set_width(upgrade_primary_disabled_text, 64);
        lv_obj_set_height(upgrade_primary_disabled_text, LV_SIZE_CONTENT);
        lv_label_set_long_mode(upgrade_primary_disabled_text, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(upgrade_primary_disabled_text, &me106_text_14_white_center, 0);
        lv_obj_bind_style(upgrade_primary_disabled_text, &me106_theme_light_on_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_primary_disabled_text, &me106_theme_alarm_on_accent, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_yes, "upgrade_btn_yes");
        lv_obj_set_x(upgrade_btn_yes, 240);
        lv_obj_set_y(upgrade_btn_yes, 207);
        lv_obj_set_width(upgrade_btn_yes, 80);
        lv_obj_set_height(upgrade_btn_yes, 32);
        lv_obj_set_style_pad_all(upgrade_btn_yes, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_yes, 0, 0);
        lv_obj_add_style(upgrade_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * upgrade_primary_check_label = lv_label_create(upgrade_btn_yes);
        lv_obj_set_name(upgrade_primary_check_label, "upgrade_primary_check_label");
        lv_obj_set_align(upgrade_primary_check_label, LV_ALIGN_CENTER);
        lv_obj_set_y(upgrade_primary_check_label, 1);
        lv_obj_set_width(upgrade_primary_check_label, 64);
        lv_obj_set_height(upgrade_primary_check_label, LV_SIZE_CONTENT);
        lv_label_set_long_mode(upgrade_primary_check_label, LV_LABEL_LONG_MODE_CLIP);
        lv_label_bind_text(upgrade_primary_check_label, &meter_upgrade_primary_text, NULL);
        lv_obj_add_style(upgrade_primary_check_label, &me106_text_14_white_center, 0);

        lv_obj_bind_flag_if_not_eq(upgrade_btn_yes, &meter_upgrade_primary_mode, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_bind_state_if_eq(upgrade_btn_yes, &meter_upgrade_busy, LV_STATE_DISABLED, 1);
        lv_obj_add_subject_set_int_event(upgrade_btn_yes, &meter_upgrade_request, LV_EVENT_CLICKED, 1);

        lv_obj_t * upgrade_btn_go_wifi = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_go_wifi, "upgrade_btn_go_wifi");
        lv_obj_set_x(upgrade_btn_go_wifi, 240);
        lv_obj_set_y(upgrade_btn_go_wifi, 207);
        lv_obj_set_width(upgrade_btn_go_wifi, 80);
        lv_obj_set_height(upgrade_btn_go_wifi, 32);
        lv_obj_set_style_pad_all(upgrade_btn_go_wifi, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_go_wifi, 0, 0);
        lv_obj_add_style(upgrade_btn_go_wifi, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_go_wifi, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_go_wifi, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * upgrade_go_wifi_label = lv_label_create(upgrade_btn_go_wifi);
        lv_obj_set_name(upgrade_go_wifi_label, "upgrade_go_wifi_label");
        lv_obj_set_align(upgrade_go_wifi_label, LV_ALIGN_CENTER);
        lv_obj_set_y(upgrade_go_wifi_label, 1);
        lv_obj_set_width(upgrade_go_wifi_label, 64);
        lv_obj_set_height(upgrade_go_wifi_label, LV_SIZE_CONTENT);
        lv_label_set_long_mode(upgrade_go_wifi_label, LV_LABEL_LONG_MODE_CLIP);
        lv_label_set_text(upgrade_go_wifi_label, "去联网");
        lv_obj_add_style(upgrade_go_wifi_label, &me106_text_14_white_center, 0);

        lv_obj_bind_flag_if_not_eq(upgrade_btn_go_wifi, &meter_upgrade_primary_mode, LV_OBJ_FLAG_HIDDEN, 2);
        lv_obj_bind_state_if_eq(upgrade_btn_go_wifi, &meter_upgrade_busy, LV_STATE_DISABLED, 1);
        lv_obj_add_screen_create_event(upgrade_btn_go_wifi, LV_EVENT_CLICKED, screen_settings_wifi_manage_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * upgrade_btn_yes_start = lv_button_create(lv_obj_0);
        lv_obj_set_name(upgrade_btn_yes_start, "upgrade_btn_yes_start");
        lv_obj_set_x(upgrade_btn_yes_start, 240);
        lv_obj_set_y(upgrade_btn_yes_start, 207);
        lv_obj_set_width(upgrade_btn_yes_start, 80);
        lv_obj_set_height(upgrade_btn_yes_start, 32);
        lv_obj_set_style_pad_all(upgrade_btn_yes_start, 0, 0);
        lv_obj_set_style_border_width(upgrade_btn_yes_start, 0, 0);
        lv_obj_add_style(upgrade_btn_yes_start, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_btn_yes_start, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_btn_yes_start, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * upgrade_start_label = lv_label_create(upgrade_btn_yes_start);
        lv_obj_set_name(upgrade_start_label, "upgrade_start_label");
        lv_obj_set_align(upgrade_start_label, LV_ALIGN_CENTER);
        lv_obj_set_y(upgrade_start_label, 1);
        lv_obj_set_width(upgrade_start_label, 64);
        lv_obj_set_height(upgrade_start_label, LV_SIZE_CONTENT);
        lv_label_set_long_mode(upgrade_start_label, LV_LABEL_LONG_MODE_CLIP);
        lv_label_set_text(upgrade_start_label, "升级");
        lv_obj_add_style(upgrade_start_label, &me106_text_14_white_center, 0);

        lv_obj_bind_flag_if_not_eq(upgrade_btn_yes_start, &meter_upgrade_primary_mode, LV_OBJ_FLAG_HIDDEN, 3);
        lv_obj_bind_state_if_eq(upgrade_btn_yes_start, &meter_upgrade_busy, LV_STATE_DISABLED, 1);
        lv_obj_add_subject_set_int_event(upgrade_btn_yes_start, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 1);

        lv_obj_t * upgrade_busy_guard = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_busy_guard, "upgrade_busy_guard");
        lv_obj_set_x(upgrade_busy_guard, 0);
        lv_obj_set_y(upgrade_busy_guard, 207);
        lv_obj_set_width(upgrade_busy_guard, 320);
        lv_obj_set_height(upgrade_busy_guard, 33);
        lv_obj_set_style_border_width(upgrade_busy_guard, 0, 0);
        lv_obj_set_style_pad_all(upgrade_busy_guard, 0, 0);
        lv_obj_set_style_radius(upgrade_busy_guard, 0, 0);
        lv_obj_set_flag(upgrade_busy_guard, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(upgrade_busy_guard, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_add_style(upgrade_busy_guard, &me106_theme_dark_busy_guard, 0);
        lv_obj_bind_style(upgrade_busy_guard, &me106_theme_light_busy_guard, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_busy_guard, &me106_theme_alarm_busy_guard, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_busy_guard, &meter_upgrade_busy, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * lv_label_0 = lv_label_create(upgrade_busy_guard);
        lv_label_set_text(lv_label_0, "升级中，请勿断电");
        lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_label_0, 1);
        lv_obj_set_width(lv_label_0, 320);
        lv_obj_set_height(lv_label_0, LV_SIZE_CONTENT);
        lv_obj_add_style(lv_label_0, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_overlay = lv_obj_create(lv_obj_0);
        lv_obj_set_name(upgrade_confirm_overlay, "upgrade_confirm_overlay");
        lv_obj_set_x(upgrade_confirm_overlay, 0);
        lv_obj_set_y(upgrade_confirm_overlay, 45);
        lv_obj_set_width(upgrade_confirm_overlay, 320);
        lv_obj_set_height(upgrade_confirm_overlay, 195);
        lv_obj_set_style_border_width(upgrade_confirm_overlay, 0, 0);
        lv_obj_set_style_pad_all(upgrade_confirm_overlay, 0, 0);
        lv_obj_set_style_radius(upgrade_confirm_overlay, 0, 0);
        lv_obj_set_flag(upgrade_confirm_overlay, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(upgrade_confirm_overlay, LV_OBJ_FLAG_CLICKABLE, true);
        lv_obj_add_style(upgrade_confirm_overlay, &me106_fill_black, 0);
        lv_obj_bind_style(upgrade_confirm_overlay, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_overlay, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(upgrade_confirm_overlay, &meter_upgrade_confirm_popup, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * upgrade_confirm_title = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_title, "upgrade_confirm_title");
        lv_obj_set_x(upgrade_confirm_title, 24);
        lv_obj_set_y(upgrade_confirm_title, 12);
        lv_obj_set_width(upgrade_confirm_title, 272);
        lv_obj_set_height(upgrade_confirm_title, 26);
        lv_label_set_text(upgrade_confirm_title, "确认升级此固件？");
        lv_obj_add_style(upgrade_confirm_title, &me106_text_18_cyan, 0);
        lv_obj_bind_style(upgrade_confirm_title, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_title, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_current_label = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_current_label, "upgrade_confirm_current_label");
        lv_obj_set_x(upgrade_confirm_current_label, 24);
        lv_obj_set_y(upgrade_confirm_current_label, 50);
        lv_obj_set_width(upgrade_confirm_current_label, 54);
        lv_obj_set_height(upgrade_confirm_current_label, 22);
        lv_label_set_text(upgrade_confirm_current_label, "当前：");
        lv_obj_add_style(upgrade_confirm_current_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(upgrade_confirm_current_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_current_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_current_value = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_current_value, "upgrade_confirm_current_value");
        lv_obj_set_x(upgrade_confirm_current_value, 82);
        lv_obj_set_y(upgrade_confirm_current_value, 49);
        lv_obj_set_width(upgrade_confirm_current_value, 214);
        lv_obj_set_height(upgrade_confirm_current_value, 22);
        lv_label_set_long_mode(upgrade_confirm_current_value, LV_LABEL_LONG_MODE_DOTS);
        lv_label_bind_text(upgrade_confirm_current_value, &meter_upgrade_current_version, NULL);
        lv_obj_add_style(upgrade_confirm_current_value, &me106_text_16_white, 0);
        lv_obj_bind_style(upgrade_confirm_current_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_current_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_target_label = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_target_label, "upgrade_confirm_target_label");
        lv_obj_set_x(upgrade_confirm_target_label, 24);
        lv_obj_set_y(upgrade_confirm_target_label, 80);
        lv_obj_set_width(upgrade_confirm_target_label, 54);
        lv_obj_set_height(upgrade_confirm_target_label, 22);
        lv_label_set_text(upgrade_confirm_target_label, "目标：");
        lv_obj_add_style(upgrade_confirm_target_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(upgrade_confirm_target_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_target_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_target_value = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_target_value, "upgrade_confirm_target_value");
        lv_obj_set_x(upgrade_confirm_target_value, 82);
        lv_obj_set_y(upgrade_confirm_target_value, 79);
        lv_obj_set_width(upgrade_confirm_target_value, 214);
        lv_obj_set_height(upgrade_confirm_target_value, 42);
        lv_label_set_long_mode(upgrade_confirm_target_value, LV_LABEL_LONG_MODE_WRAP);
        lv_label_bind_text(upgrade_confirm_target_value, &meter_upgrade_new_version, NULL);
        lv_obj_add_style(upgrade_confirm_target_value, &me106_text_16_white, 0);
        lv_obj_bind_style(upgrade_confirm_target_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_target_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_power_hint = lv_label_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_power_hint, "upgrade_confirm_power_hint");
        lv_obj_set_x(upgrade_confirm_power_hint, 24);
        lv_obj_set_y(upgrade_confirm_power_hint, 126);
        lv_obj_set_width(upgrade_confirm_power_hint, 272);
        lv_obj_set_height(upgrade_confirm_power_hint, 22);
        lv_label_set_long_mode(upgrade_confirm_power_hint, LV_LABEL_LONG_MODE_WRAP);
        lv_label_set_text(upgrade_confirm_power_hint, "升级后自动重启，请保持供电。");
        lv_obj_add_style(upgrade_confirm_power_hint, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(upgrade_confirm_power_hint, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_power_hint, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * upgrade_confirm_cancel = lv_button_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_cancel, "upgrade_confirm_cancel");
        lv_obj_set_x(upgrade_confirm_cancel, 0);
        lv_obj_set_y(upgrade_confirm_cancel, 162);
        lv_obj_set_width(upgrade_confirm_cancel, 159);
        lv_obj_set_height(upgrade_confirm_cancel, 32);
        lv_obj_set_style_pad_all(upgrade_confirm_cancel, 0, 0);
        lv_obj_set_style_border_width(upgrade_confirm_cancel, 0, 0);
        lv_obj_add_style(upgrade_confirm_cancel, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(upgrade_confirm_cancel, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_cancel, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_label_1 = lv_label_create(upgrade_confirm_cancel);
        lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_label_1, 1);
        lv_obj_set_width(lv_label_1, 159);
        lv_obj_set_height(lv_label_1, LV_SIZE_CONTENT);
        lv_label_set_text(lv_label_1, "取消");
        lv_obj_add_style(lv_label_1, &me106_text_14_white_center, 0);

        lv_obj_add_subject_set_int_event(upgrade_confirm_cancel, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 0);

        lv_obj_t * upgrade_confirm_yes = lv_button_create(upgrade_confirm_overlay);
        lv_obj_set_name(upgrade_confirm_yes, "upgrade_confirm_yes");
        lv_obj_set_x(upgrade_confirm_yes, 160);
        lv_obj_set_y(upgrade_confirm_yes, 162);
        lv_obj_set_width(upgrade_confirm_yes, 160);
        lv_obj_set_height(upgrade_confirm_yes, 32);
        lv_obj_set_style_pad_all(upgrade_confirm_yes, 0, 0);
        lv_obj_set_style_border_width(upgrade_confirm_yes, 0, 0);
        lv_obj_add_style(upgrade_confirm_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(upgrade_confirm_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(upgrade_confirm_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_label_2 = lv_label_create(upgrade_confirm_yes);
        lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_label_2, 1);
        lv_obj_set_width(lv_label_2, 160);
        lv_obj_set_height(lv_label_2, LV_SIZE_CONTENT);
        lv_label_set_text(lv_label_2, "确认升级");
        lv_obj_add_style(lv_label_2, &me106_text_14_white_center, 0);

        lv_obj_add_subject_set_int_event(upgrade_confirm_yes, &meter_upgrade_confirm_popup, LV_EVENT_CLICKED, 0);
        lv_obj_add_subject_set_int_event(upgrade_confirm_yes, &meter_upgrade_request, LV_EVENT_CLICKED, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

