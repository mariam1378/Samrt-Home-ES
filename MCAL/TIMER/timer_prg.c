/*
 * timer_prg.c
 *
 * Created: 5/23/2022 10:58:53 AM
 *  Author: Top Ten
 */ 

#include "Std.h"
#include "Reg.h"
#include "BitMath.h"
#include "Timer_Private.h"
#include "TimerCfg.h"
#include "Timer_Interface.h"
#include <avr/interrupt.h>
#include "stdlib.h"
void (*pv_callBackArr[2])(void)={_NULL,_NULL};
	
void M_Timer0_voidInit(void)
{
	//1-choose Mode
	#if (TIMER0_MODE==TIMER0_NORMAL_MODE)
		ClrBit(TIMER0_TCCR0,TIMER0_WGM00);
		ClrBit(TIMER0_TCCR0,TIMER0_WGM01);
	//2- Choose OC0
	#if ((TIMER0_OC0_MODE >= 0 )&& (TIMER0_OC0_MODE <=3))
		TIMER0_TCCR0	&=TIMER0_NORMAL_MODE_Mask;
		TIMER0_TCCR0   |= TIMER0_OC0_MODE <<4;
	#else 
	#error "wrong OC0 mode"
	#endif
 
	#elif (TIMER0_MODE==TIMER0_PHASE_CORRECT_MODE)
		SetBit(TIMER0_TCCR0,TIMER0_WGM00);
		ClrBit(TIMER0_TCCR0,TIMER0_WGM01);

	#elif (TIMER0_MODE==TIMER0_CTC_MODE)
		ClrBit(TIMER0_TCCR0,TIMER0_WGM00);
		SetBit(TIMER0_TCCR0,TIMER0_WGM01);
	//2- Choose OC0
	#if ((TIMER0_OC0_MODE >= 0 )&& (TIMER0_OC0_MODE <=3))
		TIMER0_TCCR0	&=TIMER0_NORMAL_MODE_Mask;
		TIMER0_TCCR0   |= TIMER0_OC_MODE_MASK <<4;
	#else
	#error "wrong OC0 mode"
	#endif

	#elif (TIMER0_MODE==TIMER0_FAST_PWM_MODE)
		SetBit(TIMER0_TCCR0,TIMER0_WGM00);
		SetBit(TIMER0_TCCR0,TIMER0_WGM01);
	#if ((TIMER0_OC0_MODE == TIMER0_OC0_FAST_NONINVERTED )|| (TIMER0_OC0_MODE ==TIMER0_OC0_FAST_INVERTED))
		TIMER0_TCCR0	&=TIMER0_OC_MODE_MASK;
		TIMER0_TCCR0   |= TIMER0_OC0_MODE;
	#else
	#error "wrong OC0 mode"
	#endif 
 
	#else
	#error ("wrong Timer Mode")	  
	#endif 
 
}
void M_Timer0_voidTimerStop(void)
{
	TIMER0_TCCR0 &=Timer0_Prescaler_Mask;
	TIMER0_TCCR0 |=Timer0_No_Clock;
}
void M_Timer0_voidTimerStart(void)
{
	//3-choose prescaler	
	TIMER0_TCCR0 &=Timer0_Prescaler_Mask;
	TIMER0_TCCR0 |=TIMER0_PRESCALER;
}
void M_Timer0_voidSetPreload(u8 copy_u8preload)
{
	TIMER0_TCNT0 = copy_u8preload;
}
void M_Timer0_voidSetCompareMatch(u8 copy_u8CmpValue)
{
	TIMER0_OCR0 = copy_u8CmpValue;
}
void M_Timer0_voidSetCallBack(void(*copy_ptrCallBack)(void) ,u8 copy_u8IntID)
{
	switch(copy_u8IntID)
	{
		case TIMER0_OVF_INT_ID:
			pv_callBackArr[TIMER0_OVF_INT_ID] =copy_ptrCallBack;
		break;
		
		case TIMER0_CTC_INT_ID:
			pv_callBackArr[TIMER0_CTC_INT_ID] =copy_ptrCallBack;
		break;
		
		default:
		break;
			
	}	
}
void M_Timer0_voidInterruptEnable(u8 copy_u8IntID)
{
	switch(copy_u8IntID)
	{
		case TIMER0_OVF_INT_ID:
			SetBit(TIMER0_TIMSK,TIMER0_TOIE0);
		break;
		
		case TIMER0_CTC_INT_ID:
			SetBit(TIMER0_TIMSK,TIMER0_OCIE0);
		break;
		
		default: 
			return; //RETURN ERROR STATE
		break;
		
	}
}
void M_Timer0_voidInterruptDisable(u8 copy_u8IntID)
{
		switch(copy_u8IntID)
		{
			case TIMER0_OVF_INT_ID:
			ClrBit(TIMER0_TIMSK,TIMER0_TOIE0);
			break;
			
			case TIMER0_CTC_INT_ID:
			ClrBit(TIMER0_TIMSK,TIMER0_OCIE0);
			break;
			
			default: break;
			
		}
}

void M_Timer0_voidSetPWM(u16 copy_u8DutyCycle)
{
	#if(TIMER0_OC0_MODE == TIMER0_OC0_FAST_NONINVERTED)
	TIMER0_OCR0 = (u8)((copy_u8DutyCycle *256)/100)-1;

	#elif(TIMER0_OC0_MODE ==TIMER0_OC0_FAST_INVERTED)
	TIMER0_OCR0 = (u8) abs((255-((copy_u8DutyCycle *256)/100)));
	
	#else
	#error ("Wrong OC0 Mode")
	#endif
}

ISR(TIMER0_OVF_vect)
{
	if(pv_callBackArr[TIMER0_OVF_INT_ID] !=_NULL)
		pv_callBackArr[TIMER0_OVF_INT_ID]();
}

ISR(TIMER0_COMP_vect)
{
	if(pv_callBackArr[TIMER0_CTC_INT_ID] !=_NULL)
		pv_callBackArr[TIMER0_CTC_INT_ID]();
}

/*
// void __vector_11(void)__attribute__((signal));
void __vector_11(void)
{
	//callBack;
}*/



void M_Timer1_voidInit(void)
{
	
}
void M_ICU_voidInit(void)
{
	
}
void M_ICU_voidReadInputValue(u16 copyPtrValue)
{
	
}
void M_ICU_voidSetTrigger(u8 copy_u8Trigger)
{
	
}
void M_ICU_voidEnableInt(void)
{
	
}
void M_ICU_voidDisableInt(void)
{
	
}
