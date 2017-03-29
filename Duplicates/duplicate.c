/*
 * duplicate.c
 *
 *  Created on: Oct 26, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

#define MAX 20 // Constant of size 20

int main(void) {
	unsigned int a[MAX] = {0};

	puts("Enter in numbers from 10 to 100:");
	unsigned int value;

	int k = 0;

	// Fills the array with values until user stops or array is filled
	for(int i = 0; i <= MAX-1; i++) {
		int duplicate = 1; // bool value, false
		scanf("%u", &value); // Puts input into 'value'

		for(int j = 0; j < k; j++) { // Nested for() loop, checks for duplicates
			if(value == a[j] || value < 10 || value > 100) {
				duplicate = 0; // bool value, true
				break;
			}
		}
		// If the value is a duplicate, add it to the array, increase counter k, and print the value
		if(duplicate == 1) {
			a[k] = value;
			k++;
			printf("%u  ", value);
		}
	}
}
