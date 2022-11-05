/*
 * display7SEG.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Acer
 */

#include "display7SEG.h"
#include "main.h"

void display7SEG(int num) {
	if (num==0) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	}
	if (num==1) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	}
	if (num==2) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==3) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==4) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==5) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==6) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==7) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
	}
	if (num==8) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
	if (num==9) {
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	}
}

void clear7SEG() {
	HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
	HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
	HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
	HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
	HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
	HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
}
