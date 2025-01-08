#include "main.h"
#include "oled.h"

void LED_Init(void);
void SystemClock_Config(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    LED_Init();
    OLED_Init();

    // Clear the display first
    OLED_Clear();

    // Show a simple number "123" at position (0,0)
    OLED_ShowString(0, 0, (uint8_t *)"Number:", 16); // Header text
    OLED_ShowNumber(64, 0, 123, 3, 16);              // Show "123", 3 digits, size 16

    while (1)
    {
        HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
        HAL_Delay(1000);
    }
}

void LED_Init()
{
    LED_GPIO_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
    HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);
}

void SystemClock_Config(void)
{
    // Add your system clock configuration here if needed
}

void SysTick_Handler(void)
{
    HAL_IncTick();
}