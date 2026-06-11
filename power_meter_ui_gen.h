/**
 * @file power_meter_ui_gen.h
 */

#ifndef POWER_METER_UI_GEN_H
#define POWER_METER_UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

#define METER_THEME_DARK_COLOR_BG lv_color_hex(0x000000)

#define METER_THEME_DARK_COLOR_SURFACE lv_color_hex(0x242424)

#define METER_THEME_DARK_COLOR_SURFACE_ALT lv_color_hex(0x1F1F1F)

#define METER_THEME_DARK_COLOR_NAV lv_color_hex(0x474747)

#define METER_THEME_DARK_COLOR_TEXT lv_color_hex(0xFFFFFF)

#define METER_THEME_DARK_COLOR_MUTED lv_color_hex(0xBABABA)

#define METER_THEME_DARK_COLOR_ACCENT lv_color_hex(0x52A3FF)

#define METER_THEME_DARK_COLOR_LINE lv_color_hex(0x303030)

#define METER_THEME_DARK_COLOR_PHASE_A lv_color_hex(0xFFEB3B)

#define METER_THEME_DARK_COLOR_PHASE_B lv_color_hex(0x32E67A)

#define METER_THEME_DARK_COLOR_PHASE_C lv_color_hex(0xE33C64)

#define METER_THEME_LIGHT_COLOR_BG lv_color_hex(0xF8FAFF)

#define METER_THEME_LIGHT_COLOR_SURFACE lv_color_hex(0xFFFFFF)

#define METER_THEME_LIGHT_COLOR_SURFACE_SOFT lv_color_hex(0xEEF2FF)

#define METER_THEME_LIGHT_COLOR_NAV lv_color_hex(0x243044)

#define METER_THEME_LIGHT_COLOR_TEXT lv_color_hex(0x111827)

#define METER_THEME_LIGHT_COLOR_MUTED lv_color_hex(0x64748B)

#define METER_THEME_LIGHT_COLOR_ACCENT lv_color_hex(0x6366F1)

#define METER_THEME_LIGHT_COLOR_LINE lv_color_hex(0xDAE2F1)

#define METER_THEME_LIGHT_COLOR_PHASE_A lv_color_hex(0x7C3AED)

#define METER_THEME_LIGHT_COLOR_PHASE_B lv_color_hex(0x0EA5E9)

#define METER_THEME_LIGHT_COLOR_PHASE_C lv_color_hex(0x10B981)

#define METER_THEME_LIGHT_COLOR_WARNING lv_color_hex(0xB7791F)

#define METER_THEME_LIGHT_COLOR_OK lv_color_hex(0x0F766E)

#define METER_THEME_LIGHT_COLOR_DANGER lv_color_hex(0xBE123C)

#define METER_THEME_ALARM_COLOR_BG lv_color_hex(0x101010)

#define METER_THEME_ALARM_COLOR_SURFACE lv_color_hex(0x1C1D1B)

#define METER_THEME_ALARM_COLOR_NAV lv_color_hex(0x282521)

#define METER_THEME_ALARM_COLOR_TEXT lv_color_hex(0xF8F7F2)

#define METER_THEME_ALARM_COLOR_MUTED lv_color_hex(0xC8C1B7)

#define METER_THEME_ALARM_COLOR_ACCENT lv_color_hex(0xD94A4A)

#define METER_THEME_ALARM_COLOR_LINE lv_color_hex(0x3B332E)

#define METER_THEME_ALARM_COLOR_PHASE_A lv_color_hex(0xEB5757)

#define METER_THEME_ALARM_COLOR_PHASE_B lv_color_hex(0xF2C94C)

#define METER_THEME_ALARM_COLOR_PHASE_C lv_color_hex(0x6FCF97)

#define METER_THEME_ALARM_COLOR_DANGER lv_color_hex(0xEB5757)

