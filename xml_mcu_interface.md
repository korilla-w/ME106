# ME106 单片机侧对接要求

本文档只记录 ESP32-C6 单片机侧需要完成的对接事项。完整 subject、按钮对象名和方向定义见：

`esp32c6_lvglv9_screen/main/lvgl_pro_api.md`

## 通用要求

1. 进入设置页时，单片机侧需要把真实配置值同步到对应 XML subject。
2. 用户修改页面临时值后，单片机侧需要按业务规则修正范围，并同步派生显示值。
3. 用户点击确认键后，单片机侧负责校验、保存、下发和页面调度。
4. XML 和生成代码不负责 NVS、UART、Modbus、PWM、Flash 擦写或重启动作。
5. UI 逻辑层不要直接写硬件寄存器，硬件应用应交给执行层。

## 电表地址页要求

页面：`screens/screen_settings_address.xml`

### 进入页面

1. 读取当前已保存并正在生效的电表地址。
2. 写入 `meter_address_current_value`。
3. 将当前地址拆成三位，写入 `meter_address_digit_0/1/2`。
4. 按 `digit0 * 100 + digit1 * 10 + digit2` 组合编辑值。
5. 将编辑值格式化为大写两位十六进制 `0x%02X`，写入 `meter_address_edit_hex_text`。

### 编辑过程中

1. 用户修改任一地址位后，单片机侧需要重新组合三位编辑值。
2. 按 `001-247` 的合法范围做动态限制和越界修正。
3. 当百位为 `2` 时，十位应限制在 `0-4`。
4. 当百位为 `2` 且十位为 `4` 时，个位应限制在 `0-7`。
5. 每次修改或修正后，都要重新写入 `meter_address_edit_hex_text`，保证底部 HEX 预览同步。

### 点击确认

监听 `address_btn_yes` 后：

1. 组合三位编辑值。
2. 校验最终地址是否在 `1-247`。
3. 校验通过后写参数表、NVS 或触发 Modbus 地址下发。
4. 校验失败时决定停留页面、显示提示或恢复原值。
5. 根据保存/下发结果决定是否返回设置页。

## 屏幕亮度页要求

页面：`screens/screen_settings_brightness.xml`

### 进入页面

1. 读取当前已保存或当前正在生效的亮度值。
2. 将亮度限制在 `10-100`。
3. 写入 `meter_screen_brightness`，让 slider 和百分比文本同步。

### 编辑过程中

1. XML 会在左右键点击后更新 `meter_screen_brightness`。
2. 当前宿主实现已经在 `main/ui/ui_screens_pwm.c` 中做了实时预览，主循环会把该 subject 同步到背光 PWM。
3. PWM/LEDC 写入要集中在执行适配点处理，不要散落到页面导航或生成代码里。

### 点击确认

监听 `brightness_btn_yes` 后：

1. 当前行为只负责返回设置页，亮度在编辑过程中已经实时生效。
2. 如果需要掉电记忆，应在这里读取 `meter_screen_brightness` 并写入参数表或 NVS。
3. 下次启动后，再由单片机侧把保存值恢复写回 `meter_screen_brightness`。

## 串口设置页要求

页面：`screens/screen_settings_uart.xml`

### 点击确认

监听 `uart_btn_yes` 后：

1. 读取 `meter_uart_baud_index`、`meter_uart_data_bits_index`、`meter_uart_parity_index`、`meter_uart_stop_bits_index`。
2. 将索引转换为真实 UART 参数。
3. 校验参数组合是否合法。
4. 保存到 NVS 或参数表。
5. 通知执行层应用 UART 配置。
6. 根据保存/应用结果决定是否返回设置页。

## 热点配置状态页要求

页面：`screens/screen_settings_wifi_sta.xml`

