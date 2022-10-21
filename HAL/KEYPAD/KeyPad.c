﻿/*
 * KeyPad.c
 *
 * Created: 16/05/2022 10:41:10 ص
 *  Author: dell
 */ 

#include "KeyPad.h"

void H_KeyPad_Init(void)
{
	M_Dio_PinMode(KEYPAD_R0,OUTPUT);
	M_Dio_PinMode(KEYPAD_R1,OUTPUT);
	M_Dio_PinMode(KEYPAD_R2,OUTPUT);
	M_Dio_PinMode(KEYPAD_R3,OUTPUT);
	
	M_Dio_PinMode(KEYPAD_C0,INPUT);
	M_Dio_PinMode(KEYPAD_C1,INPUT);
	M_Dio_PinMode(KEYPAD_C2,INPUT);
	M_Dio_PinMode(KEYPAD_C3,INPUT);
	
	M_Dio_PinWrite(KEYPAD_R0,HIGH);
	M_Dio_PinWrite(KEYPAD_R1,HIGH);
	M_Dio_PinWrite(KEYPAD_R2,HIGH);
	M_Dio_PinWrite(KEYPAD_R3,HIGH);
}
u8   H_KeyPad_Read(void)
{
	#if   KEYPAD_MODEL      ==     MODEL_1
	u8 Local_u8_KeyPadArr [4][4] = {{'1' , '2' , '3' , 'A'},
								    {'4' , '5' , '6' , 'B'},
									{'7' , '8' , '9' , 'C'},
									{'*' , '0' , '#' , 'D'}};
	#elif KEYPAD_MODEL      ==    MODEL_2
	u8 Local_u8_KeyPadArr [4][4] = {{'1' , '2' , '3' , '+'},
									{'4' , '5' , '6' , '-'},
									{'7' , '8' , '9' , '*'},
									{'C' , '0' , '=' , '/'}};
	#endif							
	u8 Local_u8_Reading   = 1;
	u8 Local_u8_Character = 0;
	u8 Local_u8_Col = 0;
	u8 Local_u8_Row = 0;
	for (Local_u8_Row=KEYPAD_R0;Local_u8_Row<=KEYPAD_R3;Local_u8_Row++)
	{
		M_Dio_PinWrite(Local_u8_Row,LOW);
		for (Local_u8_Col=KEYPAD_C0;Local_u8_Col<=KEYPAD_C3;Local_u8_Col++)
		{
			Local_u8_Reading = M_Dio_PinRead(Local_u8_Col);
			if(Local_u8_Reading == 0)
			{
				_delay_ms(DEBOUNCING_TIME);
				if(M_Dio_PinRead(Local_u8_Col) == 0)
				{
					while(M_Dio_PinRead(Local_u8_Col) == 0);
					Local_u8_Character = Local_u8_KeyPadArr[Local_u8_Row-KEYPAD_R0][Local_u8_Col-KEYPAD_C0];
				}
			}
		}
		M_Dio_PinWrite(Local_u8_Row,HIGH);
	}
	return Local_u8_Character;
}