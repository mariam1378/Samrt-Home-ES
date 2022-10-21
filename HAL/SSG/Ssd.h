/*
 * Ssd.h
 *
 * Created: 11/05/2022 01:17:59 م
 *  Author: dell
 */ 


#ifndef SSD_H_
#define SSD_H_

/******************************************_INCLUDES_*******************************************/
#include "SsdCfg.h"
#include "Dio.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/
#define DECODER_MODE          1
#define DIRECT_MODE           2
/*****************************************_PROTOTYPES_******************************************/
void H_Ssd_Init(void);
void H_Ssd_WriteNum(u8);
void H_Ssd_CountUp(u8);
void H_Ssd_CountDown(s8);
void H_Ssd_Disable(void);
#endif /* SSD_H_ */