/*
 * Exercise1.c
 *
 *  Created on: Oct 30, 2024
 *      Author: MACBOOK AIR
 */

#include "Exercise3.h"

void display7SEG(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
	}

	if (num == 1) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
	}

	if (num == 2) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 3) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 4) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 5) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 6) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 7) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
	}

	if (num == 8) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}

	if (num == 9) {
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
	}
}

void redLight() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
}

void yellowLight() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
}

void greenLight() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
}

void Run_Ex3(int *state, int *count) {
	switch (*state) {
		case 0:
			display7SEG(5 - *count);
			redLight();
			(*count)++;
			if (*count > 5) {
				*count = 0;
				*state = 1;
			}
			break;
		case 1:
			display7SEG(2 - *count);
			yellowLight();
			(*count)++;
			if (*count > 2) {
				*count = 0;
				*state = 2;
			}
			break;
		case 2:
			display7SEG(3 - *count);
			greenLight();
			(*count)++;
			if (*count > 3) {
				*count = 0;
				*state = 0;
			}
			break;
		default:
			break;
		}
}
