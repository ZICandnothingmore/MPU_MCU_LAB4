/*
 * button.h
 *
 *  Created on: 27 thg 11, 2024
 *      Author: ACER
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE 	1	//khong nhan
#define PRESSED_STATE 	0	//nhan

extern int button1_flag;

void getInputKey();
void get_input_data(int index, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
uint16_t get_Button_flag(int index);
uint16_t isButtonPressed(int index);
int isButtonLongPressed(int index);
void set_pressed_flag(uint8_t index);

#endif /* INC_BUTTON_H_ */
