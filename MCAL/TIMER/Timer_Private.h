/*
 * Timer_Private.h
 *
 * Created: 5/23/2022 10:40:39 AM
 *  Author: Top Ten
 */ 


#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

 //Timer 0 Mode
#define	TIMER0_NORMAL_MODE		  0
#define	TIMER0_PHASE_CORRECT_MODE 1
#define	TIMER0_CTC_MODE			  2
#define	TIMER0_FAST_PWM_MODE	  3

//Timer0 Prescalers
#define Timer0_No_Clock						  0
#define Timer0_No_Prescaling				  1
#define Timer0_Prescaler_8					  2
#define Timer0_Prescaler_64					  3
#define Timer0_Prescaler_256				  4
#define Timer0_Prescaler_1024				  5
#define Timer0_Prescaler_EXT_CLK_FALL_EDGE    6
#define Timer0_Prescaler_EXT_CLK_RAIS_EDGE    7
#define Timer0_Prescaler_Mask				 0b11111000 
    
	
//TIMER0_OC0 modes	
#define TIMER0_OC0_MODE_DISCONNECTED          0
#define TIMER0_OC0_MODE_Toggle                1
#define TIMER0_OC0_MODE_Clear                 2
#define TIMER0_OC0_MODE_Set                   3
//TMER0_ FAST_PWM MODE
#define TIMER0_OC0_FAST_NONINVERTED         0b00100000   
#define TIMER0_OC0_FAST_INVERTED            0b00110000

#define TIMER0_NORMAL_MODE_Mask             0b11001111
#define TIMER0_OC_MODE_MASK						0b11001111
#endif /* TIMER_PRIVATE_H_ */