/*
 * array.c
 *
 *  Created on: Oct 19, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void) {
	int a[5]; // Creates an array of 5
	// Set array values
	a[0] = 7;
	a[1] = 9;
	a[2] = 10;
	a[3] = 15;
	a[4] = 2;

	// Finds the number of even and odd in the array and their respective sums
	int odd = 0;
	double osum = 0;
	int even = 0;
	double esum = 0;
	for(int i = 0; i < 5; i++) {
		if(a[i]%2 == 1) {
			odd++;
			osum += a[i];
		}
		if(a[i]%2 == 0) {
			even++;
			esum += a[i];
		}
	}

	printf("The average of even values in the array is %.2f.\nThe average of odd values is %.2f.", esum/even, osum/odd);
}
