/**
 * @file screen_function_menu_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_function_menu_gen.h"
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

lv_obj_t * screen_function_menu_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_function_menu_#");
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
    lv_obj_t * lv_label_0 = lv_label_create(page_content);
    lv_label_set_text(lv_label_0, "功能菜单");
    lv_obj_set_x(lv_label_0, 156);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 140);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * function_menu_list = lv_obj_create(page_content);
    lv_obj_set_name(function_menu_list, "function_menu_list");
    lv_obj_set_x(function_menu_list, 24);
    lv_obj_set_y(function_menu_list, 48);
    lv_obj_set_width(function_menu_list, 270);
    lv_obj_set_height(function_menu_list, 154);
    lv_obj_set_style_bg_opa(function_menu_list, 0, 0);
    lv_obj_set_style_border_width(function_menu_list, 0, 0);
    lv_obj_set_style_pad_all(function_menu_list, 0, 0);
    lv_obj_set_scrollbar_mode(function_menu_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_flag(function_menu_list, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * function_menu_items = lv_obj_create(function_menu_list);
    lv_obj_set_name(function_menu_items, "function_menu_items");
    lv_obj_set_x(function_menu_items, 0);
    lv_obj_set_y(function_menu_items, 0);
    lv_obj_set_width(function_menu_items, 270);
    lv_obj_set_height(function_menu_items, 132);
    lv_obj_set_style_bg_opa(function_menu_items, 0, 0);
    lv_obj_set_style_border_width(function_menu_items, 0, 0);
    lv_obj_set_style_pad_all(function_menu_items, 0, 0);
    lv_obj_set_flag(function_menu_items, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_t * function_item_harmonic = lv_button_create(function_menu_items);
    lv_obj_set_name(function_item_harmonic, "function_item_harmonic");
    lv_obj_set_x(function_item_harmonic, 0);
    lv_obj_set_y(function_item_harmonic, 0);
    lv_obj_set_width(function_item_harmonic, 270);
    lv_obj_set_height(function_item_harmonic, 40);
    lv_obj_set_style_pad_all(function_item_harmonic, 0, 0);
    lv_obj_add_style(function_item_harmonic, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(function_item_harmonic, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_harmonic, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * function_item_harmonic_selected_bg = lv_obj_create(function_item_harmonic);
    lv_obj_set_name(function_item_harmonic_selected_bg, "function_item_harmonic_selected_bg");
    lv_obj_set_x(function_item_harmonic_selected_bg, 0);
    lv_obj_set_y(function_item_harmonic_selected_bg, 0);
    lv_obj_set_width(function_item_harmonic_selected_bg, 270);
    lv_obj_set_height(function_item_harmonic_selected_bg, 40);
    lv_obj_set_style_pad_all(function_item_harmonic_selected_bg, 0, 0);
    lv_obj_set_style_border_width(function_item_harmonic_selected_bg, 0, 0);
    lv_obj_set_flag(function_item_harmonic_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(function_item_harmonic_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(function_item_harmonic_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_harmonic_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(function_item_harmonic_selected_bg, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    
    lv_obj_add_screen_create_event(function_item_harmonic, LV_EVENT_CLICKED, screen_harmonic_spectrum_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    lv_obj_t * lv_image_0 = lv_image_create(function_item_harmonic);
    lv_image_set_src(lv_image_0, meter_icon_harmonic);
    lv_obj_set_align(lv_image_0, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_0, 13);
    lv_obj_set_y(lv_image_0, 0);
    lv_obj_add_style(lv_image_0, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_0, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_0, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(function_item_harmonic);
    lv_label_set_text(lv_label_1, "谐波频谱");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_1, 40);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 160);
    lv_obj_add_style(lv_label_1, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_1, &me106_text_16_white, 0, &meter_function_menu_selected_index, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(function_item_harmonic);
    lv_label_set_text(lv_label_2, "›");
    lv_obj_set_align(lv_label_2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_2, -14);
    lv_obj_set_y(lv_label_2, -1);
    lv_obj_set_width(lv_label_2, 14);
    lv_obj_add_style(lv_label_2, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * function_item_waveform = lv_button_create(function_menu_items);
    lv_obj_set_name(function_item_waveform, "function_item_waveform");
    lv_obj_set_x(function_item_waveform, 0);
    lv_obj_set_y(function_item_waveform, 46);
    lv_obj_set_width(function_item_waveform, 270);
    lv_obj_set_height(function_item_waveform, 40);
    lv_obj_set_style_pad_all(function_item_waveform, 0, 0);
    lv_obj_add_style(function_item_waveform, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(function_item_waveform, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_waveform, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * function_item_waveform_selected_bg = lv_obj_create(function_item_waveform);
    lv_obj_set_name(function_item_waveform_selected_bg, "function_item_waveform_selected_bg");
    lv_obj_set_x(function_item_waveform_selected_bg, 0);
    lv_obj_set_y(function_item_waveform_selected_bg, 0);
    lv_obj_set_width(function_item_waveform_selected_bg, 270);
    lv_obj_set_height(function_item_waveform_selected_bg, 40);
    lv_obj_set_style_pad_all(function_item_waveform_selected_bg, 0, 0);
    lv_obj_set_style_border_width(function_item_waveform_selected_bg, 0, 0);
    lv_obj_set_flag(function_item_waveform_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(function_item_waveform_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(function_item_waveform_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_waveform_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(function_item_waveform_selected_bg, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_add_screen_create_event(function_item_waveform, LV_EVENT_CLICKED, screen_harmonic_waveform_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    lv_obj_t * lv_image_1 = lv_image_create(function_item_waveform);
    lv_image_set_src(lv_image_1, meter_icon_waveform);
    lv_obj_set_align(lv_image_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_1, 11);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_add_style(lv_image_1, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_1, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_1, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(function_item_waveform);
    lv_label_set_text(lv_label_3, "波形曲线");
    lv_obj_set_align(lv_label_3, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_3, 40);
    lv_obj_set_y(lv_label_3, 0);
    lv_obj_set_width(lv_label_3, 160);
    lv_obj_add_style(lv_label_3, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_3, &me106_text_16_white, 0, &meter_function_menu_selected_index, 1);
    
    lv_obj_t * lv_label_4 = lv_label_create(function_item_waveform);
    lv_label_set_text(lv_label_4, "›");
    lv_obj_set_align(lv_label_4, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_4, -14);
    lv_obj_set_y(lv_label_4, -1);
    lv_obj_set_width(lv_label_4, 14);
    lv_obj_add_style(lv_label_4, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * function_item_quality = lv_button_create(function_menu_items);
    lv_obj_set_name(function_item_quality, "function_item_quality");
    lv_obj_set_x(function_item_quality, 0);
    lv_obj_set_y(function_item_quality, 92);
    lv_obj_set_width(function_item_quality, 270);
    lv_obj_set_height(function_item_quality, 40);
    lv_obj_set_style_pad_all(function_item_quality, 0, 0);
    lv_obj_add_style(function_item_quality, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(function_item_quality, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_quality, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_t * function_item_quality_selected_bg = lv_obj_create(function_item_quality);
    lv_obj_set_name(function_item_quality_selected_bg, "function_item_quality_selected_bg");
    lv_obj_set_x(function_item_quality_selected_bg, 0);
    lv_obj_set_y(function_item_quality_selected_bg, 0);
    lv_obj_set_width(function_item_quality_selected_bg, 270);
    lv_obj_set_height(function_item_quality_selected_bg, 40);
    lv_obj_set_style_pad_all(function_item_quality_selected_bg, 0, 0);
    lv_obj_set_style_border_width(function_item_quality_selected_bg, 0, 0);
    lv_obj_set_flag(function_item_quality_selected_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(function_item_quality_selected_bg, &me106_panel_blue_r8, 0);
    lv_obj_bind_style(function_item_quality_selected_bg, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_item_quality_selected_bg, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(function_item_quality_selected_bg, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    
    lv_obj_add_screen_create_event(function_item_quality, LV_EVENT_CLICKED, screen_power_quality_analysis_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    lv_obj_t * lv_image_2 = lv_image_create(function_item_quality);
    lv_image_set_src(lv_image_2, meter_icon_electric_energy);
    lv_obj_set_align(lv_image_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_image_2, 13);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_add_style(lv_image_2, &me106_icon_white, 0);
    lv_obj_bind_style(lv_image_2, &me106_theme_light_icon, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_image_2, &me106_theme_alarm_icon, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(function_item_quality);
    lv_label_set_text(lv_label_5, "电能质量分析");
    lv_obj_set_align(lv_label_5, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(lv_label_5, 40);
    lv_obj_set_y(lv_label_5, 0);
    lv_obj_set_width(lv_label_5, 180);
    lv_obj_add_style(lv_label_5, &me106_text_16_gray_d8, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    lv_obj_bind_style(lv_label_5, &me106_text_16_white, 0, &meter_function_menu_selected_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(function_item_quality);
    lv_label_set_text(lv_label_6, "›");
    lv_obj_set_align(lv_label_6, LV_ALIGN_RIGHT_MID);
    lv_obj_set_x(lv_label_6, -14);
    lv_obj_set_y(lv_label_6, -1);
    lv_obj_set_width(lv_label_6, 14);
    lv_obj_add_style(lv_label_6, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * screen_function_menu_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_function_menu_bottom_bar, "screen_function_menu_bottom_bar");
    lv_obj_set_x(screen_function_menu_bottom_bar, 0);
    lv_obj_set_y(screen_function_menu_bottom_bar, 207);
    lv_obj_set_width(screen_function_menu_bottom_bar, 320);
    lv_obj_set_height(screen_function_menu_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_function_menu_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_function_menu_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_function_menu_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_function_menu_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_function_menu_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_function_menu_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * function_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_return, "function_btn_return");
    lv_obj_set_x(function_btn_return, 0);
    lv_obj_set_y(function_btn_return, 207);
    lv_obj_set_width(function_btn_return, 79);
    lv_obj_set_height(function_btn_return, 32);
    lv_obj_add_style(function_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(function_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(function_btn_return);
    lv_image_set_src(lv_image_3, meter_icon_return);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_add_screen_create_event(function_btn_return, LV_EVENT_CLICKED, screen_home_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * function_btn_down = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_down, "function_btn_down");
    lv_obj_set_x(function_btn_down, 80);
    lv_obj_set_y(function_btn_down, 207);
    lv_obj_set_width(function_btn_down, 79);
    lv_obj_set_height(function_btn_down, 32);
    lv_obj_add_style(function_btn_down, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(function_btn_down, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_btn_down, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_4 = lv_image_create(function_btn_down);
    lv_image_set_src(lv_image_4, meter_arrow_down);
    lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_4, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_4, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_4, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_4, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(function_btn_down, &meter_function_menu_selected_index, LV_EVENT_CLICKED, 1);
    lv_obj_set_subject_increment_event_min_value(function_btn_down, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_max_value(function_btn_down, subject_increment_event_0, 2);
    lv_obj_set_subject_increment_event_rollover(function_btn_down, subject_increment_event_0, true);
    
    lv_obj_t * function_btn_up = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_up, "function_btn_up");
    lv_obj_set_x(function_btn_up, 160);
    lv_obj_set_y(function_btn_up, 207);
    lv_obj_set_width(function_btn_up, 79);
    lv_obj_set_height(function_btn_up, 32);
    lv_obj_add_style(function_btn_up, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(function_btn_up, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_btn_up, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_5 = lv_image_create(function_btn_up);
    lv_image_set_src(lv_image_5, meter_arrow_up);
    lv_obj_set_align(lv_image_5, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_5, 7, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_5, 5, 0);
    lv_obj_set_style_transform_scale_x(lv_image_5, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_5, 230, 0);
    
    lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(function_btn_up, &meter_function_menu_selected_index, LV_EVENT_CLICKED, -1);
    lv_obj_set_subject_increment_event_min_value(function_btn_up, subject_increment_event_1, 0);
    lv_obj_set_subject_increment_event_max_value(function_btn_up, subject_increment_event_1, 2);
    lv_obj_set_subject_increment_event_rollover(function_btn_up, subject_increment_event_1, true);
    
    lv_obj_t * function_btn_yes = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_yes, "function_btn_yes");
    lv_obj_set_x(function_btn_yes, 240);
    lv_obj_set_y(function_btn_yes, 207);
    lv_obj_set_width(function_btn_yes, 80);
    lv_obj_set_height(function_btn_yes, 32);
    lv_obj_add_style(function_btn_yes, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(function_btn_yes, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(function_btn_yes, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_6 = lv_image_create(function_btn_yes);
    lv_image_set_src(lv_image_6, meter_yes);
    lv_obj_set_align(lv_image_6, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_6, 9, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_6, 6, 0);
    lv_obj_set_style_transform_scale_x(lv_image_6, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_6, 230, 0);
    
    lv_obj_t * function_btn_yes_harmonic = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_yes_harmonic, "function_btn_yes_harmonic");
    lv_obj_set_x(function_btn_yes_harmonic, 240);
    lv_obj_set_y(function_btn_yes_harmonic, 207);
    lv_obj_set_width(function_btn_yes_harmonic, 80);
    lv_obj_set_height(function_btn_yes_harmonic, 32);
    lv_obj_set_style_bg_opa(function_btn_yes_harmonic, 0, 0);
    lv_obj_set_style_border_width(function_btn_yes_harmonic, 0, 0);
    lv_obj_set_style_shadow_width(function_btn_yes_harmonic, 0, 0);
    lv_obj_bind_flag_if_not_eq(function_btn_yes_harmonic, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_screen_create_event(function_btn_yes_harmonic, LV_EVENT_CLICKED, screen_harmonic_spectrum_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * function_btn_yes_waveform = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_yes_waveform, "function_btn_yes_waveform");
    lv_obj_set_x(function_btn_yes_waveform, 240);
    lv_obj_set_y(function_btn_yes_waveform, 207);
    lv_obj_set_width(function_btn_yes_waveform, 80);
    lv_obj_set_height(function_btn_yes_waveform, 32);
    lv_obj_set_style_bg_opa(function_btn_yes_waveform, 0, 0);
    lv_obj_set_style_border_width(function_btn_yes_waveform, 0, 0);
    lv_obj_set_style_shadow_width(function_btn_yes_waveform, 0, 0);
    lv_obj_bind_flag_if_not_eq(function_btn_yes_waveform, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_screen_create_event(function_btn_yes_waveform, LV_EVENT_CLICKED, screen_harmonic_waveform_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * function_btn_yes_quality = lv_button_create(lv_obj_0);
    lv_obj_set_name(function_btn_yes_quality, "function_btn_yes_quality");
    lv_obj_set_x(function_btn_yes_quality, 240);
    lv_obj_set_y(function_btn_yes_quality, 207);
    lv_obj_set_width(function_btn_yes_quality, 80);
    lv_obj_set_height(function_btn_yes_quality, 32);
    lv_obj_set_style_bg_opa(function_btn_yes_quality, 0, 0);
    lv_obj_set_style_border_width(function_btn_yes_quality, 0, 0);
    lv_obj_set_style_shadow_width(function_btn_yes_quality, 0, 0);
    lv_obj_bind_flag_if_not_eq(function_btn_yes_quality, &meter_function_menu_selected_index, LV_OBJ_FLAG_HIDDEN, 2);
    lv_obj_add_screen_create_event(function_btn_yes_quality, LV_EVENT_CLICKED, screen_power_quality_analysis_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

