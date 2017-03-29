/*
 * max.c
 *
 *  Created on: Sep 20, 2016
 *      Author: Andy Pham
 */
// Program that finds the two largest inputs
#include <stdio.h>

int main(void) { // Start main
	int counter = 0; // Counter for while loop
	int max = 0;
	int max2;

	while (counter < 10) { // Loops 10 times, gets 10 numbers
		int cpmd;
		puts("Input a number: \n"); // Prompt
		scanf("%d", &cpmd); // Input to 'cpmd'

		if (max < cpmd) { // Sets max and max2 if input is larger
			max2 = max;
			max = cpmd;
		}
		else { // Sets max2 if input is larger, but smaller than max
			if (max2 < cpmd) {
				max2 = cpmd;
			}
		}
		counter++; // Increases counter by 1
	}

	printf("The largest number is %d and the second largest is %d", max, max2); // Prints 2 largest inputs
} // End main

