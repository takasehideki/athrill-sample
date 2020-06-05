#include "udp_ros_config.h"
#include "udp_ros_callback.h"
#include "ev3_vdev_common.h"

RosPubConfigType ros_pub_config[ROS_PUB_CONFIG_NUM] = {
    { .topic_name = "led_LED1", .byteoff = EV3_GPIO_LED_OFF, .bitoff = EV3_GPIO_LED_BITS_RED, .bitsize = 1U },
    { .topic_name = "led_LED2", .byteoff = EV3_GPIO_LED_OFF, .bitoff = EV3_GPIO_LED_BITS_GREEN, .bitsize = 1U },
    { .topic_name = "motor_power_a", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_POWER_A), .bitoff = 0U, .bitsize = 32U  },
    { .topic_name = "motor_power_b", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_POWER_B), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_power_c", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_POWER_C), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_power_d", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_POWER_D), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_stop_a", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_STOP_A), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_stop_b", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_STOP_B), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_stop_c", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_STOP_C), .bitoff = 0U, .bitsize = 32U },
    { .topic_name = "motor_stop_d", .byteoff = EV3_MOTOR_OFF_TYPE(EV3_MOTOR_INX_STOP_D), .bitoff = 0U, .bitsize = 32U },
};

#define FUNC_DEF_ROS_SUB_BITS_CALLBACK(funcname, off, bits)    \
    static void funcname (const std_msgs::String::ConstPtr& msg)   \
    {   \
        udp_ros_common_bits_callback(off, bits, msg); \
        return; \
    }

#define FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(funcname, off)    \
    static void funcname (const std_msgs::String::ConstPtr& msg)   \
    {   \
        udp_ros_common_2byte_callback(off, 0U, msg); \
        return; \
    }

#define FUNC_DEF_ROS_SUB_4BYTE_CALLBACK(funcname, off)    \
    static void funcname (const std_msgs::String::ConstPtr& msg)   \
    {   \
        udp_ros_common_4byte_callback(off, 0U, msg); \
        return; \
    }

#define FUNC_NAME(topic)    ros_sub_##topic
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_L), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_LEFT)
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_R), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_RIGHT)
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_U), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_UP)
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_D), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_DOWN)
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_E), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_ENTER)
FUNC_DEF_ROS_SUB_BITS_CALLBACK(FUNC_NAME(push_btn_B), EV3_GPIO_BTN_OFF, EV3_GPIO_BTN_BITS_BACK)

FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ambient), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_AMBIENT))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_color), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_COLOR))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_reflect), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_REFLECT))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_rgb_r), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_RGB_R))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_rgb_g), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_RGB_G))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_rgb_b), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_RGB_B))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_angle), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_ANGLE))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_rate), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_RATE))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_d), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_D))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_0), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_0))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_0_h), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_0_H))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_0_d), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_0_D))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_1), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_1))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_1_h), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_1_H))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_1_d), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_1_D))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_2), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_2))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_2_h), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_2_H))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_2_d), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_2_D))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_3), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_3))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_3_h), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_3_H))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ir_3_d), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_IR_3_D))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ultrasonic), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_ULTRASONIC))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_ultrasonic_listen), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_ULTRASONIC_LISTEN))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_axes_x), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_AXES_X))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_axes_y), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_AXES_Y))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_axes_z), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_AXES_Z))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_temp), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_TEMP))
FUNC_DEF_ROS_SUB_2BYTE_CALLBACK(FUNC_NAME(sensor_touch), EV3_SENSOR_OFF_TYPE(EV3_SENSOR_INX_TOUCH))

FUNC_DEF_ROS_SUB_4BYTE_CALLBACK(FUNC_NAME(motor_angle_a), EV3_SENSOR_MOTOR_OFF_TYPE(EV3_SENSOR_MOTOR_INX_ANGLE_A))
FUNC_DEF_ROS_SUB_4BYTE_CALLBACK(FUNC_NAME(motor_angle_b), EV3_SENSOR_MOTOR_OFF_TYPE(EV3_SENSOR_MOTOR_INX_ANGLE_B))
FUNC_DEF_ROS_SUB_4BYTE_CALLBACK(FUNC_NAME(motor_angle_c), EV3_SENSOR_MOTOR_OFF_TYPE(EV3_SENSOR_MOTOR_INX_ANGLE_C))
FUNC_DEF_ROS_SUB_4BYTE_CALLBACK(FUNC_NAME(motor_angle_d), EV3_SENSOR_MOTOR_OFF_TYPE(EV3_SENSOR_MOTOR_INX_ANGLE_D))


#define TABLE_ENTRY(topic) \
    { .topic_name = #topic , .subfunc = FUNC_NAME(topic) }

RosSubConfigType ros_sub_config[ROS_SUB_CONFIG_NUM] = {
    TABLE_ENTRY(push_btn_L),
    TABLE_ENTRY(push_btn_R),
    TABLE_ENTRY(push_btn_U),
    TABLE_ENTRY(push_btn_D),
    TABLE_ENTRY(push_btn_E),
    TABLE_ENTRY(push_btn_B),
    TABLE_ENTRY(sensor_ambient),
    TABLE_ENTRY(sensor_color),
    TABLE_ENTRY(sensor_reflect),
    TABLE_ENTRY(sensor_rgb_r),
    TABLE_ENTRY(sensor_rgb_g),
    TABLE_ENTRY(sensor_rgb_b),
    TABLE_ENTRY(sensor_angle),
    TABLE_ENTRY(sensor_rate),
    TABLE_ENTRY(sensor_ir_d),
    TABLE_ENTRY(sensor_ir_0),
    TABLE_ENTRY(sensor_ir_0_h),
    TABLE_ENTRY(sensor_ir_0_d),
    TABLE_ENTRY(sensor_ir_1),
    TABLE_ENTRY(sensor_ir_1_h),
    TABLE_ENTRY(sensor_ir_1_d),
    TABLE_ENTRY(sensor_ir_2),
    TABLE_ENTRY(sensor_ir_2_h),
    TABLE_ENTRY(sensor_ir_2_d),
    TABLE_ENTRY(sensor_ir_3),
    TABLE_ENTRY(sensor_ir_3_h),
    TABLE_ENTRY(sensor_ir_3_d),
    TABLE_ENTRY(sensor_ultrasonic),
    TABLE_ENTRY(sensor_ultrasonic_listen),
    TABLE_ENTRY(sensor_axes_x),
    TABLE_ENTRY(sensor_axes_y),
    TABLE_ENTRY(sensor_axes_z),
    TABLE_ENTRY(sensor_temp),
    TABLE_ENTRY(sensor_touch),
    TABLE_ENTRY(motor_angle_a),
    TABLE_ENTRY(motor_angle_b),
    TABLE_ENTRY(motor_angle_c),
    TABLE_ENTRY(motor_angle_d),
};
