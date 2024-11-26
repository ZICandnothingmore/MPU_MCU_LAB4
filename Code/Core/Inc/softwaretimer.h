/*
 * softwaretimer.h
 *
 *  Created on: Nov 24, 2024
 *      Author: ACER
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#include "main.h"

void setTimer(int index, int duration);
void timer_run(void);
int isTimerExpired(int index);

#endif /* INC_SOFTWARETIMER_H_ */
