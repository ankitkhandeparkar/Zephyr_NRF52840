#include <led.h>

K_THREAD_DEFINE(Blink_LED1_ID, MY_STACK_SIZE, Blink_LED, led_1, fast, NULL, 0, 0, 0);
K_THREAD_DEFINE(Blink_LED2_ID, MY_STACK_SIZE, Blink_LED, led_2, medium, NULL, 0, 0, 0);
K_THREAD_DEFINE(Blink_LED3_ID, MY_STACK_SIZE, Blink_LED, led_3, slow, NULL, 0, 0, 0);
K_THREAD_DEFINE(Blink_LED4_ID, MY_STACK_SIZE, Blink_LED, led_4, slow_2, NULL, 0, 0, 0);
