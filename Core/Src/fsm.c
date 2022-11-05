/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "main.h"
#include "global.h"
#include "fsm.h"
#include "software_timer.h"
#include "button.h"
#include "display7SEG.h"

void fsm_simple_button_run() {
	switch (status) {
	case INIT:
		clear7SEG();
		if (button_R_flag==1) {
			button_R_flag=0;
			status=RES;
		}
		if (button_I_flag==1) {
			button_I_flag=0;
			status=INC;
		}
		if (button_D_flag==1) {
			button_D_flag=0;
			status=DEC;
		}
		break;
	case RES:
		counter=0;
		display7SEG(counter);
		if (button_R_flag==1) {
			button_R_flag=0;
			status=RES;
		}
		if (button_I_flag==1) {
			button_I_flag=0;
			status=INC;
			counter++;
		}
		if (button_D_flag==1) {
			button_D_flag=0;
			status=DEC;
			counter--;
		}
		setTimer3(1000);
		status=NO_BUTTON;
		break;
	case INC:
		if (counter>9) counter=0;
		display7SEG(counter);
		if (button_R_flag==1) {
			button_R_flag=0;
			status=RES;
		}
		if (button_I_flag==1) {
			if (isINCLongPressed()) {
				status=LP_INC;
				break;
			}
			button_I_flag=0;
			status=INC;
			counter++;
		}
		if (button_D_flag==1) {
			button_D_flag=0;
			status=DEC;
			counter--;
		}
		setTimer3(1000);
		status=NO_BUTTON;
		break;
	case DEC:
		if (counter<0) counter=9;
		display7SEG(counter);
		if (button_R_flag==1) {
			button_R_flag=0;
			status=RES;
		}
		if (button_I_flag==1) {
			button_I_flag=0;
			status=INC;
			counter++;
		}
		if (button_D_flag==1) {
			if (isDECLongPressed()) {
				status=LP_DEC;
				break;
			}
			button_D_flag=0;
			status=DEC;
			counter--;
		}
		setTimer3(1000);
		status=NO_BUTTON;
		break;
	case LP_INC:
		if (counter>9) counter=0;
		display7SEG(counter);
		//Het 1s tang counter
		if (timer2_flag==1 && isINCLongPressed()) {
			setTimer2(100);
			counter++;
			if (counter>9) counter=0;
		}
		if (!isINCLongPressed()) {status=INC; counter--;}
		break;
	case LP_DEC:
		if (counter<0) counter=9;
		display7SEG(counter);
		//Het 1s giam counter
		if (timer2_flag==1 && isDECLongPressed()) {
			setTimer2(100);
			counter--;
			if (counter<0) counter=9;
		}
		if (!isDECLongPressed()) {status=DEC; counter++;}
		break;
	case NO_BUTTON:
		display7SEG(counter);
		//Set timer de ve trang thai AUTO_DEC
		if (timer3_flag==1) {
			//set timer de dem lui sau 1s
			setTimer4(100);
			//clear timer3
			setTimer3(0);
			status=AUTO_DEC;
			break;
		}
		if (button_R_flag==1) {
			button_R_flag=0;
			status=RES;
		}
		if (button_I_flag==1) {
			if (isINCLongPressed()) {
				status=LP_INC;
				break;
			}
			button_I_flag=0;
			status=INC;
			counter++;
		}
		if (button_D_flag==1) {
			if (isDECLongPressed()) {
				status=LP_DEC;
				break;
			}
			button_D_flag=0;
			status=DEC;
			counter--;
		}
	case AUTO_DEC:
		display7SEG(counter);
		if (timer4_flag==1) {
			setTimer4(100);
			counter--;
			//nếu counter<=0 se ve trang thai NO_BUTTON
			if (counter<=0) {
				counter=0;
				setTimer4(0);
				status=NO_BUTTON;
			}
		}
		break;
	default:
		break;
	}
}