#define METER_THEME_ALARM_COLOR_WARNING lv_color_hex(0xF2C94C)

#define METER_THEME_ALARM_COLOR_OK lv_color_hex(0x6FCF97)

#define METER_BLACK lv_color_hex(0x000000)

#define METER_GRAY_1F lv_color_hex(0x1F1F1F)

#define METER_GRAY_24 lv_color_hex(0x242424)

#define METER_GRAY_47 lv_color_hex(0x474747)

#define METER_BLUE lv_color_hex(0x52A3FF)

#define METER_GRAY_2C lv_color_hex(0x2C2C2C)

#define METER_GRAY_30 lv_color_hex(0x303030)

#define METER_WHITE lv_color_hex(0xFFFFFF)

#define METER_GRAY_D8 lv_color_hex(0xD8D8D8)

#define METER_GRAY_BA lv_color_hex(0xBABABA)

#define METER_GRAY_8F lv_color_hex(0x8F8F8F)

#define METER_GRAY_7F lv_color_hex(0x7F7F7F)

#define METER_BLUE_EA lv_color_hex(0xEAF4FF)

#define METER_YELLOW lv_color_hex(0xFFEB3B)

#define METER_GREEN lv_color_hex(0x32E67A)

#define METER_RED lv_color_hex(0xE33C64)

#define METER_CYAN lv_color_hex(0x20D3D5)

#define METER_PURPLE lv_color_hex(0x8D5CFF)

#define METER_INDIGO lv_color_hex(0x6366F1)

#define METER_TEAL lv_color_hex(0x14B8A6)

#define METER_ORANGE lv_color_hex(0xF59E0B)

#define METER_R8 8

