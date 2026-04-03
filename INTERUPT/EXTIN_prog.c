#include "STD_Types.h"
#include "BIT_MATH.h"
#include "EXTIN_reg.h"
#include "EXTIN_intf.h"
#include "EXTIN_conf.h"


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

