/*
 * Recursion.c
 *
 *  Created on: Oct 12, 2016
 *      Author: Andy Pham
 */

// Models a recursive power function
#include <Stdio.h>

int power(int base, int exponent) {
	if(exponent == 1)
		return base;
	// Takes 'base' and multiples it by itself an 'exponent' amount of times
	return base * power(base, exponent - 1);
}

int main(void) {
	printf("%d\n", power(5, 5));
}
