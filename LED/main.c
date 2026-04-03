/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: Nourhan
 */
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "BIT_MATH.H"

void  main (void)
{
	LCD_VidInit();


	CLCD_VidWriteData ('A');
	CLCD_VidWriteData ('M');
	CLCD_VidWriteData ('R');


	while(1)
	{

		}


}
