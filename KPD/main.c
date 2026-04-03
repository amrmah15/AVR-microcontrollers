#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_int.h"

void main(void)
{
	KPD_init();


	SetPinDirection(PORTB,PIN_0,PORT_OUT);
	SetPinValue(PORTB,PIN_0,PIN_LOW);
	SetPinDirection(PORTB,PIN_1,PORT_OUT);
		SetPinValue(PORTB,PIN_1,PIN_LOW);

	while(1)
	{
		u8 x=KPD_Getkey();
switch (x) {
	case 3:
		SetPinValue(PORTB,PIN_0,PIN_HIGH);
		SetPinValue(PORTB,PIN_1,PIN_LOW);
		break;
	case 4:
		SetPinValue(PORTB,PIN_0,PIN_LOW);
				SetPinValue(PORTB,PIN_1,PIN_HIGH);
			break;
	default:
		break;
}
	}
}
