/*
 * ExtInt.c
 *
 * Created: 17/05/2022 10:31:23 ص
 *  Author: dell
 */ 
#include "ExtInt.h"
void(*CallBack)(void);
void M_ExtInt_Init(void)
{
	#if   SENSE_CONTROL        ==       FAILLING_ED
	ClrBit(MCUCR,0);
	SetBit(MCUCR,1);
	#elif SENSE_CONTROL        ==       RISING_ED
	SetBit(MCUCR,0);
	SetBit(MCUCR,1);
	#elif SENSE_CONTROL        ==       LOGICAL_CHANGE
 	SetBit(MCUCR,0);
 	ClrBit(MCUCR,1);
	#elif SENSE_CONTROL        ==       LOW_LEVEL
    ClrBit(MCUCR,0);
	ClrBit(MCUCR,1);
	#endif
	// to enable INT0 interrupt
	SetBit(GICR,6);
	// to enable global INT
	SetBit(SREG,7);
}
void M_ExtInt_SetCallBack(void(*ptr)(void))
{
	CallBack = ptr;
}
ISR(INT0_vect)
{
	CallBack();
}