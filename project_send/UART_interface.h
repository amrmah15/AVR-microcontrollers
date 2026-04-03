/*
 * UART_interface.h
 *
 *  Created on: Mar 16, 2023
 *      Author: midoy
 */

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

void UART_init(void);
void UART_sendchar(u8 data);
u8 UART_recievechar(void);


#endif /* UART_INTERFACE_H_ */
