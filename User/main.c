/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   按键测试（中断模式/EXTI模式）
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 F103-指南者 STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 

#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_exti.h" 



#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */ 
	
	int angle = 0;

int main(void)
{
	/* LED 端口初始化 */
	LED_GPIO_Config();
	  	
	/* 初始化EXTI中断，按下按键会触发中断，
  *  触发中断会进入stm32f4xx_it.c文件中的函数
	*  KEY1_IRQHandler和KEY2_IRQHandler，处理中断，反转LED灯。
	*/
	EXTI_Key_Config(); 
	
	
delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化
		OLED_Init();			//初始化OLED  
		OLED_Clear()  	; 
  /*初始化USART 配置模式为 115200 8-N-1，中断接收*/
	
	
 
		while(1) 
	{	
		u8 t;
		delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化
		OLED_Init();			//初始化OLED  
		OLED_Clear()  	; 
		/*
		 OLED_ShowString(30,0,"OLED TEST");
		OLED_ShowString(8,2,"ZHONGJINGYUAN");  
		OLED_ShowString(20,4,"2014/05/01");  
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		t=' '; 
		OLED_ShowCHinese(0,0,0);//中
		OLED_ShowCHinese(18,0,1);//景
		OLED_ShowCHinese(36,0,2);//园
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技
		*/	
		t=' ';
	while(1) 
	{		
		OLED_Clear();
	//	LED_ON;
		OLED_ShowCHinese(0,0,0);//中
		OLED_ShowCHinese(18,0,1);//景
		OLED_ShowCHinese(36,0,2);//园
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技
		OLED_ShowString(0,3,"1.3' OLED TEST");
		//OLED_ShowString(8,2,"ZHONGJINGYUAN");  
	 //	OLED_ShowString(20,4,"2014/05/01");  
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//显示ASCII字符	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 	
			
	
		delay_ms(8000);
		OLED_Clear();
		delay_ms(8000);
	//		LED_OFF;
		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
		delay_ms(8000);
		OLED_DrawBMP(0,0,128,8,BMP2);
		delay_ms(8000);
		//OLED_Clear();
	//	LED_ON;
//		OLED_ShowCHinese(0,0,0);//中
//		OLED_ShowCHinese(18,0,1);//景
//		OLED_ShowCHinese(36,0,2);//园
//		OLED_ShowCHinese(54,0,3);//电
//		OLED_ShowCHinese(72,0,4);//子
//		OLED_ShowCHinese(90,0,5);//科
//		OLED_ShowCHinese(108,0,6);//技
		
		//OLED_ShowString(8,2,"ZHONGJINGYUAN");  
	 //	OLED_ShowString(20,4,"2014/05/01");  
//		OLED_ShowString(0,6,"ASCII:");  
//		OLED_ShowString(63,6,"CODE:");  
//		OLED_ShowChar(48,6,t);//显示ASCII字符

		
//		OLED_ShowNum(80,5,t,3,32);//显示ASCII字符的码值 	
		
//			
		
		
}	
		
	}	
//			
		
}	
		//OLED_Clear();
//	//		LED_OFF;
//		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
//		delay_ms(8000);
//		OLED_DrawBMP(0,0,128,8,BMP2);
//		delay_ms(8000);
/*********************************************END OF FILE**********************/
