/**
 * @file screen_paid_harmonic_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_paid_harmonic_gen.h"
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

lv_obj_t * screen_paid_harmonic_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if POWER_METER_UI_CHECK_COMPILE_TARGET(POWER_METER_UI_TARGET_ALL)
    if (power_meter_ui_check_target(POWER_METER_UI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "screen_paid_harmonic_#");
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
        lv_label_set_text(lv_label_0, "谐波功能");
        lv_obj_set_x(lv_label_0, 170);
        lv_obj_set_y(lv_label_0, 17);
        lv_obj_set_width(lv_label_0, 126);
        lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
        lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * paid_harmonic_icon_halo = lv_obj_create(page_content);
        lv_obj_set_name(paid_harmonic_icon_halo, "paid_harmonic_icon_halo");
        lv_obj_set_x(paid_harmonic_icon_halo, 130);
        lv_obj_set_y(paid_harmonic_icon_halo, 48);
        lv_obj_set_width(paid_harmonic_icon_halo, 60);
        lv_obj_set_height(paid_harmonic_icon_halo, 60);
        lv_obj_set_style_pad_all(paid_harmonic_icon_halo, 0, 0);
        lv_obj_set_style_border_width(paid_harmonic_icon_halo, 0, 0);
        lv_obj_set_flag(paid_harmonic_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(paid_harmonic_icon_halo, &me106_panel_gray24_r8, 0);
        lv_obj_bind_style(paid_harmonic_icon_halo, &me106_theme_light_panel, 0, &meter_theme_index, 1);
        lv_obj_bind_style(paid_harmonic_icon_halo, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
        lv_obj_t * lv_image_0 = lv_image_create(paid_harmonic_icon_halo);
        lv_image_set_src(lv_image_0, meter_icon_harmonic);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
        lv_obj_set_style_transform_pivot_x(lv_image_0, 16, 0);
        lv_obj_set_style_transform_pivot_y(lv_image_0, 16, 0);
        lv_obj_set_style_transform_scale_x(lv_image_0, 150, 0);
        lv_obj_set_style_transform_scale_y(lv_image_0, 150, 0);
        lv_obj_add_style(lv_image_0, &me106_icon_cyan, 0);

        lv_obj_t * lv_label_1 = lv_label_create(page_content);
        lv_label_set_text(lv_label_1, "付费功能");
        lv_obj_set_x(lv_label_1, 80);
        lv_obj_set_y(lv_label_1, 119);
        lv_obj_set_width(lv_label_1, 160);
        lv_obj_add_style(lv_label_1, &me106_text_18_white_center, 0);
        lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_2 = lv_label_create(page_content);
        lv_label_set_text(lv_label_2, "需要付费升级后使用");
        lv_obj_set_x(lv_label_2, 50);
        lv_obj_set_y(lv_label_2, 148);
        lv_obj_set_width(lv_label_2, 220);
        lv_obj_add_style(lv_label_2, &me106_text_16_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * lv_label_3 = lv_label_create(page_content);
        lv_label_set_text(lv_label_3, "王工：13328775236");
        lv_obj_set_x(lv_label_3, 70);
        lv_obj_set_y(lv_label_3, 174);
        lv_obj_set_width(lv_label_3, 180);
        lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba_center, 0);
        lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
        lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);

        lv_obj_t * screen_paid_harmonic_bottom_bar = lv_obj_create(lv_obj_0);
        lv_obj_set_name(screen_paid_harmonic_bottom_bar, "screen_paid_harmonic_bottom_bar");
        lv_obj_set_x(screen_paid_harmonic_bottom_bar, 0);
        lv_obj_set_y(screen_paid_harmonic_bottom_bar, 207);
        lv_obj_set_width(screen_paid_harmonic_bottom_bar, 320);
        lv_obj_set_height(screen_paid_harmonic_bottom_bar, 33);
        lv_obj_set_style_border_width(screen_paid_harmonic_bottom_bar, 0, 0);
        lv_obj_set_style_pad_all(screen_paid_harmonic_bottom_bar, 0, 0);
        lv_obj_set_flag(screen_paid_harmonic_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_add_style(screen_paid_harmonic_bottom_bar, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(screen_paid_harmonic_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(screen_paid_harmonic_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * paid_harmonic_btn_return = lv_button_create(lv_obj_0);
        lv_obj_set_name(paid_harmonic_btn_return, "paid_harmonic_btn_return");
        lv_obj_set_x(paid_harmonic_btn_return, 0);
        lv_obj_set_y(paid_harmonic_btn_return, 207);
        lv_obj_set_width(paid_harmonic_btn_return, 79);
        lv_obj_set_height(paid_harmonic_btn_return, 32);
        lv_obj_add_style(paid_harmonic_btn_return, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(paid_harmonic_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(paid_harmonic_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
        lv_obj_add_screen_create_event(paid_harmonic_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

        lv_obj_t * paid_harmonic_btn_idle_1 = lv_button_create(lv_obj_0);
        lv_obj_set_name(paid_harmonic_btn_idle_1, "paid_harmonic_btn_idle_1");
        lv_obj_set_x(paid_harmonic_btn_idle_1, 80);
        lv_obj_set_y(paid_harmonic_btn_idle_1, 207);
        lv_obj_set_width(paid_harmonic_btn_idle_1, 79);
        lv_obj_set_height(paid_harmonic_btn_idle_1, 32);
        lv_obj_add_style(paid_harmonic_btn_idle_1, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(paid_harmonic_btn_idle_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(paid_harmonic_btn_idle_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * paid_harmonic_btn_idle_2 = lv_button_create(lv_obj_0);
        lv_obj_set_name(paid_harmonic_btn_idle_2, "paid_harmonic_btn_idle_2");
        lv_obj_set_x(paid_harmonic_btn_idle_2, 160);
        lv_obj_set_y(paid_harmonic_btn_idle_2, 207);
        lv_obj_set_width(paid_harmonic_btn_idle_2, 79);
        lv_obj_set_height(paid_harmonic_btn_idle_2, 32);
        lv_obj_add_style(paid_harmonic_btn_idle_2, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(paid_harmonic_btn_idle_2, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(paid_harmonic_btn_idle_2, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        lv_obj_t * paid_harmonic_btn_idle_3 = lv_button_create(lv_obj_0);
        lv_obj_set_name(paid_harmonic_btn_idle_3, "paid_harmonic_btn_idle_3");
        lv_obj_set_x(paid_harmonic_btn_idle_3, 240);
        lv_obj_set_y(paid_harmonic_btn_idle_3, 207);
        lv_obj_set_width(paid_harmonic_btn_idle_3, 80);
        lv_obj_set_height(paid_harmonic_btn_idle_3, 32);
        lv_obj_add_style(paid_harmonic_btn_idle_3, &me106_btn_flat_gray47, 0);
        lv_obj_bind_style(paid_harmonic_btn_idle_3, &me106_theme_light_nav, 0, &meter_theme_index, 1);
        lv_obj_bind_style(paid_harmonic_btn_idle_3, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

