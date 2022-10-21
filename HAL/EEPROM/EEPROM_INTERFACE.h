/*
 * EEPROM_INTERFACE.h
 *
 * Created: 01/06/2022 01:46:10 م
 *  Author: DELL
 */ 


#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

void EEPROM_voidInit(void);
u8 EEPROM_voidWriteByte(u16 copu_u16add, u8 copy_u8data);
u8 EEPROM_voidReadByte(u16 copu_u16add, u8* copy_u8dptr);

#endif /* EEPROM_INTERFACE_H_ */