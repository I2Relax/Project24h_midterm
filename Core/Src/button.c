/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "button.h"
#include "global.h"
#include "main.h"

int KeyReg0_R = NORMAL_STATE;
int KeyReg1_R = NORMAL_STATE;
int KeyReg2_R = NORMAL_STATE;
int KeyReg3_R = NORMAL_STATE;
int button_R_flag=0;

int KeyReg0_I = NORMAL_STATE;
int KeyReg1_I = NORMAL_STATE;
int KeyReg2_I = NORMAL_STATE;
int KeyReg3_I = NORMAL_STATE;
int button_I_flag=0;

int KeyReg0_D = NORMAL_STATE;
int KeyReg1_D = NORMAL_STATE;
int KeyReg2_D = NORMAL_STATE;
int KeyReg3_D = NORMAL_STATE;
int button_D_flag=0;

int TimeOutForKeyPress_R = 300;
int TimeOutForKeyPress_I = 300;
int TimeOutForKeyPress_D = 300;

int INC_LongPress=0;
int DEC_LongPress=0;

int isINCLongPressed() {
	if (INC_LongPress==1) {
		return 1;
	}
	return 0;
}
int isDECLongPressed() {
	if (DEC_LongPress==1) {
		return 1;
	}
	return 0;
}
void subKeyProcess() {
	if (KeyReg3_R == PRESSED_STATE) {
		button_R_flag=1;
	}
	if (KeyReg3_I == PRESSED_STATE) {
		button_I_flag=1;
	}
	if (KeyReg3_D == PRESSED_STATE) {
		button_D_flag=1;
	}
}
void getKeyInput(){
	//Chong rung va nhan de cho button RESET
	KeyReg0_R = KeyReg1_R;
	KeyReg1_R = KeyReg2_R;
	KeyReg2_R = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	if ((KeyReg0_R == KeyReg1_R) && (KeyReg1_R == KeyReg2_R)) {
		if (KeyReg3_R != KeyReg2_R) {
		  KeyReg3_R = KeyReg2_R;
		  if (KeyReg3_R == PRESSED_STATE){
			TimeOutForKeyPress_R=300;
			subKeyProcess();
		  }
		}
		else {
		   TimeOutForKeyPress_R--;
			if (TimeOutForKeyPress_R == 0){
			  KeyReg3_R = NORMAL_STATE;
			}
		}
	}
	//Chong rung va nhan de cho button INC
    KeyReg0_I = KeyReg1_I;
    KeyReg1_I = KeyReg2_I;
    KeyReg2_I = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
    if ((KeyReg0_I == KeyReg1_I) && (KeyReg1_I == KeyReg2_I)) {
      if (KeyReg3_I != KeyReg2_I) {
    	INC_LongPress=0;
        KeyReg3_I = KeyReg2_I;
        if (KeyReg3_I == PRESSED_STATE){
          TimeOutForKeyPress_I=300;
          subKeyProcess();
        }
      }
      else {
         TimeOutForKeyPress_I--;
          if (TimeOutForKeyPress_I == 0){
            if (KeyReg3_I == PRESSED_STATE) {
            	subKeyProcess();
            	INC_LongPress=1;
            }
            TimeOutForKeyPress_I=300;
          }
      }
    }
	//Chong rung va nhan de cho button DEC
    KeyReg0_D = KeyReg1_D;
	KeyReg1_D = KeyReg2_D;
	KeyReg2_D = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
	if ((KeyReg0_D == KeyReg1_D) && (KeyReg1_D == KeyReg2_D)) {
	  if (KeyReg3_D != KeyReg2_D) {
		DEC_LongPress=0;
		KeyReg3_D = KeyReg2_D;
		if (KeyReg3_D == PRESSED_STATE){
		  TimeOutForKeyPress_D = 300;
		  subKeyProcess();
		}
	  }
	  else {
		 TimeOutForKeyPress_D--;
		  if (TimeOutForKeyPress_D == 0){
			  if (KeyReg3_D == PRESSED_STATE) {
				subKeyProcess();
				DEC_LongPress=1;
			  }
			  TimeOutForKeyPress_D=300;
		  }
	  }
	}
}
