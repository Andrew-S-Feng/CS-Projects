/*
 * SortAndMerge.c
 *
 *  Created on: Oct 19, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>


void sort(double a[], int size);
void merge(double a[], double b[], double c[], int sizeab, int sizec);

int main(void) {
	double a[5]; // Creates an array of size 5

	for(int i = 0; i < 5; i++) { // Prompts user for number and places number in array
		puts("Enter a number.");
		scanf("%lf", &a[i]);
	}

	int size = sizeof(a)/sizeof(a[0]); // Finds the size of the array
	sort(a, size); // Sort

	for(int j = 0; j < size; j++)
		printf("a[%d] is %.2f.\n", j, a[j]);

	puts("");

	double b[5]; // Creates an array of size 5

	for(int i = 0; i < 5; i++) { // Prompts user for number and places number in array
		puts("Enter a number.");
		scanf("%lf", &b[i]);
	}

	int sizeb = sizeof(b)/sizeof(b[0]); // Finds the size of the array
	sort(b, sizeb); // Sort

	for(int j = 0; j < sizeb; j++)
		printf("b[%d] is %.2f.\n", j, b[j]);

	puts("");

	double c[size + sizeb]; // Creates an array the size of both 'a' and 'b'
	int sizec = size + sizeb;

	merge(a, b, c, size, sizec); // Merge

	for(int k = 0; k < sizec; k++)
			printf("c[%d] is %.2f.\n", k, c[k]);
}

void sort(double a[], int size) { // Sort the given array
	for(int i = 0; i < size; i++) {
		int min = i;
		for(int j = i+1; j < size; j++) // Finds the minimum values index
			if(a[min] > a[j])
				min = j;
		// Swaps the minimum with the first unsorted
		double temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void merge(double a[], double b[], double c[], int sizeab, int sizec) { // Merges 'a' and 'b' orderly into 'c'
	int left = 0; // Counter for a
	int right = 0; // Counter for b
	for(int i = 0; i < sizec; i++) {
		int check = 0;
		if(left < sizeab && right < sizeab) {
			if(a[left] <= b[right]) {
				c[i] = a[left];
				left++;
			}
			else {
				c[i] = b[right];
				right++;
				check = 1;
			}
		}
		if(right >= sizeab && left < sizeab && check == 0) {
			c[i] = a[left];
			left++;
		}
		if(left >= sizeab && right < sizeab) {
			c[i] = b[right];
			right++;
		}
	}
}
