/*
 * task.c
 *
 *  Created on: Nov 26, 2024
 *      Author: ACER
 */

#include "task.h"

int idx = 0;
int cnt = 0;

void Task_Init(){
	  HAL_GPIO_WritePin(GPIOA, RED_LED_Task_2_Pin|RED_LED_Task_4_Pin|BUTTON_Pin, LED_OFF);
	  HAL_GPIO_WritePin(GPIOA, RED_LED_Task_1_Pin, LED_ON);
	  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|d_Pin|e_Pin|f_Pin|g_Pin, LED_OFF);
}
void Task_1(){
	HAL_GPIO_TogglePin(GPIOA, RED_LED_Task_1_Pin);
}

void Task_2(){
	HAL_GPIO_TogglePin(GPIOA, RED_LED_Task_2_Pin);
}
void Task_3(){
	HAL_GPIO_TogglePin(GPIOA, RED_LED_Task_3_Pin);
}
void Task_4(){
	HAL_GPIO_TogglePin(GPIOA, RED_LED_Task_4_Pin);
}
void Task_5(){
	if (cnt > 9) cnt = 0;
	display7SEG(cnt++);
}
