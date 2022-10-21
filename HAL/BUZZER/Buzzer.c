/*
 * Buzzer.c
 *
 * Created: 15/05/2022 11:23:00 ص
 *  Author: dell
 */ 
#include "Buzzer.h"

void H_Buzzer_Init(void)
{
	M_Dio_PinMode(BUZZER_PIN,OUTPUT);
}
void H_Buzzer_On(void)
{
	M_Dio_PinWrite(BUZZER_PIN,HIGH);
}
void H_Buzzer_Off(void)
{
	M_Dio_PinWrite(BUZZER_PIN,LOW);
}
void H_Buzzer_Tog(void)
{
	M_Dio_PinTog(BUZZER_PIN);
}
void H_Buzzer_Once(void)
{
	M_Dio_PinWrite(BUZZER_PIN,HIGH);
	_delay_ms(BUZZER_TIME_ON);
	M_Dio_PinWrite(BUZZER_PIN,LOW);
}
void H_Buzzer_Twice(void)
{
	H_Buzzer_Once();
	_delay_ms(BUZZER_TIME_OFF);
	H_Buzzer_Once();
}
void H_Buzzer_Triple(void)
{
	H_Buzzer_Once();
	_delay_ms(BUZZER_TIME_OFF);
	H_Buzzer_Once();
	_delay_ms(BUZZER_TIME_OFF);
	H_Buzzer_Once();
}
void H_Buzzer_OnceLong(void)
{
	M_Dio_PinWrite(BUZZER_PIN,HIGH);
	_delay_ms(BUZZER_TIME_ON_LONG);
	M_Dio_PinWrite(BUZZER_PIN,LOW);	
}
