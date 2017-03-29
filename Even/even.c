/*
 * even.c
 *
 *  Created on: Oct 3, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void){
	int a;
	do {
	puts("Enter a number, -1 to exit: "); // Prompt
	scanf("%d\n", &a); // Input to 'a'
	if (a != -1) // Prints if input is not -1
		printf("%d\n", isEven(a));
	} while (a != -1);
} // End main

int isEven(int x) { // Checks if integer is even
	if (x % 2 != 0)
		return 0; // If odd
	return 1; // If even
}
