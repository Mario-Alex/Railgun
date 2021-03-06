/**
  ******************************************************************************
  * @file    bsp_led.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   led应用函数接口
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./led/bsp_led.h"   

 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void LED_GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*开启LED相关的GPIO外设时钟*/
		RCC_APB2PeriphClockCmd( CHARGE_GPIO_CLK | FIRE_GPIO_CLK | SEVAL_GPIO_CLK, ENABLE);
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = CHARGE_GPIO_PIN;	

		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*调用库函数，初始化GPIO*/
		GPIO_Init(CHARGE_GPIO_PORT, &GPIO_InitStructure);	
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = FIRE_GPIO_PIN;

		/*调用库函数，初始化GPIO*/
		GPIO_Init(FIRE_GPIO_PORT, &GPIO_InitStructure);
		
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = SEVAL_GPIO_PIN;

		/*调用库函数，初始化GPIOF*/
		GPIO_Init(SEVAL_GPIO_PORT, &GPIO_InitStructure);
		/* 关闭所有led灯	*/
	//	GPIO_SetBits(LED1_GPIO_PORT, LED1_GPIO_PIN);
		
		/* 关闭所有led灯	*/
		GPIO_ResetBits(CHARGE_GPIO_PORT, CHARGE_GPIO_PIN);
		
		/* 关闭所有led灯	*/
		GPIO_ResetBits(FIRE_GPIO_PORT, FIRE_GPIO_PIN);	 
}

void assert_failed(uint8_t* file, uint32_t line)
{
	// 断言错误时执行的代码
	//LED1_ON;
}
/*********************************************END OF FILE**********************/
