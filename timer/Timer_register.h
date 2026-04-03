/*
 * Timer_register.h
 *
 *  Created on: Sep 30, 2022
 *      Author: aminz
 */

#ifndef TIMER_REGISTER_H_
#define TIMER_REGISTER_H_


#define TCNT0_REG  *(volatile u8*)(0x52)
#define TCCR0_REG  *(volatile u8*)(0x53)
#define TIMSK_REG  *(volatile u8*)(0x59)
#define OCR0_REG  *(volatile u8*)(0x5C)


#define TCCR1A_Register  *((volatile u8*)0x4F)
#define TCCR1B_Register  *((volatile u8*)0x4E)
#define TCNT1_Register  *((volatile u16*)0x4C)
#define OCR1A_Register  *((volatile u16*)0x4A)
#define OCR1B_Register  *((volatile u16*)0x48)
#define ICR1_Register  *((volatile u16*)0x46)


#define TOIE0  0

#define WGM00  6
#define WGM01  3

#define  CS02  2
#define  CS01  1
#define  CS00  0




#endif /* TIMER_REGISTER_H_ */
