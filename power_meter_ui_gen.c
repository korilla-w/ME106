/**
 * @file power_meter_ui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "power_meter_ui_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * meter_Harmony_Sans_SC_Medium_14;
lv_font_t * meter_Harmony_Sans_SC_Medium_16;
lv_font_t * meter_Harmony_Sans_SC_Medium_18;
lv_font_t * meter_Harmony_Sans_SC_Medium_36;

/*----------------
 * Images
 *----------------*/

const void * meter_setting;
const void * meter_menu;
const void * meter_arrow_left;
const void * meter_arrow_right;
const void * meter_icon_return;
const void * meter_arrow_down;
const void * meter_arrow_up;
const void * meter_yes;
const void * meter_icon_table;
const void * meter_icon_select;
const void * meter_icon_harmonic;
const void * meter_icon_waveform;
const void * meter_icon_electric_energy;
const void * meter_icon_wifi;
const void * meter_icon_modbus;
const void * meter_icon_serial;
const void * meter_icon_ratio;
const void * meter_icon_address;
const void * meter_icon_theme;
const void * meter_icon_alarm;
const void * meter_icon_warning;
const void * meter_icon_screen;
const void * meter_icon_restart;
const void * meter_icon_update;
const void * meter_icon_information;
const void * meter_power_quality_qr;

/*----------------
 * Global styles
 *----------------*/

