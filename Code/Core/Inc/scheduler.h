/*
 * scheduler.h
 *
 *  Created on: Nov 24, 2024
 *      Author: ACER
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "main.h"
#include <stdint.h>

#define TIMER_CYCLE					10

#define SCH_MAX_TASKS 				40
#define NO_TASK_ID	 				0

#define ERROR_SCH_TOO_MANY_TASKS	10
#define ERROR_SCH_TASK_NOT_FOUND	11

#define RETURN_NORMAL				1
#define RETURN_ERROR				0

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void (* pFunction)(), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t taskID);

#endif /* INC_SCHEDULER_H_ */
