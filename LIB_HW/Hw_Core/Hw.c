#define HW_LOCAL


#include "Hw.h"



HW_DEF void Hw_Init()
{
    RCC->APB2ENR |= RCC_APB2Periph_GPIOB;
    RCC->APB2ENR |= RCC_APB2Periph_GPIOA;
    GPIO_Configuration();
}