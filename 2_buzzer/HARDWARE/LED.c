#include "stm32f10x.h"

void LED_Init(void)
{

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOE,ENABLE);
	GPIO_InitTypeDef GPIO_InitStr;
	GPIO_InitStr.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStr.GPIO_Pin=GPIO_Pin_5;
	GPIO_InitStr.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStr);
	GPIO_InitStr.GPIO_Pin=GPIO_Pin_5;
	GPIO_Init(GPIOE,&GPIO_InitStr);
//	
}
