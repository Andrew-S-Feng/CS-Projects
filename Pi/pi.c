/*
 * pi.c
 *
 *  Created on: Oct 2, 2016
 *      Author: Andy Pham
 */

// Program that calculates pi
#include <Stdio.h>

int main(void) {
	double pi = 4;
	int count = -1;
	for (double i = 3; i < 1000000000; i += 2) { // Adds alternating depreciating positive and negative values
		pi = pi + (count * (4.00 / i));
		count = -1 * count; // Changes next value to positive or negative
	}
	printf("%.15f", pi);
}
