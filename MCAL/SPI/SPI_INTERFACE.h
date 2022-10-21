/*
 * SPI_INTERFACE.h
 *
 * Created: 30/05/2022 11:11:45 ص
 *  Author: DELL
 */ 


#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

void M_SPI_voidMasterInit();
void M_SPI_voidSlaveInit();
u8 M_SPI_transfer(u8 copy_u8data);


#endif /* SPI_INTERFACE_H_ */