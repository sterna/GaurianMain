/**************************************************************************/ /*!
 **     @file ledCtrl.h
 **
 **     @brief
 **      General Handle RGB led.
 **
 **     Project   : Guppi
 **
 **     Processor : STM32F103T8
 **
 **     Compiler  : GNU C Compiler for ARM Embedded Processor
 **
 **     (c) Copyright Cellink, 2017
 **
 *******************************************************************************/

#ifndef ONBOARD_LED_CTRL_H_
#define ONBOARD_LED_CTRL_H_

#include <stdint.h>

/*
*********************************************************************************
*	Include files
*********************************************************************************
*/

/*
*********************************************************************************
*	Defined constants
*********************************************************************************
*/


/*
*********************************************************************************
*	Type definitions & enums
*********************************************************************************
*/

/*
*********************************************************************************
*	Variables
*********************************************************************************
*/

/*
*********************************************************************************
*	Functions
*********************************************************************************
*/


void onboardLedCtrlInit(void);

#define LED_BOARD_SET()		GPIOC->BRR = GPIO_Pin_13
#define LED_BOARD_CLEAR()	GPIOC->BSRR = GPIO_Pin_13
#define LED_BOARD_TOGGLE()	GPIOC->ODR ^= GPIO_Pin_13

#endif /* ONBOARD_LED_CTRL_H_ */