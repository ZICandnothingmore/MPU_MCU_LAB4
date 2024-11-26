/*
 * display7SEG.c
 *
 *  Created on: Nov 26, 2024
 *      Author: ACER
 */

#include "display7SEGLED.h"

void display7SEG(int num){
	if (num == 0){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 1){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 2){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 1);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 3){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 4){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 1);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 5){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 6){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 1);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 7){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 1);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 1);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 1);
	}
	if (num == 8){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 0);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
	if (num == 9){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, 0);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, 0);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, 0);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, 0);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, 1);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, 0);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, 0);
	}
//	a_GPIO_Port->ODR &= ~ALL_SEG;
//		switch (num) {
//		case 0:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_0); // 0
//			break;
//		case 1:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_1); // 1
//			break;
//		case 2:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_2); // 2
//			break;
//		case 3:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_3); // 3
//			break;
//		case 4:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_4); // 4
//			break;
//		case 5:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_5); // 5
//			break;
//		case 6:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_6); // 6
//			break;
//		case 7:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_7); // 7
//			break;
//		case 8:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_8); // 8
//			break;
//		case 9:
//			a_GPIO_Port->ODR |= (ALL_SEG & ~NUM_9); // 9
//			break;
//		default:
//			a_GPIO_Port->ODR |= (ALL_SEG); // Turn off all segments
//		}
}

//void update7SEG(int index){
//	switch (index){
//	case 0:
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
//		display7SEG(buffer_7seg[0]);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
//		display7SEG(buffer_7seg[1]);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
//		display7SEG(buffer_7seg[2]);
//		break;
//	case 3:
//		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
//		display7SEG(buffer_7seg[3]);
//		break;
//	default:
//		break;
//	}
//}
//
//void updateBuffer(int mode){
//	switch(mode){
//	case MODE1:
//		buffer_7seg[0] = TimeForLed1 / 10;
//		buffer_7seg[1] = TimeForLed1 % 10;
//		buffer_7seg[2] = TimeForLed2 / 10;
//		buffer_7seg[3] = TimeForLed2 % 10;
//		break;
//	case MODE2:
//		buffer_7seg[0] = value / 10;
//		buffer_7seg[1] = value % 10;
//		buffer_7seg[2] = 0;
//		buffer_7seg[3] = 2;
//		break;
//	case MODE3:
//		buffer_7seg[0] = value / 10;
//		buffer_7seg[1] = value % 10;
//		buffer_7seg[2] = 0;
//		buffer_7seg[3] = 3;
//		break;
//	case MODE4:
//		buffer_7seg[0] = value / 10;
//		buffer_7seg[1] = value % 10;
//		buffer_7seg[2] = 0;
//		buffer_7seg[3] = 4;
//		break;
//	default:
//		break;
//	}
//}
//
//// hiển thị led 7 đoạn với T = 0.25s
//void display_4_7SEG(){
//	switch(STATUS_7SEG){
//	case INIT:
//		//setTimer(1, 250);
//		STATUS_7SEG = LED7SEG1;
//		break;
//	case LED7SEG1:
//		update7SEG(0);
//		if(isTimerExpired(1)){
//			setTimer(1,250);
//			STATUS_7SEG = LED7SEG2;
//		}
//		break;
//	case LED7SEG2:
//		update7SEG(1);
//		if(isTimerExpired(1)){
//			setTimer(1,250);
//			STATUS_7SEG = LED7SEG3;
//		}
//		break;
//	case LED7SEG3:
//		update7SEG(2);
//		if(isTimerExpired(1)){
//			setTimer(1,250);
//			STATUS_7SEG = LED7SEG4;
//		}
//		break;
//	case LED7SEG4:
//		update7SEG(3);
//		if(isTimerExpired(1)){
//			setTimer(1,250);
//			STATUS_7SEG = LED7SEG1;
//		}
//		break;
//	default:
//		break;
//	}
//}



