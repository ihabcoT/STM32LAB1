/*
 * Exercise6to10.c
 *
 *  Created on: Oct 30, 2024
 *      Author: MACBOOK AIR
 */

#include "Exercise6to10.h"

/* Exercise 6
void displayClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
			break;
		default:
			break;
	}
}
*/

void clearAllClock() {
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
}

void setNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
			break;
	}
}


void clearNumberOnClock(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
			break;
	}
}

void displayClock(int *hour, int *minute, int *second) {
	int hourLed = *hour % 12;
	int minuteLed = *minute / 5;
	int secondLed = *second / 5;

	if (secondLed == 0) {
		clearNumberOnClock(11);
	} else {
		clearNumberOnClock(secondLed - 1);
	}
	clearNumberOnClock(hourLed - 1);
	clearNumberOnClock(minuteLed - 1);

	setNumberOnClock(hourLed);
	setNumberOnClock(minuteLed);
	setNumberOnClock(secondLed);

	(*second)++;
	if (*second >= 60) {
		*second = 0;
		(*minute)++;
		if (*minute >= 60) {
			*minute = 0;
			(*hour)++;
			if (*hour >= 24) {
				*hour = 0;
			}
		}
	}
}


