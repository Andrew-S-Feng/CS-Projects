/*
 * square.c
 *
 *  Created on: Oct 3, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void) {
	square(5);
} // End main

void square(int x) { // Function prints a square of '*'
	for (int i = 0; i < x; i++) { // Rows
		for (int j = 0; j < x; j++) { // Columns
			printf("%s", "*");
		}
		puts(""); // Adds spaces between rows
		puts("");
		puts("");
	}
} // End function
