/*
 * Lcd.h
 *
 * Created: 12/05/2022 11:06:39 ص
 *  Author: dell
 */ 


#ifndef LCD_H_
#define LCD_H_

/******************************************_INCLUDES_*******************************************/
#include "LcdCfg.h"
#include "Reg.h"
#include "Dio.h"
#define F_CPU 16000000UL
#include <util/delay.h>
/*******************************************_MACROS_********************************************/
#define _8_BIT_MODE                1
#define _4_BIT_MODE                2
#define NULL_                    '\0'
#define LCD_CLR                  0x01
#define LCD_RETURN_HOME          0x02
#define LCD_DIS_ON_CUR_OFF       0x0C
#define _8_BIT_MODE_COMMAND      0x38
/*****************************************_PROTOTYPES_******************************************/
void H_Lcd_Init(void);
void H_Lcd_WriteCharacter(u8);
void H_Lcd_WriteCommand(u8);
void H_Lcd_WriteString(u8*);
void H_Lcd_WriteNum(s32);
void H_Lcd_Clr(void);
void H_Lcd_GoTo(u8,u8);
void H_Lcd_ClockDisplay(u8,u8,u8);
#endif /* LCD_H_ */