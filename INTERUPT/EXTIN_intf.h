/*
 * EXTIN_intf.h
 *
 *  Created on: Jul 14, 2024
 *      Author: Nourhan
 */

#ifndef EXTIN_INTF_H_
#define EXTIN_INTF_H_

#define RISING_EDGE  0
#define FULLING_EDGE 1
#define ON_CHANGE    2
#define LOW_LEVEL    3

#define EXTI_0    0
#define EXTI_1    1
#define EXTI_2    2


void EXT_INTERRUPT_INIT(void);
void EXT_INTERRUPT_ENABLE(u8 interrupt_number);
void EXT_INTERRUPT_DISABLE(u8 interrupt_number);

#endif /* EXTIN_INTF_H_ */
