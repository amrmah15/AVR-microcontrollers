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
void SetportDirection(u8 Port,u8 Direction)
{
	switch (Port) {
		case PORTA:
			if( Direction== PORT_OUT )
			{
				DDRA_Register =0XFF;
			}
			else if( Direction== PORT_IN )
			{
				DDRA_Register =0;
			}
			break;
			case PORTB:
			if( Direction== PORT_OUT )
			{
				DDRB_Register =0XFF;
			}
			else if( Direction== PORT_IN )
			{
				DDRB_Register =0;
			}
			break;
			case PORTC:
			if( Direction== PORT_OUT )
			{
				DDRC_Register =0XFF;
			}
			else if( Direction== PORT_IN )
			{
				DDRC_Register =0;
			}
			break;
			case PORTD:
			if( Direction== PORT_OUT )
			{
				DDRD_Register =0XFF;
			}
			else if( Direction== PORT_IN )
			{
				DDRD_Register =0;
			}
				break;
		default:
			break;
	}
	}
void SetportValue(u8 Port,u8 Value)
{
	switch (Port) {
		case PORTA:
			PORTA_Register=Value;
			break;
			case PORTB:
			PORTB_Register=Value;
			break;
			case PORTC:
			PORTC_Register=Value;
			break;
			case PORTD:
			PORTD_Register=Value;
			break;
				default:
			break;
	}
}
u8 DIO_u8GetPinValue(u8 port,u8 pin_Num)
{
	u8 Result;

	switch (port)
	 {
		case PORTA: Result= GET_BIT(PINA_Register,pin_Num); break;
		case PORTB: Result= GET_BIT(PINB_Register,pin_Num); break;
		case PORTC: Result= GET_BIT(PINC_Register,pin_Num); break;
		case PORTD: Result= GET_BIT(PIND_Register,pin_Num); break;
		default:                                 break;
	 }
	 return Result;
}



