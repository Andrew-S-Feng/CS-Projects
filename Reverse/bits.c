/*
 * bits.c
 *
 *  Created on: Nov 28, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

void reverseBits(unsigned int num);

int main(void) {
	unsigned int input = 0;
	puts("Enter an integer: ");
	scanf("%u", &input);
	printf("Bits are: ");
	for (unsigned int i = 1 << 31; i > 0; i = i / 2) {
		(input & i)? printf("1"): printf("0");
	}
	printf("\n");
	reverseBits(input);
}

// Prints the bits in reverse order
void reverseBits(unsigned int num) {
	printf("Reversed: ");
	int counter = 0;
	unsigned int i = 1 << 31;
	while((num & i) == 0) { // Increments until first '1' is reached
		counter++;
		i = i / 2;
	}
	// Prints bits right shifted by 'counter'
	for (unsigned int j = 1 << 31; j > 0; j = j / 2) {
		(num << counter & j)? printf("1"): printf("0");
	}
}
