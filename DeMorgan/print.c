/*
 * print.c
 *
 *  Created on: Oct 3, 2016
 *      Author: Andy Pham
 */

// Program that test logical equivalence
#include <Stdio.h>

int main(void) {
	int x = 6;
	int y = 6;

	printf("%d %d\n", !(x < 5) && !(y >= 7), x >= 5 && y < 7);

	int a = 4;
	int g = 6;

	printf("%d %d\n", !(a == 4) || !(g != 5), a != 4 || g == 5);

	x = 7;
	y = 4;

	printf("%d %d\n", !((x <= 8) && (y > 4)), x > 8 || y <= 4);

	int i = 4;
	int j = 5;

	printf("%d %d", !((i > 4) || (j <= 6)), i <= 4 && j > 6);
}
