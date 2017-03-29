/*
 * file.c
 *
 *  Created on: Dec 4, 2016
 *      Author: Andy Pham
 */

#include <Stdio.h>

int main(void) {
	FILE *cfPtr = fopen("oldmast.dat", "w");
	FILE *tfPtr = fopen("trans.dat", "w");

	unsigned int accountNum = 100;
	char name[30] = {"Jones"};
	double currentBalance = 348.17;
	double dollarAmount = 27.14;

	fprintf(cfPtr, "%d %s %.2lf\n", accountNum, name, currentBalance);
	fprintf(tfPtr, "%d %.2lf\n", accountNum, dollarAmount);

	accountNum = 300;
	char name2[30] = {"Smith"};
	currentBalance = 27.19;
	dollarAmount = 62.11;

	fprintf(cfPtr, "%d %s %.2lf\n", accountNum, name2, currentBalance);
	fprintf(tfPtr, "%d %.2lf\n", accountNum, dollarAmount);

	accountNum = 500;
	char name3[30] = {"Sharp"};
	currentBalance = 0.00;

	fprintf(cfPtr, "%d %s %.2lf\n", accountNum, name3, currentBalance);

	accountNum = 400;
	dollarAmount = 100.56;

	fprintf(tfPtr, "%d %.2lf", accountNum, dollarAmount);

	accountNum = 700;
	char name4[30] = {"Green"};
	currentBalance = -14.22;

	fprintf(cfPtr, "%d %s %.2lf", accountNum, name4, currentBalance);

	accountNum = 900;
	dollarAmount = 82.17;

	fprintf(tfPtr, "%d %.2lf", accountNum, dollarAmount);

	fclose(cfPtr);
	fclose(tfPtr);

//	FILE *tPtr = fopen("oldmast.dat", "r");
//	FILE *t2Ptr = fopen("trans.dat", "r");

//	if(tPtr != NULL) {
//		unsigned int testAcc;
//		char testName[30];
//		double testBalance;
//
//		fscanf(tPtr, "%d%29s%lf", &testAcc, testName, &testBalance);
//		printf("%-10d%-13s%7.2f\n", testAcc, testName, testBalance);
//
//		while(!feof(tPtr)) {
//			fscanf(tPtr, "%d%29s%lf", &testAcc, testName, &testBalance);
//			printf("%-10d%-13s%7.2f\n", testAcc, testName, testBalance);
//		}
//		fclose(tPtr);
//	}
}
