/*
 * LcdCfg.h
 *
 * Created: 12/05/2022 11:06:51 ص
 *  Author: dell
 */ 


#ifndef LCDCFG_H_
#define LCDCFG_H_
/***************************************_SELECT_LCD_MODE_****************************************/
// option 1 -> [ _4_BIT_MODE ]
// option 2 -> [ _8_BIT_MODE ]
#define LCD_MODE         _4_BIT_MODE
/***************************************_SELECT_MC_PINS_****************************************/
#define LCD_DATA_PORT       PORTA
#define LCD_DATA_PIN_7       PA6
#define LCD_DATA_PIN_6       PA5
#define LCD_DATA_PIN_5       PA4
#define LCD_DATA_PIN_4       PA3
#define LCD_EN_PIN           PA2
#define LCD_RS_PIN           PA1

#endif /* LCDCFG_H_ */