/*
 * math.c
 *
 *  Created on: Sep 11, 2016
 *      Author: Andy Pham
 */

#ifndef MATH_C_
#define MATH_C_

// Mathematical program
#include <stdio.h>

int main(void) {
	int first; // First input
	int second; // Second input

	puts("Enter a positive number:"); // Prompt
	scanf("%d", &first); // Sets input to variable 'first'

	puts("Enter another positive number:"); // Prompt
	scanf("%d", &second); // Sets input to variable 'second'

	int sum = first + second; // Sum of the inputs
	printf("%d\n", sum); // Prints the sum

	int prod = first * second; // Product of the inputs
	printf("%d\n", prod); // Prints the product

	int diff = first - second; // Difference of the inputs
	printf("%d\n", diff); // Prints the difference

	int quo = first / second; // Quotient of the inputs
	printf("%d\n", quo); // Prints the quotient

	int mod = first % second; // Remainder after dividing the inputs
	printf("%d\n", mod); // Prints the remainder
}

#endif /* MATH_C_ */
