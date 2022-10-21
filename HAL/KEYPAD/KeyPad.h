/*
 * KeyPad.h
 *
 * Created: 16/05/2022 10:41:21 ص
 *  Author: dell
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

/******************************************_INCLUDES_*******************************************/
#include "KeyPadCfg.h"
#include "Std.h"
#include "Dio.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/
#define MODEL_1              1
#define MODEL_2              2
/*****************************************_PROTOTYPES_******************************************/
void H_KeyPad_Init(void);
u8   H_KeyPad_Read(void);

#endif /* KEYPAD_H_ */