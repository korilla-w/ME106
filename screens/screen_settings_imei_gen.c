/**
 * @file screen_settings_imei_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_imei_gen.h"
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

lv_obj_t * screen_settings_imei_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t imei_card;
    static lv_style_t imei_header_tag;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&imei_card);
        lv_style_init(&imei_header_tag);

        lv_style_set_bg_color(&imei_card, METER_THEME_DARK_COLOR_SURFACE_ALT);
        lv_style_set_bg_opa(&imei_card, 255);
        lv_style_set_radius(&imei_card, 10);
        lv_style_set_border_width(&imei_card, 0);
        lv_style_set_shadow_width(&imei_card, 0);
        lv_style_set_bg_color(&imei_header_tag, METER_THEME_DARK_COLOR_ACCENT);
        lv_style_set_bg_opa(&imei_header_tag, 32);
        lv_style_set_radius(&imei_header_tag, 6);
        lv_style_set_border_width(&imei_header_tag, 0);
        lv_style_set_shadow_width(&imei_header_tag, 0);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_settings_imei_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 240);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
        lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
        lv_obj_t * imei_content = lv_obj_create(lv_obj_0);
        lv_obj_set_name(imei_content, "imei_content");
        lv_obj_set_x(imei_content, 0);
        lv_obj_set_y(imei_content, 0);
        lv_obj_set_width(imei_content, 320);
        lv_obj_set_height(imei_content, 207);
        lv_obj_set_style_bg_opa(imei_content, 0, 0);
        lv_obj_set_style_border_width(imei_content, 0, 0);
        lv_obj_set_style_pad_all(imei_content, 0, 0);
        lv_obj_set_flag(imei_content, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(imei_content, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_t * settings_imei_title = lv_label_create(imei_content);
        lv_obj_set_name(settings_imei_title, "settings_imei_title");
        lv_label_set_text(settings_imei_title, "IMEI 信息");
        lv_obj_set_x(settings_imei_title, 152);
        lv_obj_set_y(settings_imei_title, 17);
        lv_obj_set_width(settings_imei_title, 144);
        lv_label_set_long_mode(settings_imei_title, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_title, &me106_text_16_white_right, 0);
        lv_obj_bind_style(settings_imei_title, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_title, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * imei_record_card = lv_obj_create(imei_content);
        lv_obj_set_name(imei_record_card, "imei_record_card");
        lv_obj_set_x(imei_record_card, 20);
        lv_obj_set_y(imei_record_card, 56);
        lv_obj_set_width(imei_record_card, 280);
        lv_obj_set_height(imei_record_card, 122);
        lv_obj_set_style_pad_all(imei_record_card, 0, 0);
        lv_obj_set_flag(imei_record_card, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(imei_record_card, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_add_style(imei_record_card, &imei_card, 0);
        lv_obj_bind_style(imei_record_card, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(imei_record_card, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * imei_transport_tag = lv_obj_create(imei_record_card);
        lv_obj_set_name(imei_transport_tag, "imei_transport_tag");
        lv_obj_set_x(imei_transport_tag, 218);
        lv_obj_set_y(imei_transport_tag, 10);
        lv_obj_set_width(imei_transport_tag, 46);
        lv_obj_set_height(imei_transport_tag, 22);
        lv_obj_set_style_pad_all(imei_transport_tag, 0, 0);
        lv_obj_set_flag(imei_transport_tag, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(imei_transport_tag, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_add_style(imei_transport_tag, &imei_header_tag, 0);
        lv_obj_bind_style(imei_transport_tag, &me106_theme_light_accent_soft, 0, &meter_theme_index, 1);
        lv_obj_bind_style(imei_transport_tag, &me106_theme_alarm_accent_soft, 0, &meter_theme_index, 2);
        lv_obj_t * settings_imei_transport_label = lv_label_create(imei_transport_tag);
        lv_obj_set_name(settings_imei_transport_label, "settings_imei_transport_label");
        lv_label_set_text(settings_imei_transport_label, "4G");
        lv_obj_set_align(settings_imei_transport_label, LV_ALIGN_CENTER);
        lv_obj_add_style(settings_imei_transport_label, &me106_text_14_blue, 0);
        lv_obj_bind_style(settings_imei_transport_label, &me106_theme_light_accent_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_transport_label, &me106_theme_alarm_accent_text, 0, &meter_theme_index, 2);

        lv_obj_t * settings_imei_number_label = lv_label_create(imei_record_card);
        lv_obj_set_name(settings_imei_number_label, "settings_imei_number_label");
        lv_label_set_text(settings_imei_number_label, "IMEI");
        lv_obj_set_x(settings_imei_number_label, 16);
        lv_obj_set_y(settings_imei_number_label, 12);
        lv_obj_set_width(settings_imei_number_label, 100);
        lv_label_set_long_mode(settings_imei_number_label, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_number_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_imei_number_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_number_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_imei_number_value = lv_label_create(imei_record_card);
        lv_obj_set_name(settings_imei_number_value, "settings_imei_number_value");
        lv_label_bind_text(settings_imei_number_value, &meter_imei_text, NULL);
        lv_obj_set_x(settings_imei_number_value, 16);
        lv_obj_set_y(settings_imei_number_value, 48);
        lv_obj_set_width(settings_imei_number_value, 248);
        lv_obj_set_height(settings_imei_number_value, 28);
        lv_label_set_long_mode(settings_imei_number_value, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_number_value, &me106_text_18_white_center, 0);
        lv_obj_bind_style(settings_imei_number_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_number_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_eq(settings_imei_number_value, &meter_imei_has_value, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_imei_empty_value = lv_label_create(imei_record_card);
        lv_obj_set_name(settings_imei_empty_value, "settings_imei_empty_value");
        lv_label_set_text(settings_imei_empty_value, "尚未配置");
        lv_obj_set_x(settings_imei_empty_value, 16);
        lv_obj_set_y(settings_imei_empty_value, 48);
        lv_obj_set_width(settings_imei_empty_value, 248);
        lv_obj_set_height(settings_imei_empty_value, 28);
        lv_label_set_long_mode(settings_imei_empty_value, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_set_style_text_align(settings_imei_empty_value, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_add_style(settings_imei_empty_value, &me106_text_18_gray_ba, 0);
        lv_obj_bind_style(settings_imei_empty_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_empty_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
        lv_obj_bind_flag_if_not_eq(settings_imei_empty_value, &meter_imei_has_value, LV_OBJ_FLAG_HIDDEN, 0);

        lv_obj_t * settings_imei_source_label = lv_label_create(imei_record_card);
        lv_obj_set_name(settings_imei_source_label, "settings_imei_source_label");
        lv_label_set_text(settings_imei_source_label, "来源");
        lv_obj_set_x(settings_imei_source_label, 16);
        lv_obj_set_y(settings_imei_source_label, 94);
        lv_obj_set_width(settings_imei_source_label, 48);
        lv_label_set_long_mode(settings_imei_source_label, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_source_label, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_imei_source_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_source_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_imei_source_value = lv_label_create(imei_record_card);
        lv_obj_set_name(settings_imei_source_value, "settings_imei_source_value");
        lv_label_bind_text(settings_imei_source_value, &meter_imei_source_text, NULL);
        lv_obj_set_x(settings_imei_source_value, 72);
        lv_obj_set_y(settings_imei_source_value, 94);
        lv_obj_set_width(settings_imei_source_value, 192);
        lv_label_set_long_mode(settings_imei_source_value, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_set_style_text_align(settings_imei_source_value, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_add_style(settings_imei_source_value, &me106_text_14_gray_ba, 0);
        lv_obj_bind_style(settings_imei_source_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_source_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * settings_imei_status_value = lv_label_create(imei_content);
        lv_obj_set_name(settings_imei_status_value, "settings_imei_status_value");
        lv_label_bind_text(settings_imei_status_value, &meter_imei_status_text, NULL);
        lv_obj_set_x(settings_imei_status_value, 20);
        lv_obj_set_y(settings_imei_status_value, 183);
        lv_obj_set_width(settings_imei_status_value, 280);
        lv_obj_set_height(settings_imei_status_value, 21);
        lv_label_set_long_mode(settings_imei_status_value, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_status_value, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(settings_imei_status_value, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(settings_imei_status_value, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_settings_imei_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_settings_imei_bottom_bar, "screen_settings_imei_bottom_bar");
        lv_obj_set_x(screen_settings_imei_bottom_bar, 0);
        lv_obj_set_y(screen_settings_imei_bottom_bar, 207);
        lv_obj_set_width(screen_settings_imei_bottom_bar, 320);
        lv_obj_set_height(screen_settings_imei_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_settings_imei_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_settings_imei_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_settings_imei_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(screen_settings_imei_bottom_bar, LV_OBJ_FLAG_CLICKABLE, false);
        lv_obj_add_style(screen_settings_imei_bottom_bar, &me106_btn_flat_gray1f, 0);
        lv_obj_bind_style(screen_settings_imei_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_settings_imei_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * imei_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(imei_btn_return, "imei_btn_return");
        lv_obj_set_x(imei_btn_return, 0);
        lv_obj_set_y(imei_btn_return, 207);
        lv_obj_set_width(imei_btn_return, 79);
        lv_obj_set_height(imei_btn_return, 32);
        lv_obj_set_style_pad_all(imei_btn_return, 0, 0);
        lv_obj_add_style(imei_btn_return, &me106_btn_flat_gray1f, 0);
        lv_obj_bind_style(imei_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(imei_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(imei_btn_return);
        lv_image_set_src(lv_image_0, meter_icon_return);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);

        lv_obj_add_screen_create_event(imei_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * imei_btn_fetch = lv_button_create(lv_obj_0);
        lv_obj_set_name(imei_btn_fetch, "imei_btn_fetch");
        lv_obj_set_x(imei_btn_fetch, 240);
        lv_obj_set_y(imei_btn_fetch, 207);
        lv_obj_set_width(imei_btn_fetch, 80);
        lv_obj_set_height(imei_btn_fetch, 32);
        lv_obj_set_style_pad_all(imei_btn_fetch, 0, 0);
        lv_obj_set_style_opa(imei_btn_fetch, 140, LV_STATE_DISABLED);
        lv_obj_add_style(imei_btn_fetch, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(imei_btn_fetch, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(imei_btn_fetch, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_bind_state_if_eq(imei_btn_fetch, &meter_imei_fetch_enabled, LV_STATE_DISABLED, 0);
        lv_obj_add_subject_set_int_event(imei_btn_fetch, &meter_imei_request, LV_EVENT_CLICKED, 1);
        lv_obj_t * settings_imei_action_label = lv_label_create(imei_btn_fetch);
        lv_obj_set_name(settings_imei_action_label, "settings_imei_action_label");
        lv_label_bind_text(settings_imei_action_label, &meter_imei_action_text, NULL);
        lv_obj_set_align(settings_imei_action_label, LV_ALIGN_CENTER);
        lv_obj_set_width(settings_imei_action_label, 72);
        lv_label_set_long_mode(settings_imei_action_label, LV_LABEL_LONG_MODE_CLIP);
        lv_obj_add_style(settings_imei_action_label, &me106_text_14_white_center, 0);
        lv_obj_add_style(settings_imei_action_label, &me106_text_on_accent, 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

