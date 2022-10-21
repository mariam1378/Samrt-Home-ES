/*
 * Reg.h
 *
 * Created: 10/05/2022 10:30:45 ص
 *  Author: dell
 */ 


#ifndef REG_H_
#define REG_H_

#include "Std.h"
#define PINA     *(volatile u8*)0x39
#define DDRA     *(volatile u8*)0x3A
#define PORTA    *(volatile u8*)0x3B
#define PINB     *(volatile u8*)0x36
#define DDRB     *(volatile u8*)0x37
#define PORTB    *(volatile u8*)0x38
#define PINC     *(volatile u8*)0x33
#define DDRC     *(volatile u8*)0x34
#define PORTC    *(volatile u8*)0x35
#define PIND     *(volatile u8*)0x30
#define DDRD     *(volatile u8*)0x31
#define PORTD    *(volatile u8*)0x32
#define NULL     '\0'
/***************************************************STATUS_REGISTER***********************************************************/
#define SREG        *(volatile u8*)0x5F
/***************************************************EXTERNAL_INTERRUPT_REG***********************************************************/

#define GICR	     *(volatile u8*)0x5B
#define MCUCR	     *(volatile u8*)0x55
/***************************************************ADC_REG***********************************************************/
#define ADMUX		 *(volatile u8*)0x27
#define ADCSRA		 *(volatile u8*)0x26
#define ADCL		 *(volatile u16*)0x24
#define ADCH		 *(volatile u16*)0x25
#define ADC_VALUE	 *(volatile u16*)0x24
/***************************************************Timer_REG***********************************************************/
#define TIMER0_TCCR0		 (*(volatile u8*) 0x53)
    #define TIMER0_FOC0		7		
    #define TIMER0_WGM00	6
	#define TIMER0_COM01	5
    #define TIMER0_COM00	4
    #define TIMER0_WGM01	3
    #define TIMER0_CS02		2
    #define TIMER0_CS01		1
    #define TIMER0_CS00		0

#define TIMER0_TCNT0		 (*(volatile u8*) 0x52)

#define TIMER0_OCR0		 (*(volatile u8*) 0x5C)

#define TIMER0_TIMSK		 (*(volatile u8*) 0x59)
	#define TIMER0_TOIE0	0           // OVF INTERRUPT ENABLE 
	#define TIMER0_OCIE0	1			//OUTPUT COMPARE INTERRUPT
	#define TIMER_TICIE1    5

	
#define TIMER0_TIFR		 (*(volatile u8*) 0x58)
	#define TIMER0_OCF0	1
	#define TIMER0_TOV0	0

#define TIMER0_SFIOR		 (*(volatile u8*)0x50)
	#define TIMER0_PSR10	0
	
/***************************************************USART_REG***********************************************************/
#define USART_UDR		*((volatile u8)* 0X2C)
#define USART_UCSRA		*((volatile u8)* 0X2B)
#define USART_UCSRB		*((volatile u8)* 0X2A)
#define USART_UCSRC		*((volatile u8)* 0X40)
#define USART_UBRRL		*((volatile u8)* 0X29)
#define USART_UBRRH		*((volatile u8)* 0X40)

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

/***************************************************SPI_REG***********************************************************/
#define  SPI_SPCR  *((volatile u8)* 0X2D)
#define	 SPI_SPSR  *((volatile u8)* 0X2E)
#define	 SPI_SPDR  *((volatile u8)* 0X2F)

#define	 SPI_SPCR_SPIE			7	//INTERRUPT ENABLE
#define	 SPI_SPCR_SPE			6	//SPI ENABLE
#define	 SPI_SPCR_DORD			5	//DATA ORDER
#define	 SPI_SPCR_MSTR			4	//MASTER OR SLAVE
#define	 SPI_SPCR_CPOL			3	//CLOCK POLARITY
#define	 SPI_SPCR_CPHA			2	//CLOCK PHASE
#define	 SPI_SPCR_SPR1			1	//PRESCALLER
#define	 SPI_SPCR_SPR0			0	//PRESCALLER

#define	 SPI_SPSR_SPIF			7	//
#define	 SPI_SPSR_WCOL			6	//
#define	 SPI_SPSR_SPI2X			0	//

#define	 SPI_SPDR_MSB			7	//
#define	 SPI_SPDR_LSB			0	//
#endif /* REG_H_ */