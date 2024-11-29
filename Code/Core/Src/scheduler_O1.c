///*
// * scheduler_O1.c
// *
// *  Created on: 28 thg 11, 2024
// *      Author: ACER
// */
//#define ADD_TASK_ERROR 		110
//#define NOT_VALID_TASK_ID 	111
//
//typedef struct {
//	// Pointer to the task (must be a ’void(void)’ function )
//	void (*pTask)(void);
//	// Delay (tick) until the function will (next) be run
//	uint32_t Delay;
//	// Interval (tick) between subsequent runs
//	uint32_t Period;
//	// Incremented (by scheduler) when task is due to execute
//	uint8_t RunMe;
//	uint32_t TaskID;
//} TaskNode;
//
//typedef struct{
//	TaskNode *head;
//	uint32_t nTasks;
//} Tasks;
//
//sTask SCH_Tasks_G[SCH_MAX_TASKS];
//static uint32_t newTaskID = 0;
//static uint32_t SCH_Update_Count = 0;
//unsigned char SCH_Error_G;
//
//
