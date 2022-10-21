/*
 * AdcCfg.h
 *
 * Created: 5/18/2022 10:52:54 AM
 *  Author: Top Ten
 */ 


#ifndef ADCCFG_H_
#define ADCCFG_H_
/***************************************_SELECT_V_REF_****************************************/
// option 1 -> [ AVCC		]
// option 2 -> [ AREF_PIN   ]
// option 3 -> [ _2_5_VOLT  ]

#define V_REF  AVCC

/***************************************_SELECT_PRESCALER_DF_****************************************/
// option 1 -> [ 128 ]
// option 2 -> [ 64  ]
#define PRESCALER_DF  128

#endif /* ADCCFG_H_ */