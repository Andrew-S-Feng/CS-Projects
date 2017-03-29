/*
 * test.c
 *
 *  Created on: Feb 24, 2017
 *      Author: Andy Pham
 */

#include<stdio.h>
#include<ctype.h>

int main(void)
{
   int count;
   int success;
   int n;
   int sum;
   int i;

   sum = 0;

   puts("Input array size: ");
   scanf("%d", &count);
   success = 1;
   i = 0;

   for(int i = 0; i < count; i++) {
	   puts("Enter a number: ");
	   scanf("%d", &n);
	   if(isdigit(n) != 0) {
	      puts("Error");
	      success = 0;
	      break;
	   }
	   i++;
	   sum += n;
   }
   if (i != count)
	   puts("Error");

   if (success == 0)
	   puts("Error");
   else
	   printf("%d\n", sum);
}
