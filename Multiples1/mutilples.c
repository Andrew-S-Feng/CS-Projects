/*
 * mutilples.c
 *
 *  Created on: Oct 3, 2016
 *      Author: Andy Pham
 */

// Program that takes user input and determines whether or not they are multiples
#include <Stdio.h>

int main(void) {
	int a; // First input
	int b; // Second input

	do {
		puts("Input two numbers, -1 -1 to exit: "); // Prompt
		scanf("%d %d\n", &a, &b); // Input to 'a' and 'b'
		printf("%d\n", isMultiple(a,b)); // Calls isMultiple()
	} while (a != -1 && b != -1);
} // End main

int isMultiple(int x, int y) { // Function that checks if two numbers are multiples
	if (x == -1 && y == -1) { // Returned value when ending
		return -1;
	}
	if (y % x != 0) { // If not multiples
		return 0;
	}
	return 1; // Multiples
} // End function
