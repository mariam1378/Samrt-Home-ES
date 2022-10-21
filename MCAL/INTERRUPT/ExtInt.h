/*
 * ExtInt.h
 *
 * Created: 17/05/2022 10:32:11 ص
 *  Author: dell
 */ 


#ifndef EXTINT_H_
#define EXTINT_H_

/******************************************_INCLUDES_*******************************************/
#include "ExtIntCfg.h"
#include "BitMath.h"
#include "Reg.h"
#include <avr/interrupt.h>
/*******************************************_MACROS_********************************************/
#define FAILLING_ED             1
#define RISING_ED               2
#define LOGICAL_CHANGE          3
#define LOW_LEVEL               4
/*****************************************_PROTOTYPES_******************************************/
void M_ExtInt_Init(void);
void M_ExtInt_SetCallBack(void(*)(void));

#endif /* EXTINT_H_ */