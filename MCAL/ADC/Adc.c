/*
 * Adc.c
 *
 * Created: 5/18/2022 10:53:21 AM
 *  Author: Top Ten
 */ 

#include "Adc.h"

void M_Adc_Init(void)
{
	/***************************************_SELECT_V_REF_****************************************/
	# if V_REF == AVCC
	SetBit(ADMUX,6);
	ClrBit(ADMUX,7);
	
	# elif V_REF == AREF_PIN
	ClrBit(ADMUX,6);
	ClrBit(ADMUX,7);
	
	# elif V_REF == _2_5_VOLT
	SetBit(ADMUX,6);
	SetBit(ADMUX,7);
	#endif
	// *****end 
	
	// -> to select right adjust
	ClrBit(ADMUX,5); 
	// *****end 
	
	//to select ADC0
	ClrBit(ADMUX,0);
	ClrBit(ADMUX,1);
	ClrBit(ADMUX,2);
	ClrBit(ADMUX,3);
	ClrBit(ADMUX,4);
	// *****end 
	
/***************************************_SELECT_PRESCALER_DF_****************************************/
	#if PRESCALER_DF == 128	
	SetBit(ADCSRA,0);
	SetBit(ADCSRA,1);
	SetBit(ADCSRA,2);
	#elif PRESCALER_DF == 64
	ClrBit(ADCSRA,0);
	SetBit(ADCSRA,1);
	SetBit(ADCSRA,2);		
	#endif	
// *****end
 		
	SetBit(ADCSRA,5); //To enable auto conversion mode 
	// to enable ADC circuit ( Connect the voltage to ADC Circuit )
	SetBit(ADCSRA,7);
	// *****end 	
	
}
u16 M_Adc_Read(void)
{
	// to start conversion
	SetBit(ADCSRA,6);	//this not important if auto conversion mode ?? ???? ???? ??? ?? ? ??? ???? ??? ?? ????  
	
	
	while((GetBit(ADCSRA,4))==0);
	
	return ADC_VALUE; // when access the ADCL and ADCH read it the flag pin is cleared automatic .
	
}