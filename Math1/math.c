/*
 * math.c
 *
 *  Created on: Oct 3, 2016
 *      Author: Andy Pham
 */

// Math program testing various math.h functions
#include <Stdio.h>
#include <Math.h>

int main(void) {
	double x;
	x = fabs(7.5);
	printf("%f\n", x);

	x = floor(7.5);
	printf("%f\n", x);

	x = fabs(0.0);
	printf("%f\n", x);

	x = ceil(0.0);
	printf("%f\n", x);

	x = fabs(-6.4);
	printf("%f\n", x);

	x = ceil(-6.4);
	printf("%f\n", x);

	x = ceil(-fabs(-8 + floor(-5.5)));
	printf("%f\n", x);

} // End main
