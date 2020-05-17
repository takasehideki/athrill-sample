#ifndef _EV3_VDEV_H_
#define _EV3_VDEV_H_

#include "vdev.h"
#include "ev3_vdev_common.h"

/*
 * Button(RX)
 * 1byte data
 */
//LEFT, RIGHT, UP, DOWN, ENTER,BACK
#define EV3_GPIO_BTN_LEFT	(1U << EV3_GPIO_BTN_BITS_LEFT)
#define EV3_GPIO_BTN_RIGHT	(1U << EV3_GPIO_BTN_BITS_RIGHT)
#define EV3_GPIO_BTN_UP		(1U << EV3_GPIO_BTN_BITS_UP)
#define EV3_GPIO_BTN_DOWN	(1U << EV3_GPIO_BTN_BITS_DOWN)
#define EV3_GPIO_BTN_ENTER	(1U << EV3_GPIO_BTN_BITS_ENTER)
#define EV3_GPIO_BTN_BACK	(1U << EV3_GPIO_BTN_BITS_BACK)
#define EV3_GPIO_BTN_ADDR	(VDEV_RX_DATA_BASE + EV3_GPIO_BTN_OFF)

/*
 * 2byte Sensor(RX)
 */
#define EV3_SENSOR_ADDR_INX(index)	(VDEV_RX_DATA_BASE + EV3_SENSOR_OFF_TYPE(index))
#define EV3_SENSOR_ADDR_AMBIENT		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_AMBIENT)
#define EV3_SENSOR_ADDR_COLOR		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_COLOR)
#define EV3_SENSOR_ADDR_REFLECT		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_REFLECT)
#define EV3_SENSOR_ADDR_RGB_R		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_RGB_R)
#define EV3_SENSOR_ADDR_RGB_G		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_RGB_G)
#define EV3_SENSOR_ADDR_RGB_B		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_RGB_B)
#define EV3_SENSOR_ADDR_ANGLE		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_ANGLE)
#define EV3_SENSOR_ADDR_RATE		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_RATE)
#define EV3_SENSOR_ADDR_IR_D		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_D)
#define EV3_SENSOR_ADDR_IR_0		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_0)
#define EV3_SENSOR_ADDR_IR_0_H		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_0_H)
#define EV3_SENSOR_ADDR_IR_0_D		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_0_D)
#define EV3_SENSOR_ADDR_IR_1		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_1)
#define EV3_SENSOR_ADDR_IR_1_H		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_1_H)
#define EV3_SENSOR_ADDR_IR_1_D		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_1_D)
#define EV3_SENSOR_ADDR_IR_2		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_2)
#define EV3_SENSOR_ADDR_IR_2_H		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_2_H)
#define EV3_SENSOR_ADDR_IR_2_D		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_2_D)
#define EV3_SENSOR_ADDR_IR_3		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_3)
#define EV3_SENSOR_ADDR_IR_3_H		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_3_H)
#define EV3_SENSOR_ADDR_IR_3_D		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_IR_3_D)
#define EV3_SENSOR_ADDR_ULTRASONIC	EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_ULTRASONIC)
#define EV3_SENSOR_ADDR_ULTRASONIC_LISTEN	EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_ULTRASONIC_LISTEN)
#define EV3_SENSOR_ADDR_AXES_X		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_AXES_X)
#define EV3_SENSOR_ADDR_AXES_Y		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_AXES_Y)
#define EV3_SENSOR_ADDR_AXES_Z		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_AXES_Z)
#define EV3_SENSOR_ADDR_TMP			EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_TEMP)
#define EV3_SENSOR_ADDR_TOUCH		EV3_SENSOR_ADDR_INX(EV3_SENSOR_INX_TOUCH)
#define EV3_BATTERY_ADDR_CURRENT	EV3_SENSOR_ADDR_INX(EV3_BATTERY_INX_CURRENT)
#define EV3_BATTERY_ADDR_VOLTAGE	EV3_SENSOR_ADDR_INX(EV3_BATTERY_INX_VOLTAGE)

/*
 * MOTOR(RX)
 * 4bytes data
 */
#define EV3_SENSOR_MOTOR_ADDR_INX(index)	(VDEV_RX_DATA_BASE + EV3_SENSOR_MOTOR_OFF_TYPE(index))
#define EV3_SENSOR_MOTOR_ADDR_ANGLE_A		EV3_SENSOR_MOTOR_ADDR_INX(EV3_SENSOR_MOTOR_INX_ANGLE_A)
#define EV3_SENSOR_MOTOR_ADDR_ANGLE_B		EV3_SENSOR_MOTOR_ADDR_INX(EV3_SENSOR_MOTOR_INX_ANGLE_B)
#define EV3_SENSOR_MOTOR_ADDR_ANGLE_C		EV3_SENSOR_MOTOR_ADDR_INX(EV3_SENSOR_MOTOR_INX_ANGLE_C)
#define EV3_SENSOR_MOTOR_ADDR_ANGLE_D		EV3_SENSOR_MOTOR_ADDR_INX(EV3_SENSOR_MOTOR_INX_ANGLE_D)

/*
 * LED(TX)
 * 1byte data
 */
//RED, GREEN, YELLOW, BLUE
#define EV3_GPIO_LED_RED	(1U << EV3_GPIO_LED_BITS_RED)
#define EV3_GPIO_LED_GREEN	(1U << EV3_GPIO_LED_BITS_GREEN)
#define EV3_GPIO_LED_YELLOW	(1U << EV3_GPIO_LED_BITS_YELLOW)
#define EV3_GPIO_LED_BLUE	(1U << EV3_GPIO_LED_BITS_BLUE)
#define EV3_GPIO_LED_ADDR	(VDEV_TX_DATA_BASE + EV3_GPIO_LED_OFF)

/*
 * MOTOR(TX)
 * 4bytes data
 */
#define EV3_MOTOR_ADDR_INX(index)	(VDEV_TX_DATA_BASE + EV3_MOTOR_OFF_TYPE(index))
#define EV3_MOTOR_ADDR_POWER_A		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_POWER_A)
#define EV3_MOTOR_ADDR_POWER_B		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_POWER_B)
#define EV3_MOTOR_ADDR_POWER_C		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_POWER_C)
#define EV3_MOTOR_ADDR_POWER_D		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_POWER_D)
#define EV3_MOTOR_ADDR_STOP_A		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_STOP_A)
#define EV3_MOTOR_ADDR_STOP_B		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_STOP_B)
#define EV3_MOTOR_ADDR_STOP_C		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_STOP_C)
#define EV3_MOTOR_ADDR_STOP_D		EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_STOP_D)
#define EV3_MOTOR_ADDR_RESET_ANGLE_A	EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_RESET_ANGLE_A)
#define EV3_MOTOR_ADDR_RESET_ANGLE_B	EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_RESET_ANGLE_B)
#define EV3_MOTOR_ADDR_RESET_ANGLE_C	EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_RESET_ANGLE_C)
#define EV3_MOTOR_ADDR_RESET_ANGLE_D	EV3_MOTOR_ADDR_INX(EV3_MOTOR_INX_RESET_ANGLE_D)

/*
 * GYRO(TX)
 * 4bytes data
 */
#define EV3_GYRO_ADDR_INX(index)	(VDEV_TX_DATA_BASE + EV3_GYRO_OFF_TYPE(index))
#define EV3_GYRO_ADDR_RESET     EV3_GYRO_ADDR_INX(EV3_GYRO_INX_RESET)


#endif /* _EV3_VDEV_H_ */
