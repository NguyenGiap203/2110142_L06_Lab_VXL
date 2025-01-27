/*
 * Ex1.c
 *
 *  Created on: Sep 16, 2024
 *      Author: NGUYEN GIAP
 */
#include "ex1.h"


void exercise1()
{
	//set time you want to execute
	const int reset_time = 2;
	int _time = reset_time; // Vong lap dau tien

	//set original state
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);

	while(1){
//		HAL_Delay(1000);
		if (_time <= 0){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
			_time = reset_time;
		}

		_time--;
		HAL_Delay(1000);
	}
}
