#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "LCD_interface.h"
#include "LCD_config.h"




void LCD_vidInit(void)
{
	SetportDirection(LCD_DATAPORT ,PORT_OUT);
	SetPinDirection(LCD_CTRPORT,LCD_RSPIN,PIN_OUTPUT);
	SetPinDirection(LCD_CTRPORT,LCD_RWPIN,PIN_OUTPUT);
	SetPinDirection(LCD_CTRPORT,LCD_EPIN,PIN_OUTPUT);

   _delay_ms(30);
   LCD_vidSendCommand(lcd_Home);
   _delay_ms(5);
   LCD_vidSendCommand(lcd_FunctionSet8bit);
   _delay_ms(5);
   LCD_vidSendCommand(lcd_DisplayOn);
   _delay_ms(5);
   LCD_vidSendCommand(lcd_Clear);
   _delay_ms(5);
   LCD_vidSendCommand(lcd_EntryMode);
   _delay_ms(5);


}




void LCD_vidSendCommand(u8 u8CmdCpy)
{

	 SetPinValue(LCD_CTRPORT,LCD_RSPIN,PIN_LOW);
	 SetPinValue(LCD_CTRPORT,LCD_RWPIN,PIN_LOW);
	 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_LOW);
	 SetportValue(LCD_DATAPORT,u8CmdCpy);
	 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_HIGH);
	 _delay_ms(5);
	 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_LOW);

	}
void LCD_vidWriteCharctr(u8 u8DataCpy)
{
	     SetPinValue(LCD_CTRPORT,LCD_RSPIN,PIN_HIGH);
		 SetPinValue(LCD_CTRPORT,LCD_RWPIN,PIN_LOW);
		 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_LOW);
		 SetportValue(LCD_DATAPORT,u8DataCpy);
		 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_HIGH);
		 _delay_ms(5);
		 SetPinValue(LCD_CTRPORT,LCD_EPIN,PIN_LOW);
	}
void LCD_vidWriteString (u8* ptr)
{
	u8 i=0;
	while(ptr[i]!='\0')
	{
		LCD_vidWriteCharctr(ptr[i]);
		i++;

	}

	}
void Gotoxy (u8 Y,u8 X)
{
	switch (Y) {
		case LIN_1:
			LCD_vidSendCommand(128+X);

			break;
		case LIN_2:
			LCD_vidSendCommand(192+X);

			break;
		default:
			break;
	}
	}

