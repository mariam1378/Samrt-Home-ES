 /*
 * Project.c
 *
 * Created: 01/06/2022 10:32:01 ص
 *  Author: DELL
 */ 

#include "Std.h"
#include "Dio.h"
#include "Adc.h"
#include "GIE.h"
#include "Timer_Interface.h"

//#include "Led.h"
//#include "Lcd.h"
#include "KeyPad.h"
//#include "DC_MOTOR_INTERFACE.h"

#define F_CPU 16000000UL
#include <util/delay.h>
u8   counter;
u8   state  ;
counter = 0 ;
state   = 0 ;

int main(void)
{
	u8* string  ;
	char digit1 ;
	char digit2 ;
	char digit3 ;
	char digit4 ;
	char enter  ;
	
	
	// INITIALIZATIONS
	H_Lcd_Init();
	H_Lcd_WriteString("fff");
	
	
	H_TempSensor_Init();
	H_KeyPad_Init();
	H_Led_Init(RED_LED);
	H_Led_Init(GRN_LED);

	H_DC_MOTOR_Init(PB1,PB2);
	H_DC_MOTOR_STOP(PB1,PB2);
	int TempReading = H_TempSensor_Read();
	int KeyPadReading = H_KeyPad_Read();
	
	H_Lcd_WriteString("fff");
	_delay_ms(1000);
	*string = "hello";
	H_Lcd_WriteString(string);
	_delay_ms(1000);
	H_Lcd_WriteString("Please enter password");

	
	
	while (state !=1)
	{
		passwordCheck(KeyPadReading);
		if(counter>3)
		{
			H_Lcd_WriteString("System lock for 2 min");
			_delay_ms(60000);
			counter = 0;
		}
	}
	//if(counter<=3)
	//{
		//if (state = 1)
		//{
			//H_Lcd_WriteString("access granted");
		//}
		//else if (state = 0)
		//{
			//H_Lcd_WriteString("incorrect");
		//}
	//}
	//else if(counter>3)
	//{
		//H_Lcd_WriteString("System lock for 2 min");
		//_delay_ms(60000);
		//counter = 0;
	//}

	if(TempReading<=25)
	{
		H_Lcd_Clr();
		//H_Lcd_WriteString("Temperature is <=25");
		H_Lcd_WriteString(TempReading);
		H_DC_MOTOR_STOP(PB1,PB2);

	}
	else if (TempReading>25 && TempReading<30)
	{
		//H_Lcd_WriteString("Temperature is >25 & <30");
		H_Lcd_WriteString(TempReading);
		H_DC_MOTOR_SPEED(50);
		H_DC_MOTOR_CCW(PB1,PB2);
	}
	else if (TempReading>=30)
	{
		//H_Lcd_WriteString("Temperature is >=30");
		H_Lcd_WriteString(TempReading);
		H_DC_MOTOR_SPEED(100);
		H_DC_MOTOR_CCW(PB1,PB2);
	}

	while (1)
	{
		//H_Lcd_WriteString("jjjj");

	}

}

void passwordCheck(u8 KeyPadReading)
{
	if (KeyPadReading){
		int i;
		for (i=0; i<5;i++)
		{
			if (i ==0){ digit1 = KeyPadReading;}
			if (i ==1){ digit2 = KeyPadReading;}
			if (i ==2){ digit3 = KeyPadReading;}
			if (i ==3){ digit4 = KeyPadReading;}
			if (i ==4){ enter  = KeyPadReading;}
			switch (enter){
				case'#':
				if( digit1 == '1' && digit2 == '2' && digit3 == '3' && digit4 == '4')
				{

					H_Lcd_WriteString("Access Approved");
					_delay_ms(1000);
					H_Lcd_Clr();

					M_Dio_PinWrite(GRN_LED,HIGH);
					_delay_ms(100);
					M_Dio_PinWrite(GRN_LED,LOW);
					counter++;
					state = 1;
				}
				else{
					H_Lcd_WriteString("Access Denied");
					_delay_ms(1000);
					H_Lcd_Clr();
					M_Dio_PinWrite(RED_LED,HIGH);
					_delay_ms(1000);
					M_Dio_PinWrite(RED_LED,LOW);
					counter++;
					state = 0;
				}
				break;
				default:
				H_Lcd_WriteString("wrong");
				H_Lcd_WriteString("enter key ('#')");
				_delay_ms(1000);
				H_Lcd_Clr();
				break;
			}
		}
	}
	*/
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 ///*
 //* GccApplication1.c
 //*
 //* Created: 09/05/2022 02:20:00 م
 //* Author : dell
 //*/ 
 
///******************************************_INCLUDES_*******************************************/
///*******************************************_MACROS_********************************************/
///*****************************************_PROTOTYPES_******************************************/
///***************************************_SELECT_MC_PINS_****************************************/
///**************************************_SELECT_BLINK_TIME_**************************************/
//
//#include "Std.h"
//#include "Timer_Interface.h"
//#include "Dio.h"
////#include "Led.h"
//#include "GIE.h"
////#include "PushButton.h"
////#include "Ssd.h"
////#include "Lcd.h"
////#include "Buzzer.h"
////#include "KeyPad.h"
////#include "Adc.h"
//#define F_CPU 16000000UL
//#include <util/delay.h>
//
//
////# include "External.h"
////#include "TempSensor.h"
//
//
////void A_(void);
////
////#if (0)
////void Led_Action()
////{
////	static u16 ovf_Counts=0;
////	ovf_Counts++;
////	if(ovf_Counts==245)
////	{
////	M_Timer0_voidSetPreload(220);
////	ovf_Counts=0;
////	H_Led_Tog(RED_LED);
////	}
////}
////#endif
//
//int main(void)
//{
	////#if 0 // Software Delay 
	//////STEP1:INTITIALIZE LED
	////H_Led_Init(RED_LED);
	//////STEP2:INITIALIZE TIMER
	////M_Timer0_voidInit();
	//////STEP3:SET CALLBACK FOR OVF INTERRUPT
	////M_Timer0_voidSetCallBack(Led_Action,TIMER0_OVF_INT_ID);
	////
	////
	//////STEP4:ENABLE OVF INTERRUPT
	////M_Timer0_voidInterruptEnable(TIMER0_OVF_INT_ID);
	//////STEP5:ENABLE GLOBAL INTERRUPT
	////M_GIE_VoidEnable();
	////
	//////STEP6:SET PRELOAD FOR TIMER
	////M_Timer0_voidSetPreload(220);
    //////STEP7:START TIMER0
	////M_Timer0_voidTimerStart();
	////#endif
	//
	//M_Timer0_voidInit();
	//M_Dio_PinMode(PB3,OUTPUT); //Make Oc0 Output
	//M_Timer0_voidTimerStart();
//
	//while (1)
	//{
		//M_Timer0_voidSetPWM(20);
		//_delay_ms(2000);
		//M_Timer0_voidSetPWM(50);
		//_delay_ms(2000);
		//M_Timer0_voidSetPWM(70);
		//_delay_ms(2000);
		//M_Timer0_voidSetPWM(100);
		//_delay_ms(2000);
	//}
	//
//}
//
//