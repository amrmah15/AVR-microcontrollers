/*
 * EXTI_prg.c
 *
 *  Created on: Jul 14, 2024
 *      Author: midoy
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "EXTI_reg.h"
#include "EXTI_int.h"
#include "EXTI_cfg.h"


void(*EXTI0_ptr)(void)=0;
void(*EXTI1_ptr)(void)=0;
void(*EXTI2_ptr)(void)=0;

void EXT_INTERRUPT_INIT(void)
{
#if (INT0_mode==FALLING_EDGE)
	CLR_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
#elif (INT0_mode==RISING_EDGE)
	SET_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
#elif (INT0_mode==ON_CHANGE)
	SET_BIT(MCUCR,ISC00);
	CLR_BIT(MCUCR,ISC01);
#elif (INT0_mode==LOW_LEVEL)
	CLR_BIT(MCUCR,ISC00);
	CLR_BIT(MCUCR,ISC01);
#endif


#if (INT1_mode==FALLING_EDGE)
	CLR_BIT(MCUCR,ISC10);
	SET_BIT(MCUCR,ISC11);
#elif (INT1_mode==RISING_EDGE)
	SET_BIT(MCUCR,ISC10);
	SET_BIT(MCUCR,ISC11);
#elif (INT1_mode==ON_CHANGE)
	SET_BIT(MCUCR,ISC10);
	CLR_BIT(MCUCR,ISC11);
#elif (INT1_mode==LOW_LEVEL)
	CLR_BIT(MCUCR,ISC10);
	CLR_BIT(MCUCR,ISC11);
#endif

#if (INT2_mode==FALLING_EDGE)
	CLR_BIT(MCUCSR,ISC2);
#elif (INT2_mode==RISING_EDGE)
	SET_BIT(MCUCSR,ISC2);
#endif
}
void EXT_INTERRUPT_ENABLE(u8 interrupt_number)
{
	switch (interrupt_number) {
	case EXTI_0:
		SET_BIT(GICR,INT0);
		break;
	case EXTI_1:
		SET_BIT(GICR,INT1);
		break;
	case EXTI_2:
		SET_BIT(GICR,INT2);
		break;
	default:
		break;
	}
}
void EXT_INTERRUPT_DISABLE(u8 interrupt_number)
{
	switch (interrupt_number) {
		case EXTI_0:
			CLR_BIT(GICR,INT0);
			break;
		case EXTI_1:
			CLR_BIT(GICR,INT1);
			break;
		case EXTI_2:
			CLR_BIT(GICR,INT2);
			break;
		default:
			break;
		}
}

void EXTI0_CALL_BACK(void(*ptr)(void))
{
EXTI0_ptr=ptr;
}
void EXTI1_CALL_BACK(void(*ptr)(void))
{
	EXTI1_ptr=ptr;

}
void EXTI2_CALL_BACK(void(*ptr)(void))
{
	EXTI2_ptr=ptr;

}

void __vector_1 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_1 (void){
EXTI0_ptr();
}

void __vector_2 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_2 (void){
	EXTI1_ptr();
}

void __vector_3 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_3 (void){
	EXTI2_ptr();
}

