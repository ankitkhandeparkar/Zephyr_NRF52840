#include <zephyr.h>
#include <drivers/gpio.h>
#include <device.h>

#define MY_STACK_SIZE 1000

static const struct device *gpio_ct_dev = DEVICE_DT_GET(DT_NODELABEL(gpio0));
void Blink_LED1(void)
{
    if(!device_is_ready(gpio_ct_dev)){
        return;
    }
    int ret; 
    ret = gpio_pin_configure(gpio_ct_dev, 13, GPIO_OUTPUT_ACTIVE);
    if(ret != 0){
        return;
    }
    while(true){
        ret = gpio_pin_set_raw(gpio_ct_dev, 13, 0); // Set
        k_msleep(1000);

        ret = gpio_pin_set_raw(gpio_ct_dev, 13, 1); // Clear
        k_msleep(1000);
        
    } 
}
K_THREAD_DEFINE(Blink_LED1_ID, MY_STACK_SIZE, Blink_LED1, NULL, NULL, NULL, 0, 0, 0);