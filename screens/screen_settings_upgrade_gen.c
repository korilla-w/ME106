/**
 * @file screen_settings_upgrade_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_upgrade_gen.h"
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

lv_obj_t * screen_settings_upgrade_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_upgrade_#");
    lv_obj_set_width(lv_obj_0, 320);
    lv_obj_set_height(lv_obj_0, 240);

    lv_obj_add_style(lv_obj_0, &me106_fill_gray1f, 0);
    lv_obj_bind_style(lv_obj_0, &me106_theme_light_screen_bg, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_obj_0, &me106_theme_alarm_screen_bg, 0, &meter_theme_index, 2);
    lv_obj_add_subject_set_int_event(lv_obj_0, &meter_upgrade_request, LV_EVENT_SCREEN_LOADED, 0);
    lv_obj_add_subject_set_string_event(lv_obj_0, &meter_upgrade_status_text, LV_EVENT_SCREEN_LOADED, "请先连接热点");
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
    lv_label_set_text(lv_label_0, "固件升级");
    lv_obj_set_x(lv_label_0, 152);
    lv_obj_set_y(lv_label_0, 17);
    lv_obj_set_width(lv_label_0, 144);
    lv_obj_add_style(lv_label_0, &me106_text_16_white_right, 0);
    lv_obj_bind_style(lv_label_0, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_0, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * upgrade_icon_halo = lv_obj_create(page_content);
    lv_obj_set_name(upgrade_icon_halo, "upgrade_icon_halo");
    lv_obj_set_x(upgrade_icon_halo, 24);
    lv_obj_set_y(upgrade_icon_halo, 44);
    lv_obj_set_width(upgrade_icon_halo, 46);
    lv_obj_set_height(upgrade_icon_halo, 46);
    lv_obj_set_style_bg_color(upgrade_icon_halo, lv_color_hex(0x20D3D5), 0);
    lv_obj_set_style_bg_opa(upgrade_icon_halo, 48, 0);
    lv_obj_set_style_radius(upgrade_icon_halo, 12, 0);
    lv_obj_set_style_border_width(upgrade_icon_halo, 0, 0);
    lv_obj_set_style_pad_all(upgrade_icon_halo, 0, 0);
    lv_obj_set_flag(upgrade_icon_halo, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_image_0 = lv_image_create(page_content);
    lv_image_set_src(lv_image_0, meter_icon_update);
    lv_obj_set_x(lv_image_0, 35);
    lv_obj_set_y(lv_image_0, 55);
    lv_obj_set_style_transform_pivot_x(lv_image_0, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_0, 8, 0);
    lv_obj_set_style_transform_scale_x(lv_image_0, 245, 0);
    lv_obj_set_style_transform_scale_y(lv_image_0, 245, 0);
    lv_obj_add_style(lv_image_0, &me106_icon_cyan, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(page_content);
    lv_label_set_text(lv_label_1, "OTA");
    lv_obj_set_x(lv_label_1, 82);
    lv_obj_set_y(lv_label_1, 48);
    lv_obj_set_width(lv_label_1, 56);
    lv_obj_add_style(lv_label_1, &me106_text_18_cyan, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(page_content);
    lv_label_bind_text(lv_label_2, &meter_upgrade_status_text, NULL);
    lv_obj_set_x(lv_label_2, 82);
    lv_obj_set_y(lv_label_2, 73);
    lv_obj_set_width(lv_label_2, 152);
    lv_obj_add_style(lv_label_2, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_2, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_2, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * upgrade_status_dot = lv_obj_create(page_content);
    lv_obj_set_name(upgrade_status_dot, "upgrade_status_dot");
    lv_obj_set_x(upgrade_status_dot, 250);
    lv_obj_set_y(upgrade_status_dot, 58);
    lv_obj_set_width(upgrade_status_dot, 8);
    lv_obj_set_height(upgrade_status_dot, 8);
    lv_obj_set_style_radius(upgrade_status_dot, 4, 0);
    lv_obj_set_style_bg_color(upgrade_status_dot, lv_color_hex(0x14B8A6), 0);
    lv_obj_set_style_bg_opa(upgrade_status_dot, 255, 0);
    lv_obj_set_style_border_width(upgrade_status_dot, 0, 0);
    lv_obj_set_flag(upgrade_status_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_bind_flag_if_not_eq(upgrade_status_dot, &meter_upgrade_request, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * lv_label_3 = lv_label_create(page_content);
    lv_label_set_text(lv_label_3, "已提交");
    lv_obj_set_x(lv_label_3, 262);
    lv_obj_set_y(lv_label_3, 52);
    lv_obj_set_width(lv_label_3, 44);
    lv_obj_add_style(lv_label_3, &me106_text_14_green, 0);
    lv_obj_bind_style(lv_label_3, &me106_theme_light_phase_b, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_3, &me106_theme_alarm_phase_b, 0, &meter_theme_index, 2);
    lv_obj_bind_flag_if_not_eq(lv_label_3, &meter_upgrade_request, LV_OBJ_FLAG_HIDDEN, 1);
    
    lv_obj_t * upgrade_version_band = lv_obj_create(page_content);
    lv_obj_set_name(upgrade_version_band, "upgrade_version_band");
    lv_obj_set_x(upgrade_version_band, 24);
    lv_obj_set_y(upgrade_version_band, 104);
    lv_obj_set_width(upgrade_version_band, 272);
    lv_obj_set_height(upgrade_version_band, 50);
    lv_obj_set_style_pad_all(upgrade_version_band, 0, 0);
    lv_obj_set_flag(upgrade_version_band, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(upgrade_version_band, &me106_panel_soft_r8, 0);
    lv_obj_bind_style(upgrade_version_band, &me106_theme_light_soft_panel, 0, &meter_theme_index, 1);
    lv_obj_bind_style(upgrade_version_band, &me106_theme_alarm_soft_panel, 0, &meter_theme_index, 2);
    
    lv_obj_t * upgrade_current_mark = lv_obj_create(page_content);
    lv_obj_set_name(upgrade_current_mark, "upgrade_current_mark");
    lv_obj_set_x(upgrade_current_mark, 40);
    lv_obj_set_y(upgrade_current_mark, 121);
    lv_obj_set_width(upgrade_current_mark, 7);
    lv_obj_set_height(upgrade_current_mark, 18);
    lv_obj_set_style_radius(upgrade_current_mark, 4, 0);
    lv_obj_set_style_bg_color(upgrade_current_mark, lv_color_hex(0x6366F1), 0);
    lv_obj_set_style_bg_opa(upgrade_current_mark, 255, 0);
    lv_obj_set_style_border_width(upgrade_current_mark, 0, 0);
    lv_obj_set_flag(upgrade_current_mark, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_label_4 = lv_label_create(page_content);
    lv_label_set_text(lv_label_4, "当前版本");
    lv_obj_set_x(lv_label_4, 56);
    lv_obj_set_y(lv_label_4, 112);
    lv_obj_set_width(lv_label_4, 90);
    lv_obj_add_style(lv_label_4, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_4, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_4, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_5 = lv_label_create(page_content);
    lv_label_bind_text(lv_label_5, &meter_upgrade_current_version, NULL);
    lv_obj_set_x(lv_label_5, 56);
    lv_obj_set_y(lv_label_5, 132);
    lv_obj_set_width(lv_label_5, 76);
    lv_obj_add_style(lv_label_5, &me106_text_18_white, 0);
    lv_obj_bind_style(lv_label_5, &me106_theme_light_text, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_5, &me106_theme_alarm_text, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_6 = lv_label_create(page_content);
    lv_label_set_text(lv_label_6, "›");
    lv_obj_set_x(lv_label_6, 148);
    lv_obj_set_y(lv_label_6, 118);
    lv_obj_set_width(lv_label_6, 24);
    lv_obj_add_style(lv_label_6, &me106_text_18_cyan, 0);
    
    lv_obj_t * upgrade_new_mark = lv_obj_create(page_content);
    lv_obj_set_name(upgrade_new_mark, "upgrade_new_mark");
    lv_obj_set_x(upgrade_new_mark, 178);
    lv_obj_set_y(upgrade_new_mark, 121);
    lv_obj_set_width(upgrade_new_mark, 7);
    lv_obj_set_height(upgrade_new_mark, 18);
    lv_obj_set_style_radius(upgrade_new_mark, 4, 0);
    lv_obj_set_style_bg_color(upgrade_new_mark, lv_color_hex(0x20D3D5), 0);
    lv_obj_set_style_bg_opa(upgrade_new_mark, 255, 0);
    lv_obj_set_style_border_width(upgrade_new_mark, 0, 0);
    lv_obj_set_flag(upgrade_new_mark, LV_OBJ_FLAG_SCROLLABLE, false);
    
    lv_obj_t * lv_label_7 = lv_label_create(page_content);
    lv_label_set_text(lv_label_7, "新版本");
    lv_obj_set_x(lv_label_7, 194);
    lv_obj_set_y(lv_label_7, 112);
    lv_obj_set_width(lv_label_7, 80);
    lv_obj_add_style(lv_label_7, &me106_text_14_gray_8f, 0);
    lv_obj_bind_style(lv_label_7, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_7, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * lv_label_8 = lv_label_create(page_content);
    lv_label_bind_text(lv_label_8, &meter_upgrade_new_version, NULL);
    lv_obj_set_x(lv_label_8, 194);
    lv_obj_set_y(lv_label_8, 132);
    lv_obj_set_width(lv_label_8, 72);
    lv_obj_add_style(lv_label_8, &me106_text_18_cyan, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(page_content);
    lv_label_set_text(lv_label_9, "连接热点后可执行升级");
    lv_obj_set_x(lv_label_9, 24);
    lv_obj_set_y(lv_label_9, 176);
    lv_obj_set_width(lv_label_9, 184);
    lv_obj_add_style(lv_label_9, &me106_text_14_gray_ba, 0);
    lv_obj_bind_style(lv_label_9, &me106_theme_light_muted, 0, &meter_theme_index, 1);
    lv_obj_bind_style(lv_label_9, &me106_theme_alarm_muted, 0, &meter_theme_index, 2);
    
    lv_obj_t * screen_settings_upgrade_bottom_bar = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_settings_upgrade_bottom_bar, "screen_settings_upgrade_bottom_bar");
    lv_obj_set_x(screen_settings_upgrade_bottom_bar, 0);
    lv_obj_set_y(screen_settings_upgrade_bottom_bar, 207);
    lv_obj_set_width(screen_settings_upgrade_bottom_bar, 320);
    lv_obj_set_height(screen_settings_upgrade_bottom_bar, 33);
    lv_obj_set_style_border_width(screen_settings_upgrade_bottom_bar, 0, 0);
    lv_obj_set_style_pad_all(screen_settings_upgrade_bottom_bar, 0, 0);
    lv_obj_set_flag(screen_settings_upgrade_bottom_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(screen_settings_upgrade_bottom_bar, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(screen_settings_upgrade_bottom_bar, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(screen_settings_upgrade_bottom_bar, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * upgrade_btn_return = lv_button_create(lv_obj_0);
    lv_obj_set_name(upgrade_btn_return, "upgrade_btn_return");
    lv_obj_set_x(upgrade_btn_return, 0);
    lv_obj_set_y(upgrade_btn_return, 207);
    lv_obj_set_width(upgrade_btn_return, 79);
    lv_obj_set_height(upgrade_btn_return, 32);
    lv_obj_add_style(upgrade_btn_return, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(upgrade_btn_return, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(upgrade_btn_return, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_1 = lv_image_create(upgrade_btn_return);
    lv_image_set_src(lv_image_1, meter_icon_return);
    lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_1, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_1, 7, 0);
    lv_obj_set_style_transform_scale_x(lv_image_1, 230, 0);
    lv_obj_set_style_transform_scale_y(lv_image_1, 230, 0);
    
    lv_obj_add_screen_create_event(upgrade_btn_return, LV_EVENT_CLICKED, screen_settings_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    
    lv_obj_t * upgrade_btn_placeholder_1 = lv_button_create(lv_obj_0);
    lv_obj_set_name(upgrade_btn_placeholder_1, "upgrade_btn_placeholder_1");
    lv_obj_set_x(upgrade_btn_placeholder_1, 80);
    lv_obj_set_y(upgrade_btn_placeholder_1, 207);
    lv_obj_set_width(upgrade_btn_placeholder_1, 79);
    lv_obj_set_height(upgrade_btn_placeholder_1, 32);
    lv_obj_add_style(upgrade_btn_placeholder_1, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(upgrade_btn_placeholder_1, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    
    lv_obj_t * upgrade_btn_wifi = lv_button_create(lv_obj_0);
    lv_obj_set_name(upgrade_btn_wifi, "upgrade_btn_wifi");
    lv_obj_set_x(upgrade_btn_wifi, 160);
    lv_obj_set_y(upgrade_btn_wifi, 207);
    lv_obj_set_width(upgrade_btn_wifi, 79);
    lv_obj_set_height(upgrade_btn_wifi, 32);
    lv_obj_add_style(upgrade_btn_wifi, &me106_btn_flat_gray47, 0);
    lv_obj_bind_style(upgrade_btn_wifi, &me106_theme_light_nav, 0, &meter_theme_index, 1);
    lv_obj_bind_style(upgrade_btn_wifi, &me106_theme_alarm_nav, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_2 = lv_image_create(upgrade_btn_wifi);
    lv_image_set_src(lv_image_2, meter_icon_wifi);
    lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_2, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_2, 8, 0);
    lv_obj_set_style_transform_scale_x(lv_image_2, 220, 0);
    lv_obj_set_style_transform_scale_y(lv_image_2, 220, 0);
    lv_obj_add_style(lv_image_2, &me106_icon_cyan, 0);
    
    lv_obj_add_subject_set_int_event(upgrade_btn_wifi, &meter_wifi_sta_connect_request, LV_EVENT_CLICKED, 1);
    lv_obj_add_subject_set_string_event(upgrade_btn_wifi, &meter_upgrade_status_text, LV_EVENT_CLICKED, "正在连接热点");
    
    lv_obj_t * upgrade_btn_update = lv_button_create(lv_obj_0);
    lv_obj_set_name(upgrade_btn_update, "upgrade_btn_update");
    lv_obj_set_x(upgrade_btn_update, 240);
    lv_obj_set_y(upgrade_btn_update, 207);
    lv_obj_set_width(upgrade_btn_update, 80);
    lv_obj_set_height(upgrade_btn_update, 32);
    lv_obj_add_style(upgrade_btn_update, &me106_btn_flat_blue, 0);
    lv_obj_bind_style(upgrade_btn_update, &me106_theme_light_accent, 0, &meter_theme_index, 1);
    lv_obj_bind_style(upgrade_btn_update, &me106_theme_alarm_accent, 0, &meter_theme_index, 2);
    lv_obj_t * lv_image_3 = lv_image_create(upgrade_btn_update);
    lv_image_set_src(lv_image_3, meter_icon_update);
    lv_obj_set_align(lv_image_3, LV_ALIGN_CENTER);
    lv_obj_set_style_transform_pivot_x(lv_image_3, 8, 0);
    lv_obj_set_style_transform_pivot_y(lv_image_3, 8, 0);
    lv_obj_set_style_transform_scale_x(lv_image_3, 220, 0);
    lv_obj_set_style_transform_scale_y(lv_image_3, 220, 0);
    lv_obj_add_style(lv_image_3, &me106_icon_white, 0);
    
    lv_obj_add_subject_set_int_event(upgrade_btn_update, &meter_upgrade_request, LV_EVENT_CLICKED, 1);
    lv_obj_add_subject_set_string_event(upgrade_btn_update, &meter_upgrade_status_text, LV_EVENT_CLICKED, "请求已发送");
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _SCREEN_SETTINGS_UPGRADE_TIMELINE_CNT);
    at_array[SCREEN_SETTINGS_UPGRADE_TIMELINE_CONTENT_OPEN] = timeline_content_open_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(lv_obj_0, LV_EVENT_SCREEN_LOADED, screen_settings_upgrade_get_timeline(lv_obj_0, SCREEN_SETTINGS_UPGRADE_TIMELINE_CONTENT_OPEN), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * screen_settings_upgrade_get_timeline(lv_obj_t * obj, screen_settings_upgrade_timeline_t timeline_id)
{
    if (timeline_id >= _SCREEN_SETTINGS_UPGRADE_TIMELINE_CNT) {
        LV_LOG_WARN("screen_settings_upgrade has no timeline with %d ID", timeline_id);
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
    for(i = 0; i < _SCREEN_SETTINGS_UPGRADE_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

