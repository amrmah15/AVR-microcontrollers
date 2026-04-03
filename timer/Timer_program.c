#include "STD_Types.h"
#include "BIT_MATH.h"
#include "Timer_register.h"
#include "Timer_interface.h"

void(*TIM0_OVF_PTR)(void)=0;


void TIM0_INIT(void)
{
	//CTC mode
	CLR_BIT(TCCR0_REG,WGM00);
	SET_BIT(TCCR0_REG,WGM01);

	//prescaler-->8
	CLR_BIT(TCCR0_REG,CS00);
	SET_BIT(TCCR0_REG,CS01);
	CLR_BIT(TCCR0_REG,CS02);

	//OC0 --->toggle by hw every Compare match
	SET_BIT(TCCR0_REG,4);
	CLR_BIT(TCCR0_REG,5);

}
void TIM0_OVFINT_ENABLE(void)
{
	SET_BIT(TIMSK_REG,TOIE0);
}
void TIM0_OVFINT_DISABLE(void)
{
	CLR_BIT(TIMSK_REG,TOIE0);

}

void TIM0_SET_OVF_VALUE(u8 Value)
{
	TCNT0_REG=Value;
}

void TIM0_SET_CTC_VALUE(u8 Value)
{
		OCR0_REG=Value;
}

void TIM0_CALL_BACK_FUNC(void(*ptr)(void))
{
	TIM0_OVF_PTR=ptr;
}


void TIM1_INIT(void)
{
   //mode -->14
	CLR_BIT(TCCR1A_Register,0);
	SET_BIT(TCCR1A_Register,1);
	SET_BIT(TCCR1B_Register,3);
	SET_BIT(TCCR1B_Register,4);


 //Prescaler -->8
	CLR_BIT(TCCR1B_Register,0);
	SET_BIT(TCCR1B_Register,1);
	CLR_BIT(TCCR1B_Register,2);

	//OC1A -->clear on compare
	CLR_BIT(TCCR1A_Register,6);
	SET_BIT(TCCR1A_Register,7);

}

void TIM1_SET_TOP_VALUE(u16 Value)
{
    ICR1_Register=Value;
}

void TIM1_SET_A_CTC_VALUE(u16 Value)
{
	OCR1A_Register=Value;
}








void __vector_11 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_11 (void)
{
TIM0_OVF_PTR();

}



