#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_reg.h"
#include "DIO_int.h"

void SetPinDirection(u8 Port,u8 Pin,u8 Direction)
{
	switch (Port) {
	case PORTA:
		if(Direction == PIN_OUTPUT )
		{
			SET_BIT(DDRA_Register,Pin);
		}
		else if(Direction== PIN_INPUT )
		{
			CLR_BIT(DDRA_Register,Pin);
		}
		break;
	case PORTB:
		if(Direction == PIN_OUTPUT )
		{
			SET_BIT(DDRB_Register,Pin);
		}
		else if(Direction== PIN_INPUT )
		{
			CLR_BIT(DDRB_Register,Pin);
		}
		break;
	case PORTC:
		if(Direction == PIN_OUTPUT )
		{
			SET_BIT(DDRC_Register,Pin);
		}
		else if(Direction== PIN_INPUT )
		{
			CLR_BIT(DDRC_Register,Pin);
		}
		break;
	case PORTD:
		if(Direction == PIN_OUTPUT )
		{
			SET_BIT(DDRD_Register,Pin);
		}
		else if(Direction== PIN_INPUT )
		{
			CLR_BIT(DDRD_Register,Pin);
		}
		break;
	default:
		break;
	}







}
void SetPinValue(u8 Port,u8 Pin,u8 Value)
{
	switch (Port) {
		case PORTA:
			if(Value == PIN_HIGH )
			{
				SET_BIT(PORTA_Register,Pin);
			}
			else if(Value== PIN_LOW )
			{
				CLR_BIT(PORTA_Register,Pin);
			}
			break;
		case PORTB:
			if(Value == PIN_HIGH )
			{
				SET_BIT(PORTB_Register,Pin);
			}
			else if(Value== PIN_LOW )
			{
				CLR_BIT(PORTB_Register,Pin);
			}
			break;
		case PORTC:
			if(Value == PIN_HIGH )
			{
				SET_BIT(PORTC_Register,Pin);
			}
			else if(Value== PIN_LOW )
			{
				CLR_BIT(PORTC_Register,Pin);
			}
			break;
		case PORTD:
			if(Value == PIN_HIGH )
			{
				SET_BIT(PORTD_Register,Pin);
			}
			else if(Value== PIN_LOW )
			{
				CLR_BIT(PORTD_Register,Pin);
			}
			break;
		default:
			break;
}
}



