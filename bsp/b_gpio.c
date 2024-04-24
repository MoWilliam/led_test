
/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-4-22    WangWei       the first version
 */

#include <rthw.h>
#include "ut/inc/ut_thread.h"
#include "inc/b_gpio.h"

void b_gpio_init(void){
    //rt_pin_mode(LED0_PIN  LED1_PIN, PIN_MODE_OUTPUT);
    rt_pin_mode(LED0_PIN , PIN_MODE_OUTPUT);

    rt_pin_write(LED0_PIN , PIN_LOW);

    rt_kprintf("led init!\r\n");
}
void b_gpio_led_on(void){
    rt_pin_write(LED0_PIN, PIN_HIGH);

    rt_kprintf("led on!\r\n");
}

void b_gpio_led_off(void){
    rt_pin_write(LED0_PIN, PIN_LOW);

    rt_kprintf("led off!\r\n");
}
