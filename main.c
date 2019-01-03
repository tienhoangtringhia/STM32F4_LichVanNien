/**
  ******************************************************************************
  * @file    STM32F4_LichVanNien/main.c 
  * @author  Tien Hoang Tri Nghia
  * @version V1.0.0
  * @date    23-December-2018
  * @brief   Main program body
  ******************************************************************************
  * @attention
	* |----------------------------------------------------------------------
	* | Copyright (C) Tien Hoang Tri Nghia, 2018
	* | 
	* | This program is free software: you can redistribute it and/or modify
	* | it under the terms of the GNU General Public License as published by
	* | the Free Software Foundation, either version 3 of the License, or
	* | any later version.
	* |  
	* | This program is distributed in the hope that it will be useful,
	* | but WITHOUT ANY WARRANTY; without even the implied warranty of
	* | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	* | GNU General Public License for more details.
	* | 
	* | You should have received a copy of the GNU General Public License
	* | along with this program.  If not, see <http://www.gnu.org/licenses/>.
	* |----------------------------------------------------------------------
	*/
	
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Private typedef -----------------------------------------------------------*/
GPIO_InitTypeDef  GPIO_InitStructure;

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  /* GPIOG Peripheral clock enable */
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);

  /* Configure PG6 and PG8 in output pushpull mode */
  GPIO_InitStructure.GPIO_Pin = LED1_PIN | LED2_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOG, &GPIO_InitStructure);

  while (1)
  {

  }
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT Tien Hoang Tri Nghia *****END OF FILE****/
