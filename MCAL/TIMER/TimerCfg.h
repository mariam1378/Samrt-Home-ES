/*
 * TimerCfg.h
 *
 * Created: 5/23/2022 3:53:18 AM
 *  Author: Top Ten
 */ 


#ifndef TIMERCFG_H_
#define TIMERCFG_H_
/****************************choose timer 0 mode****************************************************************/
//Option[ 1 ]->					TIMER0_NORMAL_MODE
//Option[ 2 ]->					TIMER0_CTC_MODE
//Option[ 3 ]->					TIMER0_FAST_PWM_MODE
//Option[ 4 ]->					TIMER0_PHASE_CORRECT_MODE

#define TIMER0_MODE				TIMER0_FAST_PWM_MODE

/***************************choose Timer0_Prescaling*****************************************************************/
//Option[ 1 ]->					Timer0_No_Clock					  
//Option[ 2 ]->					Timer0_No_Prescaling				  
//Option[ 3 ]->					Timer0_Prescaler_8					  
//Option[ 4 ]->					Timer0_Prescaler_64				  
//Option[ 5 ]->					Timer0_Prescaler_256				  
//Option[ 6 ]->					Timer0_Prescaler_1024				  
//Option[ 7 ]->					Timer0_Prescaler_EXT_CLK_FALL_EDGE   
//Option[ 8 ]->					Timer0_Prescaler_EXT_CLK_RAIS_EDGE   

#define TIMER0_PRESCALER		Timer0_Prescaler_256

/***************************choose Timer0_Prescaling**************************/
//************************General Mode Option:
//Option[ 1 ]->					TIMER0_OC0_MODE_DISCONNECTED  

//**************************Normal Mode Option:
//Option[ 2 ]->					TIMER0_OC0_MODE_Toggle        
//Option[ 3 ]->					TIMER0_OC0_MODE_Clear         
//Option[ 4 ]->					TIMER0_OC0_MODE_Set 
//**************************Fast PWM Mode Option:

//Option[ 5 ]->					TIMER0_OC0_FAST_NONINVERTED          
//Option[ 6 ]->					TIMER0_OC0_FAST_INVERTED  
#define TIMER0_OC0_MODE			TIMER0_OC0_FAST_INVERTED



#endif /* TIMERCFG_H_ */