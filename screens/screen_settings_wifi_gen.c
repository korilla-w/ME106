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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_settings_wifi_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_wifi_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
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
    lv_obj_t * lv_label_0 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_0, "WLAN信息");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_1, "SSID");
    lv_obj_set_x(lv_label_1, 40);
    lv_obj_set_y(lv_label_1, 54);
    lv_obj_set_width(lv_label_1, 44);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_2, "MeterLab_2.4G");
    lv_obj_set_x(lv_label_2, 104);
    lv_obj_set_y(lv_label_2, 54);
    lv_obj_set_width(lv_label_2, 172);
    lv_obj_add_style(lv_label_2, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_3, "验证");
    lv_obj_set_x(lv_label_3, 40);
    lv_obj_set_y(lv_label_3, 78);
    lv_obj_set_width(lv_label_3, 44);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_4 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_4, "WPA2");
    lv_obj_set_x(lv_label_4, 104);
    lv_obj_set_y(lv_label_4, 78);
    lv_obj_set_width(lv_label_4, 172);
    lv_obj_add_style(lv_label_4, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_5, "IP");
    lv_obj_set_x(lv_label_5, 40);
    lv_obj_set_y(lv_label_5, 102);
    lv_obj_set_width(lv_label_5, 44);
    lv_obj_add_style(lv_label_5, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_6, "10.21.23.42/24");
    lv_obj_set_x(lv_label_6, 104);
    lv_obj_set_y(lv_label_6, 102);
    lv_obj_set_width(lv_label_6, 172);
    lv_obj_add_style(lv_label_6, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_7, "网关");
    lv_obj_set_x(lv_label_7, 40);
    lv_obj_set_y(lv_label_7, 126);
    lv_obj_set_width(lv_label_7, 44);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_8 = lv_label_create(wifi_info_page);
    lv_label_set_text(lv_label_8, "10.21.25.1");
    lv_obj_set_x(lv_label_8, 104);
    lv_obj_set_y(lv_label_8, 126);
    lv_obj_set_width(lv_label_8, 172);
    lv_obj_add_style(lv_label_8, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * wifi_pair_mode_btn = lv_button_create(wifi_info_page);
    lv_obj_set_name(wifi_pair_mode_btn, "wifi_pair_mode_btn");
    lv_obj_set_x(wifi_pair_mode_btn, 92);
    lv_obj_set_y(wifi_pair_mode_btn, 158);
    lv_obj_set_width(wifi_pair_mode_btn, 136);
    lv_obj_set_height(wifi_pair_mode_btn, 34);
    lv_obj_add_style(wifi_pair_mode_btn, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(wifi_pair_mode_btn, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(wifi_pair_mode_btn, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_label_9 = lv_label_create(wifi_pair_mode_btn);
    lv_label_set_text(lv_label_9, "配网模式");
    lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_9, 136);
    lv_obj_add_style(lv_label_9, &me106_text_16_white_center, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
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
    lv_obj_t * lv_label_10 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_10, "配网模式");
    lv_obj_set_x(lv_label_10, 152);
    lv_obj_set_y(lv_label_10, 17);
    lv_obj_set_width(lv_label_10, 144);
    lv_obj_add_style(lv_label_10, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_11, "配网中");
    lv_obj_set_x(lv_label_11, 40);
    lv_obj_set_y(lv_label_11, 60);
    lv_obj_set_width(lv_label_11, 80);
    lv_obj_add_style(lv_label_11, &me106_text_14_blue, 0);
    
    lv_obj_t * lv_label_12 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_12, "请用手机连接下列热点");
    lv_obj_set_x(lv_label_12, 40);
    lv_obj_set_y(lv_label_12, 84);
    lv_obj_set_width(lv_label_12, 232);
    lv_obj_add_style(lv_label_12, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_13 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_13, "SSID");
    lv_obj_set_x(lv_label_13, 40);
    lv_obj_set_y(lv_label_13, 118);
    lv_obj_set_width(lv_label_13, 44);
    lv_obj_add_style(lv_label_13, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_13, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_13, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_14 = lv_label_create(wifi_pairing_page);
    lv_label_bind_text(lv_label_14, &meter_wifi_ap_ssid_text, NULL);
    lv_obj_set_x(lv_label_14, 104);
    lv_obj_set_y(lv_label_14, 118);
    lv_obj_set_width(lv_label_14, 172);
    lv_obj_add_style(lv_label_14, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_15 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_15, "密码");
    lv_obj_set_x(lv_label_15, 40);
    lv_obj_set_y(lv_label_15, 142);
    lv_obj_set_width(lv_label_15, 44);
    lv_obj_add_style(lv_label_15, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_15, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_15, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_16 = lv_label_create(wifi_pairing_page);
    lv_label_bind_text(lv_label_16, &meter_wifi_ap_password_text, NULL);
    lv_obj_set_x(lv_label_16, 104);
    lv_obj_set_y(lv_label_16, 142);
    lv_obj_set_width(lv_label_16, 172);
    lv_obj_add_style(lv_label_16, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_16, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_16, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_17 = lv_label_create(wifi_pairing_page);
    lv_label_set_text(lv_label_17, "入口");
    lv_obj_set_x(lv_label_17, 40);
    lv_obj_set_y(lv_label_17, 166);
    lv_obj_set_width(lv_label_17, 44);
    lv_obj_add_style(lv_label_17, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_17, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_17, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_18 = lv_label_create(wifi_pairing_page);
    lv_label_bind_text(lv_label_18, &meter_wifi_ap_entry_text, NULL);
    lv_obj_set_x(lv_label_18, 104);
    lv_obj_set_y(lv_label_18, 166);
    lv_obj_set_width(lv_label_18, 172);
    lv_obj_add_style(lv_label_18, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_18, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_18, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
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
    lv_obj_add_screen_create_event(wifi_btn_return_to_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
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
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_WIFI_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_WIFI_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_wifi_get_timeline(lv_obj_0, SCREEN_SETTINGS_WIFI_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_wifi_get_timeline(lv_obj_t * obj, screen_settings_wifi_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_WIFI_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_wifi has no timeline with %d ID", timeline_id);
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
    for(i = 0; i < _SCREEN_SETTINGS_WIFI_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

