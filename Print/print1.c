/*
 * print1.c
 *
 *  Created on: Sep 11, 2016
 *      Author: Andy Pham
 */

// Prints a table
#include <stdio.h>

int main(void) {
	printf("N\t10*N\t100*N\t1000*n\n"); // Prints header for columns

	for(int i=1; i<=10; i++) { // Prints 10 lines
		printf("%d\t%d\t%d\t%d\n", i, i*10, i*100, i*1000); // Prints i and its multiples
	}
} // end main