lv_style_t me106_fill_black;
lv_style_t me106_fill_gray1f;
lv_style_t me106_btn_flat_blue;
lv_style_t me106_btn_flat_gray1f;
lv_style_t me106_btn_flat_gray47;
lv_style_t me106_theme_light_screen_bg;
lv_style_t me106_theme_light_panel;
lv_style_t me106_theme_light_nav;
lv_style_t me106_theme_light_accent;
lv_style_t me106_theme_light_text;
lv_style_t me106_theme_light_muted;
lv_style_t me106_theme_light_icon;
lv_style_t me106_theme_light_line;
lv_style_t me106_theme_light_phase_a;
lv_style_t me106_theme_light_phase_b;
lv_style_t me106_theme_light_phase_c;
lv_style_t me106_theme_light_phase_b_line;
lv_style_t me106_theme_light_phase_c_line;
lv_style_t me106_theme_light_status_warning;
lv_style_t me106_theme_light_status_ok;
lv_style_t me106_theme_light_status_danger;
lv_style_t me106_theme_alarm_screen_bg;
lv_style_t me106_theme_alarm_panel;
lv_style_t me106_theme_alarm_nav;
lv_style_t me106_theme_alarm_accent;
lv_style_t me106_theme_alarm_on_accent;
lv_style_t me106_theme_alarm_text;
lv_style_t me106_theme_alarm_muted;
lv_style_t me106_theme_alarm_icon;
lv_style_t me106_theme_alarm_line;
lv_style_t me106_theme_alarm_phase_a;
lv_style_t me106_theme_alarm_phase_b;
lv_style_t me106_theme_alarm_phase_c;
lv_style_t me106_theme_alarm_phase_b_line;
lv_style_t me106_theme_alarm_phase_c_line;
lv_style_t me106_theme_alarm_status_warning;
lv_style_t me106_theme_alarm_status_ok;
lv_style_t me106_theme_alarm_status_danger;
lv_style_t me106_text_14_gray_ba;
lv_style_t me106_text_14_gray_ba_center;
lv_style_t me106_text_14_gray_8f;
lv_style_t me106_text_14_gray_7f;
lv_style_t me106_text_14_blue;
lv_style_t me106_text_14_blue_ea;
lv_style_t me106_text_14_white;
lv_style_t me106_text_14_yellow;
lv_style_t me106_text_14_green;
lv_style_t me106_text_14_red;
lv_style_t me106_text_14_cyan;
lv_style_t me106_text_14_purple;
lv_style_t me106_text_14_indigo;
lv_style_t me106_text_14_teal;
lv_style_t me106_text_14_orange;
lv_style_t me106_text_14_white_center;
lv_style_t me106_text_14_gray_ba_right;
lv_style_t me106_text_14_white_right;
lv_style_t me106_text_16_white;
lv_style_t me106_text_16_white_center;
lv_style_t me106_text_16_white_right;
lv_style_t me106_text_16_gray_d8;
lv_style_t me106_text_16_gray_ba;
lv_style_t me106_text_16_gray_ba_right;
lv_style_t me106_text_16_gray_ba_center;
lv_style_t me106_text_16_yellow;
lv_style_t me106_text_16_green;
lv_style_t me106_text_16_red;
lv_style_t me106_text_16_cyan;
lv_style_t me106_text_16_teal;
lv_style_t me106_text_16_indigo;
lv_style_t me106_text_16_orange;
lv_style_t me106_text_18_white;
lv_style_t me106_text_18_white_center;
lv_style_t me106_text_18_gray_ba;
lv_style_t me106_text_18_yellow;
lv_style_t me106_text_18_green;
lv_style_t me106_text_18_red;
lv_style_t me106_text_18_cyan;
lv_style_t me106_text_18_indigo;
lv_style_t me106_text_36_white_center;
lv_style_t me106_panel_gray1f_r8;
lv_style_t me106_panel_gray24_r8;
lv_style_t me106_panel_soft_r8;
lv_style_t me106_panel_blue_r8;
lv_style_t me106_panel_blue_r6;
lv_style_t me106_theme_light_soft_panel;
lv_style_t me106_theme_alarm_soft_panel;
lv_style_t me106_icon_white;
lv_style_t me106_icon_cyan;
lv_style_t me106_icon_indigo;
lv_style_t me106_line_gray2c;
lv_style_t me106_line_gray30;
lv_style_t me106_line_cyan;
lv_style_t me106_line_orange;
lv_style_t me106_slider_track;
lv_style_t me106_slider_indicator;
lv_style_t me106_slider_knob;
lv_style_t me106_chart_bar_gap;
lv_style_t me106_chart_bar_thin;
lv_style_t me106_chart_bar_inner_gap;
lv_style_t me106_chart_bar_spectrum_items;
lv_style_t me106_chart_frame;
lv_style_t me106_chart_point_hidden;
lv_style_t me106_chart_wave_line;
lv_style_t me106_move_y_n20;
lv_style_t me106_move_y_n24;
lv_style_t me106_move_y_n38;
lv_style_t me106_move_y_n46;
lv_style_t me106_move_y_n62;
lv_style_t me106_move_y_n70;
lv_style_t me106_move_y_n76;
lv_style_t me106_move_y_n92;
lv_style_t me106_move_y_n104;
lv_style_t me106_move_y_n114;
lv_style_t me106_move_y_n116;
lv_style_t me106_move_y_n138;
lv_style_t me106_move_y_n152;
lv_style_t me106_move_y_n162;
lv_style_t me106_move_y_n208;
lv_style_t me106_move_y_n254;
lv_style_t me106_move_y_n300;
lv_style_t me106_move_y_n416;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t meter_settings_selected_index;
lv_subject_t meter_function_menu_selected_index;
lv_subject_t meter_harmonic_spectrum_mode;
lv_subject_t meter_harmonic_data_state;
lv_subject_t meter_wifi_ap_selected_index;
lv_subject_t meter_wifi_page_index;
lv_subject_t meter_wifi_ap_ssid_text;
lv_subject_t meter_wifi_ap_password_text;
lv_subject_t meter_wifi_ap_entry_text;
lv_subject_t meter_wifi_sta_code_text;
lv_subject_t meter_wifi_sta_ssid_text;
lv_subject_t meter_wifi_sta_password_text;
lv_subject_t meter_wifi_sta_source_text;
lv_subject_t meter_wifi_sta_hotspot_state_text;
lv_subject_t meter_wifi_sta_password_state_text;
lv_subject_t meter_wifi_sta_status_text;
lv_subject_t meter_wifi_sta_connect_request;
lv_subject_t meter_theme_index;
lv_subject_t meter_screen_brightness;
lv_subject_t meter_uart_selected_index;
lv_subject_t meter_uart_baud_index;
lv_subject_t meter_uart_data_bits_index;
lv_subject_t meter_uart_parity_index;
lv_subject_t meter_uart_stop_bits_index;
lv_subject_t meter_ratio_selected_kind;
lv_subject_t meter_ratio_digit_selected_index;
lv_subject_t meter_ct_ratio_current_digit_0;
lv_subject_t meter_ct_ratio_current_digit_1;
lv_subject_t meter_ct_ratio_current_digit_2;
lv_subject_t meter_ct_ratio_current_digit_3;
lv_subject_t meter_ct_ratio_digit_0;
lv_subject_t meter_ct_ratio_digit_1;
lv_subject_t meter_ct_ratio_digit_2;
lv_subject_t meter_ct_ratio_digit_3;
lv_subject_t meter_pt_ratio_current_digit_0;
lv_subject_t meter_pt_ratio_current_digit_1;
lv_subject_t meter_pt_ratio_current_digit_2;
lv_subject_t meter_pt_ratio_current_digit_3;
lv_subject_t meter_pt_ratio_digit_0;
lv_subject_t meter_pt_ratio_digit_1;
lv_subject_t meter_pt_ratio_digit_2;
lv_subject_t meter_pt_ratio_digit_3;
lv_subject_t meter_address_current_value;
lv_subject_t meter_address_digit_selected_index;
lv_subject_t meter_address_digit_0;
lv_subject_t meter_address_digit_1;
lv_subject_t meter_address_digit_2;
lv_subject_t meter_address_edit_hex_text;
lv_subject_t meter_address_invalid_popup;
lv_subject_t meter_alarm_threshold_selected_index;
lv_subject_t meter_alarm_threshold_popup_visible;
lv_subject_t meter_alarm_threshold_edit_index;
lv_subject_t meter_alarm_threshold_u_step_value;
lv_subject_t meter_alarm_threshold_i_step_value;
lv_subject_t meter_alarm_threshold_p_step_value;
lv_subject_t meter_alarm_threshold_e_inc_value;
lv_subject_t meter_alarm_threshold_lost_volt_value;
lv_subject_t meter_alarm_threshold_sagcfg_value;
lv_subject_t meter_alarm_threshold_ovlvl_value;
lv_subject_t meter_alarm_threshold_oilvl_value;
lv_subject_t meter_power_quality_page_index;
lv_subject_t meter_power_quality_issue_count;
lv_subject_t meter_power_quality_u_step_issue;
lv_subject_t meter_power_quality_i_step_issue;
lv_subject_t meter_power_quality_p_step_issue;
lv_subject_t meter_power_quality_e_inc_issue;
lv_subject_t meter_power_quality_lost_volt_issue;
lv_subject_t meter_power_quality_sag_issue;
lv_subject_t meter_power_quality_ov_issue;
lv_subject_t meter_power_quality_oi_issue;
lv_subject_t meter_home_a_voltage_issue;
lv_subject_t meter_home_a_current_issue;
lv_subject_t meter_home_a_pf_issue;
lv_subject_t meter_home_b_voltage_issue;
lv_subject_t meter_home_b_current_issue;
lv_subject_t meter_home_b_pf_issue;
lv_subject_t meter_home_c_voltage_issue;
lv_subject_t meter_home_c_current_issue;
lv_subject_t meter_home_c_pf_issue;
lv_subject_t meter_line_ab_voltage_issue;
lv_subject_t meter_line_bc_voltage_issue;
lv_subject_t meter_line_ca_voltage_issue;
lv_subject_t meter_line_current_demand_issue;
lv_subject_t meter_line_max_demand_issue;
lv_subject_t meter_active_a_power_issue;
lv_subject_t meter_active_b_power_issue;
lv_subject_t meter_active_c_power_issue;
lv_subject_t meter_active_total_power_issue;
lv_subject_t meter_reactive_a_power_issue;
lv_subject_t meter_reactive_b_power_issue;
lv_subject_t meter_reactive_c_power_issue;
lv_subject_t meter_reactive_total_power_issue;
lv_subject_t meter_apparent_a_power_issue;
lv_subject_t meter_apparent_b_power_issue;
lv_subject_t meter_apparent_c_power_issue;
lv_subject_t meter_apparent_total_power_issue;
lv_subject_t meter_energy_forward_active_issue;
lv_subject_t meter_energy_reverse_active_issue;
lv_subject_t meter_energy_inductive_reactive_issue;
lv_subject_t meter_energy_capacitive_reactive_issue;
lv_subject_t meter_phase_a_current_angle_issue;
lv_subject_t meter_phase_b_current_angle_issue;
lv_subject_t meter_phase_c_current_angle_issue;
lv_subject_t meter_phase_frequency_issue;
lv_subject_t meter_phase_b_voltage_angle_issue;
lv_subject_t meter_phase_c_voltage_angle_issue;
lv_subject_t meter_factory_confirm_index;
lv_subject_t meter_factory_reset_request;
lv_subject_t meter_system_product_name;
lv_subject_t meter_system_chip_name;
lv_subject_t meter_system_hw_version;
lv_subject_t meter_system_fw_version;
lv_subject_t meter_system_feature_version;
lv_subject_t meter_system_build_date;
lv_subject_t meter_system_runtime_text;
lv_subject_t meter_upgrade_current_version;
lv_subject_t meter_upgrade_new_version;
lv_subject_t meter_upgrade_status_text;
lv_subject_t meter_upgrade_request;
lv_subject_t meter_paid_contact_popup;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void power_meter_ui_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* create tiny ttf font "meter_Harmony_Sans_SC_Medium_14" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/HarmonyOS_Sans_SC_Medium.ttf");
    meter_Harmony_Sans_SC_Medium_14 = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny ttf font "meter_Harmony_Sans_SC_Medium_16" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/HarmonyOS_Sans_SC_Medium.ttf");
    meter_Harmony_Sans_SC_Medium_16 = lv_tiny_ttf_create_file(buf, 16);
    /* create tiny ttf font "meter_Harmony_Sans_SC_Medium_18" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/HarmonyOS_Sans_SC_Medium.ttf");
    meter_Harmony_Sans_SC_Medium_18 = lv_tiny_ttf_create_file(buf, 18);
    /* create tiny ttf font "meter_Harmony_Sans_SC_Medium_36" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/HarmonyOS_Sans_SC_Medium.ttf");
    meter_Harmony_Sans_SC_Medium_36 = lv_tiny_ttf_create_file(buf, 36);


    /*----------------
     * Images
     *----------------*/
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/setting.png");
    meter_setting = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/menu-line.png");
    meter_menu = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/arrow_left.png");
    meter_arrow_left = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/arrow_right.png");
    meter_arrow_right = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/return.png");
    meter_icon_return = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/arrow_down.png");
    meter_arrow_down = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/arrow_up.png");
    meter_arrow_up = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/yes.png");
    meter_yes = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/table.png");
    meter_icon_table = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/select.png");
    meter_icon_select = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/Harmonic.png");
    meter_icon_harmonic = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/Waveform.png");
    meter_icon_waveform = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/Electric energy.png");
    meter_icon_electric_energy = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wifi.png");
    meter_icon_wifi = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/modbus.png");
    meter_icon_modbus = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/serial.png");
    meter_icon_serial = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/ratio.png");
    meter_icon_ratio = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/address.png");
    meter_icon_address = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/theme.png");
    meter_icon_theme = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/alarm.png");
    meter_icon_alarm = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/warning.png");
    meter_icon_warning = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/screen.png");
    meter_icon_screen = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/restart.png");
    meter_icon_restart = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/update.png");
    meter_icon_update = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/information.png");
    meter_icon_information = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/power_quality_qr.png");
    meter_power_quality_qr = lv_strdup(buf);

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&me106_fill_black);
        lv_style_set_bg_color(&me106_fill_black, METER_BLACK);
        lv_style_set_bg_opa(&me106_fill_black, 255);

        lv_style_init(&me106_fill_gray1f);
        lv_style_set_bg_color(&me106_fill_gray1f, METER_GRAY_1F);
        lv_style_set_bg_opa(&me106_fill_gray1f, 255);

        lv_style_init(&me106_btn_flat_blue);
        lv_style_set_bg_color(&me106_btn_flat_blue, METER_BLUE);
        lv_style_set_bg_opa(&me106_btn_flat_blue, 255);
        lv_style_set_radius(&me106_btn_flat_blue, 0);
        lv_style_set_shadow_width(&me106_btn_flat_blue, 0);

        lv_style_init(&me106_btn_flat_gray1f);
        lv_style_set_bg_color(&me106_btn_flat_gray1f, METER_GRAY_1F);
        lv_style_set_bg_opa(&me106_btn_flat_gray1f, 255);
        lv_style_set_radius(&me106_btn_flat_gray1f, 0);
        lv_style_set_shadow_width(&me106_btn_flat_gray1f, 0);

        lv_style_init(&me106_btn_flat_gray47);
        lv_style_set_bg_color(&me106_btn_flat_gray47, METER_GRAY_47);
        lv_style_set_bg_opa(&me106_btn_flat_gray47, 255);
        lv_style_set_radius(&me106_btn_flat_gray47, 0);
        lv_style_set_shadow_width(&me106_btn_flat_gray47, 0);

        lv_style_init(&me106_theme_light_screen_bg);
        lv_style_set_bg_color(&me106_theme_light_screen_bg, METER_THEME_LIGHT_COLOR_BG);
        lv_style_set_bg_opa(&me106_theme_light_screen_bg, 255);

        lv_style_init(&me106_theme_light_panel);
        lv_style_set_bg_color(&me106_theme_light_panel, METER_THEME_LIGHT_COLOR_SURFACE);
        lv_style_set_bg_opa(&me106_theme_light_panel, 255);
        lv_style_set_border_width(&me106_theme_light_panel, 1);
        lv_style_set_border_color(&me106_theme_light_panel, METER_THEME_LIGHT_COLOR_LINE);
        lv_style_set_border_opa(&me106_theme_light_panel, 255);

        lv_style_init(&me106_theme_light_nav);
        lv_style_set_bg_color(&me106_theme_light_nav, METER_THEME_LIGHT_COLOR_NAV);
        lv_style_set_bg_opa(&me106_theme_light_nav, 255);

        lv_style_init(&me106_theme_light_accent);
        lv_style_set_bg_color(&me106_theme_light_accent, METER_THEME_LIGHT_COLOR_ACCENT);
        lv_style_set_bg_opa(&me106_theme_light_accent, 255);

        lv_style_init(&me106_theme_light_text);
        lv_style_set_text_color(&me106_theme_light_text, METER_THEME_LIGHT_COLOR_TEXT);

        lv_style_init(&me106_theme_light_muted);
        lv_style_set_text_color(&me106_theme_light_muted, METER_THEME_LIGHT_COLOR_MUTED);

        lv_style_init(&me106_theme_light_icon);
        lv_style_set_image_recolor(&me106_theme_light_icon, METER_THEME_LIGHT_COLOR_TEXT);
        lv_style_set_image_recolor_opa(&me106_theme_light_icon, 255);

        lv_style_init(&me106_theme_light_line);
        lv_style_set_bg_color(&me106_theme_light_line, METER_THEME_LIGHT_COLOR_LINE);
        lv_style_set_bg_opa(&me106_theme_light_line, 255);
        lv_style_set_border_color(&me106_theme_light_line, METER_THEME_LIGHT_COLOR_LINE);

        lv_style_init(&me106_theme_light_phase_a);
        lv_style_set_text_color(&me106_theme_light_phase_a, METER_THEME_LIGHT_COLOR_PHASE_A);

        lv_style_init(&me106_theme_light_phase_b);
        lv_style_set_text_color(&me106_theme_light_phase_b, METER_THEME_LIGHT_COLOR_PHASE_B);

        lv_style_init(&me106_theme_light_phase_c);
        lv_style_set_text_color(&me106_theme_light_phase_c, METER_THEME_LIGHT_COLOR_PHASE_C);

        lv_style_init(&me106_theme_light_phase_b_line);
        lv_style_set_bg_color(&me106_theme_light_phase_b_line, METER_THEME_LIGHT_COLOR_PHASE_B);
        lv_style_set_bg_opa(&me106_theme_light_phase_b_line, 255);

        lv_style_init(&me106_theme_light_phase_c_line);
        lv_style_set_bg_color(&me106_theme_light_phase_c_line, METER_THEME_LIGHT_COLOR_PHASE_C);
        lv_style_set_bg_opa(&me106_theme_light_phase_c_line, 255);

        lv_style_init(&me106_theme_light_status_warning);
        lv_style_set_text_color(&me106_theme_light_status_warning, METER_THEME_LIGHT_COLOR_WARNING);

        lv_style_init(&me106_theme_light_status_ok);
        lv_style_set_text_color(&me106_theme_light_status_ok, METER_THEME_LIGHT_COLOR_OK);

        lv_style_init(&me106_theme_light_status_danger);
        lv_style_set_text_color(&me106_theme_light_status_danger, METER_THEME_LIGHT_COLOR_DANGER);

        lv_style_init(&me106_theme_alarm_screen_bg);
        lv_style_set_bg_color(&me106_theme_alarm_screen_bg, METER_THEME_ALARM_COLOR_BG);
        lv_style_set_bg_opa(&me106_theme_alarm_screen_bg, 255);

        lv_style_init(&me106_theme_alarm_panel);
        lv_style_set_bg_color(&me106_theme_alarm_panel, METER_THEME_ALARM_COLOR_SURFACE);
        lv_style_set_bg_opa(&me106_theme_alarm_panel, 255);
        lv_style_set_border_width(&me106_theme_alarm_panel, 1);
        lv_style_set_border_color(&me106_theme_alarm_panel, METER_THEME_ALARM_COLOR_LINE);
        lv_style_set_border_opa(&me106_theme_alarm_panel, 255);

        lv_style_init(&me106_theme_alarm_nav);
        lv_style_set_bg_color(&me106_theme_alarm_nav, METER_THEME_ALARM_COLOR_NAV);
        lv_style_set_bg_opa(&me106_theme_alarm_nav, 255);

        lv_style_init(&me106_theme_alarm_accent);
        lv_style_set_bg_color(&me106_theme_alarm_accent, METER_THEME_ALARM_COLOR_ACCENT);
        lv_style_set_bg_opa(&me106_theme_alarm_accent, 255);

        lv_style_init(&me106_theme_alarm_on_accent);
        lv_style_set_text_color(&me106_theme_alarm_on_accent, METER_WHITE);

        lv_style_init(&me106_theme_alarm_text);
        lv_style_set_text_color(&me106_theme_alarm_text, METER_THEME_ALARM_COLOR_TEXT);

        lv_style_init(&me106_theme_alarm_muted);
        lv_style_set_text_color(&me106_theme_alarm_muted, METER_THEME_ALARM_COLOR_MUTED);

        lv_style_init(&me106_theme_alarm_icon);
        lv_style_set_image_recolor(&me106_theme_alarm_icon, METER_THEME_ALARM_COLOR_TEXT);
        lv_style_set_image_recolor_opa(&me106_theme_alarm_icon, 255);

        lv_style_init(&me106_theme_alarm_line);
        lv_style_set_bg_color(&me106_theme_alarm_line, METER_THEME_ALARM_COLOR_LINE);
        lv_style_set_bg_opa(&me106_theme_alarm_line, 255);
        lv_style_set_border_color(&me106_theme_alarm_line, METER_THEME_ALARM_COLOR_LINE);

        lv_style_init(&me106_theme_alarm_phase_a);
        lv_style_set_text_color(&me106_theme_alarm_phase_a, METER_THEME_ALARM_COLOR_PHASE_A);

        lv_style_init(&me106_theme_alarm_phase_b);
        lv_style_set_text_color(&me106_theme_alarm_phase_b, METER_THEME_ALARM_COLOR_PHASE_B);

        lv_style_init(&me106_theme_alarm_phase_c);
        lv_style_set_text_color(&me106_theme_alarm_phase_c, METER_THEME_ALARM_COLOR_PHASE_C);

        lv_style_init(&me106_theme_alarm_phase_b_line);
        lv_style_set_bg_color(&me106_theme_alarm_phase_b_line, METER_THEME_ALARM_COLOR_PHASE_B);
        lv_style_set_bg_opa(&me106_theme_alarm_phase_b_line, 255);

        lv_style_init(&me106_theme_alarm_phase_c_line);
        lv_style_set_bg_color(&me106_theme_alarm_phase_c_line, METER_THEME_ALARM_COLOR_PHASE_C);
        lv_style_set_bg_opa(&me106_theme_alarm_phase_c_line, 255);

        lv_style_init(&me106_theme_alarm_status_warning);
        lv_style_set_text_color(&me106_theme_alarm_status_warning, METER_THEME_ALARM_COLOR_WARNING);

        lv_style_init(&me106_theme_alarm_status_ok);
        lv_style_set_text_color(&me106_theme_alarm_status_ok, METER_THEME_ALARM_COLOR_OK);

        lv_style_init(&me106_theme_alarm_status_danger);
        lv_style_set_text_color(&me106_theme_alarm_status_danger, METER_THEME_ALARM_COLOR_DANGER);

        lv_style_init(&me106_text_14_gray_ba);
        lv_style_set_text_color(&me106_text_14_gray_ba, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_14_gray_ba, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_gray_ba_center);
        lv_style_set_text_color(&me106_text_14_gray_ba_center, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_14_gray_ba_center, meter_Harmony_Sans_SC_Medium_14);
        lv_style_set_text_align(&me106_text_14_gray_ba_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_text_14_gray_8f);
        lv_style_set_text_color(&me106_text_14_gray_8f, METER_GRAY_8F);
        lv_style_set_text_font(&me106_text_14_gray_8f, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_gray_7f);
        lv_style_set_text_color(&me106_text_14_gray_7f, METER_GRAY_7F);
        lv_style_set_text_font(&me106_text_14_gray_7f, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_blue);
        lv_style_set_text_color(&me106_text_14_blue, METER_BLUE);
        lv_style_set_text_font(&me106_text_14_blue, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_blue_ea);
        lv_style_set_text_color(&me106_text_14_blue_ea, METER_BLUE_EA);
        lv_style_set_text_font(&me106_text_14_blue_ea, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_white);
        lv_style_set_text_color(&me106_text_14_white, METER_WHITE);
        lv_style_set_text_font(&me106_text_14_white, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_yellow);
        lv_style_set_text_color(&me106_text_14_yellow, METER_YELLOW);
        lv_style_set_text_font(&me106_text_14_yellow, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_green);
        lv_style_set_text_color(&me106_text_14_green, METER_GREEN);
        lv_style_set_text_font(&me106_text_14_green, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_red);
        lv_style_set_text_color(&me106_text_14_red, METER_RED);
        lv_style_set_text_font(&me106_text_14_red, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_cyan);
        lv_style_set_text_color(&me106_text_14_cyan, METER_CYAN);
        lv_style_set_text_font(&me106_text_14_cyan, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_purple);
        lv_style_set_text_color(&me106_text_14_purple, METER_PURPLE);
        lv_style_set_text_font(&me106_text_14_purple, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_indigo);
        lv_style_set_text_color(&me106_text_14_indigo, METER_INDIGO);
        lv_style_set_text_font(&me106_text_14_indigo, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_teal);
        lv_style_set_text_color(&me106_text_14_teal, METER_TEAL);
        lv_style_set_text_font(&me106_text_14_teal, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_orange);
        lv_style_set_text_color(&me106_text_14_orange, METER_ORANGE);
        lv_style_set_text_font(&me106_text_14_orange, meter_Harmony_Sans_SC_Medium_14);

        lv_style_init(&me106_text_14_white_center);
        lv_style_set_text_color(&me106_text_14_white_center, METER_WHITE);
        lv_style_set_text_font(&me106_text_14_white_center, meter_Harmony_Sans_SC_Medium_14);
        lv_style_set_text_align(&me106_text_14_white_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_text_14_gray_ba_right);
        lv_style_set_text_color(&me106_text_14_gray_ba_right, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_14_gray_ba_right, meter_Harmony_Sans_SC_Medium_14);
        lv_style_set_text_align(&me106_text_14_gray_ba_right, LV_TEXT_ALIGN_RIGHT);

        lv_style_init(&me106_text_14_white_right);
        lv_style_set_text_color(&me106_text_14_white_right, METER_WHITE);
        lv_style_set_text_font(&me106_text_14_white_right, meter_Harmony_Sans_SC_Medium_14);
        lv_style_set_text_align(&me106_text_14_white_right, LV_TEXT_ALIGN_RIGHT);

        lv_style_init(&me106_text_16_white);
        lv_style_set_text_color(&me106_text_16_white, METER_WHITE);
        lv_style_set_text_font(&me106_text_16_white, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_white_center);
        lv_style_set_text_color(&me106_text_16_white_center, METER_WHITE);
        lv_style_set_text_font(&me106_text_16_white_center, meter_Harmony_Sans_SC_Medium_16);
        lv_style_set_text_align(&me106_text_16_white_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_text_16_white_right);
        lv_style_set_text_color(&me106_text_16_white_right, METER_WHITE);
        lv_style_set_text_font(&me106_text_16_white_right, meter_Harmony_Sans_SC_Medium_16);
        lv_style_set_text_align(&me106_text_16_white_right, LV_TEXT_ALIGN_RIGHT);

        lv_style_init(&me106_text_16_gray_d8);
        lv_style_set_text_color(&me106_text_16_gray_d8, METER_GRAY_D8);
        lv_style_set_text_font(&me106_text_16_gray_d8, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_gray_ba);
        lv_style_set_text_color(&me106_text_16_gray_ba, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_16_gray_ba, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_gray_ba_right);
        lv_style_set_text_color(&me106_text_16_gray_ba_right, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_16_gray_ba_right, meter_Harmony_Sans_SC_Medium_16);
        lv_style_set_text_align(&me106_text_16_gray_ba_right, LV_TEXT_ALIGN_RIGHT);

        lv_style_init(&me106_text_16_gray_ba_center);
        lv_style_set_text_color(&me106_text_16_gray_ba_center, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_16_gray_ba_center, meter_Harmony_Sans_SC_Medium_16);
        lv_style_set_text_align(&me106_text_16_gray_ba_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_text_16_yellow);
        lv_style_set_text_color(&me106_text_16_yellow, METER_YELLOW);
        lv_style_set_text_font(&me106_text_16_yellow, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_green);
        lv_style_set_text_color(&me106_text_16_green, METER_GREEN);
        lv_style_set_text_font(&me106_text_16_green, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_red);
        lv_style_set_text_color(&me106_text_16_red, METER_RED);
        lv_style_set_text_font(&me106_text_16_red, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_cyan);
        lv_style_set_text_color(&me106_text_16_cyan, METER_CYAN);
        lv_style_set_text_font(&me106_text_16_cyan, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_teal);
        lv_style_set_text_color(&me106_text_16_teal, METER_TEAL);
        lv_style_set_text_font(&me106_text_16_teal, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_indigo);
        lv_style_set_text_color(&me106_text_16_indigo, METER_INDIGO);
        lv_style_set_text_font(&me106_text_16_indigo, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_16_orange);
        lv_style_set_text_color(&me106_text_16_orange, METER_ORANGE);
        lv_style_set_text_font(&me106_text_16_orange, meter_Harmony_Sans_SC_Medium_16);

        lv_style_init(&me106_text_18_white);
        lv_style_set_text_color(&me106_text_18_white, METER_WHITE);
        lv_style_set_text_font(&me106_text_18_white, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_white_center);
        lv_style_set_text_color(&me106_text_18_white_center, METER_WHITE);
        lv_style_set_text_font(&me106_text_18_white_center, meter_Harmony_Sans_SC_Medium_18);
        lv_style_set_text_align(&me106_text_18_white_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_text_18_gray_ba);
        lv_style_set_text_color(&me106_text_18_gray_ba, METER_GRAY_BA);
        lv_style_set_text_font(&me106_text_18_gray_ba, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_yellow);
        lv_style_set_text_color(&me106_text_18_yellow, METER_YELLOW);
        lv_style_set_text_font(&me106_text_18_yellow, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_green);
        lv_style_set_text_color(&me106_text_18_green, METER_GREEN);
        lv_style_set_text_font(&me106_text_18_green, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_red);
        lv_style_set_text_color(&me106_text_18_red, METER_RED);
        lv_style_set_text_font(&me106_text_18_red, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_cyan);
        lv_style_set_text_color(&me106_text_18_cyan, METER_CYAN);
        lv_style_set_text_font(&me106_text_18_cyan, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_18_indigo);
        lv_style_set_text_color(&me106_text_18_indigo, METER_INDIGO);
        lv_style_set_text_font(&me106_text_18_indigo, meter_Harmony_Sans_SC_Medium_18);

        lv_style_init(&me106_text_36_white_center);
        lv_style_set_text_color(&me106_text_36_white_center, METER_WHITE);
        lv_style_set_text_font(&me106_text_36_white_center, meter_Harmony_Sans_SC_Medium_36);
        lv_style_set_text_align(&me106_text_36_white_center, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&me106_panel_gray1f_r8);
        lv_style_set_bg_color(&me106_panel_gray1f_r8, METER_GRAY_1F);
        lv_style_set_bg_opa(&me106_panel_gray1f_r8, 255);
        lv_style_set_radius(&me106_panel_gray1f_r8, METER_R8);
        lv_style_set_shadow_width(&me106_panel_gray1f_r8, 0);

        lv_style_init(&me106_panel_gray24_r8);
        lv_style_set_bg_color(&me106_panel_gray24_r8, METER_GRAY_24);
        lv_style_set_bg_opa(&me106_panel_gray24_r8, 255);
        lv_style_set_radius(&me106_panel_gray24_r8, METER_R8);
        lv_style_set_shadow_width(&me106_panel_gray24_r8, 0);

        lv_style_init(&me106_panel_soft_r8);
        lv_style_set_bg_color(&me106_panel_soft_r8, METER_GRAY_24);
        lv_style_set_bg_opa(&me106_panel_soft_r8, 150);
        lv_style_set_radius(&me106_panel_soft_r8, METER_R8);
        lv_style_set_border_width(&me106_panel_soft_r8, 0);
        lv_style_set_shadow_width(&me106_panel_soft_r8, 0);

        lv_style_init(&me106_panel_blue_r8);
        lv_style_set_bg_color(&me106_panel_blue_r8, METER_BLUE);
        lv_style_set_bg_opa(&me106_panel_blue_r8, 255);
        lv_style_set_radius(&me106_panel_blue_r8, METER_R8);
        lv_style_set_shadow_width(&me106_panel_blue_r8, 0);

        lv_style_init(&me106_panel_blue_r6);
        lv_style_set_bg_color(&me106_panel_blue_r6, METER_BLUE);
        lv_style_set_bg_opa(&me106_panel_blue_r6, 255);
        lv_style_set_radius(&me106_panel_blue_r6, METER_R6);
        lv_style_set_shadow_width(&me106_panel_blue_r6, 0);

        lv_style_init(&me106_theme_light_soft_panel);
        lv_style_set_bg_color(&me106_theme_light_soft_panel, METER_THEME_LIGHT_COLOR_SURFACE_SOFT);
        lv_style_set_bg_opa(&me106_theme_light_soft_panel, 255);
        lv_style_set_border_width(&me106_theme_light_soft_panel, 0);

        lv_style_init(&me106_theme_alarm_soft_panel);
        lv_style_set_bg_color(&me106_theme_alarm_soft_panel, METER_THEME_ALARM_COLOR_SURFACE);
        lv_style_set_bg_opa(&me106_theme_alarm_soft_panel, 220);
        lv_style_set_border_width(&me106_theme_alarm_soft_panel, 0);

        lv_style_init(&me106_icon_white);
        lv_style_set_image_recolor(&me106_icon_white, METER_WHITE);
        lv_style_set_image_recolor_opa(&me106_icon_white, 255);

        lv_style_init(&me106_icon_cyan);
        lv_style_set_image_recolor(&me106_icon_cyan, METER_CYAN);
        lv_style_set_image_recolor_opa(&me106_icon_cyan, 255);

        lv_style_init(&me106_icon_indigo);
        lv_style_set_image_recolor(&me106_icon_indigo, METER_INDIGO);
        lv_style_set_image_recolor_opa(&me106_icon_indigo, 255);

        lv_style_init(&me106_line_gray2c);
        lv_style_set_bg_color(&me106_line_gray2c, METER_GRAY_2C);
        lv_style_set_bg_opa(&me106_line_gray2c, 255);

        lv_style_init(&me106_line_gray30);
        lv_style_set_bg_color(&me106_line_gray30, METER_GRAY_30);
        lv_style_set_bg_opa(&me106_line_gray30, 255);

        lv_style_init(&me106_line_cyan);
        lv_style_set_bg_color(&me106_line_cyan, METER_CYAN);
        lv_style_set_bg_opa(&me106_line_cyan, 255);

        lv_style_init(&me106_line_orange);
        lv_style_set_bg_color(&me106_line_orange, METER_ORANGE);
        lv_style_set_bg_opa(&me106_line_orange, 255);

        lv_style_init(&me106_slider_track);
        lv_style_set_bg_color(&me106_slider_track, METER_GRAY_30);
        lv_style_set_bg_opa(&me106_slider_track, 255);
        lv_style_set_radius(&me106_slider_track, 5);
        lv_style_set_border_width(&me106_slider_track, 0);

        lv_style_init(&me106_slider_indicator);
        lv_style_set_bg_color(&me106_slider_indicator, METER_BLUE);
        lv_style_set_bg_opa(&me106_slider_indicator, 255);
        lv_style_set_radius(&me106_slider_indicator, 5);
        lv_style_set_border_width(&me106_slider_indicator, 0);

        lv_style_init(&me106_slider_knob);
        lv_style_set_bg_color(&me106_slider_knob, METER_WHITE);
        lv_style_set_bg_opa(&me106_slider_knob, 255);
        lv_style_set_radius(&me106_slider_knob, 8);
        lv_style_set_border_width(&me106_slider_knob, 2);
        lv_style_set_border_color(&me106_slider_knob, METER_BLUE);
        lv_style_set_border_opa(&me106_slider_knob, 255);
        lv_style_set_shadow_width(&me106_slider_knob, 0);
        lv_style_set_width(&me106_slider_knob, 18);
        lv_style_set_height(&me106_slider_knob, 18);

        lv_style_init(&me106_chart_bar_gap);
        lv_style_set_pad_column(&me106_chart_bar_gap, 1);

        lv_style_init(&me106_chart_bar_thin);
        lv_style_set_pad_column(&me106_chart_bar_thin, 3);

        lv_style_init(&me106_chart_bar_inner_gap);
        lv_style_set_pad_column(&me106_chart_bar_inner_gap, 2);

        lv_style_init(&me106_chart_bar_spectrum_items);
        lv_style_set_pad_column(&me106_chart_bar_spectrum_items, 0);

        lv_style_init(&me106_chart_frame);
        lv_style_set_border_width(&me106_chart_frame, 1);
        lv_style_set_border_color(&me106_chart_frame, METER_GRAY_30);
        lv_style_set_border_opa(&me106_chart_frame, 255);

        lv_style_init(&me106_chart_point_hidden);
        lv_style_set_width(&me106_chart_point_hidden, 0);
        lv_style_set_height(&me106_chart_point_hidden, 0);
        lv_style_set_bg_opa(&me106_chart_point_hidden, 0);

        lv_style_init(&me106_chart_wave_line);
        lv_style_set_line_width(&me106_chart_wave_line, 2);
        lv_style_set_line_rounded(&me106_chart_wave_line, true);

        lv_style_init(&me106_move_y_n20);
        lv_style_set_translate_y(&me106_move_y_n20, -20);

        lv_style_init(&me106_move_y_n24);
        lv_style_set_translate_y(&me106_move_y_n24, -24);

        lv_style_init(&me106_move_y_n38);
        lv_style_set_translate_y(&me106_move_y_n38, -38);

        lv_style_init(&me106_move_y_n46);
        lv_style_set_translate_y(&me106_move_y_n46, -46);

        lv_style_init(&me106_move_y_n62);
        lv_style_set_translate_y(&me106_move_y_n62, -62);

        lv_style_init(&me106_move_y_n70);
        lv_style_set_translate_y(&me106_move_y_n70, -70);

        lv_style_init(&me106_move_y_n76);
        lv_style_set_translate_y(&me106_move_y_n76, -76);

        lv_style_init(&me106_move_y_n92);
        lv_style_set_translate_y(&me106_move_y_n92, -92);

        lv_style_init(&me106_move_y_n104);
        lv_style_set_translate_y(&me106_move_y_n104, -104);

        lv_style_init(&me106_move_y_n114);
        lv_style_set_translate_y(&me106_move_y_n114, -114);

        lv_style_init(&me106_move_y_n116);
        lv_style_set_translate_y(&me106_move_y_n116, -116);

        lv_style_init(&me106_move_y_n138);
        lv_style_set_translate_y(&me106_move_y_n138, -138);

        lv_style_init(&me106_move_y_n152);
        lv_style_set_translate_y(&me106_move_y_n152, -152);

        lv_style_init(&me106_move_y_n162);
        lv_style_set_translate_y(&me106_move_y_n162, -162);

        lv_style_init(&me106_move_y_n208);
        lv_style_set_translate_y(&me106_move_y_n208, -208);

        lv_style_init(&me106_move_y_n254);
        lv_style_set_translate_y(&me106_move_y_n254, -254);

        lv_style_init(&me106_move_y_n300);
        lv_style_set_translate_y(&me106_move_y_n300, -300);

        lv_style_init(&me106_move_y_n416);
        lv_style_set_translate_y(&me106_move_y_n416, -416);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&meter_settings_selected_index, 0);
    lv_subject_set_min_value_int(&meter_settings_selected_index, 0);
    lv_subject_set_max_value_int(&meter_settings_selected_index, 9);
    lv_subject_init_int(&meter_function_menu_selected_index, 0);
    lv_subject_set_min_value_int(&meter_function_menu_selected_index, 0);
    lv_subject_set_max_value_int(&meter_function_menu_selected_index, 2);
    lv_subject_init_int(&meter_harmonic_spectrum_mode, 0);
    lv_subject_set_min_value_int(&meter_harmonic_spectrum_mode, 0);
    lv_subject_set_max_value_int(&meter_harmonic_spectrum_mode, 1);
    lv_subject_init_int(&meter_harmonic_data_state, 1);
    lv_subject_set_min_value_int(&meter_harmonic_data_state, 0);
    lv_subject_set_max_value_int(&meter_harmonic_data_state, 3);
    lv_subject_init_int(&meter_wifi_ap_selected_index, 0);
    lv_subject_set_min_value_int(&meter_wifi_ap_selected_index, 0);
    lv_subject_set_max_value_int(&meter_wifi_ap_selected_index, 5);
    lv_subject_init_int(&meter_wifi_page_index, 0);
    lv_subject_set_min_value_int(&meter_wifi_page_index, 0);
    lv_subject_set_max_value_int(&meter_wifi_page_index, 1);
    static char meter_wifi_ap_ssid_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_ap_ssid_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_ap_ssid_text,
                           meter_wifi_ap_ssid_text_buf,
                           meter_wifi_ap_ssid_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "ME106_A1B2C3"
                          );
    static char meter_wifi_ap_password_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_ap_password_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_ap_password_text,
                           meter_wifi_ap_password_text_buf,
                           meter_wifi_ap_password_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "MEA1B2C3"
                          );
    static char meter_wifi_ap_entry_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_ap_entry_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_ap_entry_text,
                           meter_wifi_ap_entry_text_buf,
                           meter_wifi_ap_entry_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "192.168.4.1"
                          );
    static char meter_wifi_sta_code_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_code_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_code_text,
                           meter_wifi_sta_code_text_buf,
                           meter_wifi_sta_code_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    static char meter_wifi_sta_ssid_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_ssid_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_ssid_text,
                           meter_wifi_sta_ssid_text_buf,
                           meter_wifi_sta_ssid_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    static char meter_wifi_sta_password_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_password_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_password_text,
                           meter_wifi_sta_password_text_buf,
                           meter_wifi_sta_password_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           ""
                          );
    static char meter_wifi_sta_source_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_source_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_source_text,
                           meter_wifi_sta_source_text_buf,
                           meter_wifi_sta_source_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "出厂默认"
                          );
    static char meter_wifi_sta_hotspot_state_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_hotspot_state_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_hotspot_state_text,
                           meter_wifi_sta_hotspot_state_text_buf,
                           meter_wifi_sta_hotspot_state_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "ME106_A1B2C3"
                          );
    static char meter_wifi_sta_password_state_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_password_state_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_password_state_text,
                           meter_wifi_sta_password_state_text_buf,
                           meter_wifi_sta_password_state_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "MEA1B2C3"
                          );
    static char meter_wifi_sta_status_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_wifi_sta_status_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_wifi_sta_status_text,
                           meter_wifi_sta_status_text_buf,
                           meter_wifi_sta_status_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "请用上位机配置"
                          );
    lv_subject_init_int(&meter_wifi_sta_connect_request, 0);
    lv_subject_set_min_value_int(&meter_wifi_sta_connect_request, 0);
    lv_subject_set_max_value_int(&meter_wifi_sta_connect_request, 1);
    lv_subject_init_int(&meter_theme_index, 0);
    lv_subject_set_min_value_int(&meter_theme_index, 0);
    lv_subject_set_max_value_int(&meter_theme_index, 2);
    lv_subject_init_int(&meter_screen_brightness, 70);
    lv_subject_set_min_value_int(&meter_screen_brightness, 10);
    lv_subject_set_max_value_int(&meter_screen_brightness, 100);
    lv_subject_init_int(&meter_uart_selected_index, 0);
    lv_subject_set_min_value_int(&meter_uart_selected_index, 0);
    lv_subject_set_max_value_int(&meter_uart_selected_index, 3);
    lv_subject_init_int(&meter_uart_baud_index, 5);
    lv_subject_set_min_value_int(&meter_uart_baud_index, 0);
    lv_subject_set_max_value_int(&meter_uart_baud_index, 7);
    lv_subject_init_int(&meter_uart_data_bits_index, 3);
    lv_subject_set_min_value_int(&meter_uart_data_bits_index, 0);
    lv_subject_set_max_value_int(&meter_uart_data_bits_index, 3);
    lv_subject_init_int(&meter_uart_parity_index, 0);
    lv_subject_set_min_value_int(&meter_uart_parity_index, 0);
    lv_subject_set_max_value_int(&meter_uart_parity_index, 2);
    lv_subject_init_int(&meter_uart_stop_bits_index, 0);
    lv_subject_set_min_value_int(&meter_uart_stop_bits_index, 0);
    lv_subject_set_max_value_int(&meter_uart_stop_bits_index, 2);
    lv_subject_init_int(&meter_ratio_selected_kind, 0);
    lv_subject_set_min_value_int(&meter_ratio_selected_kind, 0);
    lv_subject_set_max_value_int(&meter_ratio_selected_kind, 1);
    lv_subject_init_int(&meter_ratio_digit_selected_index, 0);
    lv_subject_set_min_value_int(&meter_ratio_digit_selected_index, 0);
    lv_subject_set_max_value_int(&meter_ratio_digit_selected_index, 3);
    lv_subject_init_int(&meter_ct_ratio_current_digit_0, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_current_digit_0, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_current_digit_0, 9);
    lv_subject_init_int(&meter_ct_ratio_current_digit_1, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_current_digit_1, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_current_digit_1, 9);
    lv_subject_init_int(&meter_ct_ratio_current_digit_2, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_current_digit_2, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_current_digit_2, 9);
    lv_subject_init_int(&meter_ct_ratio_current_digit_3, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_current_digit_3, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_current_digit_3, 9);
    lv_subject_init_int(&meter_ct_ratio_digit_0, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_digit_0, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_digit_0, 9);
    lv_subject_init_int(&meter_ct_ratio_digit_1, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_digit_1, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_digit_1, 9);
    lv_subject_init_int(&meter_ct_ratio_digit_2, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_digit_2, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_digit_2, 9);
    lv_subject_init_int(&meter_ct_ratio_digit_3, 0);
    lv_subject_set_min_value_int(&meter_ct_ratio_digit_3, 0);
    lv_subject_set_max_value_int(&meter_ct_ratio_digit_3, 9);
    lv_subject_init_int(&meter_pt_ratio_current_digit_0, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_current_digit_0, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_current_digit_0, 9);
    lv_subject_init_int(&meter_pt_ratio_current_digit_1, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_current_digit_1, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_current_digit_1, 9);
    lv_subject_init_int(&meter_pt_ratio_current_digit_2, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_current_digit_2, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_current_digit_2, 9);
    lv_subject_init_int(&meter_pt_ratio_current_digit_3, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_current_digit_3, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_current_digit_3, 9);
    lv_subject_init_int(&meter_pt_ratio_digit_0, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_digit_0, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_digit_0, 9);
    lv_subject_init_int(&meter_pt_ratio_digit_1, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_digit_1, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_digit_1, 9);
    lv_subject_init_int(&meter_pt_ratio_digit_2, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_digit_2, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_digit_2, 9);
    lv_subject_init_int(&meter_pt_ratio_digit_3, 0);
    lv_subject_set_min_value_int(&meter_pt_ratio_digit_3, 0);
    lv_subject_set_max_value_int(&meter_pt_ratio_digit_3, 9);
    lv_subject_init_int(&meter_address_current_value, 1);
    lv_subject_set_min_value_int(&meter_address_current_value, 1);
    lv_subject_set_max_value_int(&meter_address_current_value, 247);
    lv_subject_init_int(&meter_address_digit_selected_index, 0);
    lv_subject_set_min_value_int(&meter_address_digit_selected_index, 0);
    lv_subject_set_max_value_int(&meter_address_digit_selected_index, 2);
    lv_subject_init_int(&meter_address_digit_0, 0);
    lv_subject_set_min_value_int(&meter_address_digit_0, 0);
    lv_subject_set_max_value_int(&meter_address_digit_0, 2);
    lv_subject_init_int(&meter_address_digit_1, 0);
    lv_subject_set_min_value_int(&meter_address_digit_1, 0);
    lv_subject_set_max_value_int(&meter_address_digit_1, 9);
    lv_subject_init_int(&meter_address_digit_2, 1);
    lv_subject_set_min_value_int(&meter_address_digit_2, 0);
    lv_subject_set_max_value_int(&meter_address_digit_2, 9);
    static char meter_address_edit_hex_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_address_edit_hex_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_address_edit_hex_text,
                           meter_address_edit_hex_text_buf,
                           meter_address_edit_hex_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "0x01"
                          );
    lv_subject_init_int(&meter_address_invalid_popup, 0);
    lv_subject_set_min_value_int(&meter_address_invalid_popup, 0);
    lv_subject_set_max_value_int(&meter_address_invalid_popup, 1);
    lv_subject_init_int(&meter_alarm_threshold_selected_index, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_selected_index, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_selected_index, 7);
    lv_subject_init_int(&meter_alarm_threshold_popup_visible, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_popup_visible, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_popup_visible, 1);
    lv_subject_init_int(&meter_alarm_threshold_edit_index, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_edit_index, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_edit_index, 7);
    lv_subject_init_int(&meter_alarm_threshold_u_step_value, 100);
    lv_subject_set_min_value_int(&meter_alarm_threshold_u_step_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_u_step_value, 500);
    lv_subject_init_int(&meter_alarm_threshold_i_step_value, 100);
    lv_subject_set_min_value_int(&meter_alarm_threshold_i_step_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_i_step_value, 500);
    lv_subject_init_int(&meter_alarm_threshold_p_step_value, 1000);
    lv_subject_set_min_value_int(&meter_alarm_threshold_p_step_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_p_step_value, 5000);
    lv_subject_init_int(&meter_alarm_threshold_e_inc_value, 1000);
    lv_subject_set_min_value_int(&meter_alarm_threshold_e_inc_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_e_inc_value, 5000);
    lv_subject_init_int(&meter_alarm_threshold_lost_volt_value, 1024);
    lv_subject_set_min_value_int(&meter_alarm_threshold_lost_volt_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_lost_volt_value, 65535);
    lv_subject_init_int(&meter_alarm_threshold_sagcfg_value, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_sagcfg_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_sagcfg_value, 16777215);
    lv_subject_init_int(&meter_alarm_threshold_ovlvl_value, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_ovlvl_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_ovlvl_value, 65535);
    lv_subject_init_int(&meter_alarm_threshold_oilvl_value, 0);
    lv_subject_set_min_value_int(&meter_alarm_threshold_oilvl_value, 0);
    lv_subject_set_max_value_int(&meter_alarm_threshold_oilvl_value, 65535);
    lv_subject_init_int(&meter_power_quality_page_index, 0);
    lv_subject_set_min_value_int(&meter_power_quality_page_index, 0);
    lv_subject_set_max_value_int(&meter_power_quality_page_index, 2);
    lv_subject_init_int(&meter_power_quality_issue_count, 0);
    lv_subject_set_min_value_int(&meter_power_quality_issue_count, 0);
    lv_subject_set_max_value_int(&meter_power_quality_issue_count, 8);
    lv_subject_init_int(&meter_power_quality_u_step_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_u_step_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_u_step_issue, 1);
    lv_subject_init_int(&meter_power_quality_i_step_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_i_step_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_i_step_issue, 1);
    lv_subject_init_int(&meter_power_quality_p_step_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_p_step_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_p_step_issue, 1);
    lv_subject_init_int(&meter_power_quality_e_inc_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_e_inc_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_e_inc_issue, 1);
    lv_subject_init_int(&meter_power_quality_lost_volt_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_lost_volt_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_lost_volt_issue, 1);
    lv_subject_init_int(&meter_power_quality_sag_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_sag_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_sag_issue, 1);
    lv_subject_init_int(&meter_power_quality_ov_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_ov_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_ov_issue, 1);
    lv_subject_init_int(&meter_power_quality_oi_issue, 0);
    lv_subject_set_min_value_int(&meter_power_quality_oi_issue, 0);
    lv_subject_set_max_value_int(&meter_power_quality_oi_issue, 1);
    lv_subject_init_int(&meter_home_a_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_home_a_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_home_a_voltage_issue, 1);
    lv_subject_init_int(&meter_home_a_current_issue, 0);
    lv_subject_set_min_value_int(&meter_home_a_current_issue, 0);
    lv_subject_set_max_value_int(&meter_home_a_current_issue, 1);
    lv_subject_init_int(&meter_home_a_pf_issue, 0);
    lv_subject_set_min_value_int(&meter_home_a_pf_issue, 0);
    lv_subject_set_max_value_int(&meter_home_a_pf_issue, 1);
    lv_subject_init_int(&meter_home_b_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_home_b_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_home_b_voltage_issue, 1);
    lv_subject_init_int(&meter_home_b_current_issue, 0);
    lv_subject_set_min_value_int(&meter_home_b_current_issue, 0);
    lv_subject_set_max_value_int(&meter_home_b_current_issue, 1);
    lv_subject_init_int(&meter_home_b_pf_issue, 0);
    lv_subject_set_min_value_int(&meter_home_b_pf_issue, 0);
    lv_subject_set_max_value_int(&meter_home_b_pf_issue, 1);
    lv_subject_init_int(&meter_home_c_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_home_c_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_home_c_voltage_issue, 1);
    lv_subject_init_int(&meter_home_c_current_issue, 0);
    lv_subject_set_min_value_int(&meter_home_c_current_issue, 0);
    lv_subject_set_max_value_int(&meter_home_c_current_issue, 1);
    lv_subject_init_int(&meter_home_c_pf_issue, 0);
    lv_subject_set_min_value_int(&meter_home_c_pf_issue, 0);
    lv_subject_set_max_value_int(&meter_home_c_pf_issue, 1);
    lv_subject_init_int(&meter_line_ab_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_line_ab_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_line_ab_voltage_issue, 1);
    lv_subject_init_int(&meter_line_bc_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_line_bc_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_line_bc_voltage_issue, 1);
    lv_subject_init_int(&meter_line_ca_voltage_issue, 0);
    lv_subject_set_min_value_int(&meter_line_ca_voltage_issue, 0);
    lv_subject_set_max_value_int(&meter_line_ca_voltage_issue, 1);
    lv_subject_init_int(&meter_line_current_demand_issue, 0);
    lv_subject_set_min_value_int(&meter_line_current_demand_issue, 0);
    lv_subject_set_max_value_int(&meter_line_current_demand_issue, 1);
    lv_subject_init_int(&meter_line_max_demand_issue, 0);
    lv_subject_set_min_value_int(&meter_line_max_demand_issue, 0);
    lv_subject_set_max_value_int(&meter_line_max_demand_issue, 1);
    lv_subject_init_int(&meter_active_a_power_issue, 0);
    lv_subject_set_min_value_int(&meter_active_a_power_issue, 0);
    lv_subject_set_max_value_int(&meter_active_a_power_issue, 1);
    lv_subject_init_int(&meter_active_b_power_issue, 0);
    lv_subject_set_min_value_int(&meter_active_b_power_issue, 0);
    lv_subject_set_max_value_int(&meter_active_b_power_issue, 1);
    lv_subject_init_int(&meter_active_c_power_issue, 0);
    lv_subject_set_min_value_int(&meter_active_c_power_issue, 0);
    lv_subject_set_max_value_int(&meter_active_c_power_issue, 1);
    lv_subject_init_int(&meter_active_total_power_issue, 0);
    lv_subject_set_min_value_int(&meter_active_total_power_issue, 0);
    lv_subject_set_max_value_int(&meter_active_total_power_issue, 1);
    lv_subject_init_int(&meter_reactive_a_power_issue, 0);
    lv_subject_set_min_value_int(&meter_reactive_a_power_issue, 0);
    lv_subject_set_max_value_int(&meter_reactive_a_power_issue, 1);
    lv_subject_init_int(&meter_reactive_b_power_issue, 0);
    lv_subject_set_min_value_int(&meter_reactive_b_power_issue, 0);
    lv_subject_set_max_value_int(&meter_reactive_b_power_issue, 1);
    lv_subject_init_int(&meter_reactive_c_power_issue, 0);
    lv_subject_set_min_value_int(&meter_reactive_c_power_issue, 0);
    lv_subject_set_max_value_int(&meter_reactive_c_power_issue, 1);
    lv_subject_init_int(&meter_reactive_total_power_issue, 0);
    lv_subject_set_min_value_int(&meter_reactive_total_power_issue, 0);
    lv_subject_set_max_value_int(&meter_reactive_total_power_issue, 1);
    lv_subject_init_int(&meter_apparent_a_power_issue, 0);
    lv_subject_set_min_value_int(&meter_apparent_a_power_issue, 0);
    lv_subject_set_max_value_int(&meter_apparent_a_power_issue, 1);
    lv_subject_init_int(&meter_apparent_b_power_issue, 0);
    lv_subject_set_min_value_int(&meter_apparent_b_power_issue, 0);
    lv_subject_set_max_value_int(&meter_apparent_b_power_issue, 1);
    lv_subject_init_int(&meter_apparent_c_power_issue, 0);
    lv_subject_set_min_value_int(&meter_apparent_c_power_issue, 0);
    lv_subject_set_max_value_int(&meter_apparent_c_power_issue, 1);
    lv_subject_init_int(&meter_apparent_total_power_issue, 0);
    lv_subject_set_min_value_int(&meter_apparent_total_power_issue, 0);
    lv_subject_set_max_value_int(&meter_apparent_total_power_issue, 1);
    lv_subject_init_int(&meter_energy_forward_active_issue, 0);
    lv_subject_set_min_value_int(&meter_energy_forward_active_issue, 0);
    lv_subject_set_max_value_int(&meter_energy_forward_active_issue, 1);
    lv_subject_init_int(&meter_energy_reverse_active_issue, 0);
    lv_subject_set_min_value_int(&meter_energy_reverse_active_issue, 0);
    lv_subject_set_max_value_int(&meter_energy_reverse_active_issue, 1);
    lv_subject_init_int(&meter_energy_inductive_reactive_issue, 0);
    lv_subject_set_min_value_int(&meter_energy_inductive_reactive_issue, 0);
    lv_subject_set_max_value_int(&meter_energy_inductive_reactive_issue, 1);
    lv_subject_init_int(&meter_energy_capacitive_reactive_issue, 0);
    lv_subject_set_min_value_int(&meter_energy_capacitive_reactive_issue, 0);
    lv_subject_set_max_value_int(&meter_energy_capacitive_reactive_issue, 1);
    lv_subject_init_int(&meter_phase_a_current_angle_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_a_current_angle_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_a_current_angle_issue, 1);
    lv_subject_init_int(&meter_phase_b_current_angle_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_b_current_angle_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_b_current_angle_issue, 1);
    lv_subject_init_int(&meter_phase_c_current_angle_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_c_current_angle_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_c_current_angle_issue, 1);
    lv_subject_init_int(&meter_phase_frequency_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_frequency_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_frequency_issue, 1);
    lv_subject_init_int(&meter_phase_b_voltage_angle_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_b_voltage_angle_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_b_voltage_angle_issue, 1);
    lv_subject_init_int(&meter_phase_c_voltage_angle_issue, 0);
    lv_subject_set_min_value_int(&meter_phase_c_voltage_angle_issue, 0);
    lv_subject_set_max_value_int(&meter_phase_c_voltage_angle_issue, 1);
    lv_subject_init_int(&meter_factory_confirm_index, 0);
    lv_subject_set_min_value_int(&meter_factory_confirm_index, 0);
    lv_subject_set_max_value_int(&meter_factory_confirm_index, 1);
    lv_subject_init_int(&meter_factory_reset_request, 0);
    lv_subject_set_min_value_int(&meter_factory_reset_request, 0);
    lv_subject_set_max_value_int(&meter_factory_reset_request, 1);
    static char meter_system_product_name_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_product_name_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_product_name,
                           meter_system_product_name_buf,
                           meter_system_product_name_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "ME106"
                          );
    static char meter_system_chip_name_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_chip_name_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_chip_name,
                           meter_system_chip_name_buf,
                           meter_system_chip_name_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "ESP32-C6"
                          );
    static char meter_system_hw_version_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_hw_version_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_hw_version,
                           meter_system_hw_version_buf,
                           meter_system_hw_version_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "4.1"
                          );
    static char meter_system_fw_version_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_fw_version_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_fw_version,
                           meter_system_fw_version_buf,
                           meter_system_fw_version_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "04.21"
                          );
    static char meter_system_feature_version_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_feature_version_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_feature_version,
                           meter_system_feature_version_buf,
                           meter_system_feature_version_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "A"
                          );
    static char meter_system_build_date_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_build_date_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_build_date,
                           meter_system_build_date_buf,
                           meter_system_build_date_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "260421"
                          );
    static char meter_system_runtime_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_system_runtime_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_system_runtime_text,
                           meter_system_runtime_text_buf,
                           meter_system_runtime_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "0h 00m"
                          );
    static char meter_upgrade_current_version_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_upgrade_current_version_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_upgrade_current_version,
                           meter_upgrade_current_version_buf,
                           meter_upgrade_current_version_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "04.21"
                          );
    static char meter_upgrade_new_version_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_upgrade_new_version_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_upgrade_new_version,
                           meter_upgrade_new_version_buf,
                           meter_upgrade_new_version_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "--"
                          );
    static char meter_upgrade_status_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char meter_upgrade_status_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&meter_upgrade_status_text,
                           meter_upgrade_status_text_buf,
                           meter_upgrade_status_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "请先连接热点"
                          );
    lv_subject_init_int(&meter_upgrade_request, 0);
    lv_subject_set_min_value_int(&meter_upgrade_request, 0);
    lv_subject_set_max_value_int(&meter_upgrade_request, 1);
    lv_subject_init_int(&meter_paid_contact_popup, 0);
    lv_subject_set_min_value_int(&meter_paid_contact_popup, 0);
    lv_subject_set_max_value_int(&meter_paid_contact_popup, 1);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "meter_Harmony_Sans_SC_Medium_14", meter_Harmony_Sans_SC_Medium_14);
    lv_xml_register_font(NULL, "meter_Harmony_Sans_SC_Medium_16", meter_Harmony_Sans_SC_Medium_16);
    lv_xml_register_font(NULL, "meter_Harmony_Sans_SC_Medium_18", meter_Harmony_Sans_SC_Medium_18);
    lv_xml_register_font(NULL, "meter_Harmony_Sans_SC_Medium_36", meter_Harmony_Sans_SC_Medium_36);

    /* Register subjects */
    lv_xml_register_subject(NULL, "meter_settings_selected_index", &meter_settings_selected_index);
    lv_xml_register_subject(NULL, "meter_function_menu_selected_index", &meter_function_menu_selected_index);
    lv_xml_register_subject(NULL, "meter_harmonic_spectrum_mode", &meter_harmonic_spectrum_mode);
    lv_xml_register_subject(NULL, "meter_harmonic_data_state", &meter_harmonic_data_state);
    lv_xml_register_subject(NULL, "meter_wifi_ap_selected_index", &meter_wifi_ap_selected_index);
    lv_xml_register_subject(NULL, "meter_wifi_page_index", &meter_wifi_page_index);
    lv_xml_register_subject(NULL, "meter_wifi_ap_ssid_text", &meter_wifi_ap_ssid_text);
    lv_xml_register_subject(NULL, "meter_wifi_ap_password_text", &meter_wifi_ap_password_text);
    lv_xml_register_subject(NULL, "meter_wifi_ap_entry_text", &meter_wifi_ap_entry_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_code_text", &meter_wifi_sta_code_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_ssid_text", &meter_wifi_sta_ssid_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_password_text", &meter_wifi_sta_password_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_source_text", &meter_wifi_sta_source_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_hotspot_state_text", &meter_wifi_sta_hotspot_state_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_password_state_text", &meter_wifi_sta_password_state_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_status_text", &meter_wifi_sta_status_text);
    lv_xml_register_subject(NULL, "meter_wifi_sta_connect_request", &meter_wifi_sta_connect_request);
    lv_xml_register_subject(NULL, "meter_theme_index", &meter_theme_index);
    lv_xml_register_subject(NULL, "meter_screen_brightness", &meter_screen_brightness);
    lv_xml_register_subject(NULL, "meter_uart_selected_index", &meter_uart_selected_index);
    lv_xml_register_subject(NULL, "meter_uart_baud_index", &meter_uart_baud_index);
    lv_xml_register_subject(NULL, "meter_uart_data_bits_index", &meter_uart_data_bits_index);
    lv_xml_register_subject(NULL, "meter_uart_parity_index", &meter_uart_parity_index);
    lv_xml_register_subject(NULL, "meter_uart_stop_bits_index", &meter_uart_stop_bits_index);
    lv_xml_register_subject(NULL, "meter_ratio_selected_kind", &meter_ratio_selected_kind);
    lv_xml_register_subject(NULL, "meter_ratio_digit_selected_index", &meter_ratio_digit_selected_index);
    lv_xml_register_subject(NULL, "meter_ct_ratio_current_digit_0", &meter_ct_ratio_current_digit_0);
    lv_xml_register_subject(NULL, "meter_ct_ratio_current_digit_1", &meter_ct_ratio_current_digit_1);
    lv_xml_register_subject(NULL, "meter_ct_ratio_current_digit_2", &meter_ct_ratio_current_digit_2);
    lv_xml_register_subject(NULL, "meter_ct_ratio_current_digit_3", &meter_ct_ratio_current_digit_3);
    lv_xml_register_subject(NULL, "meter_ct_ratio_digit_0", &meter_ct_ratio_digit_0);
    lv_xml_register_subject(NULL, "meter_ct_ratio_digit_1", &meter_ct_ratio_digit_1);
    lv_xml_register_subject(NULL, "meter_ct_ratio_digit_2", &meter_ct_ratio_digit_2);
    lv_xml_register_subject(NULL, "meter_ct_ratio_digit_3", &meter_ct_ratio_digit_3);
    lv_xml_register_subject(NULL, "meter_pt_ratio_current_digit_0", &meter_pt_ratio_current_digit_0);
    lv_xml_register_subject(NULL, "meter_pt_ratio_current_digit_1", &meter_pt_ratio_current_digit_1);
    lv_xml_register_subject(NULL, "meter_pt_ratio_current_digit_2", &meter_pt_ratio_current_digit_2);
    lv_xml_register_subject(NULL, "meter_pt_ratio_current_digit_3", &meter_pt_ratio_current_digit_3);
    lv_xml_register_subject(NULL, "meter_pt_ratio_digit_0", &meter_pt_ratio_digit_0);
    lv_xml_register_subject(NULL, "meter_pt_ratio_digit_1", &meter_pt_ratio_digit_1);
    lv_xml_register_subject(NULL, "meter_pt_ratio_digit_2", &meter_pt_ratio_digit_2);
    lv_xml_register_subject(NULL, "meter_pt_ratio_digit_3", &meter_pt_ratio_digit_3);
    lv_xml_register_subject(NULL, "meter_address_current_value", &meter_address_current_value);
    lv_xml_register_subject(NULL, "meter_address_digit_selected_index", &meter_address_digit_selected_index);
    lv_xml_register_subject(NULL, "meter_address_digit_0", &meter_address_digit_0);
    lv_xml_register_subject(NULL, "meter_address_digit_1", &meter_address_digit_1);
    lv_xml_register_subject(NULL, "meter_address_digit_2", &meter_address_digit_2);
    lv_xml_register_subject(NULL, "meter_address_edit_hex_text", &meter_address_edit_hex_text);
    lv_xml_register_subject(NULL, "meter_address_invalid_popup", &meter_address_invalid_popup);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_selected_index", &meter_alarm_threshold_selected_index);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_popup_visible", &meter_alarm_threshold_popup_visible);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_edit_index", &meter_alarm_threshold_edit_index);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_u_step_value", &meter_alarm_threshold_u_step_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_i_step_value", &meter_alarm_threshold_i_step_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_p_step_value", &meter_alarm_threshold_p_step_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_e_inc_value", &meter_alarm_threshold_e_inc_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_lost_volt_value", &meter_alarm_threshold_lost_volt_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_sagcfg_value", &meter_alarm_threshold_sagcfg_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_ovlvl_value", &meter_alarm_threshold_ovlvl_value);
    lv_xml_register_subject(NULL, "meter_alarm_threshold_oilvl_value", &meter_alarm_threshold_oilvl_value);
    lv_xml_register_subject(NULL, "meter_power_quality_page_index", &meter_power_quality_page_index);
    lv_xml_register_subject(NULL, "meter_power_quality_issue_count", &meter_power_quality_issue_count);
    lv_xml_register_subject(NULL, "meter_power_quality_u_step_issue", &meter_power_quality_u_step_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_i_step_issue", &meter_power_quality_i_step_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_p_step_issue", &meter_power_quality_p_step_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_e_inc_issue", &meter_power_quality_e_inc_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_lost_volt_issue", &meter_power_quality_lost_volt_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_sag_issue", &meter_power_quality_sag_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_ov_issue", &meter_power_quality_ov_issue);
    lv_xml_register_subject(NULL, "meter_power_quality_oi_issue", &meter_power_quality_oi_issue);
    lv_xml_register_subject(NULL, "meter_home_a_voltage_issue", &meter_home_a_voltage_issue);
    lv_xml_register_subject(NULL, "meter_home_a_current_issue", &meter_home_a_current_issue);
    lv_xml_register_subject(NULL, "meter_home_a_pf_issue", &meter_home_a_pf_issue);
    lv_xml_register_subject(NULL, "meter_home_b_voltage_issue", &meter_home_b_voltage_issue);
    lv_xml_register_subject(NULL, "meter_home_b_current_issue", &meter_home_b_current_issue);
    lv_xml_register_subject(NULL, "meter_home_b_pf_issue", &meter_home_b_pf_issue);
    lv_xml_register_subject(NULL, "meter_home_c_voltage_issue", &meter_home_c_voltage_issue);
    lv_xml_register_subject(NULL, "meter_home_c_current_issue", &meter_home_c_current_issue);
    lv_xml_register_subject(NULL, "meter_home_c_pf_issue", &meter_home_c_pf_issue);
    lv_xml_register_subject(NULL, "meter_line_ab_voltage_issue", &meter_line_ab_voltage_issue);
    lv_xml_register_subject(NULL, "meter_line_bc_voltage_issue", &meter_line_bc_voltage_issue);
    lv_xml_register_subject(NULL, "meter_line_ca_voltage_issue", &meter_line_ca_voltage_issue);
    lv_xml_register_subject(NULL, "meter_line_current_demand_issue", &meter_line_current_demand_issue);
    lv_xml_register_subject(NULL, "meter_line_max_demand_issue", &meter_line_max_demand_issue);
    lv_xml_register_subject(NULL, "meter_active_a_power_issue", &meter_active_a_power_issue);
    lv_xml_register_subject(NULL, "meter_active_b_power_issue", &meter_active_b_power_issue);
    lv_xml_register_subject(NULL, "meter_active_c_power_issue", &meter_active_c_power_issue);
    lv_xml_register_subject(NULL, "meter_active_total_power_issue", &meter_active_total_power_issue);
    lv_xml_register_subject(NULL, "meter_reactive_a_power_issue", &meter_reactive_a_power_issue);
    lv_xml_register_subject(NULL, "meter_reactive_b_power_issue", &meter_reactive_b_power_issue);
    lv_xml_register_subject(NULL, "meter_reactive_c_power_issue", &meter_reactive_c_power_issue);
    lv_xml_register_subject(NULL, "meter_reactive_total_power_issue", &meter_reactive_total_power_issue);
    lv_xml_register_subject(NULL, "meter_apparent_a_power_issue", &meter_apparent_a_power_issue);
    lv_xml_register_subject(NULL, "meter_apparent_b_power_issue", &meter_apparent_b_power_issue);
    lv_xml_register_subject(NULL, "meter_apparent_c_power_issue", &meter_apparent_c_power_issue);
    lv_xml_register_subject(NULL, "meter_apparent_total_power_issue", &meter_apparent_total_power_issue);
    lv_xml_register_subject(NULL, "meter_energy_forward_active_issue", &meter_energy_forward_active_issue);
    lv_xml_register_subject(NULL, "meter_energy_reverse_active_issue", &meter_energy_reverse_active_issue);
    lv_xml_register_subject(NULL, "meter_energy_inductive_reactive_issue", &meter_energy_inductive_reactive_issue);
    lv_xml_register_subject(NULL, "meter_energy_capacitive_reactive_issue", &meter_energy_capacitive_reactive_issue);
    lv_xml_register_subject(NULL, "meter_phase_a_current_angle_issue", &meter_phase_a_current_angle_issue);
    lv_xml_register_subject(NULL, "meter_phase_b_current_angle_issue", &meter_phase_b_current_angle_issue);
    lv_xml_register_subject(NULL, "meter_phase_c_current_angle_issue", &meter_phase_c_current_angle_issue);
    lv_xml_register_subject(NULL, "meter_phase_frequency_issue", &meter_phase_frequency_issue);
    lv_xml_register_subject(NULL, "meter_phase_b_voltage_angle_issue", &meter_phase_b_voltage_angle_issue);
    lv_xml_register_subject(NULL, "meter_phase_c_voltage_angle_issue", &meter_phase_c_voltage_angle_issue);
    lv_xml_register_subject(NULL, "meter_factory_confirm_index", &meter_factory_confirm_index);
    lv_xml_register_subject(NULL, "meter_factory_reset_request", &meter_factory_reset_request);
    lv_xml_register_subject(NULL, "meter_system_product_name", &meter_system_product_name);
    lv_xml_register_subject(NULL, "meter_system_chip_name", &meter_system_chip_name);
    lv_xml_register_subject(NULL, "meter_system_hw_version", &meter_system_hw_version);
    lv_xml_register_subject(NULL, "meter_system_fw_version", &meter_system_fw_version);
    lv_xml_register_subject(NULL, "meter_system_feature_version", &meter_system_feature_version);
    lv_xml_register_subject(NULL, "meter_system_build_date", &meter_system_build_date);
    lv_xml_register_subject(NULL, "meter_system_runtime_text", &meter_system_runtime_text);
    lv_xml_register_subject(NULL, "meter_upgrade_current_version", &meter_upgrade_current_version);
    lv_xml_register_subject(NULL, "meter_upgrade_new_version", &meter_upgrade_new_version);
    lv_xml_register_subject(NULL, "meter_upgrade_status_text", &meter_upgrade_status_text);
    lv_xml_register_subject(NULL, "meter_upgrade_request", &meter_upgrade_request);
    lv_xml_register_subject(NULL, "meter_paid_contact_popup", &meter_paid_contact_popup);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "meter_setting", meter_setting);
    lv_xml_register_image(NULL, "meter_menu", meter_menu);
    lv_xml_register_image(NULL, "meter_arrow_left", meter_arrow_left);
    lv_xml_register_image(NULL, "meter_arrow_right", meter_arrow_right);
    lv_xml_register_image(NULL, "meter_icon_return", meter_icon_return);
    lv_xml_register_image(NULL, "meter_arrow_down", meter_arrow_down);
    lv_xml_register_image(NULL, "meter_arrow_up", meter_arrow_up);
    lv_xml_register_image(NULL, "meter_yes", meter_yes);
    lv_xml_register_image(NULL, "meter_icon_table", meter_icon_table);
    lv_xml_register_image(NULL, "meter_icon_select", meter_icon_select);
    lv_xml_register_image(NULL, "meter_icon_harmonic", meter_icon_harmonic);
    lv_xml_register_image(NULL, "meter_icon_waveform", meter_icon_waveform);
    lv_xml_register_image(NULL, "meter_icon_electric_energy", meter_icon_electric_energy);
    lv_xml_register_image(NULL, "meter_icon_wifi", meter_icon_wifi);
    lv_xml_register_image(NULL, "meter_icon_modbus", meter_icon_modbus);
    lv_xml_register_image(NULL, "meter_icon_serial", meter_icon_serial);
    lv_xml_register_image(NULL, "meter_icon_ratio", meter_icon_ratio);
    lv_xml_register_image(NULL, "meter_icon_address", meter_icon_address);
    lv_xml_register_image(NULL, "meter_icon_theme", meter_icon_theme);
    lv_xml_register_image(NULL, "meter_icon_alarm", meter_icon_alarm);
    lv_xml_register_image(NULL, "meter_icon_warning", meter_icon_warning);
    lv_xml_register_image(NULL, "meter_icon_screen", meter_icon_screen);
    lv_xml_register_image(NULL, "meter_icon_restart", meter_icon_restart);
    lv_xml_register_image(NULL, "meter_icon_update", meter_icon_update);
    lv_xml_register_image(NULL, "meter_icon_information", meter_icon_information);
    lv_xml_register_image(NULL, "meter_power_quality_qr", meter_power_quality_qr);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/