/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "softwaretimer.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void display7SEG1(int num) {
	if(num==0) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
	}
	else if(num==1) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
	}
	else if(num==2) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==3) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==4) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==5) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==6) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==7) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
	}
	else if(num==8) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
	else if(num==9) {
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
	}
}
void display7SEG2(int num) {
	if(num==0) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}
	else if(num==1) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}
	else if(num==2) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==3) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==4) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==5) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==6) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==7) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
	}
	else if(num==8) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
	else if(num==9) {
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
	}
}
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  setTimer1(300);
  /* USER CODE BEGIN WHILE */
  //state 1: (1) red 3s; (2) green 3s
  //state 2: (1) red 2s; (2) yellow 2s
  //state 3: (1) green 3s; (2) red 3s
  //state 4: (1) yellow 2s; (2) red 2s
  enum State{state1, state2, state3, state4};
  enum State currentState=state1;
  enum State nextState=currentState;
  while (1)
  {
	  //ex5
	  switch (currentState) {
	  case state1:
		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);

		  if (timer1_counter%100==0){ //timer1_counter=300;200;100
			  //int n=timer1_counter/100;
			  display7SEG1(timer1_counter/100 +2); //red in 1st group count from 5
			  display7SEG2(timer1_counter/100); //green in 2nd group
		  }
		  if(timer1_flag ==1) {
			  nextState=state2;
			  setTimer2(200);
		  }
		  break;
	  case state2:
		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);

		  if (timer2_counter%100==0){ //timer2_counter=200;100
			  //int n=timer2_counter/100;
			  display7SEG1(timer2_counter/100); //red in 1st group continues from 2
			  display7SEG2(timer2_counter/100); //yellow in 2nd group
		  }
		  if(timer2_flag ==1) {
			  nextState=state3;
			  setTimer3(300);
		  }
		  break;
	  case state3:
		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, RESET);

		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);

		  if (timer3_counter%100==0){ //timer3_counter=300;200;100
			  //int n=timer3_counter/100;
			  display7SEG1(timer3_counter/100); //green in 1st group
			  display7SEG2(timer3_counter/100 +2); //red in 2nd group
		  }
		  if(timer3_flag ==1) {
			  nextState=state4;
			  setTimer4(200);
		  }
		  break;


	 case state4:
		  HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, RESET);
		  HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

		  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);

		  if (timer4_counter%100==0){ //timer4_counter=200;100
			  //int n=timer4_counter/100;
			  display7SEG1(timer4_counter/100); //yellow in 1st group
			  display7SEG2(timer4_counter/100); //red continues from 2 in 2nd group
		  }
		  if(timer4_flag ==1) {
			  nextState=state1;
			  setTimer1(301);
		  }
		  break;
	  }
	  timerRun();
	  currentState=nextState;
	  HAL_Delay(10);


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|d2_Pin
                          |e2_Pin|f2_Pin|g2_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a2_Pin
                          |b2_Pin|c2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED1_Pin LED_YELLOW1_Pin LED_GREEN1_Pin LED_RED2_Pin
                           LED_YELLOW2_Pin LED_GREEN2_Pin */
  GPIO_InitStruct.Pin = LED_RED1_Pin|LED_YELLOW1_Pin|LED_GREEN1_Pin|LED_RED2_Pin
                          |LED_YELLOW2_Pin|LED_GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d2_Pin
                           e2_Pin f2_Pin g2_Pin d_Pin
                           e_Pin f_Pin g_Pin a2_Pin
                           b2_Pin c2_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d2_Pin
                          |e2_Pin|f2_Pin|g2_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a2_Pin
                          |b2_Pin|c2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
