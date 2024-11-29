/*
 * Global.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ACER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "fsm_Automatic.h"
#include "fsm_Manual.h"
#include "fsm_setting.h"
#include "display7SEGLED.h"

#define INIT 		1

#define AUTO_RED_1		2
#define AUTO_RED_2		3
#define AUTO_YELLOW_1	4
#define AUTO_YELLOW_2	5
#define AUTO_GREEN_1	6
#define	AUTO_GREEN_2	7

#define LED_ON		0
#define LED_OFF		1

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_RYELLOW	14

#define RED			15
#define YELLOW		16
#define GREEN		17

#define MODE1			22
#define MODE2			23
#define MODE3			24
#define MODE4 			25

#define MAX_7SEG		4

#define ALL_LED (RED_1_Pin | GREEN_1_Pin | YELLOW_1_Pin | RED_2_Pin | GREEN_2_Pin | YELLOW_2_Pin)

extern int status_led;
extern int counter;
extern int index_led;
extern int buffer_7seg[MAX_7SEG];

extern int STATUS_7SEG;
extern int STATUS_LED_1;
extern int STATUS_LED_2;

extern int TimeRed;
extern int TimeGreen;
extern int TimeYellow;
extern int TimeForLed1;
extern int TimeForLed2;

extern int value;

extern int STATUS_MODE;
extern int STATUS_BLINKY;

extern int modeLED;

#endif /* INC_GLOBAL_H_ */
