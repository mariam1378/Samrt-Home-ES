/*
 * BitMath.h
 *
 * Created: 09/05/2022 02:20:23 م
 *  Author: dell
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define SetBit(reg,bit)   reg|=(1<<bit)
#define ClrBit(reg,bit)   reg&= ~(1<<bit)
#define TogBit(reg,bit)   reg^=(1<<bit)
#define GetBit(reg,bit)   (1&(reg>>bit))

#endif /* BITMATH_H_ */