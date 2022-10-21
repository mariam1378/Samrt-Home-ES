/*
 * Timer_Interface.h
 *
 * Created: 5/23/2022 11:01:28 AM
 *  Author: Top Ten
 */ 


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

//shared macros 

#define TIMER0_OVF_INT_ID 0
#define TIMER0_CTC_INT_ID 1

//Function prototypes 
void M_Timer0_voidInit(void);
void M_Timer0_voidTimerStop(void);
void M_Timer0_voidTimerStart(void);
void M_Timer0_voidSetPreload(u8 copy_u8preload);
void M_Timer0_voidSetCompareMatch(u8 copy_u8CmpValue);
void M_Timer0_voidSetCallBack(void(*copy_ptrCallBack)(void) ,u8 copy_u8IntID);
void M_Timer0_voidInterruptEnable(u8 copy_u8IntID);
void M_Timer0_voidInterruptDisable(u8 copy_u8IntID);
void M_Timer0_voidSetPWM(u16 copy_u8DutyCycle);

void M_Timer1_voidInit(void);
void M_ICU_voidInit(void);
void M_ICU_voidReadInputValue(u16 copyPtrValue);
void M_ICU_voidSetTrigger(u8 copy_u8Trigger);
void M_ICU_voidEnableInt(void);
void M_ICU_voidDisableInt(void);

#endif /* TIMER_INTERFACE_H_ */