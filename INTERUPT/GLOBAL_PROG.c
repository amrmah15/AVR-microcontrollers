/*
 * GLOBAL_PROG.c
 *
 *  Created on: Jul 14, 2024
 *      Author: Nourhan
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "GLOBAL_REG.h"
#include "GLOBAL_INTF.h"


void SET_GIE_STATUS(u8 status)
{
	switch (status) {
		case GIE_enable:
			SET_BIT(SREG_Reg ,I_PIN);


			break;
		case GIE_disable:
				CLR_BIT(SREG_Reg ,I_PIN);
		default:
			break;
	}

}
