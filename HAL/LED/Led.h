/*
 * Led.h
 *
 * Created: 10/05/2022 12:53:06 م
 *  Author: dell
 */ 


#ifndef LED_H_
#define LED_H_
/******************************************_INCLUDES_*******************************************/
#include "LedCfg.h"
#include "Std.h"
#include "Dio.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/
#define BLU_LED        1
#define GRN_LED        2
#define RED_LED        3

/*****************************************_PROTOTYPES_******************************************/
void H_Led_Init(u8);
void H_Led_On(u8);
void H_Led_Off(u8);
void H_Led_Tog(u8);
void H_Led_BlinkOnce(u8);
void H_Led_BlinkTwice(u8);
#endif /* LED_H_ */


