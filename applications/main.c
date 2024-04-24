#include <rtthread.h>
#include <board.h>
#include <rtdevice.h>
#include "application.h"
#include <u8g2_port.h>
#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>


static void led_entry(void *parameter)
{

    int count = 0;

    b_gpio_init();
    while (1)
    {
        count++;
        rt_kprintf("thread run count : %d\r\n", count);  //心跳包雏形
        b_gpio_led_on();
        rt_thread_mdelay(50);
        b_gpio_led_off();
        rt_thread_mdelay(50);
    }
}






int led_sample(){

       rt_err_t ret = RT_EOK;

    /* 创建 serial 线程 */

       rt_thread_t thread = rt_thread_create("led",
                                 led_entry,
                                 RT_NULL,
                                 512,
                                 RT_THREAD_PRIORITY_MAX / 3,
                                 20);

        /* 创建成功则启动线程 */
        if (thread != RT_NULL)
        {
            rt_thread_startup(thread);
        }
        else
        {
            ret = RT_ERROR;
        }

        return ret;

}


int main(void)
{

    //led_sample();
    u8g2_t u8g2;  //图形设备对象                                        对象         旋转角度         消息回调函数的指针             显示回调函数的指针
    u8g2_Setup_ssd1306_i2c_128x64_noname_f(&u8g2, U8G2_R0, u8x8_byte_sw_i2c, u8x8_gpio_and_delay_rtthread);
    u8x8_SetPin(u8g2_GetU8x8(&u8g2), U8X8_PIN_I2C_CLOCK, GET_PIN(F,1));//选择CLK引脚
    u8x8_SetPin(u8g2_GetU8x8(&u8g2), U8X8_PIN_I2C_DATA, GET_PIN(F,0));//选择SDA引脚
    u8g2_InitDisplay(&u8g2);   // 初始化设备对象
    u8g2_SetPowerSave(&u8g2, 0);   // 退出省电模式

    u8g2_ClearBuffer(&u8g2);         //清屏
    u8g2_SetFont(&u8g2, u8g2_font_ncenB14_te);   //字体
    u8g2_DrawStr(&u8g2, 1, 50, "Nie Dong");//输入要显示的字符
    u8g2_SendBuffer(&u8g2);   //将绘制好的图像数据发送到显示设备进行显示

        return RT_EOK;
}

