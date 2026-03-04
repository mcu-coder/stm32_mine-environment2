#ifndef __JSQ_H
#define	__JSQ_H
#include "stm32f10x.h"
#include "delay.h"
#include "sys.h"


/***************根据自己需求更改****************/
// 加湿器模块 GPIO宏定义

#define	JSQ_CLK							RCC_APB2Periph_GPIOB

#define JSQ_GPIO_PIN 				GPIO_Pin_3

#define JSQ_GPIO_PORT 				GPIOB

#define JSQ_ON 		GPIO_SetBits(JSQ_GPIO_PORT,JSQ_GPIO_PIN)
#define JSQ_OFF 	GPIO_ResetBits(JSQ_GPIO_PORT,JSQ_GPIO_PIN)

/*********************END**********************/

void JSQ_Init(void);

#endif



