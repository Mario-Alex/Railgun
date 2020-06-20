#ifndef __EXTI_H
#define	__EXTI_H


#include "stm32f10x.h"


//Òý½Å¶¨Òå
#define UP_INT_GPIO_PORT         GPIOA
#define UP_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define UP_INT_GPIO_PIN          GPIO_Pin_0
#define UP_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define UP_INT_EXTI_PINSOURCE    GPIO_PinSource0
#define UP_INT_EXTI_LINE         EXTI_Line0
#define UP_INT_EXTI_IRQ          EXTI0_IRQn

#define UP_IRQHandler            EXTI0_IRQHandler


#define DOWN_INT_GPIO_PORT         GPIOA
#define DOWN_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define DOWN_INT_GPIO_PIN          GPIO_Pin_1
#define DOWN_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define DOWN_INT_EXTI_PINSOURCE    GPIO_PinSource1
#define DOWN_INT_EXTI_LINE         EXTI_Line1
#define DOWN_INT_EXTI_IRQ          EXTI1_IRQn

#define DOWN_IRQHandler            EXTI1_IRQHandler



#define START_INT_GPIO_PORT         GPIOA
#define START_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define START_INT_GPIO_PIN          GPIO_Pin_2
#define START_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define START_INT_EXTI_PINSOURCE    GPIO_PinSource2
#define START_INT_EXTI_LINE         EXTI_Line2
#define START_INT_EXTI_IRQ          EXTI2_IRQn

#define START_IRQHandler            EXTI2_IRQHandler

void EXTI_Key_Config(void);


#endif /* __EXTI_H */
