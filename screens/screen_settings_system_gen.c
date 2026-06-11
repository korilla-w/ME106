/**
 * @file screen_settings_system_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_system_gen.h"
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

lv_obj_t * screen_settings_system_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_system_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
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
    lv_label_set_text(lv_label_0, "系统信息");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_icon_halo = lv_obj_create(page_content);
    lv_obj_set_name(system_icon_halo, "system_icon_halo");
    lv_obj_set_x(system_icon_halo, 24);
    lv_obj_set_y(system_icon_halo, 44);
    lv_obj_set_width(system_icon_halo, 46);
    lv_obj_set_height(system_icon_halo, 46);
    lv_obj_set_style_bg_color(system_icon_halo, lv_color_hex(0x6366F1), 0);
    lv_obj_set_style_bg_opa(system_icon_halo, 54, 0);
    lv_obj_set_style_radius(system_icon_halo, 12, 0);
    lv_obj_set_style_border_width(system_icon_halo, 0, 0);
    lv_obj_set_style_pad_all(system_icon_halo, 0, 0);
    lv_obj_set_flag(system_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_image_0 = lv_image_create(page_content);
    lv_image_set_src(lv_image_0, meter_icon_information);
    lv_obj_set_x(lv_image_0, 35);
    lv_obj_set_y(lv_image_0, 55);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 8, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 245, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 245, 0);
    lv_obj_add_style(lv_image_0, &me106_icon_indigo, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_bind_text(lv_label_1, &meter_system_product_name, NULL);
    lv_obj_set_x(lv_label_1, 82);
    lv_obj_set_y(lv_label_1, 57);
    lv_obj_set_width(lv_label_1, 94);
    lv_obj_add_style(lv_label_1, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_fw_pill = lv_obj_create(page_content);
    lv_obj_set_name(system_fw_pill, "system_fw_pill");
    lv_obj_set_x(system_fw_pill, 188);
    lv_obj_set_y(system_fw_pill, 50);
    lv_obj_set_width(system_fw_pill, 108);
    lv_obj_set_height(system_fw_pill, 34);
    lv_obj_set_style_pad_all(system_fw_pill, 0, 0);
    lv_obj_set_flag(system_fw_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(system_fw_pill, &me106_panel_soft_r8, 0);
    lv_obj_bind_style(system_fw_pill, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_fw_pill, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);
    lv_obj_t * lv_label_2 = lv_label_create(system_fw_pill);
    lv_label_set_text(lv_label_2, "FW");
    lv_obj_set_align(lv_label_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_2, 12);
    lv_obj_set_y(lv_label_2, 0);
    lv_obj_set_width(lv_label_2, 28);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(system_fw_pill);
    lv_label_bind_text(lv_label_3, &meter_system_fw_version, NULL);
    lv_obj_set_align(lv_label_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_3, -12);
    lv_obj_set_y(lv_label_3, 0);
    lv_obj_set_width(lv_label_3, 56);
    lv_obj_add_style(lv_label_3, &me106_text_16_cyan, 0);
    
    lv_obj_t * system_info_band = lv_obj_create(page_content);
    lv_obj_set_name(system_info_band, "system_info_band");
    lv_obj_set_x(system_info_band, 24);
    lv_obj_set_y(system_info_band, 102);
    lv_obj_set_width(system_info_band, 272);
    lv_obj_set_height(system_info_band, 98);
    lv_obj_set_style_pad_all(system_info_band, 0, 0);
    lv_obj_set_flag(system_info_band, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(system_info_band, &me106_panel_soft_r8, 0);
    lv_obj_bind_style(system_info_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_info_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_hw_dot = lv_obj_create(page_content);
    lv_obj_set_name(system_hw_dot, "system_hw_dot");
    lv_obj_set_x(system_hw_dot, 40);
    lv_obj_set_y(system_hw_dot, 117);
    lv_obj_set_width(system_hw_dot, 7);
    lv_obj_set_height(system_hw_dot, 7);
    lv_obj_set_style_radius(system_hw_dot, 4, 0);
    lv_obj_set_style_bg_color(system_hw_dot, lv_color_hex(0x6366F1), 0);
    lv_obj_set_style_bg_opa(system_hw_dot, 255, 0);
    lv_obj_set_style_border_width(system_hw_dot, 0, 0);
    lv_obj_set_flag(system_hw_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * system_hw_panel = lv_obj_create(page_content);
    lv_obj_set_name(system_hw_panel, "system_hw_panel");
    lv_obj_set_x(system_hw_panel, 56);
    lv_obj_set_y(system_hw_panel, 108);
    lv_obj_set_width(system_hw_panel, 224);
    lv_obj_set_height(system_hw_panel, 22);
    lv_obj_set_style_bg_opa(system_hw_panel, 0, 0);
    lv_obj_set_style_border_width(system_hw_panel, 0, 0);
    lv_obj_set_style_pad_all(system_hw_panel, 0, 0);
    lv_obj_set_flag(system_hw_panel, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_4 = lv_label_create(system_hw_panel);
    lv_label_set_text(lv_label_4, "HW");
    lv_obj_set_align(lv_label_4, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_4, 0);
    lv_obj_set_y(lv_label_4, 0);
    lv_obj_set_width(lv_label_4, 72);
    lv_obj_add_style(lv_label_4, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(system_hw_panel);
    lv_label_bind_text(lv_label_5, &meter_system_hw_version, NULL);
    lv_obj_set_align(lv_label_5, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_5, 0);
    lv_obj_set_y(lv_label_5, 0);
    lv_obj_set_width(lv_label_5, 224);
    lv_obj_add_style(lv_label_5, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_feature_dot = lv_obj_create(page_content);
    lv_obj_set_name(system_feature_dot, "system_feature_dot");
    lv_obj_set_x(system_feature_dot, 40);
    lv_obj_set_y(system_feature_dot, 141);
    lv_obj_set_width(system_feature_dot, 7);
    lv_obj_set_height(system_feature_dot, 7);
    lv_obj_set_style_radius(system_feature_dot, 4, 0);
    lv_obj_set_style_bg_color(system_feature_dot, lv_color_hex(0x20D3D5), 0);
    lv_obj_set_style_bg_opa(system_feature_dot, 255, 0);
    lv_obj_set_style_border_width(system_feature_dot, 0, 0);
    lv_obj_set_flag(system_feature_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * system_feature_panel = lv_obj_create(page_content);
    lv_obj_set_name(system_feature_panel, "system_feature_panel");
    lv_obj_set_x(system_feature_panel, 56);
    lv_obj_set_y(system_feature_panel, 132);
    lv_obj_set_width(system_feature_panel, 224);
    lv_obj_set_height(system_feature_panel, 22);
    lv_obj_set_style_bg_opa(system_feature_panel, 0, 0);
    lv_obj_set_style_border_width(system_feature_panel, 0, 0);
    lv_obj_set_style_pad_all(system_feature_panel, 0, 0);
    lv_obj_set_flag(system_feature_panel, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_6 = lv_label_create(system_feature_panel);
    lv_label_set_text(lv_label_6, "FEATURE");
    lv_obj_set_align(lv_label_6, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_6, 0);
    lv_obj_set_y(lv_label_6, 0);
    lv_obj_set_width(lv_label_6, 82);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(system_feature_panel);
    lv_label_bind_text(lv_label_7, &meter_system_feature_version, NULL);
    lv_obj_set_align(lv_label_7, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_7, 0);
    lv_obj_set_y(lv_label_7, 0);
    lv_obj_set_width(lv_label_7, 224);
    lv_obj_add_style(lv_label_7, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_build_dot = lv_obj_create(page_content);
    lv_obj_set_name(system_build_dot, "system_build_dot");
    lv_obj_set_x(system_build_dot, 40);
    lv_obj_set_y(system_build_dot, 165);
    lv_obj_set_width(system_build_dot, 7);
    lv_obj_set_height(system_build_dot, 7);
    lv_obj_set_style_radius(system_build_dot, 4, 0);
    lv_obj_set_style_bg_color(system_build_dot, lv_color_hex(0x14B8A6), 0);
    lv_obj_set_style_bg_opa(system_build_dot, 255, 0);
    lv_obj_set_style_border_width(system_build_dot, 0, 0);
    lv_obj_set_flag(system_build_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * system_build_panel = lv_obj_create(page_content);
    lv_obj_set_name(system_build_panel, "system_build_panel");
    lv_obj_set_x(system_build_panel, 56);
    lv_obj_set_y(system_build_panel, 156);
    lv_obj_set_width(system_build_panel, 224);
    lv_obj_set_height(system_build_panel, 22);
    lv_obj_set_style_bg_opa(system_build_panel, 0, 0);
    lv_obj_set_style_border_width(system_build_panel, 0, 0);
    lv_obj_set_style_pad_all(system_build_panel, 0, 0);
    lv_obj_set_flag(system_build_panel, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_8 = lv_label_create(system_build_panel);
    lv_label_set_text(lv_label_8, "BUILD");
    lv_obj_set_align(lv_label_8, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_8, 0);
    lv_obj_set_y(lv_label_8, 0);
    lv_obj_set_width(lv_label_8, 82);
    lv_obj_add_style(lv_label_8, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_9 = lv_label_create(system_build_panel);
    lv_label_bind_text(lv_label_9, &meter_system_build_date, NULL);
    lv_obj_set_align(lv_label_9, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_9, 0);
    lv_obj_set_y(lv_label_9, 0);
    lv_obj_set_width(lv_label_9, 224);
    lv_obj_add_style(lv_label_9, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_runtime_dot = lv_obj_create(page_content);
    lv_obj_set_name(system_runtime_dot, "system_runtime_dot");
    lv_obj_set_x(system_runtime_dot, 40);
    lv_obj_set_y(system_runtime_dot, 189);
    lv_obj_set_width(system_runtime_dot, 7);
    lv_obj_set_height(system_runtime_dot, 7);
    lv_obj_set_style_radius(system_runtime_dot, 4, 0);
    lv_obj_set_style_bg_color(system_runtime_dot, lv_color_hex(0xF59E0B), 0);
    lv_obj_set_style_bg_opa(system_runtime_dot, 255, 0);
    lv_obj_set_style_border_width(system_runtime_dot, 0, 0);
    lv_obj_set_flag(system_runtime_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * system_runtime_panel = lv_obj_create(page_content);
    lv_obj_set_name(system_runtime_panel, "system_runtime_panel");
    lv_obj_set_x(system_runtime_panel, 56);
    lv_obj_set_y(system_runtime_panel, 180);
    lv_obj_set_width(system_runtime_panel, 224);
    lv_obj_set_height(system_runtime_panel, 22);
    lv_obj_set_style_bg_opa(system_runtime_panel, 0, 0);
    lv_obj_set_style_border_width(system_runtime_panel, 0, 0);
    lv_obj_set_style_pad_all(system_runtime_panel, 0, 0);
    lv_obj_set_flag(system_runtime_panel, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_10 = lv_label_create(system_runtime_panel);
    lv_label_set_text(lv_label_10, "运行时长");
    lv_obj_set_align(lv_label_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_10, 0);
    lv_obj_set_y(lv_label_10, 0);
    lv_obj_set_width(lv_label_10, 82);
    lv_obj_add_style(lv_label_10, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(system_runtime_panel);
    lv_label_bind_text(lv_label_11, &meter_system_runtime_text, NULL);
    lv_obj_set_align(lv_label_11, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_11, 0);
    lv_obj_set_y(lv_label_11, 0);
    lv_obj_set_width(lv_label_11, 224);
    lv_obj_add_style(lv_label_11, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * screen_settings_system_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_system_bottom_bar, "screen_settings_system_bottom_bar");
    lv_obj_set_x(screen_settings_system_bottom_bar, 0);
    lv_obj_set_y(screen_settings_system_bottom_bar, 207);
    lv_obj_set_width(screen_settings_system_bottom_bar, 320);
    lv_obj_set_height(screen_settings_system_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_system_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_system_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_system_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_system_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_system_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_system_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(system_btn_return, "system_btn_return");
    lv_obj_set_x(system_btn_return, 0);
    lv_obj_set_y(system_btn_return, 207);
    lv_obj_set_width(system_btn_return, 79);
    lv_obj_set_height(system_btn_return, 32);
    lv_obj_add_style(system_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(system_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(system_btn_return);
    lv_image_set_src(lv_image_1, meter_icon_return);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_obj_add_screen_create_event(system_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * system_btn_placeholder_1 = lv_button_create(lv_obj_0);
    lv_obj_set_name(system_btn_placeholder_1, "system_btn_placeholder_1");
    lv_obj_set_x(system_btn_placeholder_1, 80);
    lv_obj_set_y(system_btn_placeholder_1, 207);
    lv_obj_set_width(system_btn_placeholder_1, 79);
    lv_obj_set_height(system_btn_placeholder_1, 32);
    lv_obj_add_style(system_btn_placeholder_1, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(system_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_btn_placeholder_2 = lv_button_create(lv_obj_0);
    lv_obj_set_name(system_btn_placeholder_2, "system_btn_placeholder_2");
    lv_obj_set_x(system_btn_placeholder_2, 160);
    lv_obj_set_y(system_btn_placeholder_2, 207);
    lv_obj_set_width(system_btn_placeholder_2, 79);
    lv_obj_set_height(system_btn_placeholder_2, 32);
    lv_obj_add_style(system_btn_placeholder_2, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(system_btn_placeholder_2, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_btn_placeholder_2, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * system_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(system_btn_yes, "system_btn_yes");
    lv_obj_set_x(system_btn_yes, 240);
    lv_obj_set_y(system_btn_yes, 207);
    lv_obj_set_width(system_btn_yes, 80);
    lv_obj_set_height(system_btn_yes, 32);
    lv_obj_add_style(system_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(system_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(system_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(system_btn_yes);
    lv_image_set_src(lv_image_2, meter_yes);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_obj_add_screen_create_event(system_btn_yes, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_SYSTEM_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_SYSTEM_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_system_get_timeline(lv_obj_0, SCREEN_SETTINGS_SYSTEM_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_system_get_timeline(lv_obj_t * obj, screen_settings_system_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_SYSTEM_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_system has no timeline with %d ID", timeline_id);
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
    for(i = 0; i < _SCREEN_SETTINGS_SYSTEM_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

