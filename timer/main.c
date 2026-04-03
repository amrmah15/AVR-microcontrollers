#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "GLOBAL_INTF.h"
#include "ADC_interface.h"
#include "Timer_interface.h"




void main(void)
{
	ADC_Init();
	TIM1_INIT();

     SetPinDirection(PORTD,PIN_5,PIN_OUTPUT);
     SetPinDirection(PORTA,PIN_0,PIN_INPUT);
	TIM1_SET_TOP_VALUE(20000);


	while(1)
	{
		TIM1_SET_A_CTC_VALUE(Mapping(1023,0,2500,500,ADC_Read(Channel_A0)));
	}

}
