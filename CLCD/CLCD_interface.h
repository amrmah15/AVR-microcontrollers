/*********************************************************/
/***********		Author: Amgad Samir 	**************/
/***********		Layer: HAL			 	**************/
/***********		Component: CLCD 		**************/
/***********		Version: 1.00		 	**************/
/***********		Date: 14-8/2020		 	**************/
/*********************************************************/


/*Preprocessor file guard*/
#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_

void CLCD_voidSendCommand(u8 Copy_u8Command);

void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_voidInit(void);

void CLCD_voidSendsString(const char* Copy_pcstring);

void CLCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos  );

void CLCD_voidWriteSpecialCharacter(u8* Copy_pu8attern, u8 Copy_u8PatternNumber,u8 Copy_u8XPos,u8 Copy_u8YPos);


#endif
