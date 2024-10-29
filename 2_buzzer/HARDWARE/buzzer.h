#ifndef __BUZZER_H//如果没有定义,则定义,避免头文件内容重复定义
#define __BUZZER_H

#include "sys.h"

#define BUZZER PBout(8)

void BUZZER_Init(void);//函数声明

#endif

