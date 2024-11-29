/*
 * fsm_setting.c
 *
 *  Created on: 29 thg 11, 2024
 *      Author: ACER
 */


#include "fsm_setting.h"

void fsm_setting_run() {
	switch (STATUS_MODE) {
	case INIT:
		HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
		STATUS_MODE = MODE1;
		index_led = -1;
		STATUS_LED_1 = INIT;
		STATUS_LED_2 = INIT;
//		TimeForLed1 = TimeRed;
//		TimeForLed2 = TimeGreen;
//		setTimer(0, 1010); 	//for LED_1
//		setTimer(1, 230);	//for 4_7SEG
//		setTimer(2, 1010);	//for LED_2
//		HAL_GPIO_TogglePin(GPIOA, RED_1_Pin);
		break;
	case MODE1:
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE2;
			value = TimeRed;
			STATUS_BLINKY = INIT;
			//index_led = -1;
			counter = 1;
		}
		break;
	case MODE2:
		//Modify the RED time duration
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			setTimer(3, 523); 			//blinking led
			setTimer(4, 237);			//modified time
			counter = 0;
		}
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE3;
			value = TimeYellow;
			counter = 1;
			STATUS_BLINKY = INIT;
		} else if (isButtonPressed(2)) {
			TimeRed = value;
		}
		break;
	case MODE3:
		//Modify the YELLOW time duration
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			counter = 0;
		}
		if (isButtonPressed(0)) {
			STATUS_MODE = MODE4;
			value = TimeGreen;
			STATUS_BLINKY = INIT;
			counter = 1;
		} else if (isButtonPressed(2)) {
			TimeYellow = value;
		}
		break;
	case MODE4:
		//Modify the GREEN time duration
		if (counter == 1) {
			HAL_GPIO_WritePin(GPIOA, ALL_LED, LED_OFF);
			counter = 0;
		}
		if (isButtonPressed(0)) {
			STATUS_MODE = INIT;
		} else if (isButtonPressed(2)) {
			TimeGreen = value;
		}
		break;
	default:
//		STATUS_MODE = INIT;
		break;
	}
}
