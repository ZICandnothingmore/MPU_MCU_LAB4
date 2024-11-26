/*
 * softwaretimer.c
 *
 *  Created on: Nov 24, 2024
 *      Author: ACER
 */

#include "softwaretimer.h"

#define MAX_COUNTER  10

int timer_counter[MAX_COUNTER];
int timer_flag[MAX_COUNTER];

void setTimer(int index, int duration){
	timer_counter[index] = duration/10;
	timer_flag[index] = 0;
}

void timer_run(void){
	for (int i = 0; i < MAX_COUNTER; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if (timer_counter[i] <=0 ){
				timer_flag[i] = 1;
			}
		}
	}
}

int isTimerExpired(int index){
	if (timer_flag[index] == 1){
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}


