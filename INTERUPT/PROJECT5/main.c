/*
 * main.c
 *
 *  Created on: Jul 14, 2024
 *      Author: midoy
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "global_int.h"
#include "EXTI_int.h"
#include "util/delay.h"

//button ----> LED ON

void func1(void);
void func2(void);
void main(void)
{
	DIO_SetPinDirection(PORT_A,PIN_1,PIN_OUTPUT);
	DIO_SetPinValue(PORT_A,PIN_1,PIN_LOW);

	//LED
	DIO_SetPinDirection(PORT_A,PIN_0,PIN_OUTPUT);
	DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);

	//button1
	DIO_SetPinDirection(PORT_D,PIN_2,PIN_INPUT);
	DIO_SetPinValue(PORT_D,PIN_2,PIN_HIGH);

	//button2
	DIO_SetPinDirection(PORT_D,PIN_3,PIN_INPUT);
	DIO_SetPinValue(PORT_D,PIN_3,PIN_HIGH);


	//INT0-->Falling edge
	EXT_INTERRUPT_INIT();
	//Call Back func
	EXTI0_CALL_BACK(func1);
	//Call Back func
	EXTI1_CALL_BACK(func2);
	// GIE Enable
	SET_GIE_STATUS(GIE_enable);
	//PIE enable
	EXT_INTERRUPT_ENABLE(EXTI_0);
	//PIE enable
	EXT_INTERRUPT_ENABLE(EXTI_1);



	while(1)
	{

		DIO_SetPinValue(PORT_A,PIN_1,PIN_HIGH);
		_delay_ms(1000);
		DIO_SetPinValue(PORT_A,PIN_1,PIN_LOW);
		_delay_ms(1000);
	}

}
void func1(void)
{
	DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
}
void func2(void)
{
	DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);

}
