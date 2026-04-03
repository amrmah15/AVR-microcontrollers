/*
 * DIO_int.h
 *
 *  Created on: Jul 1, 2024
 *      Author: midoy
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_


#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

 #define PIN_0 0
 #define PIN_1 1
 #define PIN_2 2
 #define PIN_3 3
 #define PIN_4 4
 #define PIN_5 5
 #define PIN_6 6
 #define PIN_7 7




#define PIN_OUTPUT 1
#define PIN_INPUT  0

#define PIN_HIGH  1
#define PIN_LOW  0

void SetPinDirection(u8 Port,u8 Pin,u8 Direction);
void SetPinValue(u8 Port,u8 Pin,u8 Value);






#endif /* DIO_INT_H_ */