#define METER_R6 6

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t me106_fill_black;
extern lv_style_t me106_fill_gray1f;
extern lv_style_t me106_btn_flat_blue;
extern lv_style_t me106_btn_flat_gray1f;
extern lv_style_t me106_btn_flat_gray47;
extern lv_style_t me106_theme_light_screen_bg;
extern lv_style_t me106_theme_light_panel;
extern lv_style_t me106_theme_light_nav;
extern lv_style_t me106_theme_light_accent;
extern lv_style_t me106_theme_light_text;
extern lv_style_t me106_theme_light_muted;
extern lv_style_t me106_theme_light_icon;
extern lv_style_t me106_theme_light_line;
extern lv_style_t me106_theme_light_phase_a;
extern lv_style_t me106_theme_light_phase_b;
extern lv_style_t me106_theme_light_phase_c;
extern lv_style_t me106_theme_light_phase_b_line;
extern lv_style_t me106_theme_light_phase_c_line;
extern lv_style_t me106_theme_light_status_warning;
extern lv_style_t me106_theme_light_status_ok;
extern lv_style_t me106_theme_light_status_danger;
extern lv_style_t me106_theme_alarm_screen_bg;
extern lv_style_t me106_theme_alarm_panel;
extern lv_style_t me106_theme_alarm_nav;
extern lv_style_t me106_theme_alarm_accent;
extern lv_style_t me106_theme_alarm_on_accent;
extern lv_style_t me106_theme_alarm_text;
extern lv_style_t me106_theme_alarm_muted;
extern lv_style_t me106_theme_alarm_icon;
extern lv_style_t me106_theme_alarm_line;
extern lv_style_t me106_theme_alarm_phase_a;
extern lv_style_t me106_theme_alarm_phase_b;
extern lv_style_t me106_theme_alarm_phase_c;
extern lv_style_t me106_theme_alarm_phase_b_line;
extern lv_style_t me106_theme_alarm_phase_c_line;
extern lv_style_t me106_theme_light_energy_forward_active;
extern lv_style_t me106_theme_light_energy_reverse_active;
extern lv_style_t me106_theme_light_energy_inductive_reactive;
extern lv_style_t me106_theme_light_energy_capacitive_reactive;
extern lv_style_t me106_theme_alarm_energy_forward_active;
extern lv_style_t me106_theme_alarm_energy_reverse_active;
extern lv_style_t me106_theme_alarm_energy_inductive_reactive;
extern lv_style_t me106_theme_alarm_energy_capacitive_reactive;
extern lv_style_t me106_theme_alarm_status_warning;
extern lv_style_t me106_theme_alarm_status_ok;
extern lv_style_t me106_theme_alarm_status_danger;
extern lv_style_t me106_text_14_gray_ba;
extern lv_style_t me106_text_14_gray_ba_center;
extern lv_style_t me106_text_14_gray_8f;
extern lv_style_t me106_text_14_gray_7f;
extern lv_style_t me106_text_14_blue;
extern lv_style_t me106_text_14_blue_ea;
extern lv_style_t me106_text_14_white;
extern lv_style_t me106_text_14_yellow;
extern lv_style_t me106_text_14_green;
extern lv_style_t me106_text_14_red;
extern lv_style_t me106_text_14_cyan;
extern lv_style_t me106_text_14_purple;
extern lv_style_t me106_text_14_indigo;
extern lv_style_t me106_text_14_teal;
extern lv_style_t me106_text_14_orange;
extern lv_style_t me106_text_14_white_center;
extern lv_style_t me106_text_14_gray_ba_right;
extern lv_style_t me106_text_14_white_right;
extern lv_style_t me106_text_16_white;
extern lv_style_t me106_text_16_white_center;
extern lv_style_t me106_text_16_white_right;
extern lv_style_t me106_text_16_gray_d8;
extern lv_style_t me106_text_16_gray_ba;
extern lv_style_t me106_text_16_gray_ba_right;
extern lv_style_t me106_text_16_gray_ba_center;
extern lv_style_t me106_text_16_yellow;
extern lv_style_t me106_text_16_green;
extern lv_style_t me106_text_16_red;
extern lv_style_t me106_text_16_purple;
extern lv_style_t me106_text_16_cyan;
extern lv_style_t me106_text_16_teal;
extern lv_style_t me106_text_16_indigo;
extern lv_style_t me106_text_16_orange;
extern lv_style_t me106_text_18_white;
extern lv_style_t me106_text_18_white_center;
extern lv_style_t me106_text_18_gray_ba;
extern lv_style_t me106_text_18_yellow;
extern lv_style_t me106_text_18_green;
extern lv_style_t me106_text_18_red;
extern lv_style_t me106_text_18_cyan;
extern lv_style_t me106_text_18_indigo;
extern lv_style_t me106_text_36_white_center;
extern lv_style_t me106_panel_gray1f_r8;
extern lv_style_t me106_panel_gray24_r8;
extern lv_style_t me106_panel_soft_r8;
extern lv_style_t me106_panel_blue_r8;
extern lv_style_t me106_panel_blue_r6;
extern lv_style_t me106_theme_light_soft_panel;
extern lv_style_t me106_theme_alarm_soft_panel;
extern lv_style_t me106_icon_white;
extern lv_style_t me106_icon_cyan;
extern lv_style_t me106_icon_indigo;
extern lv_style_t me106_line_gray2c;
extern lv_style_t me106_line_gray30;
extern lv_style_t me106_line_cyan;
extern lv_style_t me106_line_orange;
extern lv_style_t me106_slider_track;
extern lv_style_t me106_slider_indicator;
extern lv_style_t me106_slider_knob;
extern lv_style_t me106_chart_bar_gap;
extern lv_style_t me106_chart_bar_thin;
extern lv_style_t me106_chart_bar_inner_gap;
extern lv_style_t me106_chart_bar_spectrum_items;
extern lv_style_t me106_chart_frame;
extern lv_style_t me106_chart_point_hidden;
extern lv_style_t me106_chart_wave_line;
extern lv_style_t me106_move_y_n20;
extern lv_style_t me106_move_y_n24;
extern lv_style_t me106_move_y_n38;
extern lv_style_t me106_move_y_n46;
extern lv_style_t me106_move_y_n62;
extern lv_style_t me106_move_y_n70;
extern lv_style_t me106_move_y_n76;
extern lv_style_t me106_move_y_n92;
extern lv_style_t me106_move_y_n104;
extern lv_style_t me106_move_y_n114;
extern lv_style_t me106_move_y_n116;
extern lv_style_t me106_move_y_n138;
extern lv_style_t me106_move_y_n152;
extern lv_style_t me106_move_y_n162;
extern lv_style_t me106_move_y_n208;
extern lv_style_t me106_move_y_n254;
extern lv_style_t me106_move_y_n300;
extern lv_style_t me106_move_y_n346;
extern lv_style_t me106_move_y_n346_tail;
extern lv_style_t me106_move_y_n416;

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * meter_Harmony_Sans_SC_Medium_14;

