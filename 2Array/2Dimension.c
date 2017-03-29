/*
 * 2Dimension.c
 *
 *  Created on: Oct 26, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void) {
	int count = 1;
	// Labels the values in the array, prints it, then sets the value back to 0
	int sales[3][5] = {0};
	for(int r = 0; r < 3; r++)
		for(int c = 0; c < 5; c++) {
			sales[r][c] = count; // Label
			count++; // Increment counter

			// Prints in array format
			printf("%4d", sales[r][c]);
			if(c == 4)
				puts("");
			sales[r][c] = 0; // Reset to 0
		}
}
