#include "LED.h"
#include "delay.h"
#include "usmart.h"
#include "usart.h"
#include "usmart_str.h" 


void led_set(u8 sta)
{
 LED1=sta;
}


int main(void)
{				 
	
  delay_init();
	LED_Init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
	uart_init(115200);
	usmart_dev.init(72);//
while(1)
{
	
}	
} 