1. 该页是 STA-only 的热点配置状态页，只呈现默认热点和上位机下发结果，不在屏幕上编辑热点。
2. 首次未配置时必须显示可用的出厂热点名和密码，默认 UI 示例为 `ME106_A1B2C3` / `MEA1B2C3`，顶部状态提示 `请用上位机配置`。
3. 量产固件应在页面显示前用 MAC 后三字节覆盖默认示例，推荐格式为 `ME106_%02X%02X%02X` / `ME%02X%02X%02X`。
4. 用户按页面显示的热点名和密码创建手机热点或测试热点后，OTA 页 WiFi 键可请求 ESP 连接该默认热点。
5. 上位机下发现场热点参数后，单片机侧可把真实值写入 `meter_wifi_sta_ssid_text`、`meter_wifi_sta_password_text`，但页面只显示 `meter_wifi_sta_source_text`、`meter_wifi_sta_hotspot_state_text`、`meter_wifi_sta_password_state_text`。
6. 上位机下发成功后，建议配置来源显示 `上位机`，热点显示 `已保存`，密码显示 `已隐藏`，顶部状态显示 `配置已更新`，避免中文 SSID 或密码明文占满小屏。
7. 页面底部固定提示应同时暴露两个动作：串口上位机下发配置，以及按屏幕上的默认热点名/密码建热点。
8. 设置页中的该页面底部确认键返回设置页，不直接触发联网。
9. 需要实际连接热点时，由 OTA 页 WiFi 软键置位 `meter_wifi_sta_connect_request=1`；真正启动 STA 连接、保存 NVS 和失败重试由逻辑层处理。
10. 上位机下发失败时，建议 `meter_wifi_sta_status_text` 显示 `下发失败`，来源显示 `未更新`，热点/密码状态分别显示 `未保存`、`未校验`。
11. OTA 连接时如果扫描不到目标热点，建议顶部状态显示 `匹配失败`，来源显示当前配置来源，热点状态显示 `未找到`，密码状态显示 `未校验`。
12. 如果热点匹配成功但密码认证失败，建议顶部状态显示 `连接失败`，热点状态显示 `已匹配`，密码状态显示 `校验失败`。

## 旧 AP 配网页要求

页面：`screens/screen_settings_wifi.xml`

1. 旧 AP 配网页保留给后续备用流程，不作为当前设置页主入口。
2. 页面显示的热点名称、热点密码和入口地址分别绑定 `meter_wifi_ap_ssid_text`、`meter_wifi_ap_password_text`、`meter_wifi_ap_entry_text`。
3. 默认显示使用产品化示例：`ME106_A1B2C3`、`MEA1B2C3`、`192.168.4.1`，避免继续显示个人测试热点。
4. 真实热点名称和密码建议由逻辑层按设备标识或 MAC 后三字节后缀生成后写入 subject；推荐格式为 `ME106_%02X%02X%02X` / `ME%02X%02X%02X`。
5. XML 不负责生成、保存或校验凭据，只负责把逻辑层写入的 subject 呈现出来。

## 主题设置页要求

页面：`screens/screen_settings_theme.xml`

### 点击确认

监听 `theme_btn_yes` 后：

1. 读取当前 `meter_theme_index`。
2. 保存到 NVS 或参数表。
3. 后续 UI 初始化完成后，将保存值写回 `meter_theme_index`。
4. XML 侧负责已绑定页面的即时预览，单片机侧负责持久化和启动恢复。
5. 新增页面若需要跟随主题，页面对象需引用 `me106_theme_*` 主题样式绑定。
6. 当前 ME106 所有 screen XML 已引用 `meter_theme_index`，单片机侧只需要在 UI 初始化后恢复该 subject，主题就会跨页面生效。

## 变比设置页要求

页面：`screens/screen_settings_ratio.xml`、`screens/screen_settings_ratio_ct.xml`、`screens/screen_settings_ratio_pt.xml`

### 外层预览页

1. 外层变比页会同时显示 CT/PT 两组当前生效值或上次已保存值，不是只显示当前选中项。
2. 因此单片机侧在进入 `screen_settings_ratio.xml` 前，就要把 `meter_ct_ratio_current_digit_0/1/2/3` 和 `meter_pt_ratio_current_digit_0/1/2/3` 两组值都写好。
3. `meter_ratio_selected_kind` 只表达当前高亮和即将进入哪一组编辑页，不代表另一组值可以不刷新。

### 内层编辑页

1. `screen_settings_ratio_ct.xml` 继续使用 `meter_ct_ratio_digit_0/1/2/3` 作为 CT 编辑中值。
2. `screen_settings_ratio_pt.xml` 继续使用 `meter_pt_ratio_digit_0/1/2/3` 作为 PT 编辑中值。
3. 单片机侧在进入内层编辑页前，应先把对应 current 组复制到 edit 组，让编辑页从当前生效值起步，而不是残留上一次未确认的编辑值。

### 点击确认

监听 `ct_ratio_btn_yes` / `pt_ratio_btn_yes` 后：

1. 组合当前页面 edit 组四位数字。
2. 做最小值、最大值、是否允许 `0000` 等业务校验。
3. 校验通过后，把 edit 组四位值同步回对应 current 组，让外层页显示最新已确认值。
4. 然后再保存到参数表或 NVS，并通知执行层应用变比。
5. 保存失败时决定停留编辑页、提示失败或恢复旧值。

## 系统信息页要求

页面：`screens/screen_settings_system.xml`

### 运行时长显示

