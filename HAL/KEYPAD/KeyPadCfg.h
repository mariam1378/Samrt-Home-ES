/*
 * KeyPadCfg.h
 *
 * Created: 16/05/2022 10:41:34 ص
 *  Author: dell
 */ 


#ifndef KEYPADCFG_H_
#define KEYPADCFG_H_

/***************************************_SELECT_MC_PINS_****************************************/
#define KEYPAD_R0     PB4
#define KEYPAD_R1     PB5
#define KEYPAD_R2     PB6
#define KEYPAD_R3     PB7
#define KEYPAD_C0     PD2
#define KEYPAD_C1     PD3
#define KEYPAD_C2     PD4
#define KEYPAD_C3     PD5
/***********************************_SELECT_DEBOUNCING_TIME_************************************/
#define DEBOUNCING_TIME        120
/***********************************_SELECT_KEYPAD_MODEL_************************************/
//option1 -> [ MODEL_1 ]
//option2 -> [ MODEL_2 ]
#define KEYPAD_MODEL          MODEL_1
#endif /* KEYPADCFG_H_ */