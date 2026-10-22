/**
 * @file screen_settings_language_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_language_gen.h"
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

lv_obj_t * screen_settings_language_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_language_#");
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
        lv_obj_t * settings_language_content_label = lv_label_create(page_content);
        lv_label_set_text(settings_language_content_label, "语言设置");
        lv_obj_set_x(settings_language_content_label, 152);
        lv_obj_set_y(settings_language_content_label, 17);
        lv_obj_set_width(settings_language_content_label, 144);
        lv_obj_set_name(settings_language_content_label, "settings_language_content_label");
        lv_obj_add_style(settings_language_content_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_language_content_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_language_content_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * language_list = lv_obj_create(page_content);
        lv_obj_set_name(language_list, "language_list");
        lv_obj_set_x(language_list, 22);
        lv_obj_set_y(language_list, 52);
        lv_obj_set_width(language_list, 276);
        lv_obj_set_height(language_list, 142);
        lv_obj_set_style_bg_opa(language_list, 0, 0);
        lv_obj_set_style_border_width(language_list, 0, 0);
        lv_obj_set_style_pad_all(language_list, 0, 0);
        lv_obj_set_flag(language_list, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * language_item_zh = lv_button_create(language_list);
        lv_obj_set_name(language_item_zh, "language_item_zh");
        lv_obj_set_x(language_item_zh, 0);
        lv_obj_set_y(language_item_zh, 0);
        lv_obj_set_width(language_item_zh, 276);
        lv_obj_set_height(language_item_zh, 42);
        lv_obj_set_style_pad_all(language_item_zh, 0, 0);
        lv_obj_add_style(language_item_zh, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(language_item_zh, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_item_zh, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * language_item_zh_selected_bg = lv_obj_create(language_item_zh);
        lv_obj_set_name(language_item_zh_selected_bg, "language_item_zh_selected_bg");
        lv_obj_set_x(language_item_zh_selected_bg, 0);
        lv_obj_set_y(language_item_zh_selected_bg, 0);
        lv_obj_set_width(language_item_zh_selected_bg, 276);
        lv_obj_set_height(language_item_zh_selected_bg, 42);
        lv_obj_set_style_pad_all(language_item_zh_selected_bg, 0, 0);
        lv_obj_set_style_border_width(language_item_zh_selected_bg, 0, 0);
        lv_obj_set_flag(language_item_zh_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(language_item_zh_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(language_item_zh_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_item_zh_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(language_item_zh_selected_bg, &meter_language_index, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_language_item_zh_label = lv_label_create(language_item_zh);
        lv_label_set_text(settings_language_item_zh_label, "1 简体中文");
        lv_obj_set_align(settings_language_item_zh_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_language_item_zh_label, 20);
        lv_obj_set_y(settings_language_item_zh_label, 0);
        lv_obj_set_width(settings_language_item_zh_label, 140);
        lv_obj_set_name(settings_language_item_zh_label, "settings_language_item_zh_label");
        lv_obj_add_style(settings_language_item_zh_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_language_item_zh_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_language_item_zh_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_language_item_zh_label, &me106_text_16_white, 0, &meter_language_index, 0);

        lv_obj_t * settings_language_item_zh_tag_label = lv_label_create(language_item_zh);
        lv_label_set_text(settings_language_item_zh_tag_label, "默认");
        lv_obj_set_align(settings_language_item_zh_tag_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(settings_language_item_zh_tag_label, -14);
        lv_obj_set_y(settings_language_item_zh_tag_label, 0);
        lv_obj_set_width(settings_language_item_zh_tag_label, 72);
        lv_obj_set_name(settings_language_item_zh_tag_label, "settings_language_item_zh_tag_label");
        lv_obj_add_style(settings_language_item_zh_tag_label, &me106_text_14_gray_ba_right, 0);
        lv_obj_bind_style(settings_language_item_zh_tag_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_language_item_zh_tag_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_language_item_zh_tag_label, &me106_text_14_white_right, 0, &meter_language_index, 0);

        lv_obj_add_subject_set_int_event(language_item_zh, &meter_language_index, LV_EVENT_CLICKED, 0);

        lv_obj_t * language_item_en = lv_button_create(language_list);
        lv_obj_set_name(language_item_en, "language_item_en");
        lv_obj_set_x(language_item_en, 0);
        lv_obj_set_y(language_item_en, 50);
        lv_obj_set_width(language_item_en, 276);
        lv_obj_set_height(language_item_en, 42);
        lv_obj_set_style_pad_all(language_item_en, 0, 0);
        lv_obj_add_style(language_item_en, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(language_item_en, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_item_en, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * language_item_en_selected_bg = lv_obj_create(language_item_en);
        lv_obj_set_name(language_item_en_selected_bg, "language_item_en_selected_bg");
        lv_obj_set_x(language_item_en_selected_bg, 0);
        lv_obj_set_y(language_item_en_selected_bg, 0);
        lv_obj_set_width(language_item_en_selected_bg, 276);
        lv_obj_set_height(language_item_en_selected_bg, 42);
        lv_obj_set_style_pad_all(language_item_en_selected_bg, 0, 0);
        lv_obj_set_style_border_width(language_item_en_selected_bg, 0, 0);
        lv_obj_set_flag(language_item_en_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(language_item_en_selected_bg, &me106_panel_blue_r8, 0);
        lv_obj_bind_style(language_item_en_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_item_en_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(language_item_en_selected_bg, &meter_language_index, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * settings_language_item_en_label = lv_label_create(language_item_en);
        lv_label_set_text(settings_language_item_en_label, "2 English");
        lv_obj_set_align(settings_language_item_en_label, LV_ALIGN_LEFT_MID);
        lv_obj_set_x(settings_language_item_en_label, 20);
        lv_obj_set_y(settings_language_item_en_label, 0);
        lv_obj_set_width(settings_language_item_en_label, 140);
        lv_obj_set_name(settings_language_item_en_label, "settings_language_item_en_label");
        lv_obj_add_style(settings_language_item_en_label, &me106_text_16_gray_d8, 0);
        lv_obj_bind_style(settings_language_item_en_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_language_item_en_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_language_item_en_label, &me106_text_16_white, 0, &meter_language_index, 1);

        lv_obj_t * settings_language_item_en_tag_label = lv_label_create(language_item_en);
        lv_label_set_text(settings_language_item_en_tag_label, "EN");
        lv_obj_set_align(settings_language_item_en_tag_label, LV_ALIGN_RIGHT_MID);
        lv_obj_set_x(settings_language_item_en_tag_label, -14);
        lv_obj_set_y(settings_language_item_en_tag_label, 0);
        lv_obj_set_width(settings_language_item_en_tag_label, 72);
        lv_obj_set_name(settings_language_item_en_tag_label, "settings_language_item_en_tag_label");
        lv_obj_add_style(settings_language_item_en_tag_label, &me106_text_14_gray_ba_right, 0);
        lv_obj_bind_style(settings_language_item_en_tag_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_language_item_en_tag_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_style(settings_language_item_en_tag_label, &me106_text_14_white_right, 0, &meter_language_index, 1);

        lv_obj_add_subject_set_int_event(language_item_en, &meter_language_index, LV_EVENT_CLICKED, 1);

        lv_obj_t * screen_settings_language_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_language_bottom_bar, "screen_settings_language_bottom_bar");
        lv_obj_set_x(screen_settings_language_bottom_bar, 0);
        lv_obj_set_y(screen_settings_language_bottom_bar, 207);
        lv_obj_set_width(screen_settings_language_bottom_bar, 320);
        lv_obj_set_height(screen_settings_language_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_language_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_language_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_language_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_settings_language_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_settings_language_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_language_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * language_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(language_btn_return, "language_btn_return");
        lv_obj_set_x(language_btn_return, 0);
        lv_obj_set_y(language_btn_return, 207);
        lv_obj_set_width(language_btn_return, 79);
        lv_obj_set_height(language_btn_return, 32);
        lv_obj_add_style(language_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(language_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(language_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(language_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        lv_obj_t * language_btn_down = lv_button_create(lv_obj_0);
        lv_obj_set_name(language_btn_down, "language_btn_down");
        lv_obj_set_x(language_btn_down, 80);
        lv_obj_set_y(language_btn_down, 207);
        lv_obj_set_width(language_btn_down, 79);
        lv_obj_set_height(language_btn_down, 32);
        lv_obj_add_style(language_btn_down, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(language_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(language_btn_down);
        lv_image_set_src(lv_image_1, meter_arrow_down);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(language_btn_down, &meter_language_index, LV_EVENT_CLICKED, 1);
        lv_obj_set_subject_increment_event_min_value(language_btn_down, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(language_btn_down, subject_increment_event_0, 1);
        lv_obj_set_subject_increment_event_rollover(language_btn_down, subject_increment_event_0, true);

        lv_obj_t * language_btn_up = lv_button_create(lv_obj_0);
        lv_obj_set_name(language_btn_up, "language_btn_up");
        lv_obj_set_x(language_btn_up, 160);
        lv_obj_set_y(language_btn_up, 207);
        lv_obj_set_width(language_btn_up, 79);
        lv_obj_set_height(language_btn_up, 32);
        lv_obj_add_style(language_btn_up, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(language_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(language_btn_up);
        lv_image_set_src(lv_image_2, meter_arrow_up);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);

        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(language_btn_up, &meter_language_index, LV_EVENT_CLICKED, -1);
        lv_obj_set_subject_increment_event_min_value(language_btn_up, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(language_btn_up, subject_increment_event_1, 1);
        lv_obj_set_subject_increment_event_rollover(language_btn_up, subject_increment_event_1, true);

        lv_obj_t * language_btn_yes = lv_button_create(lv_obj_0);
        lv_obj_set_name(language_btn_yes, "language_btn_yes");
        lv_obj_set_x(language_btn_yes, 240);
        lv_obj_set_y(language_btn_yes, 207);
        lv_obj_set_width(language_btn_yes, 80);
        lv_obj_set_height(language_btn_yes, 32);
        lv_obj_add_style(language_btn_yes, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(language_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(language_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(language_btn_yes);
        lv_image_set_src(lv_image_3, meter_yes);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);

        lv_obj_add_screen_create_event(language_btn_yes, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_OUT, 105, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

