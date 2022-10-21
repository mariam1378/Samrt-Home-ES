/*
 * Password.c
 *
 *  Created on: Jun 2, 2022
 *      Author: Mariam
 */

#include"password.h"

void passwordCheck()
{
	int counter = 0;
	char digit1 ;
	char digit2 ;
	char digit3 ;
	char digit4 ;
	char enter  ;
	char key = H_KeyPad_Read();
	  if (key){

		if(counter <5)
		{
			H_Lcd_WriteCharacter("*");
//		  lcd.setCursor(counter-1,0);
//		  H_Lcd_WriteString(key);
//		  delay(500);
//		  lcd.setCursor(counter-1,0);
//		  H_Lcd_WriteString('*');
//		  delay(500);
		 }
		if (counter ==1){ digit1 =key;}
		if (counter ==2){ digit2 =key;}
		if (counter ==3){ digit3 =key;}
		if (counter ==4){ digit4 =key;}
		if (counter ==5){ enter  =key;}
		counter++;
	  }
		if (counter == 6)
		{
		  H_Lcd_Clr();
		  switch (enter){
			case'#':
			  if( digit1 == '1' && digit2 == '2' && digit3 == '3' && digit4 == '4')
			  {

				H_Lcd_WriteString("Access Approved");
				_delay_ms(1000);
				H_Lcd_Clr();

				M_Dio_PinWrite(13,HIGH);
				_delay_ms(100);
				M_Dio_PinWrite(13,LOW);
			   }
			  else{
				H_Lcd_WriteString("Access Denied");
				_delay_ms(1000);
				H_Lcd_Clr();
				M_Dio_PinWrite(13,HIGH);
				_delay_ms(1000);
				M_Dio_PinWrite(13,LOW);
				}
			 break;
			 default:
			  H_Lcd_WriteString("wrong");
			  //H_Lcd_WriteString("enter key ('#')");
			  _delay_ms(1000);
			  H_Lcd_Clr();
			}
			digit1 = NULL;
			digit2 = NULL;
			digit3 = NULL;
			digit4 = NULL;
			enter  = NULL;
			counter = 1;
		  }
}
