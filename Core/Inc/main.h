/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Brightness_Pin GPIO_PIN_15
#define Brightness_GPIO_Port GPIOB
#define Brightness_EXTI_IRQn EXTI15_10_IRQn
#define LED_SYNC_Pin GPIO_PIN_13
#define LED_SYNC_GPIO_Port GPIOD
#define LED_SYNC_EXTI_IRQn EXTI15_10_IRQn
#define Mode_Pin GPIO_PIN_6
#define Mode_GPIO_Port GPIOC
#define Mode_EXTI_IRQn EXTI9_5_IRQn
#define Speed_Pin GPIO_PIN_7
#define Speed_GPIO_Port GPIOC
#define Speed_EXTI_IRQn EXTI9_5_IRQn
#define Colors_Pin GPIO_PIN_11
#define Colors_GPIO_Port GPIOC
#define Colors_EXTI_IRQn EXTI15_10_IRQn
#define SpeedD2_Pin GPIO_PIN_2
#define SpeedD2_GPIO_Port GPIOD
#define SpeedD2_EXTI_IRQn EXTI2_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
