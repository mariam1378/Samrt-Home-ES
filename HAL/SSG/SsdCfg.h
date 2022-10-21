/*
 * SsdCfg.h
 *
 * Created: 11/05/2022 01:18:10 م
 *  Author: dell
 */ 


#ifndef SSDCFG_H_
#define SSDCFG_H_

/***************************************_SELECT_MC_PINS_****************************************/
#define SSD_A_PIN           PA1
#define SSD_B_PIN           PA2
#define SSD_C_PIN           PA3
#define SSD_D_PIN           PA4
#define SSD_E_PIN           PA5
#define SSD_F_PIN           PA6
#define SSD_G_PIN           PA7
					        
#define SSD_1_EN_PIN        PC6
#define SSD_2_EN_PIN        PC7
/***************************************_SELECT_SSD_MODE_***************************************/
//_OPTION [1]  ->   DECODER_MODE
//_OPTION [2]  ->   DIRECT_MODE
#define SSD_MODE    DIRECT_MODE  

#endif /* SSDCFG_H_ */