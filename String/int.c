/*
 * int.c
 *
 *  Created on: Nov 14, 2016
 *      Author: Andy Pham
 */

#include <stdio.h>
#include <stdlib.h>
#include <String.h>

unsigned int pow(unsigned int number, unsigned int pow);

int main(void) {
	char str[100];
	char *reverse[100];
	puts("Enter in a string: ");
	gets(str);
	char *tkPtr = strtok(str, " ");
	int count = 0;
	while(tkPtr != NULL) {
		printf("%s ", tkPtr);
		tkPtr = strtok(NULL, " ");
	}
	for(int i = count; i > 0; i--) {
		printf("%s ", reverse[count]);
	}
}

unsigned int pow(unsigned int number, unsigned int pow) {
	unsigned int num = 0;
	for (int i = pow; i > 0; i--) {
		num += number << 1;
	}
	return num;
}
