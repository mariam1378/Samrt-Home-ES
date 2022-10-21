/*
 * Buzzer.h
 *
 * Created: 15/05/2022 11:23:08 ص
 *  Author: dell
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_

/******************************************_INCLUDES_*******************************************/
#include "BuzzerCfg.h"
#include "Dio.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/
/*****************************************_PROTOTYPES_******************************************/
void H_Buzzer_Init(void);
void H_Buzzer_On(void);
void H_Buzzer_Off(void);
void H_Buzzer_Tog(void);
void H_Buzzer_Once(void);
void H_Buzzer_Twice(void);
void H_Buzzer_Triple(void);
void H_Buzzer_OnceLong(void);

#endif /* BUZZER_H_ */