#ifndef __BSP_SYSTICK_H
#define __BSP_SYSTICK_H

#include "stm32f10x.h"

void SysTick_Init(u8 SYSCLK);
void delay_us(u32 nus);	
void delay_ms(u16 nms);

#endif
