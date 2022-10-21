/*
 * GIE.c
 *
 * Created: 5/24/2022 9:58:28 AM
 *  Author: Lina Habib
 */ 
#include "GIE.h"

void M_GIE_VoidEnable(void)
{
	//SetBit(SREG,7);
	                                 /*****************_assembly_****************/
	asm("SEI");
	
}

void M_GIE_VoidDisable(void)
{
	//ClrBit(SREG,7);
									/*****************_assembly_****************/
	asm("CLI");
}