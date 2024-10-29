#include "LED.h" 
#include "stm32f10x.h"
void LED_Init(void)
{
	
	GPIO_InitTypeDef GPIO_InitStr;//结构体变量

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE,ENABLE);
	
	GPIO_InitStr.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStr.GPIO_Pin=GPIO_Pin_5;
	GPIO_InitStr.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStr);
	GPIO_Init(GPIOE,&GPIO_InitStr);
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
}
