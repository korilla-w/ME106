/**
 * @file screen_settings_screen_timeout_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_screen_timeout_gen.h"
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

lv_obj_t * screen_settings_screen_timeout_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_screen_timeout_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);

        lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_content = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_timeout_content, "screen_timeout_content");
        lv_obj_set_x(screen_timeout_content, 0);
        lv_obj_set_y(screen_timeout_content, 0);
        lv_obj_set_width(screen_timeout_content, 320);
        lv_obj_set_height(screen_timeout_content, 207);
        lv_obj_set_style_bg_opa(screen_timeout_content, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_content, 0, 0);
        lv_obj_set_style_pad_all(screen_timeout_content, 0, 0);
        lv_obj_set_flag(screen_timeout_content, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_label_0 = lv_label_create(screen_timeout_content);
        lv_label_set_text(lv_label_0, "息屏时间");
        lv_obj_set_x(lv_label_0, 152);
        lv_obj_set_y(lv_label_0, 17);
        lv_obj_set_width(lv_label_0, 144);
        lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_1 = lv_label_create(screen_timeout_content);
        lv_label_set_text(lv_label_1, "无操作后");
        lv_obj_set_x(lv_label_1, 24);
        lv_obj_set_y(lv_label_1, 24);
        lv_obj_set_width(lv_label_1, 112);
        lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_timeout_list = lv_obj_create(screen_timeout_content);
        lv_obj_set_name(screen_timeout_list, "screen_timeout_list");
        lv_obj_set_x(screen_timeout_list, 36);
        lv_obj_set_y(screen_timeout_list, 52);
        lv_obj_set_width(screen_timeout_list, 248);
        lv_obj_set_height(screen_timeout_list, 146);
        lv_obj_set_style_bg_opa(screen_timeout_list, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_list, 0, 0);
        lv_obj_set_style_pad_all(screen_timeout_list, 0, 0);
        lv_obj_set_scrollbar_mode(screen_timeout_list, LV_SCROLLBAR_MODE_OFF);
        lv_obj_set_flag(screen_timeout_list, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * screen_timeout_item_5m = lv_button_create(screen_timeout_list);
        lv_obj_set_name(screen_timeout_item_5m, "screen_timeout_item_5m");
        lv_obj_set_x(screen_timeout_item_5m, 0);
        lv_obj_set_y(screen_timeout_item_5m, 0);
        lv_obj_set_width(screen_timeout_item_5m, 248);
        lv_obj_set_height(screen_timeout_item_5m, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_5m, 0, 0);
        lv_obj_add_style(screen_timeout_item_5m, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(screen_timeout_item_5m, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_5m, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_item_5m_selected_bg = lv_obj_create(screen_timeout_item_5m);
        lv_obj_set_name(screen_timeout_item_5m_selected_bg, "screen_timeout_item_5m_selected_bg");
        lv_obj_set_x(screen_timeout_item_5m_selected_bg, 0);
        lv_obj_set_y(screen_timeout_item_5m_selected_bg, 0);
        lv_obj_set_width(screen_timeout_item_5m_selected_bg, 248);
        lv_obj_set_height(screen_timeout_item_5m_selected_bg, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_5m_selected_bg, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_item_5m_selected_bg, 0, 0);
        lv_obj_set_flag(screen_timeout_item_5m_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_timeout_item_5m_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(screen_timeout_item_5m_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_5m_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(screen_timeout_item_5m_selected_bg, &meter_screen_timeout_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * lv_label_2 = lv_label_create(screen_timeout_item_5m);
        lv_label_set_text(lv_label_2, "5 分钟");
        lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_2, 248);
        lv_obj_add_style(lv_label_2, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_label_2, &me106_text_16_white_center, 0, &meter_screen_timeout_index, 0);

        lv_obj_add_subject_set_int_event(screen_timeout_item_5m, &meter_screen_timeout_index, LV_EVENT_CLICKED, 0);

        lv_obj_t * screen_timeout_item_15m = lv_button_create(screen_timeout_list);
        lv_obj_set_name(screen_timeout_item_15m, "screen_timeout_item_15m");
        lv_obj_set_x(screen_timeout_item_15m, 0);
        lv_obj_set_y(screen_timeout_item_15m, 30);
        lv_obj_set_width(screen_timeout_item_15m, 248);
        lv_obj_set_height(screen_timeout_item_15m, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_15m, 0, 0);
        lv_obj_add_style(screen_timeout_item_15m, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(screen_timeout_item_15m, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_15m, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_item_15m_selected_bg = lv_obj_create(screen_timeout_item_15m);
        lv_obj_set_name(screen_timeout_item_15m_selected_bg, "screen_timeout_item_15m_selected_bg");
        lv_obj_set_x(screen_timeout_item_15m_selected_bg, 0);
        lv_obj_set_y(screen_timeout_item_15m_selected_bg, 0);
        lv_obj_set_width(screen_timeout_item_15m_selected_bg, 248);
        lv_obj_set_height(screen_timeout_item_15m_selected_bg, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_15m_selected_bg, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_item_15m_selected_bg, 0, 0);
        lv_obj_set_flag(screen_timeout_item_15m_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_timeout_item_15m_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(screen_timeout_item_15m_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_15m_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(screen_timeout_item_15m_selected_bg, &meter_screen_timeout_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * lv_label_3 = lv_label_create(screen_timeout_item_15m);
        lv_label_set_text(lv_label_3, "15 分钟");
        lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_3, 248);
        lv_obj_add_style(lv_label_3, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_label_3, &me106_text_16_white_center, 0, &meter_screen_timeout_index, 1);

        lv_obj_add_subject_set_int_event(screen_timeout_item_15m, &meter_screen_timeout_index, LV_EVENT_CLICKED, 1);

        lv_obj_t * screen_timeout_item_30m = lv_button_create(screen_timeout_list);
        lv_obj_set_name(screen_timeout_item_30m, "screen_timeout_item_30m");
        lv_obj_set_x(screen_timeout_item_30m, 0);
        lv_obj_set_y(screen_timeout_item_30m, 60);
        lv_obj_set_width(screen_timeout_item_30m, 248);
        lv_obj_set_height(screen_timeout_item_30m, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_30m, 0, 0);
        lv_obj_add_style(screen_timeout_item_30m, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(screen_timeout_item_30m, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_30m, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_item_30m_selected_bg = lv_obj_create(screen_timeout_item_30m);
        lv_obj_set_name(screen_timeout_item_30m_selected_bg, "screen_timeout_item_30m_selected_bg");
        lv_obj_set_x(screen_timeout_item_30m_selected_bg, 0);
        lv_obj_set_y(screen_timeout_item_30m_selected_bg, 0);
        lv_obj_set_width(screen_timeout_item_30m_selected_bg, 248);
        lv_obj_set_height(screen_timeout_item_30m_selected_bg, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_30m_selected_bg, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_item_30m_selected_bg, 0, 0);
        lv_obj_set_flag(screen_timeout_item_30m_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_timeout_item_30m_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(screen_timeout_item_30m_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_30m_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(screen_timeout_item_30m_selected_bg, &meter_screen_timeout_index, LV_OBJ_FLAG_HIDDEN, 2);

        lv_obj_t * lv_label_4 = lv_label_create(screen_timeout_item_30m);
        lv_label_set_text(lv_label_4, "30 分钟");
        lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_4, 248);
        lv_obj_add_style(lv_label_4, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_label_4, &me106_text_16_white_center, 0, &meter_screen_timeout_index, 2);

        lv_obj_add_subject_set_int_event(screen_timeout_item_30m, &meter_screen_timeout_index, LV_EVENT_CLICKED, 2);

        lv_obj_t * screen_timeout_item_1h = lv_button_create(screen_timeout_list);
        lv_obj_set_name(screen_timeout_item_1h, "screen_timeout_item_1h");
        lv_obj_set_x(screen_timeout_item_1h, 0);
        lv_obj_set_y(screen_timeout_item_1h, 90);
        lv_obj_set_width(screen_timeout_item_1h, 248);
        lv_obj_set_height(screen_timeout_item_1h, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_1h, 0, 0);
        lv_obj_add_style(screen_timeout_item_1h, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(screen_timeout_item_1h, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_1h, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_item_1h_selected_bg = lv_obj_create(screen_timeout_item_1h);
        lv_obj_set_name(screen_timeout_item_1h_selected_bg, "screen_timeout_item_1h_selected_bg");
        lv_obj_set_x(screen_timeout_item_1h_selected_bg, 0);
        lv_obj_set_y(screen_timeout_item_1h_selected_bg, 0);
        lv_obj_set_width(screen_timeout_item_1h_selected_bg, 248);
        lv_obj_set_height(screen_timeout_item_1h_selected_bg, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_1h_selected_bg, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_item_1h_selected_bg, 0, 0);
        lv_obj_set_flag(screen_timeout_item_1h_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_timeout_item_1h_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(screen_timeout_item_1h_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_1h_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(screen_timeout_item_1h_selected_bg, &meter_screen_timeout_index, LV_OBJ_FLAG_HIDDEN, 3);

        lv_obj_t * lv_label_5 = lv_label_create(screen_timeout_item_1h);
        lv_label_set_text(lv_label_5, "1 小时");
        lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_5, 248);
        lv_obj_add_style(lv_label_5, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_label_5, &me106_text_16_white_center, 0, &meter_screen_timeout_index, 3);

        lv_obj_add_subject_set_int_event(screen_timeout_item_1h, &meter_screen_timeout_index, LV_EVENT_CLICKED, 3);

        lv_obj_t * screen_timeout_item_never = lv_button_create(screen_timeout_list);
        lv_obj_set_name(screen_timeout_item_never, "screen_timeout_item_never");
        lv_obj_set_x(screen_timeout_item_never, 0);
        lv_obj_set_y(screen_timeout_item_never, 120);
        lv_obj_set_width(screen_timeout_item_never, 248);
        lv_obj_set_height(screen_timeout_item_never, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_never, 0, 0);
        lv_obj_add_style(screen_timeout_item_never, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(screen_timeout_item_never, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_never, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * screen_timeout_item_never_selected_bg = lv_obj_create(screen_timeout_item_never);
        lv_obj_set_name(screen_timeout_item_never_selected_bg, "screen_timeout_item_never_selected_bg");
        lv_obj_set_x(screen_timeout_item_never_selected_bg, 0);
        lv_obj_set_y(screen_timeout_item_never_selected_bg, 0);
        lv_obj_set_width(screen_timeout_item_never_selected_bg, 248);
        lv_obj_set_height(screen_timeout_item_never_selected_bg, 26);
        lv_obj_set_style_pad_all(screen_timeout_item_never_selected_bg, 0, 0);
        lv_obj_set_style_border_width(screen_timeout_item_never_selected_bg, 0, 0);
        lv_obj_set_flag(screen_timeout_item_never_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_timeout_item_never_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(screen_timeout_item_never_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_item_never_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(screen_timeout_item_never_selected_bg, &meter_screen_timeout_index, LV_OBJ_FLAG_HIDDEN, 4);

        lv_obj_t * lv_label_6 = lv_label_create(screen_timeout_item_never);
        lv_label_set_text(lv_label_6, "永不");
        lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
        lv_obj_set_width(lv_label_6, 248);
        lv_obj_add_style(lv_label_6, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(lv_label_6, &me106_text_16_white_center, 0, &meter_screen_timeout_index, 4);

        lv_obj_add_subject_set_int_event(screen_timeout_item_never, &meter_screen_timeout_index, LV_EVENT_CLICKED, 4);

        lv_obj_t * screen_settings_timeout_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_timeout_bottom_bar, "screen_settings_timeout_bottom_bar");
        lv_obj_set_x(screen_settings_timeout_bottom_bar, 0);
        lv_obj_set_y(screen_settings_timeout_bottom_bar, 207);
        lv_obj_set_width(screen_settings_timeout_bottom_bar, 320);
        lv_obj_set_height(screen_settings_timeout_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_timeout_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_timeout_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_timeout_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_timeout_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_timeout_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_timeout_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * screen_timeout_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(screen_timeout_btn_return, "screen_timeout_btn_return");
        lv_obj_set_x(screen_timeout_btn_return, 0);
        lv_obj_set_y(screen_timeout_btn_return, 207);
        lv_obj_set_width(screen_timeout_btn_return, 79);
        lv_obj_set_height(screen_timeout_btn_return, 32);
        lv_obj_add_style(screen_timeout_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_timeout_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(screen_timeout_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(screen_timeout_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * screen_timeout_btn_down = lv_button_create(lv_obj_0);
        lv_obj_set_name(screen_timeout_btn_down, "screen_timeout_btn_down");
        lv_obj_set_x(screen_timeout_btn_down, 80);
        lv_obj_set_y(screen_timeout_btn_down, 207);
        lv_obj_set_width(screen_timeout_btn_down, 79);
        lv_obj_set_height(screen_timeout_btn_down, 32);
        lv_obj_add_style(screen_timeout_btn_down, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_timeout_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(screen_timeout_btn_down);
        lv_image_set_src(lv_image_1, meter_arrow_down);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(screen_timeout_btn_down, &meter_screen_timeout_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(screen_timeout_btn_down, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(screen_timeout_btn_down, subject_increment_event_0, 4);
        lv_obj_set_subject_increment_event_rollover(screen_timeout_btn_down, subject_increment_event_0, true);

        lv_obj_t * screen_timeout_btn_up = lv_button_create(lv_obj_0);
        lv_obj_set_name(screen_timeout_btn_up, "screen_timeout_btn_up");
        lv_obj_set_x(screen_timeout_btn_up, 160);
        lv_obj_set_y(screen_timeout_btn_up, 207);
        lv_obj_set_width(screen_timeout_btn_up, 79);
        lv_obj_set_height(screen_timeout_btn_up, 32);
        lv_obj_add_style(screen_timeout_btn_up, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_timeout_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(screen_timeout_btn_up);
        lv_image_set_src(lv_image_2, meter_arrow_up);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(screen_timeout_btn_up, &meter_screen_timeout_index, LV_EVENT_CLICKED, -1);
        lv_obj_set_subject_increment_event_min_value(screen_timeout_btn_up, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(screen_timeout_btn_up, subject_increment_event_1, 4);
        lv_obj_set_subject_increment_event_rollover(screen_timeout_btn_up, subject_increment_event_1, true);

        lv_obj_t * screen_timeout_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(screen_timeout_btn_yes, "screen_timeout_btn_yes");
        lv_obj_set_x(screen_timeout_btn_yes, 240);
        lv_obj_set_y(screen_timeout_btn_yes, 207);
        lv_obj_set_width(screen_timeout_btn_yes, 80);
        lv_obj_set_height(screen_timeout_btn_yes, 32);
        lv_obj_add_style(screen_timeout_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(screen_timeout_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_timeout_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(screen_timeout_btn_yes);
        lv_image_set_src(lv_image_3, meter_yes);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);

        lv_obj_add_screen_create_event(screen_timeout_btn_yes, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

