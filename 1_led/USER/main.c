#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Motor.h"

int main(void)
{				 

  LED_Init();
  Motor_Init();
	Right_moto_back();
while(1)
{
	Delay_s(3);
	Right_moto_back();
	Delay_s(3);
	Right_moto_go();
   	
}

} 







