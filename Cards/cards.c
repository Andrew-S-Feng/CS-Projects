/*
 * cards.c
 *
 *  Created on: Nov 2, 2016
 *      Author: Andy Pham
 */
// Models a card generator that shuffles and deals a five card hand
#include <Stdio.h>
#include <Stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// Prototypes
void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], int faces[], int suits[]);
int pair(int faces[]);
int pairs(int faces[]);
int threes(int faces[]);
int fours(int faces[]);
int flush(int suits[]);
int straight(int faces[]);

int main(void) {
	// Initializing arrays
	const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
	const char *face[FACES] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	unsigned int hand1[SUITS][FACES] = {0};
	unsigned int hand2[SUITS][FACES] = {0};

	srand(time(NULL));

	shuffle(hand1);
	int faces[FACES] = {0}; // Array that records the values of the dealt cards
	int suits[SUITS] = {0}; // Array that records the suits of the dealt cards
	deal(hand1, face, suit, faces, suits);
	puts("");
	int value = 0;
	while (value == 0) {
		value = flush(faces);
		if(value == 6)
			break;
		value = straight(faces);
		if(value == 5)
			break;
		value = fours(faces);
		if(value == 4)
			break;
		value = threes(faces);
		if(value == 3)
			break;
		value = pairs(faces);
		if(value == 2)
			break;
		value = pair(faces);
		break;
	}
	printf("The value of hand one is %d.\n\n", value);

	shuffle(hand2);
	int faces2[FACES] = {0};
	int suits2[SUITS] = {0};
	deal(hand2, face, suit, faces2, suits2);
	puts("");
	int value2 = 0;
	while (value2 == 0) {
		value2 = flush(faces2);
		if(value2 == 6)
			break;
		value2 = straight(faces2);
		if(value2 == 5)
			break;
		value2 = fours(faces2);
		if(value2 == 4)
			break;
		value2 = threes(faces2);
		if(value2 == 3)
			break;
		value2 = pairs(faces2);
		if(value2 == 2)
			break;
		value2 = pair(faces2);
		break;
	}
	printf("The value of hand two is %d.\n\n", value2);

	if (value > value2)
		puts("Hand one is better than hand two.");
	else if (value2 > value)
		puts("Hand two is better than hand one.");
	else
		puts("Hand one and hand two are of equal value.");
}

// Shuffles the cards in the deck
void shuffle(unsigned int wDeck[][FACES]) {
	// Initialize counters
	size_t row;
	size_t column;
	size_t card;

	for(card = 1; card <= CARDS; ++card) {
		do { // Choose a random location in the deck
			row = rand() % SUITS;
			column = rand() % FACES;
		} while(wDeck[row][column] != 0);
		// Put the card into the deck
		wDeck[row][column] = card;
	}
}

// Deals a five card hand
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[], int faces[], int suits[]) {
	size_t row;
	size_t column;
	size_t card;

	// Deals first five cards
	for (card = 1; card <= 5; card++)
		for(row = 0; row < SUITS; row++)
			for(column = 0; column < FACES; column++)
				if(wDeck[row][column] == card) {
					printf("%5s of %-8s\n", wFace[column], wSuit[row]);
					faces[column]++;
					suits[row]++;
				}
}

// Checks if there is a pair in the hand
int pair(int faces[]) {
	// Checks for pairs
	int pairs = 0;
	for (int i = 0; i < FACES; i++) {
		if(faces[i] >= 2)
			pairs++;
	}
	if (pairs != 0)
		return 1;
	else {
		return 0;
	}
}

// Checks is there are two pair in a hand
int pairs(int faces[]) {
	// Checks for pairs
	int pairs = 0;
	for (int i = 0; i < FACES; i++) {
		if(faces[i] >= 2)
			pairs++;
	}
	if (pairs >= 2)
		return 2;
	else {
		return 0;
	}
}

// Checks if the hand has a three-of-a-kind
int threes(int faces[]) {
	int three = 0;
	for (int i = 0; i < FACES; i++) {
		if (faces[i] >= 3)
			three++;
	}
	if (three != 0)
		return 3;
	else
		return 0;
}

// Checks if the hand has a four of a kind
int fours(int faces[]) {
	int four = 0;
	for (int i = 0; i < FACES; i++) {
			if (faces[i] >= 3)
				four++;
		}
	if (four != 0)
		return 4;
	else
		return 0;
}

// Checks if the hand is a flush
int flush(int suits[]) {
	int flush = 0;
	for (int i = 0; i < SUITS; i++) {
		if (suits[i] == 5)
			flush++;
	}
	if (flush == 1)
		return 6;
	else
		return 0;
}

// Checks if the hand is a straight
int straight(int faces[]) {
	int straight = 0;
	for (int i = 0; i < FACES; i++) {
		if (faces[i] == 1)
			if (faces[i+1] == 1)
				if (faces[i+2] == 1)
					if (faces[i+3] == 1)
						if (faces[i+4] == 1)
							straight++;
	}
	if (straight == 1)
		return 5;
	else
		return 0;
}
