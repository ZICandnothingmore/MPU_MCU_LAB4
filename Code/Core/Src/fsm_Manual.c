/*
 * fsm_Manual.c
 *
 *  Created on: 29 thg 11, 2024
 *      Author: ACER
 */

#include "fsm_Manual.h"
//void fsm_manual_init(){
//	LED_Blinking(INIT);
//}

//void LED_Blinking(int modeLED){
//	switch (modeLED){
////	case INIT:
////		HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
////		if (STATUS_MODE == MODE2) modeLED = RED;
////		if (STATUS_MODE == MODE3) modeLED = YELLOW;
////		if (STATUS_MODE == MODE4) modeLED = GREEN;
////
////		index_led = -1;
////		break;
//	case RED:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, RED_1_Pin|RED_2_Pin);
//			setTimer(3, 500);
//		}
//		break;
//	case GREEN:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, GREEN_1_Pin|GREEN_2_Pin);
//			setTimer(3, 500);
//		}
//		break;
//	case YELLOW:
//		if (isTimerExpired(3)){
//			HAL_GPIO_TogglePin(GPIOA, YELLOW_1_Pin|YELLOW_2_Pin);
//			setTimer(3, 5000);
//		}
//	default:
//		break;
//	}
//}

void fsm_manual_run_button(){
	switch (STATUS_MODE){
	case MODE2:
		if (isButtonPressed(1)){
			value = (value < 99) ? value + 1 : 1;
		}
		updateBuffer(STATUS_MODE);
		break;
	case MODE3:
		if (isButtonPressed(1)){
			value = (value < 99) ? value + 1 : 1;
		}
		updateBuffer(STATUS_MODE);
		break;
	case MODE4:
		if (isButtonPressed(1)){
			value = (value < 99) ? value + 1 : 1;
		}
		updateBuffer(STATUS_MODE);
			break;
	default:
		break;
	}

	//to increase the time duration when press the 2nd button
}

void fsm_manual_run_LED(){
	switch (STATUS_MODE){
	case MODE2:
		HAL_GPIO_TogglePin(GPIOA, RED_1_Pin|RED_2_Pin);
		break;
	case MODE3:
		HAL_GPIO_TogglePin(GPIOA, YELLOW_1_Pin|YELLOW_2_Pin);
		break;
	case MODE4:
		HAL_GPIO_TogglePin(GPIOA, GREEN_1_Pin|GREEN_2_Pin);
			break;
	default:
		break;
	}

	//to increase the time duration when press the 2nd button
}


