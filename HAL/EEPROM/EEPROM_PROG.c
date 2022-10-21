/*
 * EEPROM_PROG.c
 *
 * Created: 01/06/2022 01:45:51 م
 *  Author: DELL
 */ 
#include "Std.h"
#include "I2C_INTERFACE.h"
#include "EEPROM_INTERFACE.h"

void EEPROM_voidInit(void)
{
	M_I2C_INIT();
}
u8 EEPROM_voidWriteByte(u16 copu_u16add, u8 copy_u8data)
{
	//1- Send start condition
	M_I2C_VoidSendStart();
	if (M_I2C_u8GetStatus() != I2C_M_T_Start_Success)
	{
		return 0;
	}
	//2- Send address and write
	
	//3- Send data
	//4- Send stop 
}
u8 EEPROM_voidReadByte(u16 copu_u16add, u8* copy_u8dptr)
{
	
}
