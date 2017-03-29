/*
 * display.c
 *
 *  Created on: Nov 28, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>
#include <Limits.h>

void displayBits(unsigned int value);
int multiple(int num);
int mystery(unsigned int bits);

int main(void) {
	unsigned int count = 28;
	displayBits(count);
	printf("%d", mystery(count));
}

// Prints the bits of the value
void displayBits(unsigned int value) {
	// Shifts displayMask depending on what sizeof(unsigned int) is
	unsigned int displayMask = 1 << (CHAR_BIT * sizeof(unsigned int) - 1);

	printf("%10u = ", value);

	for (unsigned int c = 1; c <= CHAR_BIT * sizeof(unsigned int); ++c) {
		putchar(value & displayMask? '1' : '0');
		value <<= 1;

		if((c % 8) == 0)
			putchar(' ');
	}
	putchar('\n');
}

int multiple(int num) {
	int mask = 1;
	int mult = 1;

	for(int i = 1; i <= 10; ++i, mask <<= 1) {
		if ((num & mask) != 0) {
			mult = 0;
			break;
		}
	}
	return mult;
}

int mystery(unsigned int bits) {
	unsigned int mask = 1 << 31;
	unsigned int total = 0;

	for (unsigned int i = 1; i <= 32; ++i, bits <<= 1) {
		printf("%u ", (bits&mask));
		if ((bits & mask) == mask)
			++total;
	}
	printf("\n");
	return !(total%2)? 1:0;
}
