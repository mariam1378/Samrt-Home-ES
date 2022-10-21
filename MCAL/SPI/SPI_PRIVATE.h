/*
 * SPI_PRIVATE.h
 *
 * Created: 30/05/2022 11:12:22 ص
 *  Author: DELL
 */ 


#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

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



#endif /* SPI_PRIVATE_H_ */