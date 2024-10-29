#include "stm32f10x.h"

void BUZZER_Init(void)
{
	
	GPIO_InitTypeDef GPIO_InitStr;//结构体变量

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
 
	GPIO_InitStr.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStr.GPIO_Pin=GPIO_Pin_8;
	GPIO_InitStr.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStr);
	GPIO_ResetBits(GPIOB,GPIO_Pin_8);
}
