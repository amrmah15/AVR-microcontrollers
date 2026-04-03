/*
 * global_prg.c
 *
 *  Created on: Jul 14, 2024
 *      Author: midoy
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "global_reg.h"
#include "global_int.h"


void SET_GIE_STATUS(u8 Status)
{
	switch (Status) {
	case GIE_enable :
		SET_BIT(SREG_Reg,I_PIN);
		break;
	case GIE_disable:
		CLR_BIT(SREG_Reg,I_PIN);
		break;
	default:
		break;
	}




}
