/*
 * asterisk.c
 *
 *  Created on: Sep 20, 2016
 *      Author: Andy Pham
 */
// Prints 10 rows of 10 asterisks
#include <stdio.h>

int main(void) { // Start main

	for (unsigned int i = 1; i <= 100; i++) { // Prints 100 asterisks
		int nwl = i%10; // Checks the remainder of the counter
		printf("%s", "*"); // Prints '*'
		if (nwl == 0) { // If counter hits 10, creates a new line
			puts("\n");
		}
	}
} // End main
