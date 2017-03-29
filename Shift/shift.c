/*
 * shift.c
 *
 *  Created on: Nov 28, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

unsigned int power(int number, int pow);

int main(void) {
	unsigned int x = 0;
	x = power(5, 3);
	printf("The result is, \nas integer: %u\n", x);
	printf("as bits: ");
	for (unsigned int i = 1 << 31; i > 0; i = i / 2) {
		(x & i)? printf("1"): printf("0");
	}
}

// Function that multiples 'number' by 2 to the power of 'pow'
unsigned int power(int number, int pow) {
	unsigned int num = number;
	for (int i = pow; i > 0; i--) {
		num = num << 1;
	}
	return num;
}
