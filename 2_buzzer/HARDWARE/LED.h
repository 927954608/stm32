#ifndef __LED_H//如果没有定义,则定义,避免头文件内容重复定义
#define __LED_H

#include "sys.h"
#define LED0 PBout(5)
#define LED1 PEout(5)

void LED_Init(void);//函数声明

#endif

