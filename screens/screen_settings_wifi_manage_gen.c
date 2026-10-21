/**
 * @file screen_settings_wifi_manage_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_wifi_manage_gen.h"
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

lv_obj_t * screen_settings_wifi_manage_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_wifi_manage_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_wifi_manage_action, LV_EVENT_SCREEN_LOADED, 0);
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
        lv_obj_t * settings_wifi_manage_title_label = lv_label_create(page_content);
        lv_label_set_text(settings_wifi_manage_title_label, "WiFi信息");
        lv_obj_set_x(settings_wifi_manage_title_label, 152);
        lv_obj_set_y(settings_wifi_manage_title_label, 17);
        lv_obj_set_width(settings_wifi_manage_title_label, 144);
        lv_obj_set_name(settings_wifi_manage_title_label, "settings_wifi_manage_title_label");
        lv_obj_add_style(settings_wifi_manage_title_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_manage_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_icon_halo = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_icon_halo, "wifi_manage_icon_halo");
        lv_obj_set_x(wifi_manage_icon_halo, 24);
        lv_obj_set_y(wifi_manage_icon_halo, 42);
        lv_obj_set_width(wifi_manage_icon_halo, 42);
        lv_obj_set_height(wifi_manage_icon_halo, 42);
        lv_obj_set_style_radius(wifi_manage_icon_halo, 12, 0);
        lv_obj_set_style_border_width(wifi_manage_icon_halo, 0, 0);
        lv_obj_set_style_pad_all(wifi_manage_icon_halo, 0, 0);
        lv_obj_set_flag(wifi_manage_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_manage_icon_halo, &me106_theme_dark_info_soft, 0);
        lv_obj_bind_style(wifi_manage_icon_halo, &me106_theme_light_info_soft, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_icon_halo, &me106_theme_alarm_info_soft, 0, &meter_theme_index, 2);

        lv_obj_t * lv_image_0 = lv_image_create(page_content);
        lv_image_set_src(lv_image_0, meter_icon_wifi);
        lv_obj_set_x(lv_image_0, 35);
        lv_obj_set_y(lv_image_0, 53);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 8, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 220, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 220, 0);
        lv_obj_add_style(lv_image_0, &me106_theme_dark_info_icon, 0);
        lv_obj_bind_style(lv_image_0, &me106_theme_light_info_icon, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_image_0, &me106_theme_alarm_info_icon, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_content_label = lv_label_create(page_content);
        lv_label_set_text(settings_wifi_manage_content_label, "网络信息");
        lv_obj_set_x(settings_wifi_manage_content_label, 82);
        lv_obj_set_y(settings_wifi_manage_content_label, 46);
        lv_obj_set_width(settings_wifi_manage_content_label, 92);
        lv_obj_set_name(settings_wifi_manage_content_label, "settings_wifi_manage_content_label");
        lv_obj_add_style(settings_wifi_manage_content_label, &me106_text_18_cyan, 0);
        lv_obj_bind_style(settings_wifi_manage_content_label, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_content_label, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_manage_status_value = lv_label_create(page_content);
        lv_label_bind_text(settings_wifi_manage_manage_status_value, &meter_wifi_manage_status_text, NULL);
        lv_obj_set_x(settings_wifi_manage_manage_status_value, 82);
        lv_obj_set_y(settings_wifi_manage_manage_status_value, 71);
        lv_obj_set_width(settings_wifi_manage_manage_status_value, 170);
        lv_obj_set_name(settings_wifi_manage_manage_status_value, "settings_wifi_manage_manage_status_value");
        lv_obj_add_style(settings_wifi_manage_manage_status_value, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_status_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_status_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_info_band = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_info_band, "wifi_manage_info_band");
        lv_obj_set_x(wifi_manage_info_band, 24);
        lv_obj_set_y(wifi_manage_info_band, 96);
        lv_obj_set_width(wifi_manage_info_band, 272);
        lv_obj_set_height(wifi_manage_info_band, 74);
        lv_obj_set_style_pad_all(wifi_manage_info_band, 0, 0);
        lv_obj_set_flag(wifi_manage_info_band, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_manage_info_band, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(wifi_manage_info_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_info_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_source_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_source_dot, "wifi_manage_source_dot");
        lv_obj_set_x(wifi_manage_source_dot, 40);
        lv_obj_set_y(wifi_manage_source_dot, 111);
        lv_obj_set_width(wifi_manage_source_dot, 7);
        lv_obj_set_height(wifi_manage_source_dot, 7);
        lv_obj_set_style_radius(wifi_manage_source_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_manage_source_dot, 0, 0);
        lv_obj_set_flag(wifi_manage_source_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_manage_source_dot, &me106_theme_dark_info, 0);
        lv_obj_bind_style(wifi_manage_source_dot, &me106_theme_light_info, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_source_dot, &me106_theme_alarm_info, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_source_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_source_panel, "wifi_manage_source_panel");
        lv_obj_set_x(wifi_manage_source_panel, 56);
        lv_obj_set_y(wifi_manage_source_panel, 102);
        lv_obj_set_width(wifi_manage_source_panel, 224);
        lv_obj_set_height(wifi_manage_source_panel, 22);
        lv_obj_set_style_bg_opa(wifi_manage_source_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_manage_source_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_manage_source_panel, 0, 0);
        lv_obj_set_flag(wifi_manage_source_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_wifi_manage_manage_source_hotspot_label = lv_label_create(wifi_manage_source_panel);
        lv_label_set_text(settings_wifi_manage_manage_source_hotspot_label, "热点");
        lv_obj_set_align(settings_wifi_manage_manage_source_hotspot_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_source_hotspot_label, 0);
        lv_obj_set_y(settings_wifi_manage_manage_source_hotspot_label, 0);
        lv_obj_set_width(settings_wifi_manage_manage_source_hotspot_label, 82);
        lv_obj_set_name(settings_wifi_manage_manage_source_hotspot_label, "settings_wifi_manage_manage_source_hotspot_label");
        lv_obj_add_style(settings_wifi_manage_manage_source_hotspot_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_source_hotspot_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_source_hotspot_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value = lv_label_create(wifi_manage_source_panel);
        lv_label_bind_text(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, &meter_wifi_manage_hotspot_state_text, NULL);
        lv_obj_set_align(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, 0);
        lv_obj_set_y(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, 0);
        lv_obj_set_width(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, 224);
        lv_obj_set_name(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, "settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value");
        lv_obj_add_style(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_source_wifi_manage_hotspot_state_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_ssid_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_ssid_dot, "wifi_manage_ssid_dot");
        lv_obj_set_x(wifi_manage_ssid_dot, 40);
        lv_obj_set_y(wifi_manage_ssid_dot, 135);
        lv_obj_set_width(wifi_manage_ssid_dot, 7);
        lv_obj_set_height(wifi_manage_ssid_dot, 7);
        lv_obj_set_style_radius(wifi_manage_ssid_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_manage_ssid_dot, 0, 0);
        lv_obj_set_flag(wifi_manage_ssid_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_manage_ssid_dot, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(wifi_manage_ssid_dot, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_ssid_dot, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_ssid_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_ssid_panel, "wifi_manage_ssid_panel");
        lv_obj_set_x(wifi_manage_ssid_panel, 56);
        lv_obj_set_y(wifi_manage_ssid_panel, 126);
        lv_obj_set_width(wifi_manage_ssid_panel, 224);
        lv_obj_set_height(wifi_manage_ssid_panel, 22);
        lv_obj_set_style_bg_opa(wifi_manage_ssid_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_manage_ssid_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_manage_ssid_panel, 0, 0);
        lv_obj_set_flag(wifi_manage_ssid_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_wifi_manage_manage_ssid_password_label = lv_label_create(wifi_manage_ssid_panel);
        lv_label_set_text(settings_wifi_manage_manage_ssid_password_label, "密码");
        lv_obj_set_align(settings_wifi_manage_manage_ssid_password_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_ssid_password_label, 0);
        lv_obj_set_y(settings_wifi_manage_manage_ssid_password_label, 0);
        lv_obj_set_width(settings_wifi_manage_manage_ssid_password_label, 82);
        lv_obj_set_name(settings_wifi_manage_manage_ssid_password_label, "settings_wifi_manage_manage_ssid_password_label");
        lv_obj_add_style(settings_wifi_manage_manage_ssid_password_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_ssid_password_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_ssid_password_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_manage_ssid_wifi_manage_password_state_value = lv_label_create(wifi_manage_ssid_panel);
        lv_label_bind_text(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, &meter_wifi_manage_password_state_text, NULL);
        lv_obj_set_align(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, 0);
        lv_obj_set_y(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, 0);
        lv_obj_set_width(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, 224);
        lv_obj_set_name(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, "settings_wifi_manage_manage_ssid_wifi_manage_password_state_value");
        lv_obj_add_style(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_ssid_wifi_manage_password_state_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_pass_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_pass_dot, "wifi_manage_pass_dot");
        lv_obj_set_x(wifi_manage_pass_dot, 40);
        lv_obj_set_y(wifi_manage_pass_dot, 159);
        lv_obj_set_width(wifi_manage_pass_dot, 7);
        lv_obj_set_height(wifi_manage_pass_dot, 7);
        lv_obj_set_style_radius(wifi_manage_pass_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_manage_pass_dot, 0, 0);
        lv_obj_set_flag(wifi_manage_pass_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_manage_pass_dot, &me106_theme_dark_success, 0);
        lv_obj_bind_style(wifi_manage_pass_dot, &me106_theme_light_success, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_pass_dot, &me106_theme_alarm_success, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_pass_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_manage_pass_panel, "wifi_manage_pass_panel");
        lv_obj_set_x(wifi_manage_pass_panel, 56);
        lv_obj_set_y(wifi_manage_pass_panel, 150);
        lv_obj_set_width(wifi_manage_pass_panel, 224);
        lv_obj_set_height(wifi_manage_pass_panel, 22);
        lv_obj_set_style_bg_opa(wifi_manage_pass_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_manage_pass_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_manage_pass_panel, 0, 0);
        lv_obj_set_flag(wifi_manage_pass_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * settings_wifi_manage_manage_pass_ip_label = lv_label_create(wifi_manage_pass_panel);
        lv_label_set_text(settings_wifi_manage_manage_pass_ip_label, "IP");
        lv_obj_set_align(settings_wifi_manage_manage_pass_ip_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_pass_ip_label, 0);
        lv_obj_set_y(settings_wifi_manage_manage_pass_ip_label, 0);
        lv_obj_set_width(settings_wifi_manage_manage_pass_ip_label, 82);
        lv_obj_set_name(settings_wifi_manage_manage_pass_ip_label, "settings_wifi_manage_manage_pass_ip_label");
        lv_obj_add_style(settings_wifi_manage_manage_pass_ip_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_pass_ip_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_pass_ip_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_manage_pass_wifi_manage_ip_value = lv_label_create(wifi_manage_pass_panel);
        lv_label_bind_text(settings_wifi_manage_manage_pass_wifi_manage_ip_value, &meter_wifi_manage_ip_text, NULL);
        lv_obj_set_align(settings_wifi_manage_manage_pass_wifi_manage_ip_value, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(settings_wifi_manage_manage_pass_wifi_manage_ip_value, 0);
        lv_obj_set_y(settings_wifi_manage_manage_pass_wifi_manage_ip_value, 0);
        lv_obj_set_width(settings_wifi_manage_manage_pass_wifi_manage_ip_value, 224);
        lv_obj_set_name(settings_wifi_manage_manage_pass_wifi_manage_ip_value, "settings_wifi_manage_manage_pass_wifi_manage_ip_value");
        lv_obj_add_style(settings_wifi_manage_manage_pass_wifi_manage_ip_value, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_manage_manage_pass_wifi_manage_ip_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_manage_pass_wifi_manage_ip_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_manage_content_label_2 = lv_label_create(page_content);
        lv_label_set_text(settings_wifi_manage_content_label_2, "请用上位机配置");
        lv_obj_set_x(settings_wifi_manage_content_label_2, 24);
        lv_obj_set_y(settings_wifi_manage_content_label_2, 184);
        lv_obj_set_width(settings_wifi_manage_content_label_2, 272);
        lv_obj_set_name(settings_wifi_manage_content_label_2, "settings_wifi_manage_content_label_2");
        lv_obj_add_style(settings_wifi_manage_content_label_2, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_wifi_manage_content_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_manage_content_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_settings_wifi_manage_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_wifi_manage_bottom_bar, "screen_settings_wifi_manage_bottom_bar");
        lv_obj_set_x(screen_settings_wifi_manage_bottom_bar, 0);
        lv_obj_set_y(screen_settings_wifi_manage_bottom_bar, 207);
        lv_obj_set_width(screen_settings_wifi_manage_bottom_bar, 320);
        lv_obj_set_height(screen_settings_wifi_manage_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_wifi_manage_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_wifi_manage_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_wifi_manage_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_wifi_manage_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_wifi_manage_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_wifi_manage_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_manage_btn_return, "wifi_manage_btn_return");
        lv_obj_set_x(wifi_manage_btn_return, 0);
        lv_obj_set_y(wifi_manage_btn_return, 207);
        lv_obj_set_width(wifi_manage_btn_return, 79);
        lv_obj_set_height(wifi_manage_btn_return, 32);
        lv_obj_add_style(wifi_manage_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_manage_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(wifi_manage_btn_return);
        lv_image_set_src(lv_image_1, meter_icon_return);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_obj_add_screen_create_event(wifi_manage_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * wifi_manage_btn_placeholder_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_manage_btn_placeholder_1, "wifi_manage_btn_placeholder_1");
        lv_obj_set_x(wifi_manage_btn_placeholder_1, 80);
        lv_obj_set_y(wifi_manage_btn_placeholder_1, 207);
        lv_obj_set_width(wifi_manage_btn_placeholder_1, 79);
        lv_obj_set_height(wifi_manage_btn_placeholder_1, 32);
        lv_obj_add_style(wifi_manage_btn_placeholder_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_manage_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_manage_btn_disconnect = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_manage_btn_disconnect, "wifi_manage_btn_disconnect");
        lv_obj_set_x(wifi_manage_btn_disconnect, 160);
        lv_obj_set_y(wifi_manage_btn_disconnect, 207);
        lv_obj_set_width(wifi_manage_btn_disconnect, 79);
        lv_obj_set_height(wifi_manage_btn_disconnect, 32);
        lv_obj_add_style(wifi_manage_btn_disconnect, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_manage_btn_disconnect, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_btn_disconnect, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(wifi_manage_btn_disconnect);
        lv_image_set_src(lv_image_2, meter_icon_wifi_disconnect);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 16, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 16, 0);

        lv_obj_add_subject_set_int_event(wifi_manage_btn_disconnect, &meter_wifi_manage_action, LV_EVENT_CLICKED, 1);

        lv_obj_t * wifi_manage_btn_connect = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_manage_btn_connect, "wifi_manage_btn_connect");
        lv_obj_set_x(wifi_manage_btn_connect, 240);
        lv_obj_set_y(wifi_manage_btn_connect, 207);
        lv_obj_set_width(wifi_manage_btn_connect, 80);
        lv_obj_set_height(wifi_manage_btn_connect, 32);
        lv_obj_add_style(wifi_manage_btn_connect, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(wifi_manage_btn_connect, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_manage_btn_connect, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(wifi_manage_btn_connect);
        lv_image_set_src(lv_image_3, meter_icon_wifi_connect);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 16, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 16, 0);

        lv_obj_add_subject_set_int_event(wifi_manage_btn_connect, &meter_wifi_manage_action, LV_EVENT_CLICKED, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

