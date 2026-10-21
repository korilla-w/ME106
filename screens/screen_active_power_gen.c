/**
 * @file screen_active_power_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_active_power_gen.h"
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

static lv_anim_timeline_t * timeline_measurement_header_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_active_power_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_active_power_#");
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
        lv_obj_t * active_header = lv_obj_create(page_content);
        lv_obj_set_name(active_header, "active_header");
        lv_obj_set_x(active_header, 0);
        lv_obj_set_y(active_header, 0);
        lv_obj_set_width(active_header, 320);
        lv_obj_set_height(active_header, 44);
        lv_obj_set_style_bg_opa(active_header, 0, 0);
        lv_obj_set_style_border_width(active_header, 0, 0);
        lv_obj_set_style_pad_all(active_header, 0, 0);
        lv_obj_set_flag(active_header, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * active_brand_logo = lv_image_create(active_header);
        lv_obj_set_name(active_brand_logo, "active_brand_logo");
        lv_image_set_src(active_brand_logo, meter_brand_logo);
        lv_obj_set_x(active_brand_logo, 20);
        lv_obj_set_y(active_brand_logo, 17);

        lv_obj_t * active_power_title_label = lv_label_create(active_header);
        lv_label_set_text(active_power_title_label, "有功功率(kW)");
        lv_obj_set_x(active_power_title_label, 156);
        lv_obj_set_y(active_power_title_label, 17);
        lv_obj_set_width(active_power_title_label, 140);
        lv_obj_set_name(active_power_title_label, "active_power_title_label");
        lv_obj_add_style(active_power_title_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(active_power_title_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_title_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_phase_a_label = lv_label_create(page_content);
        lv_label_set_text(active_power_phase_a_label, "A相");
        lv_obj_set_x(active_power_phase_a_label, 16);
        lv_obj_set_y(active_power_phase_a_label, 53);
        lv_obj_set_name(active_power_phase_a_label, "active_power_phase_a_label");
        lv_obj_add_style(active_power_phase_a_label, &me106_text_18_yellow, 0);
        lv_obj_bind_style(active_power_phase_a_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_phase_a_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_a_value = lv_label_create(page_content);
        lv_obj_set_name(active_power_a_value, "active_power_a_value");
        lv_label_set_text(active_power_a_value, "0.000");
        lv_obj_set_x(active_power_a_value, 56);
        lv_obj_set_y(active_power_a_value, 53);
        lv_obj_add_style(active_power_a_value, &me106_text_18_white, 0);
        lv_obj_bind_style(active_power_a_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_a_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_a_power_issue = lv_image_create(page_content);
        lv_obj_set_name(active_a_power_issue, "active_a_power_issue");
        lv_image_set_src(active_a_power_issue, meter_icon_warning);
        lv_obj_set_x(active_a_power_issue, 108);
        lv_obj_set_y(active_a_power_issue, 53);
        lv_obj_bind_flag_if_not_eq(active_a_power_issue, &meter_active_a_power_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * active_power_phase_b_label = lv_label_create(page_content);
        lv_label_set_text(active_power_phase_b_label, "B相");
        lv_obj_set_x(active_power_phase_b_label, 16);
        lv_obj_set_y(active_power_phase_b_label, 91);
        lv_obj_set_name(active_power_phase_b_label, "active_power_phase_b_label");
        lv_obj_add_style(active_power_phase_b_label, &me106_text_18_green, 0);
        lv_obj_bind_style(active_power_phase_b_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_phase_b_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_b_value = lv_label_create(page_content);
        lv_obj_set_name(active_power_b_value, "active_power_b_value");
        lv_label_set_text(active_power_b_value, "0.000");
        lv_obj_set_x(active_power_b_value, 56);
        lv_obj_set_y(active_power_b_value, 91);
        lv_obj_add_style(active_power_b_value, &me106_text_18_white, 0);
        lv_obj_bind_style(active_power_b_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_b_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_b_power_issue = lv_image_create(page_content);
        lv_obj_set_name(active_b_power_issue, "active_b_power_issue");
        lv_image_set_src(active_b_power_issue, meter_icon_warning);
        lv_obj_set_x(active_b_power_issue, 108);
        lv_obj_set_y(active_b_power_issue, 91);
        lv_obj_bind_flag_if_not_eq(active_b_power_issue, &meter_active_b_power_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * active_power_phase_c_label = lv_label_create(page_content);
        lv_label_set_text(active_power_phase_c_label, "C相");
        lv_obj_set_x(active_power_phase_c_label, 16);
        lv_obj_set_y(active_power_phase_c_label, 129);
        lv_obj_set_name(active_power_phase_c_label, "active_power_phase_c_label");
        lv_obj_add_style(active_power_phase_c_label, &me106_text_18_red, 0);
        lv_obj_bind_style(active_power_phase_c_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_phase_c_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_c_value = lv_label_create(page_content);
        lv_obj_set_name(active_power_c_value, "active_power_c_value");
        lv_label_set_text(active_power_c_value, "0.000");
        lv_obj_set_x(active_power_c_value, 56);
        lv_obj_set_y(active_power_c_value, 129);
        lv_obj_add_style(active_power_c_value, &me106_text_18_white, 0);
        lv_obj_bind_style(active_power_c_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_c_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_c_power_issue = lv_image_create(page_content);
        lv_obj_set_name(active_c_power_issue, "active_c_power_issue");
        lv_image_set_src(active_c_power_issue, meter_icon_warning);
        lv_obj_set_x(active_c_power_issue, 108);
        lv_obj_set_y(active_c_power_issue, 129);
        lv_obj_bind_flag_if_not_eq(active_c_power_issue, &meter_active_c_power_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * active_power_total_label = lv_label_create(page_content);
        lv_label_set_text(active_power_total_label, "合相");
        lv_obj_set_x(active_power_total_label, 16);
        lv_obj_set_y(active_power_total_label, 167);
        lv_obj_set_name(active_power_total_label, "active_power_total_label");
        lv_obj_add_style(active_power_total_label, &me106_text_18_gray_ba, 0);
        lv_obj_bind_style(active_power_total_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_total_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_total_value = lv_label_create(page_content);
        lv_obj_set_name(active_power_total_value, "active_power_total_value");
        lv_label_set_text(active_power_total_value, "0.000");
        lv_obj_set_x(active_power_total_value, 56);
        lv_obj_set_y(active_power_total_value, 167);
        lv_obj_add_style(active_power_total_value, &me106_text_18_white, 0);
        lv_obj_bind_style(active_power_total_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_total_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_total_power_issue = lv_image_create(page_content);
        lv_obj_set_name(active_total_power_issue, "active_total_power_issue");
        lv_image_set_src(active_total_power_issue, meter_icon_warning);
        lv_obj_set_x(active_total_power_issue, 108);
        lv_obj_set_y(active_total_power_issue, 167);
        lv_obj_bind_flag_if_not_eq(active_total_power_issue, &meter_active_total_power_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * active_power_quadrant_panel = lv_obj_create(page_content);
        lv_obj_set_name(active_power_quadrant_panel, "active_power_quadrant_panel");
        lv_obj_set_x(active_power_quadrant_panel, 128);
        lv_obj_set_y(active_power_quadrant_panel, 47);
        lv_obj_set_width(active_power_quadrant_panel, 178);
        lv_obj_set_height(active_power_quadrant_panel, 151);
        lv_obj_set_style_bg_opa(active_power_quadrant_panel, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_panel, 1, 0);
        lv_obj_set_style_pad_all(active_power_quadrant_panel, 0, 0);
        lv_obj_set_flag(active_power_quadrant_panel, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(active_power_quadrant_panel, &me106_quadrant_panel, 0);
        lv_obj_bind_style(active_power_quadrant_panel, &me106_quadrant_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_panel, &me106_quadrant_cyber_panel, 0, &meter_theme_index, 2);
        lv_obj_t * active_power_quadrant_pf = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_pf, "PF --");
        lv_obj_set_x(active_power_quadrant_pf, 8);
        lv_obj_set_y(active_power_quadrant_pf, 5);
        lv_obj_set_width(active_power_quadrant_pf, 76);
        lv_obj_set_height(active_power_quadrant_pf, 18);
        lv_obj_set_name(active_power_quadrant_pf, "active_power_quadrant_pf");
        lv_obj_add_style(active_power_quadrant_pf, &me106_quadrant_status_pf, 0);
        lv_obj_bind_style(active_power_quadrant_pf, &me106_quadrant_light_status_pf, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_pf, &me106_quadrant_cyber_status_pf, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_angle = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_angle, "φ --°");
        lv_obj_set_x(active_power_quadrant_angle, 98);
        lv_obj_set_y(active_power_quadrant_angle, 5);
        lv_obj_set_width(active_power_quadrant_angle, 70);
        lv_obj_set_height(active_power_quadrant_angle, 18);
        lv_obj_set_name(active_power_quadrant_angle, "active_power_quadrant_angle");
        lv_obj_add_style(active_power_quadrant_angle, &me106_quadrant_status_angle, 0);
        lv_obj_bind_style(active_power_quadrant_angle, &me106_quadrant_light_status_angle, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_angle, &me106_quadrant_cyber_status_angle, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_circle = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_circle, "active_power_quadrant_circle");
        lv_obj_set_x(active_power_quadrant_circle, 38);
        lv_obj_set_y(active_power_quadrant_circle, 28);
        lv_obj_set_width(active_power_quadrant_circle, 100);
        lv_obj_set_height(active_power_quadrant_circle, 100);
        lv_obj_set_style_radius(active_power_quadrant_circle, 50, 0);
        lv_obj_set_style_bg_opa(active_power_quadrant_circle, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_circle, 1, 0);
        lv_obj_add_style(active_power_quadrant_circle, &me106_quadrant_circle, 0);
        lv_obj_bind_style(active_power_quadrant_circle, &me106_quadrant_light_circle, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_circle, &me106_quadrant_cyber_circle, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_i = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_i, "I");
        lv_obj_set_x(active_power_quadrant_i, 140);
        lv_obj_set_y(active_power_quadrant_i, 28);
        lv_obj_set_width(active_power_quadrant_i, 24);
        lv_obj_set_name(active_power_quadrant_i, "active_power_quadrant_i");
        lv_obj_add_style(active_power_quadrant_i, &me106_quadrant_quadrant_text, 0);
        lv_obj_bind_style(active_power_quadrant_i, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_i, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_ii = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_ii, "II");
        lv_obj_set_x(active_power_quadrant_ii, 10);
        lv_obj_set_y(active_power_quadrant_ii, 28);
        lv_obj_set_width(active_power_quadrant_ii, 28);
        lv_obj_set_name(active_power_quadrant_ii, "active_power_quadrant_ii");
        lv_obj_add_style(active_power_quadrant_ii, &me106_quadrant_quadrant_text, 0);
        lv_obj_bind_style(active_power_quadrant_ii, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_ii, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_iii = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_iii, "III");
        lv_obj_set_x(active_power_quadrant_iii, 10);
        lv_obj_set_y(active_power_quadrant_iii, 108);
        lv_obj_set_width(active_power_quadrant_iii, 34);
        lv_obj_set_name(active_power_quadrant_iii, "active_power_quadrant_iii");
        lv_obj_add_style(active_power_quadrant_iii, &me106_quadrant_quadrant_text, 0);
        lv_obj_bind_style(active_power_quadrant_iii, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_iii, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_iv = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_iv, "IV");
        lv_obj_set_x(active_power_quadrant_iv, 140);
        lv_obj_set_y(active_power_quadrant_iv, 108);
        lv_obj_set_width(active_power_quadrant_iv, 28);
        lv_obj_set_name(active_power_quadrant_iv, "active_power_quadrant_iv");
        lv_obj_add_style(active_power_quadrant_iv, &me106_quadrant_quadrant_text, 0);
        lv_obj_bind_style(active_power_quadrant_iv, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_iv, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_axis_x_left = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_axis_x_left, "active_power_quadrant_axis_x_left");
        lv_obj_set_x(active_power_quadrant_axis_x_left, 18);
        lv_obj_set_y(active_power_quadrant_axis_x_left, 76);
        lv_obj_set_width(active_power_quadrant_axis_x_left, 65);
        lv_obj_set_height(active_power_quadrant_axis_x_left, 3);
        lv_obj_set_style_radius(active_power_quadrant_axis_x_left, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_axis_x_left, 0, 0);
        lv_obj_add_style(active_power_quadrant_axis_x_left, &me106_quadrant_axis_warm, 0);
        lv_obj_bind_style(active_power_quadrant_axis_x_left, &me106_quadrant_light_axis, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_axis_x_left, &me106_quadrant_cyber_axis, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_axis_x_right = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_axis_x_right, "active_power_quadrant_axis_x_right");
        lv_obj_set_x(active_power_quadrant_axis_x_right, 93);
        lv_obj_set_y(active_power_quadrant_axis_x_right, 76);
        lv_obj_set_width(active_power_quadrant_axis_x_right, 71);
        lv_obj_set_height(active_power_quadrant_axis_x_right, 3);
        lv_obj_set_style_radius(active_power_quadrant_axis_x_right, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_axis_x_right, 0, 0);
        lv_obj_add_style(active_power_quadrant_axis_x_right, &me106_quadrant_axis_warm, 0);
        lv_obj_bind_style(active_power_quadrant_axis_x_right, &me106_quadrant_light_axis, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_axis_x_right, &me106_quadrant_cyber_axis, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_axis_y_top = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_axis_y_top, "active_power_quadrant_axis_y_top");
        lv_obj_set_x(active_power_quadrant_axis_y_top, 87);
        lv_obj_set_y(active_power_quadrant_axis_y_top, 18);
        lv_obj_set_width(active_power_quadrant_axis_y_top, 3);
        lv_obj_set_height(active_power_quadrant_axis_y_top, 56);
        lv_obj_set_style_radius(active_power_quadrant_axis_y_top, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_axis_y_top, 0, 0);
        lv_obj_add_style(active_power_quadrant_axis_y_top, &me106_quadrant_axis_warm, 0);
        lv_obj_bind_style(active_power_quadrant_axis_y_top, &me106_quadrant_light_axis, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_axis_y_top, &me106_quadrant_cyber_axis, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_axis_y_bottom = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_axis_y_bottom, "active_power_quadrant_axis_y_bottom");
        lv_obj_set_x(active_power_quadrant_axis_y_bottom, 87);
        lv_obj_set_y(active_power_quadrant_axis_y_bottom, 82);
        lv_obj_set_width(active_power_quadrant_axis_y_bottom, 3);
        lv_obj_set_height(active_power_quadrant_axis_y_bottom, 56);
        lv_obj_set_style_radius(active_power_quadrant_axis_y_bottom, 0, 0);
        lv_obj_set_style_border_width(active_power_quadrant_axis_y_bottom, 0, 0);
        lv_obj_add_style(active_power_quadrant_axis_y_bottom, &me106_quadrant_axis_warm, 0);
        lv_obj_bind_style(active_power_quadrant_axis_y_bottom, &me106_quadrant_light_axis, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_axis_y_bottom, &me106_quadrant_cyber_axis, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_reference_top = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_reference_top, "active_power_quadrant_reference_top");
        lv_obj_set_x(active_power_quadrant_reference_top, 85);
        lv_obj_set_y(active_power_quadrant_reference_top, 25);
        lv_obj_set_width(active_power_quadrant_reference_top, 6);
        lv_obj_set_height(active_power_quadrant_reference_top, 6);
        lv_obj_set_style_border_width(active_power_quadrant_reference_top, 0, 0);
        lv_obj_add_style(active_power_quadrant_reference_top, &me106_quadrant_reference_point, 0);
        lv_obj_bind_style(active_power_quadrant_reference_top, &me106_quadrant_light_reference, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_reference_top, &me106_quadrant_cyber_reference, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_reference_bottom = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_reference_bottom, "active_power_quadrant_reference_bottom");
        lv_obj_set_x(active_power_quadrant_reference_bottom, 85);
        lv_obj_set_y(active_power_quadrant_reference_bottom, 125);
        lv_obj_set_width(active_power_quadrant_reference_bottom, 6);
        lv_obj_set_height(active_power_quadrant_reference_bottom, 6);
        lv_obj_set_style_border_width(active_power_quadrant_reference_bottom, 0, 0);
        lv_obj_add_style(active_power_quadrant_reference_bottom, &me106_quadrant_reference_point, 0);
        lv_obj_bind_style(active_power_quadrant_reference_bottom, &me106_quadrant_light_reference, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_reference_bottom, &me106_quadrant_cyber_reference, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_reference_left = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_reference_left, "active_power_quadrant_reference_left");
        lv_obj_set_x(active_power_quadrant_reference_left, 35);
        lv_obj_set_y(active_power_quadrant_reference_left, 75);
        lv_obj_set_width(active_power_quadrant_reference_left, 6);
        lv_obj_set_height(active_power_quadrant_reference_left, 6);
        lv_obj_set_style_border_width(active_power_quadrant_reference_left, 0, 0);
        lv_obj_add_style(active_power_quadrant_reference_left, &me106_quadrant_reference_point, 0);
        lv_obj_bind_style(active_power_quadrant_reference_left, &me106_quadrant_light_reference, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_reference_left, &me106_quadrant_cyber_reference, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_reference_right = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_reference_right, "active_power_quadrant_reference_right");
        lv_obj_set_x(active_power_quadrant_reference_right, 135);
        lv_obj_set_y(active_power_quadrant_reference_right, 75);
        lv_obj_set_width(active_power_quadrant_reference_right, 6);
        lv_obj_set_height(active_power_quadrant_reference_right, 6);
        lv_obj_set_style_border_width(active_power_quadrant_reference_right, 0, 0);
        lv_obj_add_style(active_power_quadrant_reference_right, &me106_quadrant_reference_point, 0);
        lv_obj_bind_style(active_power_quadrant_reference_right, &me106_quadrant_light_reference, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_reference_right, &me106_quadrant_cyber_reference, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_origin_glow = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_origin_glow, "active_power_quadrant_origin_glow");
        lv_obj_set_x(active_power_quadrant_origin_glow, 79);
        lv_obj_set_y(active_power_quadrant_origin_glow, 68);
        lv_obj_set_width(active_power_quadrant_origin_glow, 18);
        lv_obj_set_height(active_power_quadrant_origin_glow, 18);
        lv_obj_set_style_radius(active_power_quadrant_origin_glow, 9, 0);
        lv_obj_set_style_border_width(active_power_quadrant_origin_glow, 0, 0);
        lv_obj_add_style(active_power_quadrant_origin_glow, &me106_quadrant_origin_glow, 0);
        lv_obj_bind_style(active_power_quadrant_origin_glow, &me106_quadrant_light_origin_glow, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_origin_glow, &me106_quadrant_cyber_origin, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_origin_core = lv_obj_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_origin_core, "active_power_quadrant_origin_core");
        lv_obj_set_x(active_power_quadrant_origin_core, 84);
        lv_obj_set_y(active_power_quadrant_origin_core, 73);
        lv_obj_set_width(active_power_quadrant_origin_core, 8);
        lv_obj_set_height(active_power_quadrant_origin_core, 8);
        lv_obj_set_style_radius(active_power_quadrant_origin_core, 4, 0);
        lv_obj_set_style_border_width(active_power_quadrant_origin_core, 0, 0);
        lv_obj_add_style(active_power_quadrant_origin_core, &me106_quadrant_origin_core, 0);
        lv_obj_bind_style(active_power_quadrant_origin_core, &me106_quadrant_light_origin_core, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_origin_core, &me106_quadrant_cyber_origin, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_vector_q1 = lv_line_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_vector_q1, "active_power_quadrant_vector_q1");
        static const lv_point_precise_t active_power_quadrant_vector_q1_points_0[] = {{88, 77}, {88, 77}};
        lv_line_set_points(active_power_quadrant_vector_q1, active_power_quadrant_vector_q1_points_0, 2);
        lv_line_set_y_invert(active_power_quadrant_vector_q1, false);
        lv_obj_add_style(active_power_quadrant_vector_q1, &me106_quadrant_arrow, 0);
        lv_obj_add_style(active_power_quadrant_vector_q1, &me106_quadrant_vector_gold, 0);
        lv_obj_bind_style(active_power_quadrant_vector_q1, &me106_quadrant_light_vector, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_vector_q1, &me106_quadrant_cyber_vector, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_vector_q1_head_a = lv_line_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_vector_q1_head_a, "active_power_quadrant_vector_q1_head_a");
        lv_obj_set_x(active_power_quadrant_vector_q1_head_a, 113);
        lv_obj_set_y(active_power_quadrant_vector_q1_head_a, 42);
        static const lv_point_precise_t active_power_quadrant_vector_q1_head_a_points_0[] = {{10, 0}, {0, 3}};
        lv_line_set_points(active_power_quadrant_vector_q1_head_a, active_power_quadrant_vector_q1_head_a_points_0, 2);
        lv_line_set_y_invert(active_power_quadrant_vector_q1_head_a, false);
        lv_obj_set_flag(active_power_quadrant_vector_q1_head_a, LV_OBJ_FLAG_HIDDEN, true);
        lv_obj_add_style(active_power_quadrant_vector_q1_head_a, &me106_quadrant_arrow, 0);
        lv_obj_add_style(active_power_quadrant_vector_q1_head_a, &me106_quadrant_vector_gold, 0);
        lv_obj_bind_style(active_power_quadrant_vector_q1_head_a, &me106_quadrant_light_vector, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_vector_q1_head_a, &me106_quadrant_cyber_vector, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_vector_q1_head_b = lv_line_create(active_power_quadrant_panel);
        lv_obj_set_name(active_power_quadrant_vector_q1_head_b, "active_power_quadrant_vector_q1_head_b");
        lv_obj_set_x(active_power_quadrant_vector_q1_head_b, 113);
        lv_obj_set_y(active_power_quadrant_vector_q1_head_b, 42);
        static const lv_point_precise_t active_power_quadrant_vector_q1_head_b_points_0[] = {{10, 0}, {7, 10}};
        lv_line_set_points(active_power_quadrant_vector_q1_head_b, active_power_quadrant_vector_q1_head_b_points_0, 2);
        lv_line_set_y_invert(active_power_quadrant_vector_q1_head_b, false);
        lv_obj_set_flag(active_power_quadrant_vector_q1_head_b, LV_OBJ_FLAG_HIDDEN, true);
        lv_obj_add_style(active_power_quadrant_vector_q1_head_b, &me106_quadrant_arrow, 0);
        lv_obj_add_style(active_power_quadrant_vector_q1_head_b, &me106_quadrant_vector_gold, 0);
        lv_obj_bind_style(active_power_quadrant_vector_q1_head_b, &me106_quadrant_light_vector, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_vector_q1_head_b, &me106_quadrant_cyber_vector, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_q_positive = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_q_positive, "+Q");
        lv_obj_set_x(active_power_quadrant_q_positive, 94);
        lv_obj_set_y(active_power_quadrant_q_positive, 14);
        lv_obj_set_width(active_power_quadrant_q_positive, 30);
        lv_obj_set_name(active_power_quadrant_q_positive, "active_power_quadrant_q_positive");
        lv_obj_add_style(active_power_quadrant_q_positive, &me106_quadrant_axis_text, 0);
        lv_obj_bind_style(active_power_quadrant_q_positive, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_q_positive, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_q_negative = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_q_negative, "-Q");
        lv_obj_set_x(active_power_quadrant_q_negative, 94);
        lv_obj_set_y(active_power_quadrant_q_negative, 132);
        lv_obj_set_width(active_power_quadrant_q_negative, 30);
        lv_obj_set_name(active_power_quadrant_q_negative, "active_power_quadrant_q_negative");
        lv_obj_add_style(active_power_quadrant_q_negative, &me106_quadrant_axis_text, 0);
        lv_obj_bind_style(active_power_quadrant_q_negative, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_q_negative, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_p_negative = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_p_negative, "-P");
        lv_obj_set_x(active_power_quadrant_p_negative, 16);
        lv_obj_set_y(active_power_quadrant_p_negative, 87);
        lv_obj_set_width(active_power_quadrant_p_negative, 28);
        lv_obj_set_name(active_power_quadrant_p_negative, "active_power_quadrant_p_negative");
        lv_obj_add_style(active_power_quadrant_p_negative, &me106_quadrant_axis_text, 0);
        lv_obj_bind_style(active_power_quadrant_p_negative, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_p_negative, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * active_power_quadrant_p_positive = lv_label_create(active_power_quadrant_panel);
        lv_label_set_text(active_power_quadrant_p_positive, "+P");
        lv_obj_set_x(active_power_quadrant_p_positive, 140);
        lv_obj_set_y(active_power_quadrant_p_positive, 87);
        lv_obj_set_width(active_power_quadrant_p_positive, 28);
        lv_obj_set_name(active_power_quadrant_p_positive, "active_power_quadrant_p_positive");
        lv_obj_add_style(active_power_quadrant_p_positive, &me106_quadrant_axis_text, 0);
        lv_obj_bind_style(active_power_quadrant_p_positive, &me106_quadrant_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_power_quadrant_p_positive, &me106_quadrant_cyber_text, 0, &meter_theme_index, 2);

        lv_obj_t * screen_active_power_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_active_power_bottom_bar, "screen_active_power_bottom_bar");
        lv_obj_set_x(screen_active_power_bottom_bar, 0);
        lv_obj_set_y(screen_active_power_bottom_bar, 207);
        lv_obj_set_width(screen_active_power_bottom_bar, 320);
        lv_obj_set_height(screen_active_power_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_active_power_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_active_power_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_active_power_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_active_power_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_active_power_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_active_power_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * active_btn_settings = lv_button_create(lv_obj_0);
        lv_obj_set_name(active_btn_settings, "active_btn_settings");
        lv_obj_set_x(active_btn_settings, 0);
        lv_obj_set_y(active_btn_settings, 207);
        lv_obj_set_width(active_btn_settings, 79);
        lv_obj_set_height(active_btn_settings, 32);
        lv_obj_add_style(active_btn_settings, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_settings, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_settings, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(active_btn_settings, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(active_btn_settings, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_settings, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(active_btn_settings);
        lv_image_set_src(lv_image_0, meter_setting);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_image_0, 0);
        lv_obj_set_y(lv_image_0, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 16, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 16, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 110, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 110, 0);

        lv_obj_add_screen_create_event(active_btn_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * active_btn_reserved = lv_button_create(lv_obj_0);
        lv_obj_set_name(active_btn_reserved, "active_btn_reserved");
        lv_obj_set_x(active_btn_reserved, 80);
        lv_obj_set_y(active_btn_reserved, 207);
        lv_obj_set_width(active_btn_reserved, 79);
        lv_obj_set_height(active_btn_reserved, 32);
        lv_obj_add_style(active_btn_reserved, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(active_btn_reserved, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(active_btn_reserved);
        lv_image_set_src(lv_image_1, meter_menu);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_image_1, 0);
        lv_obj_set_y(lv_image_1, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 12, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 12, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 150, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 150, 0);

        lv_obj_add_screen_create_event(active_btn_reserved, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * active_btn_prev = lv_button_create(lv_obj_0);
        lv_obj_set_name(active_btn_prev, "active_btn_prev");
        lv_obj_set_x(active_btn_prev, 160);
        lv_obj_set_y(active_btn_prev, 207);
        lv_obj_set_width(active_btn_prev, 79);
        lv_obj_set_height(active_btn_prev, 32);
        lv_obj_add_style(active_btn_prev, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(active_btn_prev, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(active_btn_prev);
        lv_image_set_src(lv_image_2, meter_arrow_left);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_2, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);

        lv_obj_add_screen_create_event(active_btn_prev, LV_EVENT_CLICKED, screen_home_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * active_btn_next = lv_button_create(lv_obj_0);
        lv_obj_set_name(active_btn_next, "active_btn_next");
        lv_obj_set_x(active_btn_next, 240);
        lv_obj_set_y(active_btn_next, 207);
        lv_obj_set_width(active_btn_next, 80);
        lv_obj_set_height(active_btn_next, 32);
        lv_obj_add_style(active_btn_next, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(active_btn_next, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(active_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(active_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(active_btn_next);
        lv_image_set_src(lv_image_3, meter_arrow_right);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_3, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 120, 0);

        lv_obj_add_screen_create_event(active_btn_next, LV_EVENT_CLICKED, screen_reactive_power_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);


        /* create animation timeline(s) */
        lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_ACTIVE_POWER_TIMELINE_CNT);
        at_array[SCREEN_ACTIVE_POWER_TIMELINE_MEASUREMENT_HEADER_OPEN] = timeline_measurement_header_open_create(lv_obj_0);
        lv_obj_set_user_data(lv_obj_0, at_array);
        lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

        lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_active_power_get_timeline(lv_obj_0, SCREEN_ACTIVE_POWER_TIMELINE_MEASUREMENT_HEADER_OPEN), 0, false);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

lv_anim_timeline_t * screen_active_power_get_timeline(lv_obj_t * obj, screen_active_power_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_ACTIVE_POWER_TIMELINE_CNT) {
        LV_LOG_WARN("screen_active_power has no timeline with %d ID", timeline_id);
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

static lv_anim_timeline_t * timeline_measurement_header_open_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "active_header"));
    lv_anim_set_values(&a, 0, 255);
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
    for(i = 0; i < _SCREEN_ACTIVE_POWER_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

