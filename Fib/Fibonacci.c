/*
 * Fibonacci.c
 *
 *  Created on: Oct 12, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void) {
	printf("%llu", fibonacci(40));
}

unsigned long long int fibonacci(unsigned int n) {
	if(n==0 || n==1) // Base case
		return n;
	// Recursively calls the last two digits and adds them together
	return fibonacci(n-1) + fibonacci(n-2);
}

//unsigned long long int fibonacci(unsigned int n) {
//	unsigned long long int last2 = 0;
//	unsigned long long int last1 = 1;
//
//	if(n==0) // In case of fibonacci(0)
//		return last2;
//
//	if(n==1) // In case of fibonacc(1)
//		return last1;
//
//	unsigned long long int fib;
//	int counter = 2;
//	while(counter <= n) { // Itterates until 'n'
//		fib = last1 + last2;
//		printf("%llu\n", fib);
//		// Sets the most recent last 2 digits in the sequence
//		last2 = last1;
//		last1 = fib;
//		counter++;
//	}
//	return fib;
//}
