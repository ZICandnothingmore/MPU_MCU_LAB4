/*
 * Manual.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#ifndef INC_MANUAL_H_
#define INC_MANUAL_H_

#include "main.h"
#include "Global.h"
//#include "display7SEGLED.h"

void fsm_manual_run_button();
void fsm_manual_run_LED();
void fsm_manual_init();
void LED_Blinking(int modeLED);
void update_7SEGLED_mode();

#endif /* INC_MANUAL_H_ */
