/**
 * @file screen_phase_frequency_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_phase_frequency_gen.h"
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

lv_obj_t * screen_phase_frequency_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_phase_frequency_#");
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
        lv_obj_t * phase_header = lv_obj_create(page_content);
        lv_obj_set_name(phase_header, "phase_header");
        lv_obj_set_x(phase_header, 0);
        lv_obj_set_y(phase_header, 0);
        lv_obj_set_width(phase_header, 320);
        lv_obj_set_height(phase_header, 44);
        lv_obj_set_style_bg_opa(phase_header, 0, 0);
        lv_obj_set_style_border_width(phase_header, 0, 0);
        lv_obj_set_style_pad_all(phase_header, 0, 0);
        lv_obj_set_flag(phase_header, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * phase_brand_logo = lv_image_create(phase_header);
        lv_obj_set_name(phase_brand_logo, "phase_brand_logo");
        lv_image_set_src(phase_brand_logo, meter_brand_logo);
        lv_obj_set_x(phase_brand_logo, 20);
        lv_obj_set_y(phase_brand_logo, 17);

        lv_obj_t * phase_frequency_phase_label = lv_label_create(phase_header);
        lv_label_set_text(phase_frequency_phase_label, "相角和频率");
        lv_obj_set_x(phase_frequency_phase_label, 156);
        lv_obj_set_y(phase_frequency_phase_label, 17);
        lv_obj_set_width(phase_frequency_phase_label, 140);
        lv_obj_set_name(phase_frequency_phase_label, "phase_frequency_phase_label");
        lv_obj_add_style(phase_frequency_phase_label, &me106_text_16_white_right, 0);
        lv_obj_bind_style(phase_frequency_phase_label, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_label, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_frequency_phase_acurrentdegree_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_phase_acurrentdegree_label, "A相电流°");
        lv_obj_set_x(phase_frequency_phase_acurrentdegree_label, 24);
        lv_obj_set_y(phase_frequency_phase_acurrentdegree_label, 55);
        lv_obj_set_name(phase_frequency_phase_acurrentdegree_label, "phase_frequency_phase_acurrentdegree_label");
        lv_obj_add_style(phase_frequency_phase_acurrentdegree_label, &me106_text_16_yellow, 0);
        lv_obj_bind_style(phase_frequency_phase_acurrentdegree_label, &me106_theme_light_phase_a, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_acurrentdegree_label, &me106_theme_alarm_phase_a, 0, &meter_theme_index, 2);

        lv_obj_t * phase_current_angle_a_value = lv_label_create(page_content);
        lv_obj_set_name(phase_current_angle_a_value, "phase_current_angle_a_value");
        lv_label_set_text(phase_current_angle_a_value, "0.00");
        lv_obj_set_x(phase_current_angle_a_value, 24);
        lv_obj_set_y(phase_current_angle_a_value, 77);
        lv_obj_add_style(phase_current_angle_a_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_current_angle_a_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_current_angle_a_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_a_current_angle_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_a_current_angle_issue, "phase_a_current_angle_issue");
        lv_image_set_src(phase_a_current_angle_issue, meter_icon_warning);
        lv_obj_set_x(phase_a_current_angle_issue, 99);
        lv_obj_set_y(phase_a_current_angle_issue, 58);
        lv_obj_bind_flag_if_not_eq(phase_a_current_angle_issue, &meter_phase_a_current_angle_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * phase_frequency_phase_bcurrentdegree_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_phase_bcurrentdegree_label, "B相电流°");
        lv_obj_set_x(phase_frequency_phase_bcurrentdegree_label, 123);
        lv_obj_set_y(phase_frequency_phase_bcurrentdegree_label, 55);
        lv_obj_set_name(phase_frequency_phase_bcurrentdegree_label, "phase_frequency_phase_bcurrentdegree_label");
        lv_obj_add_style(phase_frequency_phase_bcurrentdegree_label, &me106_text_16_green, 0);
        lv_obj_bind_style(phase_frequency_phase_bcurrentdegree_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_bcurrentdegree_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * phase_current_angle_b_value = lv_label_create(page_content);
        lv_obj_set_name(phase_current_angle_b_value, "phase_current_angle_b_value");
        lv_label_set_text(phase_current_angle_b_value, "0.00");
        lv_obj_set_x(phase_current_angle_b_value, 123);
        lv_obj_set_y(phase_current_angle_b_value, 77);
        lv_obj_add_style(phase_current_angle_b_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_current_angle_b_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_current_angle_b_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_b_current_angle_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_b_current_angle_issue, "phase_b_current_angle_issue");
        lv_image_set_src(phase_b_current_angle_issue, meter_icon_warning);
        lv_obj_set_x(phase_b_current_angle_issue, 199);
        lv_obj_set_y(phase_b_current_angle_issue, 58);
        lv_obj_bind_flag_if_not_eq(phase_b_current_angle_issue, &meter_phase_b_current_angle_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * phase_frequency_phase_ccurrentdegree_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_phase_ccurrentdegree_label, "C相电流°");
        lv_obj_set_x(phase_frequency_phase_ccurrentdegree_label, 221);
        lv_obj_set_y(phase_frequency_phase_ccurrentdegree_label, 55);
        lv_obj_set_name(phase_frequency_phase_ccurrentdegree_label, "phase_frequency_phase_ccurrentdegree_label");
        lv_obj_add_style(phase_frequency_phase_ccurrentdegree_label, &me106_text_16_red, 0);
        lv_obj_bind_style(phase_frequency_phase_ccurrentdegree_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_ccurrentdegree_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * phase_current_angle_c_value = lv_label_create(page_content);
        lv_obj_set_name(phase_current_angle_c_value, "phase_current_angle_c_value");
        lv_label_set_text(phase_current_angle_c_value, "0.00");
        lv_obj_set_x(phase_current_angle_c_value, 221);
        lv_obj_set_y(phase_current_angle_c_value, 77);
        lv_obj_add_style(phase_current_angle_c_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_current_angle_c_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_current_angle_c_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_c_current_angle_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_c_current_angle_issue, "phase_c_current_angle_issue");
        lv_image_set_src(phase_c_current_angle_issue, meter_icon_warning);
        lv_obj_set_x(phase_c_current_angle_issue, 297);
        lv_obj_set_y(phase_c_current_angle_issue, 58);
        lv_obj_bind_flag_if_not_eq(phase_c_current_angle_issue, &meter_phase_c_current_angle_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * phase_frequency_hz_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_hz_label, "频率(Hz)");
        lv_obj_set_x(phase_frequency_hz_label, 23);
        lv_obj_set_y(phase_frequency_hz_label, 120);
        lv_obj_set_name(phase_frequency_hz_label, "phase_frequency_hz_label");
        lv_obj_add_style(phase_frequency_hz_label, &me106_text_16_gray_ba, 0);
        lv_obj_bind_style(phase_frequency_hz_label, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_hz_label, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * phase_frequency_value = lv_label_create(page_content);
        lv_obj_set_name(phase_frequency_value, "phase_frequency_value");
        lv_label_set_text(phase_frequency_value, "0.00");
        lv_obj_set_x(phase_frequency_value, 23);
        lv_obj_set_y(phase_frequency_value, 142);
        lv_obj_add_style(phase_frequency_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_frequency_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_frequency_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_frequency_issue, "phase_frequency_issue");
        lv_image_set_src(phase_frequency_issue, meter_icon_warning);
        lv_obj_set_x(phase_frequency_issue, 99);
        lv_obj_set_y(phase_frequency_issue, 123);
        lv_obj_bind_flag_if_not_eq(phase_frequency_issue, &meter_phase_frequency_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * phase_frequency_phase_bvoltagedegree_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_phase_bvoltagedegree_label, "B相电压°");
        lv_obj_set_x(phase_frequency_phase_bvoltagedegree_label, 123);
        lv_obj_set_y(phase_frequency_phase_bvoltagedegree_label, 120);
        lv_obj_set_name(phase_frequency_phase_bvoltagedegree_label, "phase_frequency_phase_bvoltagedegree_label");
        lv_obj_add_style(phase_frequency_phase_bvoltagedegree_label, &me106_text_16_green, 0);
        lv_obj_bind_style(phase_frequency_phase_bvoltagedegree_label, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_bvoltagedegree_label, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);

        lv_obj_t * phase_voltage_angle_b_value = lv_label_create(page_content);
        lv_obj_set_name(phase_voltage_angle_b_value, "phase_voltage_angle_b_value");
        lv_label_set_text(phase_voltage_angle_b_value, "0.00");
        lv_obj_set_x(phase_voltage_angle_b_value, 123);
        lv_obj_set_y(phase_voltage_angle_b_value, 142);
        lv_obj_add_style(phase_voltage_angle_b_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_voltage_angle_b_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_voltage_angle_b_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_b_voltage_angle_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_b_voltage_angle_issue, "phase_b_voltage_angle_issue");
        lv_image_set_src(phase_b_voltage_angle_issue, meter_icon_warning);
        lv_obj_set_x(phase_b_voltage_angle_issue, 199);
        lv_obj_set_y(phase_b_voltage_angle_issue, 123);
        lv_obj_bind_flag_if_not_eq(phase_b_voltage_angle_issue, &meter_phase_b_voltage_angle_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * phase_frequency_phase_cvoltagedegree_label = lv_label_create(page_content);
        lv_label_set_text(phase_frequency_phase_cvoltagedegree_label, "C相电压°");
        lv_obj_set_x(phase_frequency_phase_cvoltagedegree_label, 221);
        lv_obj_set_y(phase_frequency_phase_cvoltagedegree_label, 120);
        lv_obj_set_name(phase_frequency_phase_cvoltagedegree_label, "phase_frequency_phase_cvoltagedegree_label");
        lv_obj_add_style(phase_frequency_phase_cvoltagedegree_label, &me106_text_16_red, 0);
        lv_obj_bind_style(phase_frequency_phase_cvoltagedegree_label, &me106_theme_light_phase_c, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_frequency_phase_cvoltagedegree_label, &me106_theme_alarm_phase_c, 0, &meter_theme_index, 2);

        lv_obj_t * phase_voltage_angle_c_value = lv_label_create(page_content);
        lv_obj_set_name(phase_voltage_angle_c_value, "phase_voltage_angle_c_value");
        lv_label_set_text(phase_voltage_angle_c_value, "0.00");
        lv_obj_set_x(phase_voltage_angle_c_value, 221);
        lv_obj_set_y(phase_voltage_angle_c_value, 142);
        lv_obj_add_style(phase_voltage_angle_c_value, &me106_text_18_white, 0);
        lv_obj_bind_style(phase_voltage_angle_c_value, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_voltage_angle_c_value, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * phase_c_voltage_angle_issue = lv_image_create(page_content);
        lv_obj_set_name(phase_c_voltage_angle_issue, "phase_c_voltage_angle_issue");
        lv_image_set_src(phase_c_voltage_angle_issue, meter_icon_warning);
        lv_obj_set_x(phase_c_voltage_angle_issue, 297);
        lv_obj_set_y(phase_c_voltage_angle_issue, 123);
        lv_obj_bind_flag_if_not_eq(phase_c_voltage_angle_issue, &meter_phase_c_voltage_angle_issue, LV_OBJ_FLAG_HIDDEN, 1);

        lv_obj_t * screen_phase_frequency_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_phase_frequency_bottom_bar, "screen_phase_frequency_bottom_bar");
        lv_obj_set_x(screen_phase_frequency_bottom_bar, 0);
        lv_obj_set_y(screen_phase_frequency_bottom_bar, 207);
        lv_obj_set_width(screen_phase_frequency_bottom_bar, 320);
        lv_obj_set_height(screen_phase_frequency_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_phase_frequency_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_phase_frequency_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_phase_frequency_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_phase_frequency_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_phase_frequency_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_phase_frequency_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * phase_btn_settings = lv_button_create(lv_obj_0);
        lv_obj_set_name(phase_btn_settings, "phase_btn_settings");
        lv_obj_set_x(phase_btn_settings, 0);
        lv_obj_set_y(phase_btn_settings, 207);
        lv_obj_set_width(phase_btn_settings, 79);
        lv_obj_set_height(phase_btn_settings, 32);
        lv_obj_add_style(phase_btn_settings, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_settings, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_settings, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(phase_btn_settings, &me106_btn_flat_blue, 0);
        lv_obj_bind_style(phase_btn_settings, &me106_theme_light_accent, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_settings, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(phase_btn_settings);
        lv_image_set_src(lv_image_0, meter_setting);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_image_0, 0);
        lv_obj_set_y(lv_image_0, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 16, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 16, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 110, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 110, 0);

        lv_obj_add_screen_create_event(phase_btn_settings, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * phase_btn_reserved = lv_button_create(lv_obj_0);
        lv_obj_set_name(phase_btn_reserved, "phase_btn_reserved");
        lv_obj_set_x(phase_btn_reserved, 80);
        lv_obj_set_y(phase_btn_reserved, 207);
        lv_obj_set_width(phase_btn_reserved, 79);
        lv_obj_set_height(phase_btn_reserved, 32);
        lv_obj_add_style(phase_btn_reserved, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(phase_btn_reserved, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_reserved, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_reserved, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_1 = lv_image_create(phase_btn_reserved);
        lv_image_set_src(lv_image_1, meter_menu);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_image_1, 0);
        lv_obj_set_y(lv_image_1, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_1, 12, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_1, 12, 0);
        lv_obj_set_style_transform_scale_x(lv_image_1, 150, 0);
        lv_obj_set_style_transform_scale_y(lv_image_1, 150, 0);

        lv_obj_add_screen_create_event(phase_btn_reserved, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * phase_btn_prev = lv_button_create(lv_obj_0);
        lv_obj_set_name(phase_btn_prev, "phase_btn_prev");
        lv_obj_set_x(phase_btn_prev, 160);
        lv_obj_set_y(phase_btn_prev, 207);
        lv_obj_set_width(phase_btn_prev, 79);
        lv_obj_set_height(phase_btn_prev, 32);
        lv_obj_add_style(phase_btn_prev, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(phase_btn_prev, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_prev, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_prev, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_2 = lv_image_create(phase_btn_prev);
        lv_image_set_src(lv_image_2, meter_arrow_left);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_2, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_2, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_2, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_2, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_2, 120, 0);

        lv_obj_add_screen_create_event(phase_btn_prev, LV_EVENT_CLICKED, screen_energy_data_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * phase_btn_next = lv_button_create(lv_obj_0);
        lv_obj_set_name(phase_btn_next, "phase_btn_next");
        lv_obj_set_x(phase_btn_next, 240);
        lv_obj_set_y(phase_btn_next, 207);
        lv_obj_set_width(phase_btn_next, 80);
        lv_obj_set_height(phase_btn_next, 32);
        lv_obj_add_style(phase_btn_next, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_style(phase_btn_next, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(phase_btn_next, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(phase_btn_next, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_3 = lv_image_create(phase_btn_next);
        lv_image_set_src(lv_image_3, meter_arrow_right);
        lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
        lv_obj_set_y(lv_image_3, 0);
        lv_obj_set_style_transform_pivot_x(lv_image_3, 10, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_3, 14, 0);
        lv_obj_set_style_transform_scale_x(lv_image_3, 120, 0);
        lv_obj_set_style_transform_scale_y(lv_image_3, 120, 0);

        lv_obj_add_screen_create_event(phase_btn_next, LV_EVENT_CLICKED, screen_line_voltage_demand_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);


        /* create animation timeline(s) */
        lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_PHASE_FREQUENCY_TIMELINE_CNT);
        at_array[SCREEN_PHASE_FREQUENCY_TIMELINE_MEASUREMENT_HEADER_OPEN] = timeline_measurement_header_open_create(lv_obj_0);
        lv_obj_set_user_data(lv_obj_0, at_array);
        lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

        lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_phase_frequency_get_timeline(lv_obj_0, SCREEN_PHASE_FREQUENCY_TIMELINE_MEASUREMENT_HEADER_OPEN), 0, false);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

lv_anim_timeline_t * screen_phase_frequency_get_timeline(lv_obj_t * obj, screen_phase_frequency_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_PHASE_FREQUENCY_TIMELINE_CNT) {
        LV_LOG_WARN("screen_phase_frequency has no timeline with %d ID", timeline_id);
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
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "phase_header"));
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
    for(i = 0; i < _SCREEN_PHASE_FREQUENCY_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

