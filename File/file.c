/*
 * file.c
 *
 *  Created on: Dec 4, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void) {
	FILE *cfPtr;
	FILE *tfPtr;
	FILE *nfPtr;

	cfPtr = fopen("oldmast.dat", "r");
	tfPtr = fopen("trans.dat", "r");
	nfPtr = fopen("newmast.dat", "w");

	if(cfPtr != NULL) {
		unsigned int accountNum;
		char name[30];
		double currentBalance;

		fscanf(cfPtr, "%d%29s%lf", &accountNum, name, &currentBalance);
		fclose(cfPtr);
	}

	if(tfPtr != NULL) {
		unsigned int accountNum;
		double dollarAmount;

		fscanf(tfPtr, "%d%lf", &accountNum, &dollarAmount);
		fclose(tfPtr);
	}

	if(nfPtr != NULL) {
		// Would normally store information into variables
		unsigned int accountNum;
		char name[30];
		double currentBalance;

		fprintf(nfPtr, "%d %s %.2lf", accountNum, name, currentBalance);
	}
}
