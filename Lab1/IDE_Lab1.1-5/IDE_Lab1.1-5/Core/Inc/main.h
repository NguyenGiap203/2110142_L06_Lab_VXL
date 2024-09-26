/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define LED7A_Pin GPIO_PIN_0
#define LED7A_GPIO_Port GPIOB
#define LED7B_Pin GPIO_PIN_1
#define LED7B_GPIO_Port GPIOB
#define LED7C_Pin GPIO_PIN_2
#define LED7C_GPIO_Port GPIOB
#define LED7DH_Pin GPIO_PIN_10
#define LED7DH_GPIO_Port GPIOB
#define LED7EH_Pin GPIO_PIN_11
#define LED7EH_GPIO_Port GPIOB
#define LED7FH_Pin GPIO_PIN_12
#define LED7FH_GPIO_Port GPIOB
#define LED7GH_Pin GPIO_PIN_13
#define LED7GH_GPIO_Port GPIOB
#define LED_RED_H_Pin GPIO_PIN_8
#define LED_RED_H_GPIO_Port GPIOA
#define LED_YELLOW_H_Pin GPIO_PIN_9
#define LED_YELLOW_H_GPIO_Port GPIOA
#define LED_GREEN_H_Pin GPIO_PIN_10
#define LED_GREEN_H_GPIO_Port GPIOA
#define LED7D_Pin GPIO_PIN_3
#define LED7D_GPIO_Port GPIOB
#define LED7E_Pin GPIO_PIN_4
#define LED7E_GPIO_Port GPIOB
#define LED7F_Pin GPIO_PIN_5
#define LED7F_GPIO_Port GPIOB
#define LED7G_Pin GPIO_PIN_6
#define LED7G_GPIO_Port GPIOB
#define LED7AH_Pin GPIO_PIN_7
#define LED7AH_GPIO_Port GPIOB
#define LED7BH_Pin GPIO_PIN_8
#define LED7BH_GPIO_Port GPIOB
#define LED7CH_Pin GPIO_PIN_9
#define LED7CH_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
