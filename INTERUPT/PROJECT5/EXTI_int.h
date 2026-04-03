/*
 * EXTI_int.h
 *
 *  Created on: Jul 14, 2024
 *      Author: midoy
 */

#ifndef EXTI_INT_H_
#define EXTI_INT_H_

#define RISING_EDGE 0
#define FALLING_EDGE 1
#define ON_CHANGE 2
#define LOW_LEVEL 3

#define EXTI_0 0
#define EXTI_1 1
#define EXTI_2 2



void EXT_INTERRUPT_INIT(void);
void EXT_INTERRUPT_ENABLE(u8 interrupt_number);
void EXT_INTERRUPT_DISABLE(u8 interrupt_number);
void EXTI0_CALL_BACK(void(*ptr)(void));
void EXTI1_CALL_BACK(void(*ptr)(void));
void EXTI2_CALL_BACK(void(*ptr)(void));

#endif /* EXTI_INT_H_ */
