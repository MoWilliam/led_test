/*
 * @Author: wei wang 12738632+monowilliam@user.noreply.gitee.com
 * @Date: 2024-03-04 10:59:26
 * @LastEditors: wei wang 12738632+monowilliam@user.noreply.gitee.com
 * @LastEditTime: 2024-04-22 16:02:46
 * @FilePath: \F407VET6-ZY4\ut\inc\ut_type.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-01-11     Administrator       the first version
 */
#ifndef UT_INC_UT_TYPE_H_
#define UT_INC_UT_TYPE_H_

#include <rtthread.h>

typedef int             SdBool;
typedef char            SdChar;
typedef unsigned char   SdUChar;
typedef short           SdShort;
typedef unsigned short  SdUShort;
typedef short           SdWord;
typedef int             SdInt;
typedef unsigned int    SdUInt;
typedef long            SdLong;
typedef unsigned long   SdULong;
typedef float           SdFloat;

typedef char            SdInt8;
typedef unsigned char   SdUInt8;
typedef short           SdInt16;
typedef unsigned short  SdUInt16;
typedef int             SdInt32;
typedef unsigned int    SdUInt32;

#define  SD_NULL        (0)
#define  SD_FALSE       (0)
#define  SD_TRUE        (1)
#define  SD_SUCCESS     (0)
#define  SD_FAIL        (-1)

typedef struct rt_thread  UtThread;

typedef struct rt_messagequeue UtMqueue;
typedef struct rt_mailbox UtMessage;


#endif /* UT_INC_UT_TYPE_H_ */
