/*
 * dice.c
 *
 *  Created on: Oct 26, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>
#include <Stdlib.h>

int main(void) {
	int expected[13] = {0,0,1,2,3,4,5,6,5,4,3,2,1};
	int actual[13] = {0};

	// Gets 2 randoms from 1 to 6 and increments the array position of their sum
	for(int i = 1; i <= 36000; i++) {
		int x = rand() % 6 + 1;
		int y = rand() % 6 + 1;
		++actual[x+y];
	}

	// Prints a table with the index, total number rolled, expected and actual percents
	puts("Sum    Total    Expected    Actual");
	for(int i = 2; i <= 12; i++) {
		double expect = ((double)expected[i]/36) * 100;
		double actl = ((double)actual[i]/36000) * 100;
		printf("%2d %8d %10.2f%% %8.2f%%\n", i, actual[i], expect, actl);
	}
}
