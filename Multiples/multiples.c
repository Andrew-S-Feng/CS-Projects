/*
 * multiples.c
 *
 *  Created on: Sep 11, 2016
 *      Author: Andy Pham
 */

// Program that checks for multiples
#include <stdio.h>

int main(void) { // start main
	int first; // First input
	int second; // Second input

	puts("Enter a number:\n"); // Prompt
	scanf("%d", &first); // Stores input in 'first'

	puts("Enter another number:\n"); // Prompt
	scanf("%d", &second); // Stores input in 'second'

	int mod = second % first; // Remainder after dividing

	if (mod > 0) { // Checks if 'first' is a multiple of 'second', prints accordingly
		printf("%d is not a multiple of %d\n", first, second);
	}
	else {
		printf("%d is a multiple of %d\n", first, second);
	}
} // end main
