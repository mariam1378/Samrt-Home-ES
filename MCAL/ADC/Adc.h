/*
 * Adc.h
 *
 * Created: 5/18/2022 10:53:06 AM
 *  Author: Top Ten
 */ 


#ifndef ADC_H_
#define ADC_H_
/******************************************_INCLUDES_*******************************************/
#include "AdcCfg.h"
#include "BitMath.h"
#include "Reg.h"

/*******************************************_MACROS_*******************************************/
#define AVCC		1
#define AREF_PIN    2
#define _2_5_VOLT	3

/*****************************************_PROTOTYPES_******************************************/
void M_Adc_Init(void);
u16 M_Adc_Read(void);



#endif /* ADC_H_ */

