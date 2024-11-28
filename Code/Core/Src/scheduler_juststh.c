/*
 * scheduler.c
 *
 *  Created on: 26 thg 11, 2024
 *      Author: ACER
 */

#include "scheduler.h"

typedef struct {
	// Pointer to the task (must be a ’void(void)’ function )
	void (*pTask)(void);
	// Delay (tick) until the function will (next) be run
	uint32_t Delay;
	// Interval (tick) between subsequent runs
	uint32_t Period;
	// Incremented (by scheduler) when task is due to execute
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;

sTask SCH_Tasks_G[SCH_MAX_TASKS];
static uint32_t newTaskID = 0;
static uint32_t SCH_Update_Count = 0;
unsigned char SCH_Error_G;

void SCH_Init(void) {
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		SCH_Delete_Task(i);
	}
	SCH_Error_G = 0;
//	Timer_init();
//	Watchdog_init();
}

void SCH_Update(void) {
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		if (SCH_Tasks_G[i].pTask) {
			if (SCH_Tasks_G[i].Delay <= 0) {
				SCH_Tasks_G[i].RunMe++;
				if (SCH_Tasks_G[i].Period) {
					SCH_Tasks_G[i].Delay = SCH_Tasks_G[i].Period;
				}
			} else {
				SCH_Tasks_G[i].Delay--;
			}
		}
	}
}

void SCH_Dispatch_Tasks(void) {
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++){
		if (SCH_Tasks_G[i].RunMe > 0){
			(*SCH_Tasks_G[i].pTask)();
			SCH_Tasks_G[i].RunMe--;
				//one-shot task
			if (SCH_Tasks_G[i].Period == 0){
				SCH_Delete_Task(i);
			}
		}
	}
//	SCH_Report_Status () ;
//	SCH_Go_To_Sleep() ;
}

uint32_t SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD){
	unsigned char i = 0;
	while ((( SCH_Tasks_G[i].pTask != 0) && ( i < SCH_MAX_TASKS))){
		i++;
	}
	if (i == SCH_MAX_TASKS){
		SCH_Error_G = ERROR_SCH_TOO_MANY_TASKS;
		return SCH_MAX_TASKS;
	}
	SCH_Tasks_G[i].pTask = pFunction;
	SCH_Tasks_G[i].Delay= DELAY/10;
	SCH_Tasks_G[i].Period = PERIOD/10;
	SCH_Tasks_G[i].RunMe = 0;

	return i;
}

uint8_t SCH_Delete_Task(uint32_t taskID){
	unsigned char return_code;
	if (SCH_Tasks_G[taskID].pTask == 0){
		return_code = RETURN_ERROR;
	}else{
		return_code = RETURN_NORMAL;
	}
	SCH_Tasks_G[taskID].pTask = 0x0000;
	SCH_Tasks_G[taskID].Delay= 0;
	SCH_Tasks_G[taskID].Period = 0;
	SCH_Tasks_G[taskID].RunMe = 0;

	return return_code;
}
