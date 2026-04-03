/*
 * UART_program.c
 *
 *  Created on: Mar 16, 2023
 *      Author: midoy
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART_register.h"
#include "UART_interface.h"


void UART_init(void)
{
	u8 local_variable=0; //0b 0000 0000
	SET_BIT(local_variable,URSEL); //0b 1000 0000
	CLR_BIT(local_variable,UMSEL); //0b 1000 0000
	CLR_BIT(local_variable,UPM0); //0b 1000 0000
	CLR_BIT(local_variable,UPM1); //0b 1000 0000
	CLR_BIT(local_variable,USBS); //0b 1000 0000
	SET_BIT(local_variable,UCSZ0); //0b 1000 0001
	SET_BIT(local_variable,UCSZ1); //
	UCSRC=local_variable;
	CLR_BIT(UCSRB,UCSZ2);

	UBRRL=51;

	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);
}
void UART_sendchar(u8 data)
{
	while(!GET_BIT(UCSRA,UDRE));
	UDR=data;
}
u8 UART_recievechar(void)
{
	while(!GET_BIT(UCSRA,RXC));
	return UDR;

}








