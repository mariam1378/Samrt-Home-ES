/*
 * Ssd.c
 *
 * Created: 11/05/2022 01:17:49 م
 *  Author: dell
 */ 

#include "Ssd.h"
static void H_Ssd_Display(u8,u8);

void H_Ssd_Init(void)
{
	#if   SSD_MODE     ==     DECODER_MODE
	M_Dio_PinMode(SSD_A_PIN,OUTPUT);
	M_Dio_PinMode(SSD_B_PIN,OUTPUT);
	M_Dio_PinMode(SSD_C_PIN,OUTPUT);
	M_Dio_PinMode(SSD_D_PIN,OUTPUT);
	M_Dio_PinMode(SSD_1_EN_PIN,OUTPUT);
	M_Dio_PinMode(SSD_2_EN_PIN,OUTPUT);
	#elif SSD_MODE     ==     DIRECT_MODE
	M_Dio_PinMode(SSD_A_PIN,OUTPUT);
	M_Dio_PinMode(SSD_B_PIN,OUTPUT);
	M_Dio_PinMode(SSD_C_PIN,OUTPUT);
	M_Dio_PinMode(SSD_D_PIN,OUTPUT);
	M_Dio_PinMode(SSD_E_PIN,OUTPUT);
	M_Dio_PinMode(SSD_F_PIN,OUTPUT);
	M_Dio_PinMode(SSD_G_PIN,OUTPUT);
	M_Dio_PinMode(SSD_1_EN_PIN,OUTPUT);
	M_Dio_PinMode(SSD_2_EN_PIN,OUTPUT);	
	#endif
}
static void H_Ssd_Display(u8 Local_u8_Ssd, u8 Local_u8_Num)
{
	switch(Local_u8_Ssd)
	{
		case 1:
		M_Dio_PinWrite(SSD_1_EN_PIN,HIGH);
		M_Dio_PinWrite(SSD_2_EN_PIN,LOW);
		break;
		case 2:
		M_Dio_PinWrite(SSD_1_EN_PIN,LOW);
		M_Dio_PinWrite(SSD_2_EN_PIN,HIGH);
		break;
		default:
		break;
	}
	#if   SSD_MODE     ==     DECODER_MODE
	switch(Local_u8_Num)
	{
		case 0:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 1:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 2:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 3:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 4:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 5:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 6:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 7:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		break;
		case 8:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		break;
		case 9:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		break;
		default:
		break;	
	}
	#elif SSD_MODE     ==     DIRECT_MODE
	switch(Local_u8_Num)
	{
		case 0:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,HIGH);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,LOW);
		break;
		case 1:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,LOW);
		M_Dio_PinWrite(SSD_G_PIN,LOW);
		break;
		case 2:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,LOW);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,HIGH);
		M_Dio_PinWrite(SSD_F_PIN,LOW);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 3:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,LOW);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 4:
		M_Dio_PinWrite(SSD_A_PIN,LOW);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 5:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 6:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,LOW);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,HIGH);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 7:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,LOW);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,LOW);
		M_Dio_PinWrite(SSD_G_PIN,LOW);
		break;
		case 8:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,HIGH);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		case 9:
		M_Dio_PinWrite(SSD_A_PIN,HIGH);
		M_Dio_PinWrite(SSD_B_PIN,HIGH);
		M_Dio_PinWrite(SSD_C_PIN,HIGH);
		M_Dio_PinWrite(SSD_D_PIN,HIGH);
		M_Dio_PinWrite(SSD_E_PIN,LOW);
		M_Dio_PinWrite(SSD_F_PIN,HIGH);
		M_Dio_PinWrite(SSD_G_PIN,HIGH);
		break;
		default:
		break;
	}
	#endif
}
void H_Ssd_WriteNum(u8 Local_u8_Num)
{
	u8 Local_u8_Units = Local_u8_Num % 10;
	u8 Local_u8_Tens  = Local_u8_Num / 10;
	u16 Local_u16_Counter = 0;
	for (Local_u16_Counter=0;Local_u16_Counter<500;Local_u16_Counter++)
	{
		H_Ssd_Display(1,Local_u8_Units);
		_delay_ms(1);
		H_Ssd_Display(2,Local_u8_Tens);
		_delay_ms(1);
	}	
	M_Dio_PinWrite(SSD_1_EN_PIN,LOW);
	M_Dio_PinWrite(SSD_2_EN_PIN,LOW);
}
void H_Ssd_CountUp(u8 Local_u8_Num)
{
	u8 Local_u8_Counter = 0;
	for(Local_u8_Counter=0;Local_u8_Counter<=Local_u8_Num;Local_u8_Counter++)
	{
		H_Ssd_WriteNum(Local_u8_Counter);
	}
}
void H_Ssd_CountDown(s8 Local_u8_Num)
{
	for(;Local_u8_Num>=0;Local_u8_Num--)
	{
		H_Ssd_WriteNum(Local_u8_Num);
	}	
}
void H_Ssd_Disable(void)
{
	M_Dio_PinWrite(SSD_1_EN_PIN,LOW);
	M_Dio_PinWrite(SSD_2_EN_PIN,LOW);
}