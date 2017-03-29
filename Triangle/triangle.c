/*
 * triangle.c
 *
 *  Created on: Sep 20, 2016
 *      Author: Andy Pham
 */

// Program that prints 4 different pattern of asterisks
#include <stdio.h>

int main(void) { // Start main

	for (int i = 1; i <= 10; i++) { // Facing right, upward slope triangle
		for (int j = 1; j <= i; j++) // Prints a line of asterisks
			printf("%s", "*");
		puts(" ");
	}

	puts("\n");

	for (int i = 10; i >= 1; i--) { // Facing right, downward slope triangle
		for (int j = 1; j <= i; j++) // Prints a line of asterisks
			printf("%s", "*");
		puts(" ");
	}

	puts("\n");

	for (int i = 10; i >= 1; i--) { // Facing left, downward slope triangle
		for (int s = 10; s > i; s--) // Adds spaces
			printf("%s", " ");
		for (int j = 1; j <= i; j++) // Prints a line of asterisks
			printf("%s", "*");
		puts(" ");
	}

	puts("\n");

	for (int i = 1; i <= 10; i++) { // Facing left, upward slope triangle
		for (int s = 10; s > i; s--) // Adds spaces
			printf("%s", " ");
		for (int j = 1; j <= i; j++) // Prints a line of asterisks
			printf("%s", "*");
		puts(" ");
	}
} // End main
