/*
 * ex3.c
 *
 *  Created on: Sep 16, 2024
 *      Author: NGUYEN GIAP
 */

#include "ex3.h"

//VState means led RED is turned on, and the others are turned off
void resetVState(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}

//HState means led GREEN is turned on, and the others are turned off
void resetHState(){
	HAL_GPIO_WritePin(LED_RED_H_GPIO_Port, LED_RED_H_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_H_GPIO_Port, LED_YELLOW_H_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_H_GPIO_Port, LED_GREEN_H_Pin, SET);
}

void exercise3()
{
	//set total time with 5s red, 2s yellow, 3s green
	const int reset_time = 10;
	int _time = reset_time;

	//set the vertical traffic light is FIRST state, the horizontal one is SECOND state
	resetVState();
	resetHState();

	while(1){
		if (_time <= 0){
			resetVState();
			resetHState();
			_time = reset_time;
		}
		if (_time == 7){
			// set the horizontal: GREEN off, YELLOW on
			HAL_GPIO_WritePin(LED_GREEN_H_GPIO_Port, LED_GREEN_H_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_H_GPIO_Port, LED_YELLOW_H_Pin, SET);
		}
		else if (_time == 5){
			// set the vertical: RED off, GREEN on
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			// set the horizontal: YELLOW off, RED on
			HAL_GPIO_WritePin(LED_YELLOW_H_GPIO_Port, LED_YELLOW_H_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_H_GPIO_Port, LED_RED_H_Pin, SET);
		}
		else if (_time == 2){
			// set the vertical: GREEN off, YELLOW on
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		}

		_time--;
		HAL_Delay(1000);
	}
}
