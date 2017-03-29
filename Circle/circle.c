/*
 * circle.c
 *
 *  Created on: Sep 11, 2016
 *      Author: Andy Pham
 */

// Circle program
#include <stdio.h>

int main(void) { // start main
	float pi = 3.14159;
	int radius;

	puts("Enter in a radius\n"); // Prompt
	scanf("%d", &radius); // Stores input in 'radius'

	printf("The circle's diameter is %f\n", 2.0*radius); // Prints the diameter
	printf("The circle's circumference is %f\n", 2.0*pi*radius); // Prints the circumference
	printf("The circle's area is %f\n", pi*radius*radius); // Prints the area
} // end main
