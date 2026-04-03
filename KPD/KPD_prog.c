#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "KPD_intf.h"
#include "KPD_conf.h"
#include "util/delay.h"

u8 arr[4][4]=
		 {
				 {1,2,3,4},
				 {5,6,7,8},
				 {9,10,11,12},
				 {13,14,15,16}

		 };


void KPD_init(void)
{
	u8 i=0;

	for (i=ROW_START;i<=ROW_EVD ; i++)
	{
    SetPinDirection(KPD_PORT,i,PIN_INPUT);
    SetPinValue(KPD_PORT,i,PIN_HIGH);

	}
	for (i=COLUM_START;i<=COLUM_END ; i++)
		{
	    SetPinDirection(KPD_PORT,i,PIN_OUTPUT);
	    SetPinValue(KPD_PORT,i,PIN_HIGH);

		}
	}

u8 KPD_Getkey(void)
{
u8 i,k,j;
u8 Result;
u8 KEY=0;
u8 Exist_Flag=0;


for (i = 0; i < 4; i++)
{
	for ( k= 0; k < 4; k++)
	{
     SetPinValue(KPD_PORT,COLUM_START+k,PIN_HIGH);
	}
	SetPinValue(KPD_PORT,COLUM_START+i,PIN_LOW);
	for ( j= 0; j < 4; j++)
	{
		Result=DIO_u8GetPinValue(KPD_PORT,(ROW_START+j));
		_delay_ms(20);
		if(Result==0)
		{
			 KEY=arr[j][i];
			 Exist_Flag=1;
			 break;

		}
	}
	if(Exist_Flag==1)
	{
		 break;
	}
}
return KEY;

	}

