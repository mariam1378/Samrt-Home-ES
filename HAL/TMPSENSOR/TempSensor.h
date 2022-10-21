/*
 * TempSensor.h
 *
 * Created: 19/05/2022 09:41:03 ص
 *  Author: dell
 */ 


#ifndef TEMPSENSOR_H_
#define TEMPSENSOR_H_

/******************************************_INCLUDES_*******************************************/
#include "Adc.h"
#include "Std.h"
/*******************************************_MACROS_********************************************/
/*****************************************_PROTOTYPES_******************************************/
void H_TempSensor_Init(void);
u16  H_TempSensor_Read(void);

#endif /* TEMPSENSOR_H_ */