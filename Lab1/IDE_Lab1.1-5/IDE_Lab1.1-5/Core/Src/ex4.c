/*
 * ex4.c
 *
 *  Created on: Sep 16, 2024
 *      Author: NGUYEN GIAP
 */

#include <ex4.h>

void display7SEG(int count)
{
	switch(count)
	{
	case 0:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, RESET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, SET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, SET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, SET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, SET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, RESET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, SET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, SET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, SET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, SET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, SET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, SET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, RESET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, SET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, SET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, RESET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED7A_GPIO_Port, LED7A_Pin, RESET);
		HAL_GPIO_WritePin(LED7B_GPIO_Port, LED7B_Pin, RESET);
		HAL_GPIO_WritePin(LED7C_GPIO_Port, LED7C_Pin, RESET);
		HAL_GPIO_WritePin(LED7D_GPIO_Port, LED7D_Pin, RESET);
		HAL_GPIO_WritePin(LED7E_GPIO_Port, LED7E_Pin, SET);
		HAL_GPIO_WritePin(LED7F_GPIO_Port, LED7F_Pin, RESET);
		HAL_GPIO_WritePin(LED7G_GPIO_Port, LED7G_Pin, RESET);
		break;
	}
}

void display7SEGH(int count)
{
	switch(count)
	{
	case 0:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, RESET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, SET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, SET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, SET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, SET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, RESET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, SET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, SET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, SET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, SET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, SET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, SET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, RESET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, SET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, SET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, RESET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED7AH_GPIO_Port, LED7AH_Pin, RESET);
		HAL_GPIO_WritePin(LED7BH_GPIO_Port, LED7BH_Pin, RESET);
		HAL_GPIO_WritePin(LED7CH_GPIO_Port, LED7CH_Pin, RESET);
		HAL_GPIO_WritePin(LED7DH_GPIO_Port, LED7DH_Pin, RESET);
		HAL_GPIO_WritePin(LED7EH_GPIO_Port, LED7EH_Pin, SET);
		HAL_GPIO_WritePin(LED7FH_GPIO_Port, LED7FH_Pin, RESET);
		HAL_GPIO_WritePin(LED7GH_GPIO_Port, LED7GH_Pin, RESET);
		break;
	}
}

void exercise4()
{
	int count = 0;
	while(1){
		if (count >= 10) count = 0;
		display7SEG(count);
		//display7SEGH(count);
		count++;
		HAL_Delay(1000);
	}
}