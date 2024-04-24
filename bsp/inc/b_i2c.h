/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-06-5     Wangwei       the first version
 */

#ifndef BSP_INC_B_I2C_H_
#define BSP_INC_B_I2C_H_

#include "application.h"
#include <board.h>
#include <rtdevice.h>
#include <rtthread.h>
#include <drv_common.h>
#include <rtdbg.h>

#define oled_I2C_BUS_NAME          "i2c1"  /* 传感器连接的I2C总线设备名称 */
#define oled_ADDR                  0x7B    /* 从机地址 */
#define oled_CALIBRATION_CMD       0xE1    /* 校准命令 */
#define oled_NORMAL_CMD            0xA8    /* 一般命令 */
#define oled_GET_DATA              0xAC    /* 获取数据命令 */


#endif /* BSP_INC_B_I2C_H_ */
