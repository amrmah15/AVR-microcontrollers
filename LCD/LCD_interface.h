/*
 * LCD_interface.h
 *
 *  Created on: Feb 4, 2023
 *      Author: midoy
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

/***************************************************************************************/
/********************************** Fucntion Definition ********************************/
/***************************************************************************************/

/***************************************************************************************/
/********************************** Macros *********************************************/
/***************************************************************************************/

#define lcd_Clear           0x01          /* replace all characters with ASCII 'space'                       */
#define lcd_Home            0x02          /* return cursor to first position on first line                   */
#define lcd_EntryMode       0x06          // shift cursor from left to right on read/write
#define lcd_DisplayOff      0x08          // turn display off
#define lcd_DisplayOn       0x0C          // display on, cursor off, don't blink character
#define lcd_FunctionReset   0x30          // reset the LCD
#define lcd_FunctionSet8bit 0x38          // 8-bit data, 2-line display, 5 x 7 font
#define lcd_SetCursor       0x80          // set cursor position
#define   LIN_1   0
#define   LIN_2   1
/***************************************************************************************/
/********************************** Fucntion Definition ********************************/
/***************************************************************************************/


void LCD_vidInit(void);
void LCD_vidSendCommand(u8 u8CmdCpy);
void LCD_vidWriteCharctr(u8 u8DataCpy);
void LCD_vidWriteString (u8* ptr);
void Gotoxy (u8 Y,u8 X);

#endif /* LCD_INTERFACE_H_ */
