#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include  "UART_interface.h"




void main(void)
{

	UART_init();
	while(1)
	{

     UART_sendchar('A');
	}
	}
