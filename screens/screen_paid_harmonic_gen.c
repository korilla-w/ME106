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

static lv_anim_timeline_t * timeline_content_open_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_paid_harmonic_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_paid_harmonic_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_black, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_paid_contact_popup, LV_EVENT_SCREEN_LOADED, 0);
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
    lv_label_set_text(lv_label_1, "需付费升级");
    lv_obj_set_x(lv_label_1, 80);
    lv_obj_set_y(lv_label_1, 119);
    lv_obj_set_width(lv_label_1, 160);
    lv_obj_add_style(lv_label_1, &me106_text_18_white_center, 0);
    lv_obj_bind_style(lv_label_1, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_1, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_set_text(lv_label_2, "谐波频谱和波形曲线属于谐波功能");
    lv_obj_set_x(lv_label_2, 28);
    lv_obj_set_y(lv_label_2, 148);
    lv_obj_set_width(lv_label_2, 264);
    lv_obj_add_style(lv_label_2, &me106_text_16_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "请联系服务商开通");
    lv_obj_set_x(lv_label_3, 70);
    lv_obj_set_y(lv_label_3, 174);
    lv_obj_set_width(lv_label_3, 180);
    lv_obj_add_style(lv_label_3, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * paid_harmonic_contact_popup = lv_obj_create(page_content);
    lv_obj_set_name(paid_harmonic_contact_popup, "paid_harmonic_contact_popup");
    lv_obj_set_x(paid_harmonic_contact_popup, 34);
    lv_obj_set_y(paid_harmonic_contact_popup, 31);
    lv_obj_set_width(paid_harmonic_contact_popup, 252);
    lv_obj_set_height(paid_harmonic_contact_popup, 162);
    lv_obj_set_style_pad_all(paid_harmonic_contact_popup, 0, 0);
    lv_obj_set_style_border_width(paid_harmonic_contact_popup, 0, 0);
    lv_obj_set_flag(paid_harmonic_contact_popup, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(paid_harmonic_contact_popup, &me106_panel_gray24_r8, 0);
    lv_obj_bind_style(paid_harmonic_contact_popup, &me106_theme_light_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(paid_harmonic_contact_popup, &me106_theme_alarm_panel, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(paid_harmonic_contact_popup, &meter_paid_contact_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_label_4 = lv_label_create(paid_harmonic_contact_popup);
    lv_label_set_text(lv_label_4, "升级联系方式");
    lv_obj_set_x(lv_label_4, 18);
    lv_obj_set_y(lv_label_4, 14);
    lv_obj_set_width(lv_label_4, 132);
    lv_obj_add_style(lv_label_4, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_image_1 = lv_image_create(paid_harmonic_contact_popup);
    lv_image_set_src(lv_image_1, meter_power_quality_qr);
    lv_obj_set_x(lv_image_1, 18);
    lv_obj_set_y(lv_image_1, 44);
    lv_obj_set_width(lv_image_1, 92);
    lv_obj_set_height(lv_image_1, 92);
    
    lv_obj_t * lv_label_5 = lv_label_create(paid_harmonic_contact_popup);
    lv_label_set_text(lv_label_5, "扫码开通");
    lv_obj_set_x(lv_label_5, 126);
    lv_obj_set_y(lv_label_5, 48);
    lv_obj_set_width(lv_label_5, 96);
    lv_obj_add_style(lv_label_5, &me106_text_16_white, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(paid_harmonic_contact_popup);
    lv_label_set_text(lv_label_6, "王工：13328775236");
    lv_obj_set_x(lv_label_6, 126);
    lv_obj_set_y(lv_label_6, 76);
    lv_obj_set_width(lv_label_6, 112);
    lv_obj_add_style(lv_label_6, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_6, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_6, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_7 = lv_label_create(paid_harmonic_contact_popup);
    lv_label_set_text(lv_label_7, "返回键关闭");
    lv_obj_set_x(lv_label_7, 126);
    lv_obj_set_y(lv_label_7, 105);
    lv_obj_set_width(lv_label_7, 104);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * paid_harmonic_popup_close = lv_button_create(paid_harmonic_contact_popup);
    lv_obj_set_name(paid_harmonic_popup_close, "paid_harmonic_popup_close");
    lv_obj_set_x(paid_harmonic_popup_close, 212);
    lv_obj_set_y(paid_harmonic_popup_close, 8);
    lv_obj_set_width(paid_harmonic_popup_close, 30);
    lv_obj_set_height(paid_harmonic_popup_close, 30);
    lv_obj_set_style_bg_opa(paid_harmonic_popup_close, 0, 0);
    lv_obj_set_style_border_width(paid_harmonic_popup_close, 0, 0);
    lv_obj_set_style_shadow_width(paid_harmonic_popup_close, 0, 0);
    lv_obj_set_style_pad_all(paid_harmonic_popup_close, 0, 0);
    lv_obj_t * lv_label_8 = lv_label_create(paid_harmonic_popup_close);
    lv_label_set_text(lv_label_8, "X");
    lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_label_8, 30);
    lv_obj_add_style(lv_label_8, &me106_text_14_gray_ba_center, 0);
    lv_obj_bind_style(lv_label_8, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_8, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_add_subject_set_int_event(paid_harmonic_popup_close, &meter_paid_contact_popup, LV_EVENT_CLICKED, 0);
    
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
    lv_obj_bind_flag_if_eq(paid_harmonic_btn_return, &meter_paid_contact_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_2 = lv_image_create(paid_harmonic_btn_return);
    lv_image_set_src(lv_image_2, meter_icon_return);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 230, 0);
    
    lv_obj_add_screen_create_event(paid_harmonic_btn_return, LV_EVENT_CLICKED, screen_function_menu_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * paid_harmonic_btn_close_popup = lv_button_create(lv_obj_0);
    lv_obj_set_name(paid_harmonic_btn_close_popup, "paid_harmonic_btn_close_popup");
    lv_obj_set_x(paid_harmonic_btn_close_popup, 0);
    lv_obj_set_y(paid_harmonic_btn_close_popup, 207);
    lv_obj_set_width(paid_harmonic_btn_close_popup, 79);
    lv_obj_set_height(paid_harmonic_btn_close_popup, 32);
    lv_obj_add_style(paid_harmonic_btn_close_popup, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(paid_harmonic_btn_close_popup, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(paid_harmonic_btn_close_popup, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(paid_harmonic_btn_close_popup, &meter_paid_contact_popup, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_t * lv_image_3 = lv_image_create(paid_harmonic_btn_close_popup);
    lv_image_set_src(lv_image_3, meter_icon_return);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 230, 0);
    
    lv_obj_add_subject_set_int_event(paid_harmonic_btn_close_popup, &meter_paid_contact_popup, LV_EVENT_CLICKED, 0);
    
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
    lv_obj_t * lv_image_4 = lv_image_create(paid_harmonic_btn_idle_3);
    lv_image_set_src(lv_image_4, meter_icon_select);
    lv_obj_set_align(lv_image_4, LV_ALIGN_CENTER);
    
    lv_obj_add_subject_set_int_event(paid_harmonic_btn_idle_3, &meter_paid_contact_popup, LV_EVENT_CLICKED, 1);
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_PAID_HARMONIC_TIMELINE_CNT);
    at_array[SCREEN_PAID_HARMONIC_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_paid_harmonic_get_timeline(lv_obj_0, SCREEN_PAID_HARMONIC_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_paid_harmonic_get_timeline(lv_obj_t * obj, screen_paid_harmonic_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_PAID_HARMONIC_TIMELINE_CNT) {
        LV_LOG_WARN("screen_paid_harmonic has no timeline with %d ID", timeline_id);
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
    for(i = 0; i < _SCREEN_PAID_HARMONIC_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

