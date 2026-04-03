/*
 * EXTIN_reg.h
 *
 *  Created on: Jul 14, 2024
 *      Author: Nourhan
 */

#ifndef EXTIN_REG_H_
#define EXTIN_REG_H_

#define  MCUCR   *((volatile u8 *) 0x55)
#define  MCUCSR   *((volatile u8 *)0x54)
#define  GICR    *((volatile u8 *)0x5B)
#define  GIFR  *((volatile u8 *)0x5A)
#define  SREG   *((volatile u8 *) 0x5f)


#define ISC11 3
#define ISC10 2
#define ISC01 1
#define ISC00 0

#define INTF1  7
#define INTF0  6
#define INTF2  5


#define  INT1   7
#define  INT0   6
#define  INT2   5

#define   ISC2  6

#endif /* EXTIN_REG_H_ */
