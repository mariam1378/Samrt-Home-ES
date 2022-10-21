/*
 * DC_MOTOR.c
 *
 * Created: 29/05/2022 12:05:57 م
 *  Author: dell
 */ 

#include "DC_MOTOR_INTERFACE.h"

void H_DC_MOTOR_Init(u8 Copy_u8firstPin,u8 Copy_u8secondPin)
{
	                  
	M_Dio_PinMode(Copy_u8firstPin,OUTPUT);
	M_Dio_PinMode(Copy_u8secondPin,OUTPUT);
}
void H_DC_MOTOR_CW(u8 Copy_u8firstPin,u8 Copy_u8secondPin )
{
	M_Dio_PinWrite(Copy_u8secondPin,LOW);
	M_Dio_PinWrite(Copy_u8firstPin,HIGH);
}
void H_DC_MOTOR_CCW(u8 Copy_u8firstPin,u8 Copy_u8secondPin)
{
	M_Dio_PinWrite(Copy_u8firstPin,LOW);	
	M_Dio_PinWrite(Copy_u8secondPin,HIGH);	
}
void H_DC_MOTOR_STOP(u8 Copy_u8firstPin,u8 Copy_u8secondPin)
{
	M_Dio_PinWrite(Copy_u8secondPin,LOW);
	M_Dio_PinWrite(Copy_u8firstPin,LOW);
}
void H_DC_MOTOR_SPEED(u8 Copy_u8speed)
{
	M_Timer0_voidSetPWM(Copy_u8speed);
}