#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "buzzer.h"

int main(void)
{				 

  LED_Init();
  BUZZER_Init();

while(1)
{
	Delay_s(3);
   	LED0 = 0;
	LED1 = 1;
	BUZZER = 1;
	Delay_s(3);
    LED0 = 1;
	LED1 = 0;
	BUZZER = 0;
}

} 







