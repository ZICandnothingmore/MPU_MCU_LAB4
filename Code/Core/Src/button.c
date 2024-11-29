/*
 * button.c
 *
 *  Created on: 27 thg 11, 2024
 *      Author: ACER
 */

#include "button.h"

#define NBS_OF_BUTTONS 10

int KeyReg0[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg1[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg2[NBS_OF_BUTTONS] = { NORMAL_STATE };
int KeyReg3[NBS_OF_BUTTONS] = { NORMAL_STATE }; // Trạng thái ổn định
int TimeOutForKeyPress[NBS_OF_BUTTONS] = { 200 }; // Mỗi nút có thời gian chờ riêng

int button_pressed[NBS_OF_BUTTONS];
int button_long_pressed[NBS_OF_BUTTONS];
int button_flag[NBS_OF_BUTTONS] = { 0 };

void get_input_data(int index, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	KeyReg0[index] = KeyReg1[index];
	KeyReg1[index] = KeyReg2[index];
	KeyReg2[index] = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
	//button_flag[index] = 0;
}

//void set_pressed_flag(uint8_t index){
//	button_flag[index] = 0;
//}
//
uint16_t get_Button_flag(int index) {
	return button_flag[index];
}

uint16_t isButtonPressed(int index) {
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int index) {
	if (button_long_pressed[index] == 1) {
		button_long_pressed[index] = 0;
		return 1;
	}
	return 0;
}

//void subKeyProcess() {
//	//TODO
//	//HAL_GPIO_TogglePin(RED_LED_Init_GPIO_Port, RED_LED_Init_Pin);
//	//isButtonPressed(0);
//}

//void getInputKey(){
//	get_input_data(0, BUTTON_1_GPIO_Port, BUTTON_1_Pin);
//	get_input_data(1, BUTTON_2_GPIO_Port, BUTTON_2_Pin);
//	get_input_data(2, BUTTON_3_GPIO_Port, BUTTON_3_Pin);
//
//	int no_of_used_button = 3;
//
//	for(uint8_t i = 0; i < no_of_used_button; i++){
//		if((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
//			// xử lý nhấn nhanh
//			if(KeyReg3[i] != KeyReg2[i]){
//				KeyReg3[i] = KeyReg2[i];
//				if(KeyReg2[i] == PRESSED_STATE){
//					//todo
//					button_flag[i] = 1;
//					TimeOutForKeyPress[i] = 200;
//				}
//			}
//			// xử lý nhấn lâu
//			else{
//				if(KeyReg2[i] == PRESSED_STATE){
//					TimeOutForKeyPress[i]--;
//					if(TimeOutForKeyPress[i] <= 0){
//						//todo
//						button_flag[i] = 1;
//						TimeOutForKeyPress[i] = 50;
//					}
//				}
//			}
//		}
//	}
//
//}

void getInputKey() {
	get_input_data(0, BUTTON_1_GPIO_Port, BUTTON_1_Pin);
	get_input_data(1, BUTTON_2_GPIO_Port, BUTTON_2_Pin);
	get_input_data(2, BUTTON_3_GPIO_Port, BUTTON_3_Pin);

	int no_of_used_button = 3;

	for (uint8_t i = 0; i < no_of_used_button; i++) {
		if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])) {
			// Chỉ xử lý khi nút ổn định
			if (KeyReg3[i] != KeyReg2[i]) {
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg2[i] == PRESSED_STATE) {
					// Nút mới được nhấn
					button_flag[i] = 1;  // Đánh dấu nút nhấn nhanh
					button_long_pressed[i] = 0;
					TimeOutForKeyPress[i] = 200;
				}
			} else if (KeyReg2[i] == PRESSED_STATE) {
				// Nút giữ trong trạng thái nhấn
				if (TimeOutForKeyPress[i] > 0) {
					TimeOutForKeyPress[i]--;
				} else if (TimeOutForKeyPress[i] == 0) {
					// Xử lý nhấn lâu
					if (button_long_pressed[i] == 0) {
						button_long_pressed[i] = 1;
						button_flag[i] = 1;  // Đánh dấu nút nhấn lâu
						TimeOutForKeyPress[i] = 50;  // Reset lại thời gian chờ
					}
				}
			}
		} else {
			// Reset trạng thái khi không ổn định
			button_flag[i] = 0;
			button_long_pressed[i] = 0;
		}
	}
}

