#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include  "UART_interface.h"




void main(void)
{
SetPinDirection(PORTA,PIN_0,PIN_OUTPUT);
SetPinValue(PORTA,PIN_0,PIN_LOW);

	UART_init();
	u8 data=0;
	while(1)
	{

    data=UART_recievechar();

    if (data=='A')
    {

    	SetPinValue(PORTA,PIN_0,PIN_HIGH);
    }

	}
	}
