/*
 * ex10.c
 *
 *  Created on: Sep 22, 2024
 *      Author: NGUYEN GIAP
 */
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
#include "ex10.h"


void display_time_on_LEDs(int _hour, int _minute, int _second){
	clearAllClock();
	setNumberOnClock(_hour);
	setNumberOnClock(_minute / 5);
	setNumberOnClock(_second / 5);
}

void exercise10()
{
	//set original state
	int _hour = 0, _minute = 0, _second = 0;


	while(1){
		//set time
		if (_second == 60){
			_second = 0;
			_minute++;
		}
		if (_minute == 60){
			_minute = 0;
			_hour++;
		}
		if (_hour == 12)
			_hour = 0;

		//set LEDs
		display_time_on_LEDs(_hour, _minute, _second);

		_second++;
		HAL_Delay(5);
	}
}

