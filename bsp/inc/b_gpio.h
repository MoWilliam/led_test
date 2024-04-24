/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-06-5     Wangwei       the first version
 */

#ifndef BSP_INC_B_LED_H_
#define BSP_INC_B_LED_H_

#include "application.h"
#include <board.h>
#include <rtdevice.h>
#include <rtthread.h>
#include <drv_common.h>
#include <rtdbg.h>

 #define LED0_PIN    GET_PIN(C, 13)   //LED0
#define LED1_PIN    GET_PIN(A, 0)    //LED1

void b_gpio_init(void);
void b_gpio_led_on(void);
void b_gpio_led_off(void);
#endif /* BSP_INC_B_LED_H_ */
