/*
 * SPI_Prog.c
 *
 * Created: 30/05/2022 11:11:28 ص
 *  Author: DELL
 */ 
#include "std.h"
#include "BitMath.h"
#include "Reg.h"
#include "SPI_PRIVATE.h"
#include "SPI_CONFIG.h"
#include "SPI_INTERFACE.h"

void M_SPI_voidMasterInit()
{
	//1- Enable SPI, Enable MSTR as master 
	SPI_SPCR = (1<<SPI_SPCR_SPIE);
	SPI_SPCR = (1<<SPI_SPCR_MSTR);
	//2- configure data order
	//3- CLK polarity
	#if (SPI_POLARITY == SPI_CLK_IDLE_LOW)
	#elif(SPI_POLARITY == SPI_CLK_IDLE_HIGH)
	#else
	#endif
	//4- CLK phase
	//5- speed mode (normal/double)
	//6- choose prescaler
}
void M_SPI_voidSlaveInit()
{
	//1- Enable SPI, Enable MSTR as slave
	SPI_SPCR  =  (1<<SPI_SPCR_SPIE);
	SPI_SPCR &= ~(1<<SPI_SPCR_MSTR);
	//2- configure data order
	//3- CLK polarity
	//4- CLK phase
	//5- speed mode (normal/double)
	//6- choose prescaler
	
}
u8 M_SPI_transfer(u8 copy_u8data)
{
	
}