/*
 * USART_PRIVATE.h
 *
 * Created: 29/05/2022 01:16:15 م
 *  Author: DELL
 */ 


#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_

#define USART_UDR    *((volatile u8)* 0X2C)
#define USART_UCSRA  *((volatile u8)* 0X2B)
#define USART_UCSRB  *((volatile u8)* 0X2A)
#define USART_UCSRC  *((volatile u8)* 0X40)
#define USART_UBRRL  *((volatile u8)* 0X29)
#define USART_UBRRH  *((volatile u8)* 0X40)

#define USART_RXC		7
#define USART_TXC		6
#define USART_UDRE		5

#define USART_RXEN		4
#define USART_TXEN		3

#define USART_URSEL		7
#define USART_UMSEL		6
#define USART_UPM1		5
#define USART_UPM0		4
#define USART_USBS		3
#define USART_UCZ1		2
#define USART_UCZ0		1
#define USART_UCPOL		0

#endif /* USART_PRIVATE_H_ */