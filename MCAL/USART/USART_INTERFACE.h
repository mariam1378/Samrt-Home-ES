/*
 * USART_INTERFACE.h
 *
 * Created: 29/05/2022 11:41:00 ص
 *  Author: dell
 */ 


#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_
/*******************************************_MACROS_*********************************************/

/******************************************_INCLUDES_*******************************************/
#include "BitMath.h"
#include "Std.h"
#include "Reg.h"
/*****************************************_PROTOTYPES_******************************************/

void M_USART_voidInit(void);
void M_USART_sendChar(u8 copy_u8Data);
void M_USART_recieveChar(u8* copy_u8ptr);
void M_USART_sendString(u8* str);
#endif /* USART_INTERFACE_H_ */