/**
 * @file screen_settings_wifi_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_wifi_gen.h"
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

lv_obj_t * screen_settings_wifi_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_wifi_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_wifi_page_index, LV_EVENT_SCREEN_LOADED, 0);
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
        lv_obj_t * wifi_info_page = lv_obj_create(page_content);
        lv_obj_set_name(wifi_info_page, "wifi_info_page");
        lv_obj_set_x(wifi_info_page, 0);
        lv_obj_set_y(wifi_info_page, 0);
        lv_obj_set_width(wifi_info_page, 320);
        lv_obj_set_height(wifi_info_page, 207);
        lv_obj_set_style_bg_opa(wifi_info_page, 0, 0);
        lv_obj_set_style_border_width(wifi_info_page, 0, 0);
        lv_obj_set_style_pad_all(wifi_info_page, 0, 0);
        lv_obj_set_flag(wifi_info_page, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_flag_if_not_eq(wifi_info_page, &meter_wifi_page_index, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * settings_wifi_wifi_info_wlan_info_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_wlan_info_label, "WLAN信息");
        lv_obj_set_x(settings_wifi_wifi_info_wlan_info_label, 152);
        lv_obj_set_y(settings_wifi_wifi_info_wlan_info_label, 17);
        lv_obj_set_width(settings_wifi_wifi_info_wlan_info_label, 144);
        lv_obj_set_name(settings_wifi_wifi_info_wlan_info_label, "settings_wifi_wifi_info_wlan_info_label");
        lv_obj_add_style(settings_wifi_wifi_info_wlan_info_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_wlan_info_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_wlan_info_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_ssid_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_ssid_label, "SSID");
        lv_obj_set_x(settings_wifi_wifi_info_ssid_label, 40);
        lv_obj_set_y(settings_wifi_wifi_info_ssid_label, 54);
        lv_obj_set_width(settings_wifi_wifi_info_ssid_label, 44);
        lv_obj_set_name(settings_wifi_wifi_info_ssid_label, "settings_wifi_wifi_info_ssid_label");
        lv_obj_add_style(settings_wifi_wifi_info_ssid_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_ssid_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_ssid_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_meterlab_2_4g_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_meterlab_2_4g_label, "MeterLab_2.4G");
        lv_obj_set_x(settings_wifi_wifi_info_meterlab_2_4g_label, 104);
        lv_obj_set_y(settings_wifi_wifi_info_meterlab_2_4g_label, 54);
        lv_obj_set_width(settings_wifi_wifi_info_meterlab_2_4g_label, 172);
        lv_obj_set_name(settings_wifi_wifi_info_meterlab_2_4g_label, "settings_wifi_wifi_info_meterlab_2_4g_label");
        lv_obj_add_style(settings_wifi_wifi_info_meterlab_2_4g_label, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_meterlab_2_4g_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_meterlab_2_4g_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_info_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_info_label, "验证");
        lv_obj_set_x(settings_wifi_wifi_info_info_label, 40);
        lv_obj_set_y(settings_wifi_wifi_info_info_label, 78);
        lv_obj_set_width(settings_wifi_wifi_info_info_label, 44);
        lv_obj_set_name(settings_wifi_wifi_info_info_label, "settings_wifi_wifi_info_info_label");
        lv_obj_add_style(settings_wifi_wifi_info_info_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_info_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_info_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_wpa2_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_wpa2_label, "WPA2");
        lv_obj_set_x(settings_wifi_wifi_info_wpa2_label, 104);
        lv_obj_set_y(settings_wifi_wifi_info_wpa2_label, 78);
        lv_obj_set_width(settings_wifi_wifi_info_wpa2_label, 172);
        lv_obj_set_name(settings_wifi_wifi_info_wpa2_label, "settings_wifi_wifi_info_wpa2_label");
        lv_obj_add_style(settings_wifi_wifi_info_wpa2_label, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_wpa2_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_wpa2_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_ip_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_ip_label, "IP");
        lv_obj_set_x(settings_wifi_wifi_info_ip_label, 40);
        lv_obj_set_y(settings_wifi_wifi_info_ip_label, 102);
        lv_obj_set_width(settings_wifi_wifi_info_ip_label, 44);
        lv_obj_set_name(settings_wifi_wifi_info_ip_label, "settings_wifi_wifi_info_ip_label");
        lv_obj_add_style(settings_wifi_wifi_info_ip_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_ip_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_ip_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_10_21_23_42_per_24_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_10_21_23_42_per_24_label, "10.21.23.42/24");
        lv_obj_set_x(settings_wifi_wifi_info_10_21_23_42_per_24_label, 104);
        lv_obj_set_y(settings_wifi_wifi_info_10_21_23_42_per_24_label, 102);
        lv_obj_set_width(settings_wifi_wifi_info_10_21_23_42_per_24_label, 172);
        lv_obj_set_name(settings_wifi_wifi_info_10_21_23_42_per_24_label, "settings_wifi_wifi_info_10_21_23_42_per_24_label");
        lv_obj_add_style(settings_wifi_wifi_info_10_21_23_42_per_24_label, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_10_21_23_42_per_24_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_10_21_23_42_per_24_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_info_label_2 = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_info_label_2, "网关");
        lv_obj_set_x(settings_wifi_wifi_info_info_label_2, 40);
        lv_obj_set_y(settings_wifi_wifi_info_info_label_2, 126);
        lv_obj_set_width(settings_wifi_wifi_info_info_label_2, 44);
        lv_obj_set_name(settings_wifi_wifi_info_info_label_2, "settings_wifi_wifi_info_info_label_2");
        lv_obj_add_style(settings_wifi_wifi_info_info_label_2, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_info_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_info_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_info_10_21_25_1_label = lv_label_create(wifi_info_page);
        lv_label_set_text(settings_wifi_wifi_info_10_21_25_1_label, "10.21.25.1");
        lv_obj_set_x(settings_wifi_wifi_info_10_21_25_1_label, 104);
        lv_obj_set_y(settings_wifi_wifi_info_10_21_25_1_label, 126);
        lv_obj_set_width(settings_wifi_wifi_info_10_21_25_1_label, 172);
        lv_obj_set_name(settings_wifi_wifi_info_10_21_25_1_label, "settings_wifi_wifi_info_10_21_25_1_label");
        lv_obj_add_style(settings_wifi_wifi_info_10_21_25_1_label, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_info_10_21_25_1_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_info_10_21_25_1_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_pair_mode_btn = lv_button_create(wifi_info_page);
        lv_obj_set_name(wifi_pair_mode_btn, "wifi_pair_mode_btn");
        lv_obj_set_x(wifi_pair_mode_btn, 92);
        lv_obj_set_y(wifi_pair_mode_btn, 158);
        lv_obj_set_width(wifi_pair_mode_btn, 136);
        lv_obj_set_height(wifi_pair_mode_btn, 34);
        lv_obj_add_style(wifi_pair_mode_btn, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(wifi_pair_mode_btn, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_pair_mode_btn, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * settings_wifi_wifi_pair_mode_btn_pairing_mode_label = lv_label_create(wifi_pair_mode_btn);
        lv_label_set_text(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, "配网模式");
        lv_obj_set_align(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, LV_ALIGN_CENTER);
        lv_obj_set_width(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, 136);
        lv_obj_set_name(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, "settings_wifi_wifi_pair_mode_btn_pairing_mode_label");
        lv_obj_add_style(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, &me106_text_16_white_center, 0);
        lv_obj_bind_style(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, &me106_theme_light_on_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pair_mode_btn_pairing_mode_label, &me106_theme_alarm_on_accent, 0, &meter_theme_index, 2);

        lv_obj_add_subject_set_int_event(wifi_pair_mode_btn, &meter_wifi_page_index, LV_EVENT_CLICKED, 1);

        lv_obj_t * wifi_pairing_page = lv_obj_create(page_content);
        lv_obj_set_name(wifi_pairing_page, "wifi_pairing_page");
        lv_obj_set_x(wifi_pairing_page, 0);
        lv_obj_set_y(wifi_pairing_page, 0);
        lv_obj_set_width(wifi_pairing_page, 320);
        lv_obj_set_height(wifi_pairing_page, 207);
        lv_obj_set_style_bg_opa(wifi_pairing_page, 0, 0);
        lv_obj_set_style_border_width(wifi_pairing_page, 0, 0);
        lv_obj_set_style_pad_all(wifi_pairing_page, 0, 0);
        lv_obj_set_flag(wifi_pairing_page, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_flag_if_not_eq(wifi_pairing_page, &meter_wifi_page_index, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_t * settings_wifi_wifi_pairing_pairing_mode_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_pairing_mode_label, "配网模式");
        lv_obj_set_x(settings_wifi_wifi_pairing_pairing_mode_label, 152);
        lv_obj_set_y(settings_wifi_wifi_pairing_pairing_mode_label, 17);
        lv_obj_set_width(settings_wifi_wifi_pairing_pairing_mode_label, 144);
        lv_obj_set_name(settings_wifi_wifi_pairing_pairing_mode_label, "settings_wifi_wifi_pairing_pairing_mode_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_pairing_mode_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_pairing_mode_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_pairing_mode_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_label, "配网中");
        lv_obj_set_x(settings_wifi_wifi_pairing_label, 40);
        lv_obj_set_y(settings_wifi_wifi_pairing_label, 60);
        lv_obj_set_width(settings_wifi_wifi_pairing_label, 80);
        lv_obj_set_name(settings_wifi_wifi_pairing_label, "settings_wifi_wifi_pairing_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_label, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_label, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_connect_hotspot_with_phone_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, "请用手机连接下列热点");
        lv_obj_set_x(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, 40);
        lv_obj_set_y(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, 84);
        lv_obj_set_width(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, 232);
        lv_obj_set_name(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, "settings_wifi_wifi_pairing_connect_hotspot_with_phone_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_connect_hotspot_with_phone_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_ssid_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_ssid_label, "SSID");
        lv_obj_set_x(settings_wifi_wifi_pairing_ssid_label, 40);
        lv_obj_set_y(settings_wifi_wifi_pairing_ssid_label, 118);
        lv_obj_set_width(settings_wifi_wifi_pairing_ssid_label, 44);
        lv_obj_set_name(settings_wifi_wifi_pairing_ssid_label, "settings_wifi_wifi_pairing_ssid_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_ssid_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_ssid_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_ssid_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_wifi_ap_ssid_value = lv_label_create(wifi_pairing_page);
        lv_label_bind_text(settings_wifi_wifi_pairing_wifi_ap_ssid_value, &meter_wifi_ap_ssid_text, NULL);
        lv_obj_set_x(settings_wifi_wifi_pairing_wifi_ap_ssid_value, 104);
        lv_obj_set_y(settings_wifi_wifi_pairing_wifi_ap_ssid_value, 118);
        lv_obj_set_width(settings_wifi_wifi_pairing_wifi_ap_ssid_value, 172);
        lv_obj_set_name(settings_wifi_wifi_pairing_wifi_ap_ssid_value, "settings_wifi_wifi_pairing_wifi_ap_ssid_value");
        lv_obj_add_style(settings_wifi_wifi_pairing_wifi_ap_ssid_value, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_ssid_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_ssid_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_password_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_password_label, "密码");
        lv_obj_set_x(settings_wifi_wifi_pairing_password_label, 40);
        lv_obj_set_y(settings_wifi_wifi_pairing_password_label, 142);
        lv_obj_set_width(settings_wifi_wifi_pairing_password_label, 44);
        lv_obj_set_name(settings_wifi_wifi_pairing_password_label, "settings_wifi_wifi_pairing_password_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_password_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_password_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_password_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_wifi_ap_password_value = lv_label_create(wifi_pairing_page);
        lv_label_bind_text(settings_wifi_wifi_pairing_wifi_ap_password_value, &meter_wifi_ap_password_text, NULL);
        lv_obj_set_x(settings_wifi_wifi_pairing_wifi_ap_password_value, 104);
        lv_obj_set_y(settings_wifi_wifi_pairing_wifi_ap_password_value, 142);
        lv_obj_set_width(settings_wifi_wifi_pairing_wifi_ap_password_value, 172);
        lv_obj_set_name(settings_wifi_wifi_pairing_wifi_ap_password_value, "settings_wifi_wifi_pairing_wifi_ap_password_value");
        lv_obj_add_style(settings_wifi_wifi_pairing_wifi_ap_password_value, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_password_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_password_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_pairing_label = lv_label_create(wifi_pairing_page);
        lv_label_set_text(settings_wifi_wifi_pairing_pairing_label, "入口");
        lv_obj_set_x(settings_wifi_wifi_pairing_pairing_label, 40);
        lv_obj_set_y(settings_wifi_wifi_pairing_pairing_label, 166);
        lv_obj_set_width(settings_wifi_wifi_pairing_pairing_label, 44);
        lv_obj_set_name(settings_wifi_wifi_pairing_pairing_label, "settings_wifi_wifi_pairing_pairing_label");
        lv_obj_add_style(settings_wifi_wifi_pairing_pairing_label, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_pairing_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_pairing_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_wifi_wifi_pairing_wifi_ap_entry_value = lv_label_create(wifi_pairing_page);
        lv_label_bind_text(settings_wifi_wifi_pairing_wifi_ap_entry_value, &meter_wifi_ap_entry_text, NULL);
        lv_obj_set_x(settings_wifi_wifi_pairing_wifi_ap_entry_value, 104);
        lv_obj_set_y(settings_wifi_wifi_pairing_wifi_ap_entry_value, 166);
        lv_obj_set_width(settings_wifi_wifi_pairing_wifi_ap_entry_value, 172);
        lv_obj_set_name(settings_wifi_wifi_pairing_wifi_ap_entry_value, "settings_wifi_wifi_pairing_wifi_ap_entry_value");
        lv_obj_add_style(settings_wifi_wifi_pairing_wifi_ap_entry_value, &me106_text_16_white, 0);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_entry_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_wifi_wifi_pairing_wifi_ap_entry_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * screen_settings_wifi_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_wifi_bottom_bar, "screen_settings_wifi_bottom_bar");
        lv_obj_set_x(screen_settings_wifi_bottom_bar, 0);
        lv_obj_set_y(screen_settings_wifi_bottom_bar, 207);
        lv_obj_set_width(screen_settings_wifi_bottom_bar, 320);
        lv_obj_set_height(screen_settings_wifi_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_wifi_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_wifi_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_wifi_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_wifi_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_wifi_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_wifi_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_return, "wifi_btn_return");
        lv_obj_set_x(wifi_btn_return, 0);
        lv_obj_set_y(wifi_btn_return, 207);
        lv_obj_set_width(wifi_btn_return, 79);
        lv_obj_set_height(wifi_btn_return, 32);
        lv_obj_add_style(wifi_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(wifi_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_t * wifi_btn_placeholder_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_placeholder_1, "wifi_btn_placeholder_1");
        lv_obj_set_x(wifi_btn_placeholder_1, 80);
        lv_obj_set_y(wifi_btn_placeholder_1, 207);
        lv_obj_set_width(wifi_btn_placeholder_1, 79);
        lv_obj_set_height(wifi_btn_placeholder_1, 32);
        lv_obj_add_style(wifi_btn_placeholder_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_btn_placeholder_2 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_placeholder_2, "wifi_btn_placeholder_2");
        lv_obj_set_x(wifi_btn_placeholder_2, 160);
        lv_obj_set_y(wifi_btn_placeholder_2, 207);
        lv_obj_set_width(wifi_btn_placeholder_2, 79);
        lv_obj_set_height(wifi_btn_placeholder_2, 32);
        lv_obj_add_style(wifi_btn_placeholder_2, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_btn_placeholder_2, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_btn_placeholder_2, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_btn_yes_slot = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_yes_slot, "wifi_btn_yes_slot");
        lv_obj_set_x(wifi_btn_yes_slot, 240);
        lv_obj_set_y(wifi_btn_yes_slot, 207);
        lv_obj_set_width(wifi_btn_yes_slot, 80);
        lv_obj_set_height(wifi_btn_yes_slot, 32);
        lv_obj_add_style(wifi_btn_yes_slot, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_btn_yes_slot, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_btn_yes_slot, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_yes, "wifi_btn_yes");
        lv_obj_set_x(wifi_btn_yes, 240);
        lv_obj_set_y(wifi_btn_yes, 207);
        lv_obj_set_width(wifi_btn_yes, 80);
        lv_obj_set_height(wifi_btn_yes, 32);
        lv_obj_add_style(wifi_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(wifi_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(wifi_btn_yes, &meter_wifi_page_index, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_t * lv_image_1 = lv_image_create(wifi_btn_yes);
        lv_image_set_src(lv_image_1, meter_yes);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_obj_add_subject_set_int_event(wifi_btn_yes, &meter_wifi_page_index, LV_EVENT_CLICKED, 1);

        lv_obj_t * wifi_btn_return_to_settings = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_return_to_settings, "wifi_btn_return_to_settings");
        lv_obj_set_x(wifi_btn_return_to_settings, 0);
        lv_obj_set_y(wifi_btn_return_to_settings, 207);
        lv_obj_set_width(wifi_btn_return_to_settings, 79);
        lv_obj_set_height(wifi_btn_return_to_settings, 32);
        lv_obj_set_style_bg_opa(wifi_btn_return_to_settings, 0, 0);
        lv_obj_set_style_border_width(wifi_btn_return_to_settings, 0, 0);
        lv_obj_set_style_shadow_width(wifi_btn_return_to_settings, 0, 0);
        lv_obj_bind_flag_if_not_eq(wifi_btn_return_to_settings, &meter_wifi_page_index, LV_OBJ_FLAG_HIDDEN, 0);
        lv_obj_add_screen_create_event(wifi_btn_return_to_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * wifi_btn_return_to_info = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_btn_return_to_info, "wifi_btn_return_to_info");
        lv_obj_set_x(wifi_btn_return_to_info, 0);
        lv_obj_set_y(wifi_btn_return_to_info, 207);
        lv_obj_set_width(wifi_btn_return_to_info, 79);
        lv_obj_set_height(wifi_btn_return_to_info, 32);
        lv_obj_set_style_bg_opa(wifi_btn_return_to_info, 0, 0);
        lv_obj_set_style_border_width(wifi_btn_return_to_info, 0, 0);
        lv_obj_set_style_shadow_width(wifi_btn_return_to_info, 0, 0);
        lv_obj_bind_flag_if_not_eq(wifi_btn_return_to_info, &meter_wifi_page_index, LV_OBJ_FLAG_HIDDEN, 1);
        lv_obj_add_subject_set_int_event(wifi_btn_return_to_info, &meter_wifi_page_index, LV_EVENT_CLICKED, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

