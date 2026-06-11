/**
 * @file screen_settings_factory_reset_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_factory_reset_gen.h"
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

static lv_anim_timeline_t * timeline_factory_dialog_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_settings_factory_reset_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_factory_reset_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_factory_confirm_index, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_factory_reset_request, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_t * factory_modal_layer = lv_obj_create(lv_obj_0);
    lv_obj_set_name(factory_modal_layer, "factory_modal_layer");
    lv_obj_set_x(factory_modal_layer, 0);
    lv_obj_set_y(factory_modal_layer, 0);
    lv_obj_set_width(factory_modal_layer, 320);
    lv_obj_set_height(factory_modal_layer, 207);
    lv_obj_set_style_bg_color(factory_modal_layer, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(factory_modal_layer, 190, 0);
    lv_obj_set_style_border_width(factory_modal_layer, 0, 0);
    lv_obj_set_style_pad_all(factory_modal_layer, 0, 0);
    lv_obj_set_flag(factory_modal_layer, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * factory_dialog = lv_obj_create(lv_obj_0);
    lv_obj_set_name(factory_dialog, "factory_dialog");
    lv_obj_set_x(factory_dialog, 30);
    lv_obj_set_y(factory_dialog, 36);
    lv_obj_set_width(factory_dialog, 260);
    lv_obj_set_height(factory_dialog, 150);
    lv_obj_set_style_bg_color(factory_dialog, lv_color_hex(0x242424), 0);
    lv_obj_set_style_bg_opa(factory_dialog, 255, 0);
    lv_obj_set_style_border_width(factory_dialog, 1, 0);
    lv_obj_set_style_border_color(factory_dialog, lv_color_hex(0x303030), 0);
    lv_obj_set_style_border_opa(factory_dialog, 255, 0);
    lv_obj_set_style_radius(factory_dialog, 8, 0);
    lv_obj_set_style_pad_all(factory_dialog, 0, 0);
    lv_obj_set_flag(factory_dialog, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_0 = lv_label_create(factory_dialog);
    lv_label_set_text(lv_label_0, "恢复出厂设置？");
    lv_obj_set_x(lv_label_0, 18);
    lv_obj_set_y(lv_label_0, 16);
    lv_obj_set_width(lv_label_0, 224);
    lv_obj_add_style(lv_label_0, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(factory_dialog);
    lv_label_set_text(lv_label_1, "仅恢复初始设置参数");
    lv_obj_set_x(lv_label_1, 22);
    lv_obj_set_y(lv_label_1, 48);
    lv_obj_set_width(lv_label_1, 216);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(factory_dialog);
    lv_label_set_text(lv_label_2, "不会更新固件或程序");
    lv_obj_set_x(lv_label_2, 22);
    lv_obj_set_y(lv_label_2, 70);
    lv_obj_set_width(lv_label_2, 216);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * factory_cancel_btn = lv_button_create(factory_dialog);
    lv_obj_set_name(factory_cancel_btn, "factory_cancel_btn");
    lv_obj_set_x(factory_cancel_btn, 24);
    lv_obj_set_y(factory_cancel_btn, 104);
    lv_obj_set_width(factory_cancel_btn, 96);
    lv_obj_set_height(factory_cancel_btn, 32);
    lv_obj_set_style_pad_all(factory_cancel_btn, 0, 0);
    lv_obj_add_style(factory_cancel_btn, &me106_panel_blue_r6, 0);
    lv_obj_bind_style(factory_cancel_btn, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_cancel_btn, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(factory_cancel_btn, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * lv_label_3 = lv_label_create(factory_cancel_btn);
    lv_label_set_text(lv_label_3, "取消");
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_3, 96);
    lv_obj_add_style(lv_label_3, &me106_text_16_white_center, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(factory_cancel_btn, &meter_factory_confirm_index, LV_EVENT_CLICKED, 0);
    lv_obj_add_screen_create_event(factory_cancel_btn, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * factory_cancel_btn_inactive = lv_button_create(factory_dialog);
    lv_obj_set_name(factory_cancel_btn_inactive, "factory_cancel_btn_inactive");
    lv_obj_set_x(factory_cancel_btn_inactive, 24);
    lv_obj_set_y(factory_cancel_btn_inactive, 104);
    lv_obj_set_width(factory_cancel_btn_inactive, 96);
    lv_obj_set_height(factory_cancel_btn_inactive, 32);
    lv_obj_set_style_bg_color(factory_cancel_btn_inactive, lv_color_hex(0x1F1F1F), 0);
    lv_obj_set_style_bg_opa(factory_cancel_btn_inactive, 255, 0);
    lv_obj_set_style_border_width(factory_cancel_btn_inactive, 0, 0);
    lv_obj_set_style_radius(factory_cancel_btn_inactive, 6, 0);
    lv_obj_set_style_pad_all(factory_cancel_btn_inactive, 0, 0);
    lv_obj_set_style_shadow_width(factory_cancel_btn_inactive, 0, 0);
    lv_obj_bind_flag_if_not_eq(factory_cancel_btn_inactive, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_label_4 = lv_label_create(factory_cancel_btn_inactive);
    lv_label_set_text(lv_label_4, "取消");
    lv_obj_set_align(lv_label_4, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_4, 96);
    lv_obj_add_style(lv_label_4, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(factory_cancel_btn_inactive, &meter_factory_confirm_index, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * factory_confirm_btn = lv_button_create(factory_dialog);
    lv_obj_set_name(factory_confirm_btn, "factory_confirm_btn");
    lv_obj_set_x(factory_confirm_btn, 140);
    lv_obj_set_y(factory_confirm_btn, 104);
    lv_obj_set_width(factory_confirm_btn, 96);
    lv_obj_set_height(factory_confirm_btn, 32);
    lv_obj_set_style_pad_all(factory_confirm_btn, 0, 0);
    lv_obj_add_style(factory_confirm_btn, &me106_panel_blue_r6, 0);
    lv_obj_bind_style(factory_confirm_btn, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_confirm_btn, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(factory_confirm_btn, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_label_5 = lv_label_create(factory_confirm_btn);
    lv_label_set_text(lv_label_5, "恢复设置");
    lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_5, 96);
    lv_obj_add_style(lv_label_5, &me106_text_16_white_center, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(factory_confirm_btn, &meter_factory_reset_request, LV_EVENT_CLICKED, 1);
    lv_obj_add_screen_create_event(factory_confirm_btn, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * factory_confirm_btn_inactive = lv_button_create(factory_dialog);
    lv_obj_set_name(factory_confirm_btn_inactive, "factory_confirm_btn_inactive");
    lv_obj_set_x(factory_confirm_btn_inactive, 140);
    lv_obj_set_y(factory_confirm_btn_inactive, 104);
    lv_obj_set_width(factory_confirm_btn_inactive, 96);
    lv_obj_set_height(factory_confirm_btn_inactive, 32);
    lv_obj_set_style_bg_color(factory_confirm_btn_inactive, lv_color_hex(0x1F1F1F), 0);
    lv_obj_set_style_bg_opa(factory_confirm_btn_inactive, 255, 0);
    lv_obj_set_style_border_width(factory_confirm_btn_inactive, 0, 0);
    lv_obj_set_style_radius(factory_confirm_btn_inactive, 6, 0);
    lv_obj_set_style_pad_all(factory_confirm_btn_inactive, 0, 0);
    lv_obj_set_style_shadow_width(factory_confirm_btn_inactive, 0, 0);
    lv_obj_bind_flag_if_not_eq(factory_confirm_btn_inactive, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * lv_label_6 = lv_label_create(factory_confirm_btn_inactive);
    lv_label_set_text(lv_label_6, "恢复设置");
    lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_6, 96);
    lv_obj_add_style(lv_label_6, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(factory_confirm_btn_inactive, &meter_factory_confirm_index, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * screen_settings_factory_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_factory_bottom_bar, "screen_settings_factory_bottom_bar");
    lv_obj_set_x(screen_settings_factory_bottom_bar, 0);
    lv_obj_set_y(screen_settings_factory_bottom_bar, 207);
    lv_obj_set_width(screen_settings_factory_bottom_bar, 320);
    lv_obj_set_height(screen_settings_factory_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_factory_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_factory_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_factory_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_factory_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_factory_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_factory_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * factory_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_return, "factory_btn_return");
    lv_obj_set_x(factory_btn_return, 0);
    lv_obj_set_y(factory_btn_return, 207);
    lv_obj_set_width(factory_btn_return, 79);
    lv_obj_set_height(factory_btn_return, 32);
    lv_obj_add_style(factory_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(factory_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(factory_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(factory_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * factory_btn_left = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_left, "factory_btn_left");
    lv_obj_set_x(factory_btn_left, 80);
    lv_obj_set_y(factory_btn_left, 207);
    lv_obj_set_width(factory_btn_left, 79);
    lv_obj_set_height(factory_btn_left, 32);
    lv_obj_add_style(factory_btn_left, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(factory_btn_left, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_btn_left, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(factory_btn_left);
    lv_image_set_src(lv_image_1, meter_arrow_left);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(factory_btn_left, &meter_factory_confirm_index, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(factory_btn_left, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(factory_btn_left, subject_increment_event_0, 1);
    lv_obj_set_subject_increment_event_rollover(factory_btn_left, subject_increment_event_0, true);
    
    lv_obj_t * factory_btn_right = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_right, "factory_btn_right");
    lv_obj_set_x(factory_btn_right, 160);
    lv_obj_set_y(factory_btn_right, 207);
    lv_obj_set_width(factory_btn_right, 79);
    lv_obj_set_height(factory_btn_right, 32);
    lv_obj_add_style(factory_btn_right, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(factory_btn_right, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_btn_right, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(factory_btn_right);
    lv_image_set_src(lv_image_2, meter_arrow_right);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(factory_btn_right, &meter_factory_confirm_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(factory_btn_right, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(factory_btn_right, subject_increment_event_1, 1);
    lv_obj_set_subject_increment_event_rollover(factory_btn_right, subject_increment_event_1, true);
    
    lv_obj_t * factory_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_yes, "factory_btn_yes");
    lv_obj_set_x(factory_btn_yes, 240);
    lv_obj_set_y(factory_btn_yes, 207);
    lv_obj_set_width(factory_btn_yes, 80);
    lv_obj_set_height(factory_btn_yes, 32);
    lv_obj_add_style(factory_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(factory_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(factory_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(factory_btn_yes);
    lv_image_set_src(lv_image_3, meter_yes);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_t * factory_btn_yes_cancel = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_yes_cancel, "factory_btn_yes_cancel");
    lv_obj_set_x(factory_btn_yes_cancel, 240);
    lv_obj_set_y(factory_btn_yes_cancel, 207);
    lv_obj_set_width(factory_btn_yes_cancel, 80);
    lv_obj_set_height(factory_btn_yes_cancel, 32);
    lv_obj_set_style_bg_opa(factory_btn_yes_cancel, 0, 0);
    lv_obj_set_style_border_width(factory_btn_yes_cancel, 0, 0);
    lv_obj_set_style_shadow_width(factory_btn_yes_cancel, 0, 0);
    lv_obj_bind_flag_if_not_eq(factory_btn_yes_cancel, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_screen_create_event(factory_btn_yes_cancel, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * factory_btn_yes_confirm = lv_button_create(lv_obj_0);
    lv_obj_set_name(factory_btn_yes_confirm, "factory_btn_yes_confirm");
    lv_obj_set_x(factory_btn_yes_confirm, 240);
    lv_obj_set_y(factory_btn_yes_confirm, 207);
    lv_obj_set_width(factory_btn_yes_confirm, 80);
    lv_obj_set_height(factory_btn_yes_confirm, 32);
    lv_obj_set_style_bg_opa(factory_btn_yes_confirm, 0, 0);
    lv_obj_set_style_border_width(factory_btn_yes_confirm, 0, 0);
    lv_obj_set_style_shadow_width(factory_btn_yes_confirm, 0, 0);
    lv_obj_bind_flag_if_not_eq(factory_btn_yes_confirm, &meter_factory_confirm_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_subject_set_int_event(factory_btn_yes_confirm, &meter_factory_reset_request, LV_EVENT_CLICKED, 1);
    lv_obj_add_screen_create_event(factory_btn_yes_confirm, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_FACTORY_DIALOG_OPEN] = timeline_factory_dialog_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_factory_reset_get_timeline(lv_obj_0, SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_FACTORY_DIALOG_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_factory_reset_get_timeline(lv_obj_t * obj, screen_settings_factory_reset_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_factory_reset has no timeline with %d ID", timeline_id);
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

static lv_anim_timeline_t * timeline_factory_dialog_open_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "factory_dialog"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 120);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "factory_dialog"));
    lv_anim_set_values(&a, 6, 0);
    lv_anim_set_duration(&a, 120);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    return at;
}

static void free_timeline_event_cb(lv_event_t * e)
{
    lv_anim_timeline_t ** at_array = lv_event_get_user_data(e);
    uint32_t i;
    for(i = 0; i < _SCREEN_SETTINGS_FACTORY_RESET_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