1. 单片机侧负责维护设备运行时长，XML 只显示 `meter_system_runtime_text`。
2. 建议这里显示累计通电运行时长，而不是单次开机 uptime，这样更适合辅助判断设备是否新出厂。
3. 文本格式由单片机侧直接格式化，例如 `0h 00m`、`12h 30m`、`3d 05h`。
4. 如果该值需要跨断电保留，累计值应由逻辑层定期落库到 NVS 或参数表。
5. UI 层不负责判断“是否新出厂”，只展示运行时长；新出厂判定规则应留在逻辑层。

## 测量告警图标要求

页面：`screen_home.xml`、`screen_line_voltage_demand.xml`、`screen_active_power.xml`、`screen_reactive_power.xml`、`screen_apparent_power.xml`、`screen_energy_data.xml`、`screen_phase_frequency.xml`

### 写入规则

1. 所有 `*_issue` subject 都由单片机逻辑层写入，XML 只负责按 `0/1` 显示或隐藏告警图标。
2. `0` 表示正常或不显示告警；`1` 表示异常、越限或需要复核，XML 会显示 `meter_icon_warning`。
3. 阈值比较、无效数据处理、告警保持/清除策略都属于逻辑层，不放在 XML。
4. 如果后续需要区分“数据无效”和“真实越限”，应新增独立的数据状态 subject，不要复用 `*_issue` 做多义状态。

### 主要 subject 组

1. 首页：`meter_home_*_issue`，覆盖 A/B/C 相电压、电流、功率因数。
2. 线电压/需量：`meter_line_*_issue`。
3. 功率页：`meter_active_*_issue`、`meter_reactive_*_issue`、`meter_apparent_*_issue`。
4. 电能页：`meter_energy_*_issue`。
5. 相位/频率页：`meter_phase_*_issue`。

## 电能质量分析要求

页面：`screens/screen_power_quality_analysis.xml`

1. 单片机侧负责计算 8 个电能质量状态位：`meter_power_quality_u_step_issue`、`meter_power_quality_i_step_issue`、`meter_power_quality_p_step_issue`、`meter_power_quality_e_inc_issue`、`meter_power_quality_lost_volt_issue`、`meter_power_quality_sag_issue`、`meter_power_quality_ov_issue`、`meter_power_quality_oi_issue`。
2. 每个状态位使用 `0=正常`、`1=越限`。
3. `meter_power_quality_issue_count` 应由单片机侧根据上述状态位统一计算并写入，范围 `0-8`。
4. XML 只展示总览、正常/越限标签和页内切换，不做阈值比较。

## 谐波页面数据状态要求

页面：`screen_harmonic_spectrum.xml`、`screen_harmonic_waveform*.xml`

1. 单片机侧写入 `meter_harmonic_data_state` 表达谐波数据状态。
2. 建议状态含义：`0=加载中`，`1=有效数据`，`2=暂无数据`，`3=数据异常`。
3. `meter_harmonic_spectrum_mode` 由 XML 侧切换电压/电流模式，单片机侧可读取该值决定下次刷新哪类数据。
4. 真实图表数据序列仍需后续扩展专用数据接口；当前 XML 主要负责状态提示和模式显示。

## 告警阈值页要求

页面：`screens/screen_settings_alarm_threshold.xml`

1. 单片机侧进入页面前，应把 8 项阈值预览值全部写入 `meter_alarm_threshold_*_value`。
2. `meter_alarm_threshold_selected_index` 主要由 XML 侧维护，用于高亮当前浏览项和控制列表位移，MCU 侧一般不需要保存。
3. 当前页面只做浏览，不做设置；第 4 键 `alarm_threshold_btn_idle` 为空操作，单片机侧不需要挂确认保存逻辑。
4. 如果阈值值源来自参数表、NVS 或测量配置，建议进入页面时统一刷新，避免显示旧值。
5. `meter_alarm_threshold_popup_visible`、`meter_alarm_threshold_edit_index` 当前流程未使用，可暂时不接入。

## 升级、恢复出厂和受限功能要求

1. `meter_upgrade_request=1` 表示用户请求升级；单片机侧负责 OTA 检测、下载、写 Flash 和重启。
2. `meter_upgrade_status_text` 可由单片机侧写入当前 OTA 状态文本。
3. `meter_factory_reset_request=1` 表示用户确认恢复出厂；擦除配置和重启动作由单片机侧执行。
4. `meter_paid_contact_popup` 只用于 `screen_paid_harmonic.xml`、`screen_paid_max_demand.xml` 这类受限功能提示页；授权校验、购买流程和功能开通状态不在 XML 完成。
