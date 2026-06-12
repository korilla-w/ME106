/**
 * @file screen_home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_home_gen.h"
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

lv_obj_t * screen_home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_home_#");
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
    lv_label_set_text(lv_label_0, "首页");
    lv_obj_set_x(lv_label_0, 156);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 140);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_set_text(lv_label_1, "A相");
    lv_obj_set_x(lv_label_1, 20);
    lv_obj_set_y(lv_label_1, 62);
    lv_obj_add_style(lv_label_1, &me106_text_18_yellow, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_set_text(lv_label_2, "电压(V)");
    lv_obj_set_x(lv_label_2, 73);
    lv_obj_set_y(lv_label_2, 56);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "电流(A)");
    lv_obj_set_x(lv_label_3, 156);
    lv_obj_set_y(lv_label_3, 56);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "功率因数");
    lv_obj_set_x(lv_label_4, 239);
    lv_obj_set_y(lv_label_4, 56);
    lv_obj_add_style(lv_label_4, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_set_text(lv_label_5, "232.884");
    lv_obj_set_x(lv_label_5, 73);
    lv_obj_set_y(lv_label_5, 75);
    lv_obj_add_style(lv_label_5, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "3.5420");
    lv_obj_set_x(lv_label_6, 156);
    lv_obj_set_y(lv_label_6, 75);
    lv_obj_add_style(lv_label_6, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "-0.985");
    lv_obj_set_x(lv_label_7, 239);
    lv_obj_set_y(lv_label_7, 75);
    lv_obj_add_style(lv_label_7, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * home_a_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(home_a_voltage_issue, "home_a_voltage_issue");
    lv_image_set_src(home_a_voltage_issue, meter_icon_warning);
    lv_obj_set_x(home_a_voltage_issue, 123);
    lv_obj_set_y(home_a_voltage_issue, 59);
    lv_obj_bind_flag_if_not_eq(home_a_voltage_issue, &meter_home_a_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_a_current_issue = lv_image_create(page_content);
    lv_obj_set_name(home_a_current_issue, "home_a_current_issue");
    lv_image_set_src(home_a_current_issue, meter_icon_warning);
    lv_obj_set_x(home_a_current_issue, 206);
    lv_obj_set_y(home_a_current_issue, 59);
    lv_obj_bind_flag_if_not_eq(home_a_current_issue, &meter_home_a_current_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_a_pf_issue = lv_image_create(page_content);
    lv_obj_set_name(home_a_pf_issue, "home_a_pf_issue");
    lv_image_set_src(home_a_pf_issue, meter_icon_warning);
    lv_obj_set_x(home_a_pf_issue, 297);
    lv_obj_set_y(home_a_pf_issue, 59);
    lv_obj_bind_flag_if_not_eq(home_a_pf_issue, &meter_home_a_pf_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_set_text(lv_label_8, "B相");
    lv_obj_set_x(lv_label_8, 20);
    lv_obj_set_y(lv_label_8, 112);
    lv_obj_add_style(lv_label_8, &me106_text_18_green, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "电压(V)");
    lv_obj_set_x(lv_label_9, 73);
    lv_obj_set_y(lv_label_9, 106);
    lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_10 = lv_label_create(page_content);
    lv_label_set_text(lv_label_10, "电流(A)");
    lv_obj_set_x(lv_label_10, 156);
    lv_obj_set_y(lv_label_10, 106);
    lv_obj_add_style(lv_label_10, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_10, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_10, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_11 = lv_label_create(page_content);
    lv_label_set_text(lv_label_11, "功率因数");
    lv_obj_set_x(lv_label_11, 239);
    lv_obj_set_y(lv_label_11, 106);
    lv_obj_add_style(lv_label_11, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_11, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_11, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_12 = lv_label_create(page_content);
    lv_label_set_text(lv_label_12, "232.884");
    lv_obj_set_x(lv_label_12, 73);
    lv_obj_set_y(lv_label_12, 125);
    lv_obj_add_style(lv_label_12, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_12, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_12, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_13 = lv_label_create(page_content);
    lv_label_set_text(lv_label_13, "3.5420");
    lv_obj_set_x(lv_label_13, 156);
    lv_obj_set_y(lv_label_13, 125);
    lv_obj_add_style(lv_label_13, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_13, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_13, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_14 = lv_label_create(page_content);
    lv_label_set_text(lv_label_14, "-0.985");
    lv_obj_set_x(lv_label_14, 239);
    lv_obj_set_y(lv_label_14, 125);
    lv_obj_add_style(lv_label_14, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_14, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_14, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * home_b_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(home_b_voltage_issue, "home_b_voltage_issue");
    lv_image_set_src(home_b_voltage_issue, meter_icon_warning);
    lv_obj_set_x(home_b_voltage_issue, 123);
    lv_obj_set_y(home_b_voltage_issue, 109);
    lv_obj_bind_flag_if_not_eq(home_b_voltage_issue, &meter_home_b_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_b_current_issue = lv_image_create(page_content);
    lv_obj_set_name(home_b_current_issue, "home_b_current_issue");
    lv_image_set_src(home_b_current_issue, meter_icon_warning);
    lv_obj_set_x(home_b_current_issue, 206);
    lv_obj_set_y(home_b_current_issue, 109);
    lv_obj_bind_flag_if_not_eq(home_b_current_issue, &meter_home_b_current_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_b_pf_issue = lv_image_create(page_content);
    lv_obj_set_name(home_b_pf_issue, "home_b_pf_issue");
    lv_image_set_src(home_b_pf_issue, meter_icon_warning);
    lv_obj_set_x(home_b_pf_issue, 297);
    lv_obj_set_y(home_b_pf_issue, 109);
    lv_obj_bind_flag_if_not_eq(home_b_pf_issue, &meter_home_b_pf_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_15 = lv_label_create(page_content);
    lv_label_set_text(lv_label_15, "C相");
    lv_obj_set_x(lv_label_15, 20);
    lv_obj_set_y(lv_label_15, 162);
    lv_obj_add_style(lv_label_15, &me106_text_18_red, 0);
    lv_obj_bind_style(lv_label_15, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_15, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_16 = lv_label_create(page_content);
    lv_label_set_text(lv_label_16, "电压(V)");
    lv_obj_set_x(lv_label_16, 73);
    lv_obj_set_y(lv_label_16, 156);
    lv_obj_add_style(lv_label_16, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_16, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_16, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_17 = lv_label_create(page_content);
    lv_label_set_text(lv_label_17, "电流(A)");
    lv_obj_set_x(lv_label_17, 156);
    lv_obj_set_y(lv_label_17, 156);
    lv_obj_add_style(lv_label_17, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_17, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_17, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_18 = lv_label_create(page_content);
    lv_label_set_text(lv_label_18, "功率因数");
    lv_obj_set_x(lv_label_18, 239);
    lv_obj_set_y(lv_label_18, 156);
    lv_obj_add_style(lv_label_18, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_18, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_18, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_19 = lv_label_create(page_content);
    lv_label_set_text(lv_label_19, "232.884");
    lv_obj_set_x(lv_label_19, 73);
    lv_obj_set_y(lv_label_19, 175);
    lv_obj_add_style(lv_label_19, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_19, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_19, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_20 = lv_label_create(page_content);
    lv_label_set_text(lv_label_20, "3.5420");
    lv_obj_set_x(lv_label_20, 156);
    lv_obj_set_y(lv_label_20, 175);
    lv_obj_add_style(lv_label_20, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_20, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_20, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_21 = lv_label_create(page_content);
    lv_label_set_text(lv_label_21, "-0.985");
    lv_obj_set_x(lv_label_21, 239);
    lv_obj_set_y(lv_label_21, 175);
    lv_obj_add_style(lv_label_21, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_21, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_21, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * home_c_voltage_issue = lv_image_create(page_content);
    lv_obj_set_name(home_c_voltage_issue, "home_c_voltage_issue");
    lv_image_set_src(home_c_voltage_issue, meter_icon_warning);
    lv_obj_set_x(home_c_voltage_issue, 123);
    lv_obj_set_y(home_c_voltage_issue, 159);
    lv_obj_bind_flag_if_not_eq(home_c_voltage_issue, &meter_home_c_voltage_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_c_current_issue = lv_image_create(page_content);
    lv_obj_set_name(home_c_current_issue, "home_c_current_issue");
    lv_image_set_src(home_c_current_issue, meter_icon_warning);
    lv_obj_set_x(home_c_current_issue, 206);
    lv_obj_set_y(home_c_current_issue, 159);
    lv_obj_bind_flag_if_not_eq(home_c_current_issue, &meter_home_c_current_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * home_c_pf_issue = lv_image_create(page_content);
    lv_obj_set_name(home_c_pf_issue, "home_c_pf_issue");
    lv_image_set_src(home_c_pf_issue, meter_icon_warning);
    lv_obj_set_x(home_c_pf_issue, 297);
    lv_obj_set_y(home_c_pf_issue, 159);
    lv_obj_bind_flag_if_not_eq(home_c_pf_issue, &meter_home_c_pf_issue, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * screen_home_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_home_bottom_bar, "screen_home_bottom_bar");
    lv_obj_set_x(screen_home_bottom_bar, 0);
    lv_obj_set_y(screen_home_bottom_bar, 207);
    lv_obj_set_width(screen_home_bottom_bar, 320);
    lv_obj_set_height(screen_home_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_home_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_home_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_home_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_home_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_home_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_home_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * home_btn_settings = lv_button_create(lv_obj_0);
    lv_obj_set_name(home_btn_settings, "home_btn_settings");
    lv_obj_set_x(home_btn_settings, 0);
    lv_obj_set_y(home_btn_settings, 207);
    lv_obj_set_width(home_btn_settings, 79);
    lv_obj_set_height(home_btn_settings, 32);
    lv_obj_add_style(home_btn_settings, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_settings, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_settings, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(home_btn_settings, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(home_btn_settings, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_settings, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_0 = lv_image_create(home_btn_settings);
    lv_image_set_src(lv_image_0, meter_setting);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_set_x(lv_image_0, 0);
    lv_obj_set_y(lv_image_0, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 16, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 16, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 110, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 110, 0);
    
    lv_obj_add_screen_create_event(home_btn_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_FADE_IN, 120, 0);
    
    lv_obj_t * home_btn_reserved = lv_button_create(lv_obj_0);
    lv_obj_set_name(home_btn_reserved, "home_btn_reserved");
    lv_obj_set_x(home_btn_reserved, 80);
    lv_obj_set_y(home_btn_reserved, 207);
    lv_obj_set_width(home_btn_reserved, 79);
    lv_obj_set_height(home_btn_reserved, 32);
    lv_obj_add_style(home_btn_reserved, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(home_btn_reserved, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(home_btn_reserved);
    lv_image_set_src(lv_image_1, meter_menu);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_x(lv_image_1, 0);
    lv_obj_set_y(lv_image_1, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 12, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 12, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 150, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 150, 0);
    
    lv_obj_add_screen_create_event(home_btn_reserved, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_FADE_IN, 120, 0);
    
    lv_obj_t * home_btn_prev = lv_button_create(lv_obj_0);
    lv_obj_set_name(home_btn_prev, "home_btn_prev");
    lv_obj_set_x(home_btn_prev, 160);
    lv_obj_set_y(home_btn_prev, 207);
    lv_obj_set_width(home_btn_prev, 79);
    lv_obj_set_height(home_btn_prev, 32);
    lv_obj_add_style(home_btn_prev, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(home_btn_prev, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(home_btn_prev);
    lv_image_set_src(lv_image_2, meter_arrow_left);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_2, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);
    
    lv_obj_add_screen_create_event(home_btn_prev, LV_EVENT_CLICKED, screen_line_voltage_demand_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * home_btn_next = lv_button_create(lv_obj_0);
    lv_obj_set_name(home_btn_next, "home_btn_next");
    lv_obj_set_x(home_btn_next, 240);
    lv_obj_set_y(home_btn_next, 207);
    lv_obj_set_width(home_btn_next, 80);
    lv_obj_set_height(home_btn_next, 32);
    lv_obj_add_style(home_btn_next, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_add_style(home_btn_next, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(home_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(home_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(home_btn_next);
    lv_image_set_src(lv_image_3, meter_arrow_right);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_y(lv_image_3, 0);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 120, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 120, 0);
    
    lv_obj_add_screen_create_event(home_btn_next, LV_EVENT_CLICKED, screen_active_power_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_HOME_TIMELINE_CNT);
    at_array[SCREEN_HOME_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_home_get_timeline(lv_obj_0, SCREEN_HOME_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_home_get_timeline(lv_obj_t * obj, screen_home_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_HOME_TIMELINE_CNT) {
        LV_LOG_WARN("screen_home has no timeline with %d ID", timeline_id);
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
    for(i = 0; i < _SCREEN_HOME_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

