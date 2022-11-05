/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE  GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isINCLongPressed();
int isDECLongPressed();

void getKeyInput();
extern int button_R_flag;
extern int button_I_flag;
extern int button_D_flag;

#endif /* INC_BUTTON_H_ */
