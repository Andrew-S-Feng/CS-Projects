/*
 * Recursion.c
 *
 *  Created on: Oct 12, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

unsigned long long int factorial(unsigned int num);

int main(void) {
	printf("The factorial equals %llu", factorial(10));
}

unsigned long long int factorial(unsigned int num) {
	if(num <= 1) // Base case
		return 1;
	printf("The number is %u, the recursive parameter is %u\n", num, num - 1);
	// Recursively multiples 'num' with the number below it
	return (num * factorial(num - 1));
}
