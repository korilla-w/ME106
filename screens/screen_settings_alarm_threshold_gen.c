/**
 * @file screen_settings_alarm_threshold_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_alarm_threshold_gen.h"
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

lv_obj_t * screen_settings_alarm_threshold_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_alarm_threshold_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_alarm_threshold_selected_index, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_t * alarm_threshold_content = lv_obj_create(lv_obj_0);
    lv_obj_set_name(alarm_threshold_content, "alarm_threshold_content");
    lv_obj_set_x(alarm_threshold_content, 0);
    lv_obj_set_y(alarm_threshold_content, 0);
    lv_obj_set_width(alarm_threshold_content, 320);
    lv_obj_set_height(alarm_threshold_content, 207);
    lv_obj_set_style_bg_opa(alarm_threshold_content, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_content, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_content, 0, 0);
    lv_obj_set_flag(alarm_threshold_content, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * lv_label_0 = lv_label_create(alarm_threshold_content);
    lv_label_set_text(lv_label_0, "告警阈值");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(alarm_threshold_content);
    lv_label_set_text(lv_label_1, "仅预览 / 不可设置");
    lv_obj_set_x(lv_label_1, 24);
    lv_obj_set_y(lv_label_1, 22);
    lv_obj_set_width(lv_label_1, 170);
    lv_obj_add_style(lv_label_1, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * alarm_threshold_list = lv_obj_create(alarm_threshold_content);
    lv_obj_set_name(alarm_threshold_list, "alarm_threshold_list");
    lv_obj_set_x(alarm_threshold_list, 20);
    lv_obj_set_y(alarm_threshold_list, 50);
    lv_obj_set_width(alarm_threshold_list, 280);
    lv_obj_set_height(alarm_threshold_list, 146);
    lv_obj_set_style_bg_opa(alarm_threshold_list, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_list, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_list, 0, 0);
    lv_obj_set_scrollbar_mode(alarm_threshold_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_flag(alarm_threshold_list, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * alarm_threshold_items = lv_obj_create(alarm_threshold_list);
    lv_obj_set_name(alarm_threshold_items, "alarm_threshold_items");
    lv_obj_set_x(alarm_threshold_items, 0);
    lv_obj_set_y(alarm_threshold_items, 0);
    lv_obj_set_width(alarm_threshold_items, 280);
    lv_obj_set_height(alarm_threshold_items, 300);
    lv_obj_set_style_bg_opa(alarm_threshold_items, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_items, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_items, 0, 0);
    lv_obj_set_flag(alarm_threshold_items, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_items, &me106_move_y_n38, 0, &meter_alarm_threshold_selected_index, 4);
    lv_obj_bind_style(alarm_threshold_items, &me106_move_y_n76, 0, &meter_alarm_threshold_selected_index, 5);
    lv_obj_bind_style(alarm_threshold_items, &me106_move_y_n114, 0, &meter_alarm_threshold_selected_index, 6);
    lv_obj_bind_style(alarm_threshold_items, &me106_move_y_n152, 0, &meter_alarm_threshold_selected_index, 7);
    lv_obj_t * alarm_threshold_item_u_step = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_u_step, "alarm_threshold_item_u_step");
    lv_obj_set_x(alarm_threshold_item_u_step, 0);
    lv_obj_set_y(alarm_threshold_item_u_step, 0);
    lv_obj_set_width(alarm_threshold_item_u_step, 280);
    lv_obj_set_height(alarm_threshold_item_u_step, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_u_step, 0, 0);
    lv_obj_add_style(alarm_threshold_item_u_step, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_u_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_u_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_u_step_selected_bg = lv_obj_create(alarm_threshold_item_u_step);
    lv_obj_set_name(alarm_threshold_item_u_step_selected_bg, "alarm_threshold_item_u_step_selected_bg");
    lv_obj_set_x(alarm_threshold_item_u_step_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_u_step_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_u_step_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_u_step_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_u_step_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_u_step_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_u_step_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_u_step_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_u_step_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_u_step_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_u_step_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(alarm_threshold_item_u_step);
    lv_label_set_text(lv_label_2, "电压变化");
    lv_obj_set_x(lv_label_2, 14);
    lv_obj_set_y(lv_label_2, 5);
    lv_obj_set_width(lv_label_2, 84);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(alarm_threshold_item_u_step);
    lv_label_bind_text(lv_label_3, &meter_alarm_threshold_u_step_value, "%d V");
    lv_obj_set_align(lv_label_3, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_3, -40);
    lv_obj_set_y(lv_label_3, -6);
    lv_obj_set_width(lv_label_3, 76);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_3, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 0);
    
    lv_obj_t * alarm_threshold_u_step_track = lv_obj_create(alarm_threshold_item_u_step);
    lv_obj_set_name(alarm_threshold_u_step_track, "alarm_threshold_u_step_track");
    lv_obj_set_x(alarm_threshold_u_step_track, 98);
    lv_obj_set_y(alarm_threshold_u_step_track, 23);
    lv_obj_set_width(alarm_threshold_u_step_track, 126);
    lv_obj_set_height(alarm_threshold_u_step_track, 5);
    lv_obj_set_style_radius(alarm_threshold_u_step_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_u_step_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_u_step_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_u_step_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_u_step_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_u_step_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_u_step_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_u_step_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_u_step_fill = lv_obj_create(alarm_threshold_u_step_track);
    lv_obj_set_name(alarm_threshold_u_step_fill, "alarm_threshold_u_step_fill");
    lv_obj_set_x(alarm_threshold_u_step_fill, 0);
    lv_obj_set_y(alarm_threshold_u_step_fill, 0);
    lv_obj_set_width(alarm_threshold_u_step_fill, 33);
    lv_obj_set_height(alarm_threshold_u_step_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_u_step_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_u_step_fill, lv_color_hex(0x52A3FF), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_u_step_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_u_step_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_u_step_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_u_step, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 0);
    
    lv_obj_t * alarm_threshold_item_i_step = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_i_step, "alarm_threshold_item_i_step");
    lv_obj_set_x(alarm_threshold_item_i_step, 0);
    lv_obj_set_y(alarm_threshold_item_i_step, 38);
    lv_obj_set_width(alarm_threshold_item_i_step, 280);
    lv_obj_set_height(alarm_threshold_item_i_step, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_i_step, 0, 0);
    lv_obj_add_style(alarm_threshold_item_i_step, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_i_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_i_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_i_step_selected_bg = lv_obj_create(alarm_threshold_item_i_step);
    lv_obj_set_name(alarm_threshold_item_i_step_selected_bg, "alarm_threshold_item_i_step_selected_bg");
    lv_obj_set_x(alarm_threshold_item_i_step_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_i_step_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_i_step_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_i_step_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_i_step_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_i_step_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_i_step_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_i_step_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_i_step_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_i_step_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_i_step_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_4 = lv_label_create(alarm_threshold_item_i_step);
    lv_label_set_text(lv_label_4, "电流变化");
    lv_obj_set_x(lv_label_4, 14);
    lv_obj_set_y(lv_label_4, 5);
    lv_obj_set_width(lv_label_4, 84);
    lv_obj_add_style(lv_label_4, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_4, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 1);
    
    lv_obj_t * lv_label_5 = lv_label_create(alarm_threshold_item_i_step);
    lv_label_bind_text(lv_label_5, &meter_alarm_threshold_i_step_value, "%d A");
    lv_obj_set_align(lv_label_5, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_5, -40);
    lv_obj_set_y(lv_label_5, -6);
    lv_obj_set_width(lv_label_5, 76);
    lv_obj_add_style(lv_label_5, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_5, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 1);
    
    lv_obj_t * alarm_threshold_i_step_track = lv_obj_create(alarm_threshold_item_i_step);
    lv_obj_set_name(alarm_threshold_i_step_track, "alarm_threshold_i_step_track");
    lv_obj_set_x(alarm_threshold_i_step_track, 98);
    lv_obj_set_y(alarm_threshold_i_step_track, 23);
    lv_obj_set_width(alarm_threshold_i_step_track, 126);
    lv_obj_set_height(alarm_threshold_i_step_track, 5);
    lv_obj_set_style_radius(alarm_threshold_i_step_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_i_step_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_i_step_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_i_step_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_i_step_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_i_step_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_i_step_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_i_step_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_i_step_fill = lv_obj_create(alarm_threshold_i_step_track);
    lv_obj_set_name(alarm_threshold_i_step_fill, "alarm_threshold_i_step_fill");
    lv_obj_set_x(alarm_threshold_i_step_fill, 0);
    lv_obj_set_y(alarm_threshold_i_step_fill, 0);
    lv_obj_set_width(alarm_threshold_i_step_fill, 66);
    lv_obj_set_height(alarm_threshold_i_step_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_i_step_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_i_step_fill, lv_color_hex(0x20D3D5), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_i_step_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_i_step_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_i_step_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_i_step, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 1);
    
    lv_obj_t * alarm_threshold_item_p_step = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_p_step, "alarm_threshold_item_p_step");
    lv_obj_set_x(alarm_threshold_item_p_step, 0);
    lv_obj_set_y(alarm_threshold_item_p_step, 76);
    lv_obj_set_width(alarm_threshold_item_p_step, 280);
    lv_obj_set_height(alarm_threshold_item_p_step, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_p_step, 0, 0);
    lv_obj_add_style(alarm_threshold_item_p_step, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_p_step, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_p_step, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_p_step_selected_bg = lv_obj_create(alarm_threshold_item_p_step);
    lv_obj_set_name(alarm_threshold_item_p_step_selected_bg, "alarm_threshold_item_p_step_selected_bg");
    lv_obj_set_x(alarm_threshold_item_p_step_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_p_step_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_p_step_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_p_step_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_p_step_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_p_step_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_p_step_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_p_step_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_p_step_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_p_step_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_p_step_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(alarm_threshold_item_p_step);
    lv_label_set_text(lv_label_6, "功率变化");
    lv_obj_set_x(lv_label_6, 14);
    lv_obj_set_y(lv_label_6, 5);
    lv_obj_set_width(lv_label_6, 84);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_6, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(alarm_threshold_item_p_step);
    lv_label_bind_text(lv_label_7, &meter_alarm_threshold_p_step_value, "%d W");
    lv_obj_set_align(lv_label_7, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_7, -40);
    lv_obj_set_y(lv_label_7, -6);
    lv_obj_set_width(lv_label_7, 76);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_7, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 2);
    
    lv_obj_t * alarm_threshold_p_step_track = lv_obj_create(alarm_threshold_item_p_step);
    lv_obj_set_name(alarm_threshold_p_step_track, "alarm_threshold_p_step_track");
    lv_obj_set_x(alarm_threshold_p_step_track, 98);
    lv_obj_set_y(alarm_threshold_p_step_track, 23);
    lv_obj_set_width(alarm_threshold_p_step_track, 126);
    lv_obj_set_height(alarm_threshold_p_step_track, 5);
    lv_obj_set_style_radius(alarm_threshold_p_step_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_p_step_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_p_step_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_p_step_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_p_step_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_p_step_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_p_step_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_p_step_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_p_step_fill = lv_obj_create(alarm_threshold_p_step_track);
    lv_obj_set_name(alarm_threshold_p_step_fill, "alarm_threshold_p_step_fill");
    lv_obj_set_x(alarm_threshold_p_step_fill, 0);
    lv_obj_set_y(alarm_threshold_p_step_fill, 0);
    lv_obj_set_width(alarm_threshold_p_step_fill, 66);
    lv_obj_set_height(alarm_threshold_p_step_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_p_step_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_p_step_fill, lv_color_hex(0xF59E0B), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_p_step_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_p_step_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_p_step_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_p_step, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 2);
    
    lv_obj_t * alarm_threshold_item_e_inc = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_e_inc, "alarm_threshold_item_e_inc");
    lv_obj_set_x(alarm_threshold_item_e_inc, 0);
    lv_obj_set_y(alarm_threshold_item_e_inc, 114);
    lv_obj_set_width(alarm_threshold_item_e_inc, 280);
    lv_obj_set_height(alarm_threshold_item_e_inc, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_e_inc, 0, 0);
    lv_obj_add_style(alarm_threshold_item_e_inc, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_e_inc, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_e_inc, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_e_inc_selected_bg = lv_obj_create(alarm_threshold_item_e_inc);
    lv_obj_set_name(alarm_threshold_item_e_inc_selected_bg, "alarm_threshold_item_e_inc_selected_bg");
    lv_obj_set_x(alarm_threshold_item_e_inc_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_e_inc_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_e_inc_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_e_inc_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_e_inc_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_e_inc_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_e_inc_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_e_inc_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_e_inc_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_e_inc_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_e_inc_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 3);
    
    lv_obj_t * lv_label_8 = lv_label_create(alarm_threshold_item_e_inc);
    lv_label_set_text(lv_label_8, "电能增量");
    lv_obj_set_x(lv_label_8, 14);
    lv_obj_set_y(lv_label_8, 5);
    lv_obj_set_width(lv_label_8, 84);
    lv_obj_add_style(lv_label_8, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_8, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 3);
    
    lv_obj_t * lv_label_9 = lv_label_create(alarm_threshold_item_e_inc);
    lv_label_bind_text(lv_label_9, &meter_alarm_threshold_e_inc_value, "%d kWh");
    lv_obj_set_align(lv_label_9, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_9, -40);
    lv_obj_set_y(lv_label_9, -6);
    lv_obj_set_width(lv_label_9, 92);
    lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_9, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 3);
    
    lv_obj_t * alarm_threshold_e_inc_track = lv_obj_create(alarm_threshold_item_e_inc);
    lv_obj_set_name(alarm_threshold_e_inc_track, "alarm_threshold_e_inc_track");
    lv_obj_set_x(alarm_threshold_e_inc_track, 98);
    lv_obj_set_y(alarm_threshold_e_inc_track, 23);
    lv_obj_set_width(alarm_threshold_e_inc_track, 126);
    lv_obj_set_height(alarm_threshold_e_inc_track, 5);
    lv_obj_set_style_radius(alarm_threshold_e_inc_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_e_inc_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_e_inc_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_e_inc_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_e_inc_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_e_inc_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_e_inc_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_e_inc_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_e_inc_fill = lv_obj_create(alarm_threshold_e_inc_track);
    lv_obj_set_name(alarm_threshold_e_inc_fill, "alarm_threshold_e_inc_fill");
    lv_obj_set_x(alarm_threshold_e_inc_fill, 0);
    lv_obj_set_y(alarm_threshold_e_inc_fill, 0);
    lv_obj_set_width(alarm_threshold_e_inc_fill, 66);
    lv_obj_set_height(alarm_threshold_e_inc_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_e_inc_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_e_inc_fill, lv_color_hex(0x32E67A), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_e_inc_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_e_inc_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_e_inc_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_e_inc, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 3);
    
    lv_obj_t * alarm_threshold_item_lost_volt = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_lost_volt, "alarm_threshold_item_lost_volt");
    lv_obj_set_x(alarm_threshold_item_lost_volt, 0);
    lv_obj_set_y(alarm_threshold_item_lost_volt, 152);
    lv_obj_set_width(alarm_threshold_item_lost_volt, 280);
    lv_obj_set_height(alarm_threshold_item_lost_volt, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_lost_volt, 0, 0);
    lv_obj_add_style(alarm_threshold_item_lost_volt, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_lost_volt, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_lost_volt, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_lost_volt_selected_bg = lv_obj_create(alarm_threshold_item_lost_volt);
    lv_obj_set_name(alarm_threshold_item_lost_volt_selected_bg, "alarm_threshold_item_lost_volt_selected_bg");
    lv_obj_set_x(alarm_threshold_item_lost_volt_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_lost_volt_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_lost_volt_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_lost_volt_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_lost_volt_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_lost_volt_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_lost_volt_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_lost_volt_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_lost_volt_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_lost_volt_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_lost_volt_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 4);
    
    lv_obj_t * lv_label_10 = lv_label_create(alarm_threshold_item_lost_volt);
    lv_label_set_text(lv_label_10, "失压时间");
    lv_obj_set_x(lv_label_10, 14);
    lv_obj_set_y(lv_label_10, 5);
    lv_obj_set_width(lv_label_10, 84);
    lv_obj_add_style(lv_label_10, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_10, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 4);
    
    lv_obj_t * lv_label_11 = lv_label_create(alarm_threshold_item_lost_volt);
    lv_label_bind_text(lv_label_11, &meter_alarm_threshold_lost_volt_value, "%d ms");
    lv_obj_set_align(lv_label_11, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_11, -40);
    lv_obj_set_y(lv_label_11, -6);
    lv_obj_set_width(lv_label_11, 92);
    lv_obj_add_style(lv_label_11, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_11, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 4);
    
    lv_obj_t * alarm_threshold_lost_volt_track = lv_obj_create(alarm_threshold_item_lost_volt);
    lv_obj_set_name(alarm_threshold_lost_volt_track, "alarm_threshold_lost_volt_track");
    lv_obj_set_x(alarm_threshold_lost_volt_track, 98);
    lv_obj_set_y(alarm_threshold_lost_volt_track, 23);
    lv_obj_set_width(alarm_threshold_lost_volt_track, 126);
    lv_obj_set_height(alarm_threshold_lost_volt_track, 5);
    lv_obj_set_style_radius(alarm_threshold_lost_volt_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_lost_volt_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_lost_volt_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_lost_volt_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_lost_volt_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_lost_volt_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_lost_volt_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_lost_volt_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_lost_volt_fill = lv_obj_create(alarm_threshold_lost_volt_track);
    lv_obj_set_name(alarm_threshold_lost_volt_fill, "alarm_threshold_lost_volt_fill");
    lv_obj_set_x(alarm_threshold_lost_volt_fill, 0);
    lv_obj_set_y(alarm_threshold_lost_volt_fill, 0);
    lv_obj_set_width(alarm_threshold_lost_volt_fill, 42);
    lv_obj_set_height(alarm_threshold_lost_volt_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_lost_volt_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_lost_volt_fill, lv_color_hex(0x8D5CFF), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_lost_volt_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_lost_volt_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_lost_volt_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_lost_volt, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 4);
    
    lv_obj_t * alarm_threshold_item_sagcfg = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_sagcfg, "alarm_threshold_item_sagcfg");
    lv_obj_set_x(alarm_threshold_item_sagcfg, 0);
    lv_obj_set_y(alarm_threshold_item_sagcfg, 190);
    lv_obj_set_width(alarm_threshold_item_sagcfg, 280);
    lv_obj_set_height(alarm_threshold_item_sagcfg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_sagcfg, 0, 0);
    lv_obj_add_style(alarm_threshold_item_sagcfg, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_sagcfg, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_sagcfg, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_sagcfg_selected_bg = lv_obj_create(alarm_threshold_item_sagcfg);
    lv_obj_set_name(alarm_threshold_item_sagcfg_selected_bg, "alarm_threshold_item_sagcfg_selected_bg");
    lv_obj_set_x(alarm_threshold_item_sagcfg_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_sagcfg_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_sagcfg_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_sagcfg_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_sagcfg_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_sagcfg_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_sagcfg_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_sagcfg_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_sagcfg_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_sagcfg_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_sagcfg_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 5);
    
    lv_obj_t * lv_label_12 = lv_label_create(alarm_threshold_item_sagcfg);
    lv_label_set_text(lv_label_12, "电压跌落");
    lv_obj_set_x(lv_label_12, 14);
    lv_obj_set_y(lv_label_12, 5);
    lv_obj_set_width(lv_label_12, 84);
    lv_obj_add_style(lv_label_12, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_12, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 5);
    
    lv_obj_t * lv_label_13 = lv_label_create(alarm_threshold_item_sagcfg);
    lv_label_bind_text(lv_label_13, &meter_alarm_threshold_sagcfg_value, "%d V");
    lv_obj_set_align(lv_label_13, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_13, -40);
    lv_obj_set_y(lv_label_13, -6);
    lv_obj_set_width(lv_label_13, 84);
    lv_obj_add_style(lv_label_13, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_13, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 5);
    
    lv_obj_t * alarm_threshold_sagcfg_track = lv_obj_create(alarm_threshold_item_sagcfg);
    lv_obj_set_name(alarm_threshold_sagcfg_track, "alarm_threshold_sagcfg_track");
    lv_obj_set_x(alarm_threshold_sagcfg_track, 98);
    lv_obj_set_y(alarm_threshold_sagcfg_track, 23);
    lv_obj_set_width(alarm_threshold_sagcfg_track, 126);
    lv_obj_set_height(alarm_threshold_sagcfg_track, 5);
    lv_obj_set_style_radius(alarm_threshold_sagcfg_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_sagcfg_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_sagcfg_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_sagcfg_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_sagcfg_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_sagcfg_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_sagcfg_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_sagcfg_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_sagcfg_fill = lv_obj_create(alarm_threshold_sagcfg_track);
    lv_obj_set_name(alarm_threshold_sagcfg_fill, "alarm_threshold_sagcfg_fill");
    lv_obj_set_x(alarm_threshold_sagcfg_fill, 0);
    lv_obj_set_y(alarm_threshold_sagcfg_fill, 0);
    lv_obj_set_width(alarm_threshold_sagcfg_fill, 14);
    lv_obj_set_height(alarm_threshold_sagcfg_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_sagcfg_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_sagcfg_fill, lv_color_hex(0x6366F1), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_sagcfg_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_sagcfg_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_sagcfg_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_sagcfg, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 5);
    
    lv_obj_t * alarm_threshold_item_ovlvl = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_ovlvl, "alarm_threshold_item_ovlvl");
    lv_obj_set_x(alarm_threshold_item_ovlvl, 0);
    lv_obj_set_y(alarm_threshold_item_ovlvl, 228);
    lv_obj_set_width(alarm_threshold_item_ovlvl, 280);
    lv_obj_set_height(alarm_threshold_item_ovlvl, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_ovlvl, 0, 0);
    lv_obj_add_style(alarm_threshold_item_ovlvl, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_ovlvl, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_ovlvl, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_ovlvl_selected_bg = lv_obj_create(alarm_threshold_item_ovlvl);
    lv_obj_set_name(alarm_threshold_item_ovlvl_selected_bg, "alarm_threshold_item_ovlvl_selected_bg");
    lv_obj_set_x(alarm_threshold_item_ovlvl_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_ovlvl_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_ovlvl_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_ovlvl_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_ovlvl_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_ovlvl_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_ovlvl_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_ovlvl_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_ovlvl_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_ovlvl_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_ovlvl_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 6);
    
    lv_obj_t * lv_label_14 = lv_label_create(alarm_threshold_item_ovlvl);
    lv_label_set_text(lv_label_14, "过压保护");
    lv_obj_set_x(lv_label_14, 14);
    lv_obj_set_y(lv_label_14, 5);
    lv_obj_set_width(lv_label_14, 84);
    lv_obj_add_style(lv_label_14, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_14, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 6);
    
    lv_obj_t * lv_label_15 = lv_label_create(alarm_threshold_item_ovlvl);
    lv_label_bind_text(lv_label_15, &meter_alarm_threshold_ovlvl_value, "%d V");
    lv_obj_set_align(lv_label_15, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_15, -40);
    lv_obj_set_y(lv_label_15, -6);
    lv_obj_set_width(lv_label_15, 84);
    lv_obj_add_style(lv_label_15, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_15, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 6);
    
    lv_obj_t * alarm_threshold_ovlvl_track = lv_obj_create(alarm_threshold_item_ovlvl);
    lv_obj_set_name(alarm_threshold_ovlvl_track, "alarm_threshold_ovlvl_track");
    lv_obj_set_x(alarm_threshold_ovlvl_track, 98);
    lv_obj_set_y(alarm_threshold_ovlvl_track, 23);
    lv_obj_set_width(alarm_threshold_ovlvl_track, 126);
    lv_obj_set_height(alarm_threshold_ovlvl_track, 5);
    lv_obj_set_style_radius(alarm_threshold_ovlvl_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_ovlvl_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_ovlvl_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_ovlvl_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_ovlvl_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_ovlvl_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_ovlvl_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_ovlvl_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_ovlvl_fill = lv_obj_create(alarm_threshold_ovlvl_track);
    lv_obj_set_name(alarm_threshold_ovlvl_fill, "alarm_threshold_ovlvl_fill");
    lv_obj_set_x(alarm_threshold_ovlvl_fill, 0);
    lv_obj_set_y(alarm_threshold_ovlvl_fill, 0);
    lv_obj_set_width(alarm_threshold_ovlvl_fill, 14);
    lv_obj_set_height(alarm_threshold_ovlvl_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_ovlvl_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_ovlvl_fill, lv_color_hex(0xE33C64), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_ovlvl_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_ovlvl_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_ovlvl_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_ovlvl, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 6);
    
    lv_obj_t * alarm_threshold_item_oilvl = lv_button_create(alarm_threshold_items);
    lv_obj_set_name(alarm_threshold_item_oilvl, "alarm_threshold_item_oilvl");
    lv_obj_set_x(alarm_threshold_item_oilvl, 0);
    lv_obj_set_y(alarm_threshold_item_oilvl, 266);
    lv_obj_set_width(alarm_threshold_item_oilvl, 280);
    lv_obj_set_height(alarm_threshold_item_oilvl, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_oilvl, 0, 0);
    lv_obj_add_style(alarm_threshold_item_oilvl, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_oilvl, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_oilvl, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_item_oilvl_selected_bg = lv_obj_create(alarm_threshold_item_oilvl);
    lv_obj_set_name(alarm_threshold_item_oilvl_selected_bg, "alarm_threshold_item_oilvl_selected_bg");
    lv_obj_set_x(alarm_threshold_item_oilvl_selected_bg, 0);
    lv_obj_set_y(alarm_threshold_item_oilvl_selected_bg, 0);
    lv_obj_set_width(alarm_threshold_item_oilvl_selected_bg, 280);
    lv_obj_set_height(alarm_threshold_item_oilvl_selected_bg, 34);
    lv_obj_set_style_pad_all(alarm_threshold_item_oilvl_selected_bg, 0, 0);
    lv_obj_set_style_border_width(alarm_threshold_item_oilvl_selected_bg, 0, 0);
    lv_obj_set_flag(alarm_threshold_item_oilvl_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(alarm_threshold_item_oilvl_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(alarm_threshold_item_oilvl_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_item_oilvl_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(alarm_threshold_item_oilvl_selected_bg, &meter_alarm_threshold_selected_index, LV_OBJ_FLAG_HIDDEN, 7);
    
    lv_obj_t * lv_label_16 = lv_label_create(alarm_threshold_item_oilvl);
    lv_label_set_text(lv_label_16, "过流保护");
    lv_obj_set_x(lv_label_16, 14);
    lv_obj_set_y(lv_label_16, 5);
    lv_obj_set_width(lv_label_16, 84);
    lv_obj_add_style(lv_label_16, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_16, &me106_text_14_white, 0, &meter_alarm_threshold_selected_index, 7);
    
    lv_obj_t * lv_label_17 = lv_label_create(alarm_threshold_item_oilvl);
    lv_label_bind_text(lv_label_17, &meter_alarm_threshold_oilvl_value, "%d A");
    lv_obj_set_align(lv_label_17, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_17, -40);
    lv_obj_set_y(lv_label_17, -6);
    lv_obj_set_width(lv_label_17, 84);
    lv_obj_add_style(lv_label_17, &me106_text_14_gray_ba_right, 0);
    lv_obj_bind_style(lv_label_17, &me106_text_14_white_right, 0, &meter_alarm_threshold_selected_index, 7);
    
    lv_obj_t * alarm_threshold_oilvl_track = lv_obj_create(alarm_threshold_item_oilvl);
    lv_obj_set_name(alarm_threshold_oilvl_track, "alarm_threshold_oilvl_track");
    lv_obj_set_x(alarm_threshold_oilvl_track, 98);
    lv_obj_set_y(alarm_threshold_oilvl_track, 23);
    lv_obj_set_width(alarm_threshold_oilvl_track, 126);
    lv_obj_set_height(alarm_threshold_oilvl_track, 5);
    lv_obj_set_style_radius(alarm_threshold_oilvl_track, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_oilvl_track, lv_color_hex(0x303030), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_oilvl_track, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_oilvl_track, 0, 0);
    lv_obj_set_style_pad_all(alarm_threshold_oilvl_track, 0, 0);
    lv_obj_set_flag(alarm_threshold_oilvl_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_style(alarm_threshold_oilvl_track, &me106_theme_light_line, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_oilvl_track, &me106_theme_alarm_line, 0, &meter_theme_index, 2);
    lv_obj_t * alarm_threshold_oilvl_fill = lv_obj_create(alarm_threshold_oilvl_track);
    lv_obj_set_name(alarm_threshold_oilvl_fill, "alarm_threshold_oilvl_fill");
    lv_obj_set_x(alarm_threshold_oilvl_fill, 0);
    lv_obj_set_y(alarm_threshold_oilvl_fill, 0);
    lv_obj_set_width(alarm_threshold_oilvl_fill, 14);
    lv_obj_set_height(alarm_threshold_oilvl_fill, 5);
    lv_obj_set_style_radius(alarm_threshold_oilvl_fill, 3, 0);
    lv_obj_set_style_bg_color(alarm_threshold_oilvl_fill, lv_color_hex(0xE33C64), 0);
    lv_obj_set_style_bg_opa(alarm_threshold_oilvl_fill, 255, 0);
    lv_obj_set_style_border_width(alarm_threshold_oilvl_fill, 0, 0);
    lv_obj_set_flag(alarm_threshold_oilvl_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_add_subject_set_int_event(alarm_threshold_item_oilvl, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 7);
    
    lv_obj_t * screen_settings_alarm_threshold_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_alarm_threshold_bottom_bar, "screen_settings_alarm_threshold_bottom_bar");
    lv_obj_set_x(screen_settings_alarm_threshold_bottom_bar, 0);
    lv_obj_set_y(screen_settings_alarm_threshold_bottom_bar, 207);
    lv_obj_set_width(screen_settings_alarm_threshold_bottom_bar, 320);
    lv_obj_set_height(screen_settings_alarm_threshold_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_alarm_threshold_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_alarm_threshold_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_alarm_threshold_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_alarm_threshold_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_alarm_threshold_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_alarm_threshold_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * alarm_threshold_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(alarm_threshold_btn_return, "alarm_threshold_btn_return");
    lv_obj_set_x(alarm_threshold_btn_return, 0);
    lv_obj_set_y(alarm_threshold_btn_return, 207);
    lv_obj_set_width(alarm_threshold_btn_return, 79);
    lv_obj_set_height(alarm_threshold_btn_return, 32);
    lv_obj_add_style(alarm_threshold_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(alarm_threshold_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(alarm_threshold_btn_return);
    lv_image_set_src(lv_image_0, meter_icon_return);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 230, 0);
    
    lv_obj_add_screen_create_event(alarm_threshold_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * alarm_threshold_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(alarm_threshold_btn_down, "alarm_threshold_btn_down");
    lv_obj_set_x(alarm_threshold_btn_down, 80);
    lv_obj_set_y(alarm_threshold_btn_down, 207);
    lv_obj_set_width(alarm_threshold_btn_down, 79);
    lv_obj_set_height(alarm_threshold_btn_down, 32);
    lv_obj_add_style(alarm_threshold_btn_down, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(alarm_threshold_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(alarm_threshold_btn_down);
    lv_image_set_src(lv_image_1, meter_arrow_down);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(alarm_threshold_btn_down, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(alarm_threshold_btn_down, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(alarm_threshold_btn_down, subject_increment_event_0, 7);
    lv_obj_set_subject_increment_event_rollover(alarm_threshold_btn_down, subject_increment_event_0, true);
    
    lv_obj_t * alarm_threshold_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(alarm_threshold_btn_up, "alarm_threshold_btn_up");
    lv_obj_set_x(alarm_threshold_btn_up, 160);
    lv_obj_set_y(alarm_threshold_btn_up, 207);
    lv_obj_set_width(alarm_threshold_btn_up, 79);
    lv_obj_set_height(alarm_threshold_btn_up, 32);
    lv_obj_add_style(alarm_threshold_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(alarm_threshold_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(alarm_threshold_btn_up);
    lv_image_set_src(lv_image_2, meter_arrow_up);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(alarm_threshold_btn_up, &meter_alarm_threshold_selected_index, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(alarm_threshold_btn_up, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(alarm_threshold_btn_up, subject_increment_event_1, 7);
    lv_obj_set_subject_increment_event_rollover(alarm_threshold_btn_up, subject_increment_event_1, true);
    
    lv_obj_t * alarm_threshold_btn_idle = lv_button_create(lv_obj_0);
    lv_obj_set_name(alarm_threshold_btn_idle, "alarm_threshold_btn_idle");
    lv_obj_set_x(alarm_threshold_btn_idle, 240);
    lv_obj_set_y(alarm_threshold_btn_idle, 207);
    lv_obj_set_width(alarm_threshold_btn_idle, 80);
    lv_obj_set_height(alarm_threshold_btn_idle, 32);
    lv_obj_add_style(alarm_threshold_btn_idle, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(alarm_threshold_btn_idle, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(alarm_threshold_btn_idle, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_ALARM_THRESHOLD_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_ALARM_THRESHOLD_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_alarm_threshold_get_timeline(lv_obj_0, SCREEN_SETTINGS_ALARM_THRESHOLD_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_alarm_threshold_get_timeline(lv_obj_t * obj, screen_settings_alarm_threshold_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_ALARM_THRESHOLD_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_alarm_threshold has no timeline with %d ID", timeline_id);
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
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "alarm_threshold_content"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 110);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "alarm_threshold_content"));
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
    for(i = 0; i < _SCREEN_SETTINGS_ALARM_THRESHOLD_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

