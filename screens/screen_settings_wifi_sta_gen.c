/**
 * @file screen_settings_wifi_sta_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_wifi_sta_gen.h"
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

lv_obj_t * screen_settings_wifi_sta_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_wifi_sta_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_add_subject_set_int_event(lv_obj_0, &meter_wifi_sta_connect_request, LV_EVENT_SCREEN_LOADED, 0);
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
        lv_label_set_text(lv_label_0, "WiFi配置");
        lv_obj_set_x(lv_label_0, 152);
        lv_obj_set_y(lv_label_0, 17);
        lv_obj_set_width(lv_label_0, 144);
        lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_icon_halo = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_icon_halo, "wifi_sta_icon_halo");
        lv_obj_set_x(wifi_sta_icon_halo, 24);
        lv_obj_set_y(wifi_sta_icon_halo, 42);
        lv_obj_set_width(wifi_sta_icon_halo, 42);
        lv_obj_set_height(wifi_sta_icon_halo, 42);
        lv_obj_set_style_radius(wifi_sta_icon_halo, 12, 0);
        lv_obj_set_style_border_width(wifi_sta_icon_halo, 0, 0);
        lv_obj_set_style_pad_all(wifi_sta_icon_halo, 0, 0);
        lv_obj_set_flag(wifi_sta_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_sta_icon_halo, &me106_theme_dark_info_soft, 0);
        lv_obj_bind_style(wifi_sta_icon_halo, &me106_theme_light_info_soft, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_icon_halo, &me106_theme_alarm_info_soft, 0, &meter_theme_index, 2);

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

        lv_obj_t * lv_label_1 = lv_label_create(page_content);
        lv_label_set_text(lv_label_1, "热点配置");
        lv_obj_set_x(lv_label_1, 82);
        lv_obj_set_y(lv_label_1, 46);
        lv_obj_set_width(lv_label_1, 92);
        lv_obj_add_style(lv_label_1, &me106_text_18_cyan, 0);
        lv_obj_bind_style(lv_label_1, &me106_theme_light_info_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_1, &me106_theme_alarm_info_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_2 = lv_label_create(page_content);
        lv_label_bind_text(lv_label_2, &meter_wifi_sta_status_text, NULL);
        lv_obj_set_x(lv_label_2, 82);
        lv_obj_set_y(lv_label_2, 71);
        lv_obj_set_width(lv_label_2, 170);
        lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_info_band = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_info_band, "wifi_sta_info_band");
        lv_obj_set_x(wifi_sta_info_band, 24);
        lv_obj_set_y(wifi_sta_info_band, 96);
        lv_obj_set_width(wifi_sta_info_band, 272);
        lv_obj_set_height(wifi_sta_info_band, 74);
        lv_obj_set_style_pad_all(wifi_sta_info_band, 0, 0);
        lv_obj_set_flag(wifi_sta_info_band, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_sta_info_band, &me106_panel_soft_r8, 0);
        lv_obj_bind_style(wifi_sta_info_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_info_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_code_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_code_dot, "wifi_sta_code_dot");
        lv_obj_set_x(wifi_sta_code_dot, 40);
        lv_obj_set_y(wifi_sta_code_dot, 111);
        lv_obj_set_width(wifi_sta_code_dot, 7);
        lv_obj_set_height(wifi_sta_code_dot, 7);
        lv_obj_set_style_radius(wifi_sta_code_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_sta_code_dot, 0, 0);
        lv_obj_set_flag(wifi_sta_code_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_sta_code_dot, &me106_theme_dark_info, 0);
        lv_obj_bind_style(wifi_sta_code_dot, &me106_theme_light_info, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_code_dot, &me106_theme_alarm_info, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_code_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_code_panel, "wifi_sta_code_panel");
        lv_obj_set_x(wifi_sta_code_panel, 56);
        lv_obj_set_y(wifi_sta_code_panel, 102);
        lv_obj_set_width(wifi_sta_code_panel, 224);
        lv_obj_set_height(wifi_sta_code_panel, 22);
        lv_obj_set_style_bg_opa(wifi_sta_code_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_sta_code_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_sta_code_panel, 0, 0);
        lv_obj_set_flag(wifi_sta_code_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_3 = lv_label_create(wifi_sta_code_panel);
        lv_label_set_text(lv_label_3, "来源");
        lv_obj_set_align(lv_label_3, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_3, 0);
        lv_obj_set_y(lv_label_3, 0);
        lv_obj_set_width(lv_label_3, 82);
        lv_obj_add_style(lv_label_3, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_4 = lv_label_create(wifi_sta_code_panel);
        lv_label_bind_text(lv_label_4, &meter_wifi_sta_source_text, NULL);
        lv_obj_set_align(lv_label_4, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_label_4, 0);
        lv_obj_set_y(lv_label_4, 0);
        lv_obj_set_width(lv_label_4, 224);
        lv_obj_add_style(lv_label_4, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_ssid_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_ssid_dot, "wifi_sta_ssid_dot");
        lv_obj_set_x(wifi_sta_ssid_dot, 40);
        lv_obj_set_y(wifi_sta_ssid_dot, 135);
        lv_obj_set_width(wifi_sta_ssid_dot, 7);
        lv_obj_set_height(wifi_sta_ssid_dot, 7);
        lv_obj_set_style_radius(wifi_sta_ssid_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_sta_ssid_dot, 0, 0);
        lv_obj_set_flag(wifi_sta_ssid_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_sta_ssid_dot, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(wifi_sta_ssid_dot, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_ssid_dot, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_ssid_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_ssid_panel, "wifi_sta_ssid_panel");
        lv_obj_set_x(wifi_sta_ssid_panel, 56);
        lv_obj_set_y(wifi_sta_ssid_panel, 126);
        lv_obj_set_width(wifi_sta_ssid_panel, 224);
        lv_obj_set_height(wifi_sta_ssid_panel, 22);
        lv_obj_set_style_bg_opa(wifi_sta_ssid_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_sta_ssid_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_sta_ssid_panel, 0, 0);
        lv_obj_set_flag(wifi_sta_ssid_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_5 = lv_label_create(wifi_sta_ssid_panel);
        lv_label_set_text(lv_label_5, "热点");
        lv_obj_set_align(lv_label_5, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_5, 0);
        lv_obj_set_y(lv_label_5, 0);
        lv_obj_set_width(lv_label_5, 82);
        lv_obj_add_style(lv_label_5, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_5, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_5, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_6 = lv_label_create(wifi_sta_ssid_panel);
        lv_label_bind_text(lv_label_6, &meter_wifi_sta_hotspot_state_text, NULL);
        lv_obj_set_align(lv_label_6, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_label_6, 0);
        lv_obj_set_y(lv_label_6, 0);
        lv_obj_set_width(lv_label_6, 224);
        lv_obj_add_style(lv_label_6, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_pass_dot = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_pass_dot, "wifi_sta_pass_dot");
        lv_obj_set_x(wifi_sta_pass_dot, 40);
        lv_obj_set_y(wifi_sta_pass_dot, 159);
        lv_obj_set_width(wifi_sta_pass_dot, 7);
        lv_obj_set_height(wifi_sta_pass_dot, 7);
        lv_obj_set_style_radius(wifi_sta_pass_dot, 4, 0);
        lv_obj_set_style_border_width(wifi_sta_pass_dot, 0, 0);
        lv_obj_set_flag(wifi_sta_pass_dot, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(wifi_sta_pass_dot, &me106_theme_dark_success, 0);
        lv_obj_bind_style(wifi_sta_pass_dot, &me106_theme_light_success, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_pass_dot, &me106_theme_alarm_success, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_pass_panel = lv_obj_create(page_content);
        lv_obj_set_name(wifi_sta_pass_panel, "wifi_sta_pass_panel");
        lv_obj_set_x(wifi_sta_pass_panel, 56);
        lv_obj_set_y(wifi_sta_pass_panel, 150);
        lv_obj_set_width(wifi_sta_pass_panel, 224);
        lv_obj_set_height(wifi_sta_pass_panel, 22);
        lv_obj_set_style_bg_opa(wifi_sta_pass_panel, 0, 0);
        lv_obj_set_style_border_width(wifi_sta_pass_panel, 0, 0);
        lv_obj_set_style_pad_all(wifi_sta_pass_panel, 0, 0);
        lv_obj_set_flag(wifi_sta_pass_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_7 = lv_label_create(wifi_sta_pass_panel);
        lv_label_set_text(lv_label_7, "密码");
        lv_obj_set_align(lv_label_7, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(lv_label_7, 0);
        lv_obj_set_y(lv_label_7, 0);
        lv_obj_set_width(lv_label_7, 82);
        lv_obj_add_style(lv_label_7, &me106_text_14_gray_8f, 0);
        lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_8 = lv_label_create(wifi_sta_pass_panel);
        lv_label_bind_text(lv_label_8, &meter_wifi_sta_password_state_text, NULL);
        lv_obj_set_align(lv_label_8, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(lv_label_8, 0);
        lv_obj_set_y(lv_label_8, 0);
        lv_obj_set_width(lv_label_8, 224);
        lv_obj_add_style(lv_label_8, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_8, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_8, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_9 = lv_label_create(page_content);
        lv_label_set_text(lv_label_9, "请用上位机配置");
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 184);
        lv_obj_set_width(lv_label_9, 272);
        lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_settings_wifi_sta_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_wifi_sta_bottom_bar, "screen_settings_wifi_sta_bottom_bar");
        lv_obj_set_x(screen_settings_wifi_sta_bottom_bar, 0);
        lv_obj_set_y(screen_settings_wifi_sta_bottom_bar, 207);
        lv_obj_set_width(screen_settings_wifi_sta_bottom_bar, 320);
        lv_obj_set_height(screen_settings_wifi_sta_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_wifi_sta_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_wifi_sta_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_wifi_sta_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_wifi_sta_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_wifi_sta_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_wifi_sta_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_sta_btn_return, "wifi_sta_btn_return");
        lv_obj_set_x(wifi_sta_btn_return, 0);
        lv_obj_set_y(wifi_sta_btn_return, 207);
        lv_obj_set_width(wifi_sta_btn_return, 79);
        lv_obj_set_height(wifi_sta_btn_return, 32);
        lv_obj_add_style(wifi_sta_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_sta_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(wifi_sta_btn_return);
        lv_image_set_src(lv_image_1, meter_icon_return);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_obj_add_screen_create_event(wifi_sta_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * wifi_sta_btn_placeholder_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_sta_btn_placeholder_1, "wifi_sta_btn_placeholder_1");
        lv_obj_set_x(wifi_sta_btn_placeholder_1, 80);
        lv_obj_set_y(wifi_sta_btn_placeholder_1, 207);
        lv_obj_set_width(wifi_sta_btn_placeholder_1, 79);
        lv_obj_set_height(wifi_sta_btn_placeholder_1, 32);
        lv_obj_add_style(wifi_sta_btn_placeholder_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_sta_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_btn_placeholder_2 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_sta_btn_placeholder_2, "wifi_sta_btn_placeholder_2");
        lv_obj_set_x(wifi_sta_btn_placeholder_2, 160);
        lv_obj_set_y(wifi_sta_btn_placeholder_2, 207);
        lv_obj_set_width(wifi_sta_btn_placeholder_2, 79);
        lv_obj_set_height(wifi_sta_btn_placeholder_2, 32);
        lv_obj_add_style(wifi_sta_btn_placeholder_2, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_sta_btn_placeholder_2, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_btn_placeholder_2, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * wifi_sta_btn_placeholder_3 = lv_button_create(lv_obj_0);
        lv_obj_set_name(wifi_sta_btn_placeholder_3, "wifi_sta_btn_placeholder_3");
        lv_obj_set_x(wifi_sta_btn_placeholder_3, 240);
        lv_obj_set_y(wifi_sta_btn_placeholder_3, 207);
        lv_obj_set_width(wifi_sta_btn_placeholder_3, 80);
        lv_obj_set_height(wifi_sta_btn_placeholder_3, 32);
        lv_obj_add_style(wifi_sta_btn_placeholder_3, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(wifi_sta_btn_placeholder_3, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(wifi_sta_btn_placeholder_3, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