extern lv_font_t * meter_Harmony_Sans_SC_Medium_16;

extern lv_font_t * meter_Harmony_Sans_SC_Medium_18;

extern lv_font_t * meter_Harmony_Sans_SC_Medium_36;

/*----------------
 * Images
 *----------------*/

extern const void * meter_setting;
extern const void * meter_menu;
extern const void * meter_arrow_left;
extern const void * meter_arrow_right;
extern const void * meter_icon_return;
extern const void * meter_arrow_down;
extern const void * meter_arrow_up;
extern const void * meter_yes;
extern const void * meter_icon_table;
extern const void * meter_icon_select;
extern const void * meter_icon_harmonic;
extern const void * meter_icon_waveform;
extern const void * meter_icon_electric_energy;
extern const void * meter_icon_wifi;
extern const void * meter_icon_modbus;
extern const void * meter_icon_serial;
extern const void * meter_icon_ratio;
extern const void * meter_icon_address;
extern const void * meter_icon_theme;
extern const void * meter_icon_alarm;
extern const void * meter_icon_warning;
extern const void * meter_icon_screen;
extern const void * meter_icon_restart;
extern const void * meter_icon_update;
extern const void * meter_icon_information;
extern const void * meter_power_quality_qr;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t meter_settings_selected_index;
extern lv_subject_t meter_function_menu_selected_index;
extern lv_subject_t meter_harmonic_spectrum_mode;
extern lv_subject_t meter_harmonic_data_state;
extern lv_subject_t meter_wifi_ap_selected_index;
extern lv_subject_t meter_wifi_page_index;
extern lv_subject_t meter_wifi_ap_ssid_text;
extern lv_subject_t meter_wifi_ap_password_text;
extern lv_subject_t meter_wifi_ap_entry_text;
extern lv_subject_t meter_wifi_sta_code_text;
extern lv_subject_t meter_wifi_sta_ssid_text;
extern lv_subject_t meter_wifi_sta_password_text;
extern lv_subject_t meter_wifi_sta_source_text;
extern lv_subject_t meter_wifi_sta_hotspot_state_text;
extern lv_subject_t meter_wifi_sta_password_state_text;
extern lv_subject_t meter_wifi_sta_status_text;
extern lv_subject_t meter_wifi_sta_connect_request;
extern lv_subject_t meter_theme_index;
extern lv_subject_t meter_screen_brightness;
extern lv_subject_t meter_screen_timeout_index;
extern lv_subject_t meter_uart_selected_index;
extern lv_subject_t meter_uart_baud_index;
extern lv_subject_t meter_uart_data_bits_index;
extern lv_subject_t meter_uart_parity_index;
extern lv_subject_t meter_uart_stop_bits_index;
extern lv_subject_t meter_ratio_selected_kind;
extern lv_subject_t meter_ratio_digit_selected_index;
extern lv_subject_t meter_ct_ratio_current_digit_0;
extern lv_subject_t meter_ct_ratio_current_digit_1;
extern lv_subject_t meter_ct_ratio_current_digit_2;
extern lv_subject_t meter_ct_ratio_current_digit_3;
extern lv_subject_t meter_ct_ratio_digit_0;
extern lv_subject_t meter_ct_ratio_digit_1;
extern lv_subject_t meter_ct_ratio_digit_2;
extern lv_subject_t meter_ct_ratio_digit_3;
extern lv_subject_t meter_pt_ratio_current_digit_0;
extern lv_subject_t meter_pt_ratio_current_digit_1;
extern lv_subject_t meter_pt_ratio_current_digit_2;
extern lv_subject_t meter_pt_ratio_current_digit_3;
extern lv_subject_t meter_pt_ratio_digit_0;
extern lv_subject_t meter_pt_ratio_digit_1;
extern lv_subject_t meter_pt_ratio_digit_2;
extern lv_subject_t meter_pt_ratio_digit_3;
extern lv_subject_t meter_address_current_value;
extern lv_subject_t meter_address_digit_selected_index;
extern lv_subject_t meter_address_digit_0;
extern lv_subject_t meter_address_digit_1;
extern lv_subject_t meter_address_digit_2;
extern lv_subject_t meter_address_edit_hex_text;
extern lv_subject_t meter_address_invalid_popup;
extern lv_subject_t meter_alarm_threshold_selected_index;
extern lv_subject_t meter_alarm_threshold_popup_visible;
extern lv_subject_t meter_alarm_threshold_edit_index;
extern lv_subject_t meter_alarm_threshold_u_step_value;
extern lv_subject_t meter_alarm_threshold_i_step_value;
extern lv_subject_t meter_alarm_threshold_p_step_value;
extern lv_subject_t meter_alarm_threshold_e_inc_value;
extern lv_subject_t meter_alarm_threshold_lost_volt_value;
extern lv_subject_t meter_alarm_threshold_sagcfg_value;
extern lv_subject_t meter_alarm_threshold_ovlvl_value;
extern lv_subject_t meter_alarm_threshold_oilvl_value;
extern lv_subject_t meter_power_quality_page_index;
extern lv_subject_t meter_power_quality_issue_count;
extern lv_subject_t meter_power_quality_u_step_issue;
extern lv_subject_t meter_power_quality_i_step_issue;
extern lv_subject_t meter_power_quality_p_step_issue;
extern lv_subject_t meter_power_quality_e_inc_issue;
extern lv_subject_t meter_power_quality_lost_volt_issue;
extern lv_subject_t meter_power_quality_sag_issue;
extern lv_subject_t meter_power_quality_ov_issue;
extern lv_subject_t meter_power_quality_oi_issue;
extern lv_subject_t meter_home_a_voltage_issue;
extern lv_subject_t meter_home_a_current_issue;
extern lv_subject_t meter_home_a_pf_issue;
extern lv_subject_t meter_home_b_voltage_issue;
extern lv_subject_t meter_home_b_current_issue;
extern lv_subject_t meter_home_b_pf_issue;
extern lv_subject_t meter_home_c_voltage_issue;
extern lv_subject_t meter_home_c_current_issue;
extern lv_subject_t meter_home_c_pf_issue;
extern lv_subject_t meter_line_ab_voltage_issue;
extern lv_subject_t meter_line_bc_voltage_issue;
extern lv_subject_t meter_line_ca_voltage_issue;
extern lv_subject_t meter_line_current_demand_issue;
extern lv_subject_t meter_line_max_demand_issue;
extern lv_subject_t meter_active_a_power_issue;
extern lv_subject_t meter_active_b_power_issue;
extern lv_subject_t meter_active_c_power_issue;
extern lv_subject_t meter_active_total_power_issue;
extern lv_subject_t meter_reactive_a_power_issue;
extern lv_subject_t meter_reactive_b_power_issue;
extern lv_subject_t meter_reactive_c_power_issue;
extern lv_subject_t meter_reactive_total_power_issue;
extern lv_subject_t meter_apparent_a_power_issue;
extern lv_subject_t meter_apparent_b_power_issue;
extern lv_subject_t meter_apparent_c_power_issue;
extern lv_subject_t meter_apparent_total_power_issue;
extern lv_subject_t meter_energy_forward_active_issue;
extern lv_subject_t meter_energy_reverse_active_issue;
extern lv_subject_t meter_energy_inductive_reactive_issue;
extern lv_subject_t meter_energy_capacitive_reactive_issue;
extern lv_subject_t meter_phase_a_current_angle_issue;
extern lv_subject_t meter_phase_b_current_angle_issue;
extern lv_subject_t meter_phase_c_current_angle_issue;
extern lv_subject_t meter_phase_frequency_issue;
extern lv_subject_t meter_phase_b_voltage_angle_issue;
extern lv_subject_t meter_phase_c_voltage_angle_issue;
extern lv_subject_t meter_factory_confirm_index;
extern lv_subject_t meter_factory_reset_request;
extern lv_subject_t meter_system_product_name;
extern lv_subject_t meter_system_chip_name;
extern lv_subject_t meter_system_hw_version;
extern lv_subject_t meter_system_fw_version;
extern lv_subject_t meter_system_feature_version;
extern lv_subject_t meter_system_build_date;
extern lv_subject_t meter_system_runtime_text;
extern lv_subject_t meter_upgrade_current_version;
extern lv_subject_t meter_upgrade_new_version;
extern lv_subject_t meter_upgrade_status_text;
extern lv_subject_t meter_upgrade_request;
extern lv_subject_t meter_paid_contact_popup;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void power_meter_ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/row_gen.h"
#include "screens/screen_active_power_gen.h"
#include "screens/screen_apparent_power_gen.h"
#include "screens/screen_energy_data_gen.h"
#include "screens/screen_function_menu_gen.h"
#include "screens/screen_harmonic_spectrum_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_0_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_1_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_2_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_3_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_4_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_5_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_6_gen.h"
#include "screens/screen_harmonic_spectrum_table_current_7_gen.h"
#include "screens/screen_harmonic_spectrum_table_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_1_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_2_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_3_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_4_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_5_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_6_gen.h"
#include "screens/screen_harmonic_spectrum_table_voltage_7_gen.h"
#include "screens/screen_harmonic_waveform_current_gen.h"
#include "screens/screen_harmonic_waveform_gen.h"
#include "screens/screen_harmonic_waveform_voltage_gen.h"
#include "screens/screen_home_gen.h"
#include "screens/screen_line_voltage_demand_gen.h"
#include "screens/screen_paid_harmonic_gen.h"
#include "screens/screen_paid_max_demand_gen.h"
#include "screens/screen_phase_frequency_gen.h"
#include "screens/screen_power_quality_analysis_gen.h"
#include "screens/screen_reactive_power_gen.h"
#include "screens/screen_settings_address_gen.h"
#include "screens/screen_settings_alarm_threshold_gen.h"
#include "screens/screen_settings_brightness_gen.h"
#include "screens/screen_settings_factory_reset_gen.h"
#include "screens/screen_settings_gen.h"
#include "screens/screen_settings_ratio_ct_gen.h"
#include "screens/screen_settings_ratio_gen.h"
#include "screens/screen_settings_ratio_pt_gen.h"
#include "screens/screen_settings_screen_timeout_gen.h"
#include "screens/screen_settings_system_gen.h"
#include "screens/screen_settings_theme_gen.h"
#include "screens/screen_settings_uart_gen.h"
#include "screens/screen_settings_upgrade_gen.h"
#include "screens/screen_settings_wifi_gen.h"
#include "screens/screen_settings_wifi_sta_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*POWER_METER_UI_GEN_H*/