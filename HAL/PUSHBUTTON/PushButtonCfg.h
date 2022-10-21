/*
 * PushButtonCfg.h
 *
 * Created: 11/05/2022 09:59:55 ص
 *  Author: dell
 */ 


#ifndef PUSHBUTTONCFG_H_
#define PUSHBUTTONCFG_H_
/***************************************_SELECT_MC_PINS_****************************************/
#define PUSH_BUTTON_1_PIN        PD2
#define PUSH_BUTTON_2_PIN        PD3
#define PUSH_BUTTON_3_PIN        PD4
#define PUSH_BUTTON_4_PIN        PD5
/**************************************_PUSH_BUTTON_MODE_***************************************/
//_OPTION [1]  ->   ACTIVE_LOW
//_OPTION [2]  ->   ACTIVE_HIGH

#define PUSH_BUTTON_MODE      ACTIVE_LOW
/***********************************_SELECT_DEBOUNCING_TIME_************************************/
#define DEBOUNCING_TIME        120
#endif /* PUSHBUTTONCFG_H_ */