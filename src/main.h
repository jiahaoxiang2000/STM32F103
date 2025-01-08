#ifndef MAIN_H
#define MAIN_H

#include "stm32f1xx_hal.h"

// LED definitions
#define LED_PIN GPIO_PIN_13
#define LED_GPIO_PORT GPIOC
#define LED_GPIO_CLK_ENABLE() __HAL_RCC_GPIOC_CLK_ENABLE()

// OLED I2C pin definitions
#define OLED_SCL_Pin GPIO_PIN_12
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_13
#define OLED_SDA_GPIO_Port GPIOB

// OLED GPIO Clock Enable
#define OLED_GPIO_CLK_ENABLE() __HAL_RCC_GPIOB_CLK_ENABLE()

#endif // MAIN_H