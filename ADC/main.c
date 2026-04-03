#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_int.h"

#include "ADC_interface.h"



void main (void)
{
  SetportDirection(PORTB,PORT_OUT);
  SetportValue(PORTB,0);
  SetPinDirection(PORTA,PIN_0,PIN_INPUT);


	ADC_Init ();
	u16 reading=0;
	u32 millivolt=0;

	while(1)
	{
		reading=ADC_Read(Channel_A0);
		millivolt=(((u32)reading*5000)/1024);

	if(millivolt>=0 && millivolt<700)
	{
		SetPinValue(PORTB,PIN_0,PIN_HIGH);
		SetPinValue(PORTB,PIN_1,PIN_LOW);
		SetPinValue(PORTB,PIN_2,PIN_LOW);
	}
	else if (millivolt<700 && millivolt>=500)
	{
		SetPinValue(PORTB,PIN_0,PIN_LOW);
				SetPinValue(PORTB,PIN_1,PIN_HIGH);
				SetPinValue(PORTB,PIN_2,PIN_LOW);
	}
	else
	{
		SetPinValue(PORTB,PIN_0,PIN_LOW);
						SetPinValue(PORTB,PIN_1,PIN_LOW);
						SetPinValue(PORTB,PIN_2,PIN_HIGH);
	}
}
}
