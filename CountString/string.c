/*
 * string.c
 *
 *  Created on: Nov 14, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>
#include <String.h>
#include <ctype.h>

int main(void) {
	char s1[]= "Happy New Year";
	char s2[]= "Happy New Year";
	char s3[]= "Happy Holidays";
	int temp;
	int alphabet['z'] = {0};
	int i = 0;

	while (s1[i]) {
		alphabet[tolower(s1[i])]++;
		i++;
	}
	for(int j = 0; j < 'z'; j++) {
		printf("%d\n", alphabet[j]);
	}
	char a = 'a';
	int ia = a;
	printf("%d", ia);
}
