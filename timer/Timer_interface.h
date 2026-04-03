/*
 * Timer_interface.h
 *
 *  Created on: Sep 30, 2022
 *      Author: aminz
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_



void TIM0_INIT(void);
void TIM0_OVFINT_ENABLE(void);
void TIM0_OVFINT_DISABLE(void);
void TIM0_SET_OVF_VALUE(u8 Value);
void TIM0_CALL_BACK_FUNC(void(*ptr)(void));
void TIM0_SET_CTC_VALUE(u8 Value);



void TIM1_INIT(void);
void TIM1_SET_TOP_VALUE(u16 Value);
void TIM1_SET_A_CTC_VALUE(u16 Value);

#endif /* TIMER_INTERFACE_H_ */
