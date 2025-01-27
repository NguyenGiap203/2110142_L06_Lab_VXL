/*
 * ex2.c
 *
 *  Created on: Sep 16, 2024
 *      Author: NGUYEN GIAP
 */
#include "ex2.h"

//First state means led RED is turned on, and the others are turned off
void resetFirstState(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}


void exercise2()
{
	//set total time with 5s red, 2s yellow, 3s green
	const int reset_time = 10;
	int _time = reset_time;

	//set original state which you want
	resetFirstState();

	while(1){
		if (_time == 0){
			resetFirstState();
			_time = resetTime(reset_time);
		}
		if (_time == 5){
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		}
		else if (_time == 2){
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		}
		_time--;
		HAL_Delay(1000);
	}
}

