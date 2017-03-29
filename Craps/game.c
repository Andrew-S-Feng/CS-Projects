/*
 * game.c
 *
 *  Created on: Oct 26, 2016
 *      Author: Andy Pham
 */

// Models a game of craps
#include <Stdio.h>
#include <Stdlib.h>

int rollDice(void);

int main(void) {
	// Arrays that count how many times you win or lose that a particular roll
	int wins[22] = {0};
	int losses[23] = {0};

	// Integers counting total wins and losses
	int winSum = 0;
	int lossSum = 0;

	// Total numver of rolls
	int totalRoll = 0;

	enum game {WIN, LOSE, CONTINUE};
	enum game gameStatus;

	// Plays 1000 games of Craps
	for (int i = 1; i <= 1000; i++) {
		int sum = rollDice();
		int roll = 1; // Counts number of rolls
		int myPoint;

		// See if game is won or lost on first row
		switch(sum) {
		case 7:
		case 11:
			gameStatus = WIN;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOSE;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			break;
		}

		// Continue the game if its not won or lost
		while(gameStatus == CONTINUE) {
			sum = rollDice();
			roll++;
			// If won
			if(sum == myPoint)
				gameStatus = WIN;
			else {
			// If lost
				if(sum == 7)
					gameStatus = LOSE;
			}
		}

		totalRoll += roll;

		// Counts number of rolls it took to win or lose,
		// and increments total wins and losses
		if(roll > 21)
			roll = 21;
		if(gameStatus == WIN) {
			++wins[roll];
			winSum++;
		}
		else {
			++losses[roll];
			lossSum++;
		}
	}

	// Prints win and loss for each roll in a table format
	puts("Roll    Wins    Losses");
	for(int i = 1; i <= 21; i++) {
		printf("%2d %8d %8d\n", i, wins[i], losses[i]);
	}
	puts("\nRoll 21 represents any roll >= 21.");

	// Prints win rate
	printf("\nThe chances of winning at Craps are %d to %d. You have a %.2f%% chance of winning.\n", winSum, lossSum, ((double)winSum/1000) * 100);

	// Prints average game length
	printf("The average game length is %d rolls.\n", totalRoll/1000);

	puts("The chances of winning decrease as the game goes on.");
}

// Takes two random number from 1 to 6 and returns the sum
int rollDice(void) {
	int x = rand() % 6 + 1;
	int y = rand() % 6 + 1;
	return x + y;
}
