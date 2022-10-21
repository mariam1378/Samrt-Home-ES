/*
 * DC_MOTOR_INTERFACE.h
 *
 * Created: 10/05/2022 12:53:06 م
 *  Author: dell
 */ 


#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_
/******************************************_INCLUDES_*******************************************/
#include "DC_MOTOR_Cfg.h"
#include "Std.h"
#include "Dio.h"
#include "Timer_Interface.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/


/*****************************************_PROTOTYPES_******************************************/
// we can use pins for each motor or define motor 1 and motor 2 and then use them but I'm not so sure how to do that
//void H_DC_MOTOR_Init(u8 Copy_u8Port, u8 Copy_u8firstPin,u8 Copy_u8secondPin);
void H_DC_MOTOR_CW(u8 Copy_u8firstPin,u8 Copy_u8secondPin );
void H_DC_MOTOR_CCW(u8 Copy_u8firstPin,u8 Copy_u8secondPin);
void H_DC_MOTOR_STOP(u8 Copy_u8firstPin,u8 Copy_u8secondPin);
void H_DC_MOTOR_SPEED(u8 Copy_u8speed);

#endif /* DC_MOTOR_INTERFACE_H_ */


