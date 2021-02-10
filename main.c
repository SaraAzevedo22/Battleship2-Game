#include "battleship.h"


int main () {
	int size;
	int n=50;
	char player1[n];
	char player2[n];

	printf("\n");
	printf (" XXXXX   XXXX  XXXXXX XXXXXX XX     XXXXXX  XXXXX XX  XX XX XXXX\n");
	printf (" XX  XX XX  XX   XX     XX   XX     XX     XX     XX  XX XX XX  XX\n");
	printf (" XXXXX  XX  XX   XX     XX   XX     XXXX    XXXX  XXXXXX XX XXXX\n");
	printf (" XX  XX XXXXXX   XX     XX   XX     XX         XX XX  XX XX XX\n");
	printf (" XXXXX  XX  XX   XX     XX   XXXXXX XXXXXX XXXXX  XX  XX XX XX\n");
	printf ("\n\n");
	printf("Set the game size! (Between 20 and 40)\n");
	scanf("%d", &size);

	while(size<20 || size>40){
		printf("Invalid size! Set a valid game size! \n");
		scanf("%d", &size);
	}
	printf ("\n");

	int barcosC, barcosL, barcosQ, barcosX, barcosVH;
	int maxboats = size*size/25; // nº máximo de barcos
	int flag = 1;

	printf("Insert at least one boat from each type!\n");
	while(flag == 1){
		int count = 0;

		printBoatC();
		scanf("%d", &barcosC);
		if(barcosC != 0) count++;

		printBoatL();
		scanf("%d", &barcosL);
		if(barcosL != 0) count++;

		printBoatQ();
		scanf("%d", &barcosQ);
		if(barcosQ != 0) count++;

		printBoatX();
		scanf("%d", &barcosX);
		if(barcosX != 0) count++;

		printBoatVH();
		scanf("%d", &barcosVH);
		if(barcosVH != 0) count++;

		int tam = barcosC + barcosL + barcosQ + barcosX + barcosVH;

		if(count == 5 && (maxboats >= tam)) {
			flag = 0;
		}
		else if(count != 5 && (maxboats >= tam)) {
			printf("You have to insert at least one boat from each type! Please try again\n");
		}
		else if(count == 5 && (maxboats <= tam)) {
			printf("Insert a number of boats that's able to fit on the board! Please try again\n");
		}
		else printf("You have to insert at least one boat from each type and that number of boats should be able to fit on the board! Please try again\n");
	}

	printf("\n");
	printf("Player 1 Name:\n");
	scanf("%s", player1);
	printf ("\n");
	Matrix* m1 = newMatrix(size);
	boatsInsertion(m1,size,barcosC,barcosL, barcosQ,barcosX,barcosVH);

	printf("Player 2 Name:\n");
	scanf("%s", player2);
	printf ("\n");
	Matrix* m2 = newMatrix(size);
	boatsInsertion(m2,size,barcosC, barcosL, barcosQ, barcosX, barcosVH);

	srand(time(NULL));
	int turno = rand() % (2 + 1 - 1) + 1;
	printf("\n");
	int startTheGame;
	printf("The game is about to start, press any number and then press 'enter' to start the game.\n");
	scanf("%d", &startTheGame);
	system("clear");
	if(turno == 1){
		printf("%s will start the game\n", player1);
		printf("\n");
		printf("\n");
		printf("%s turn \n", player1);
		startGame(m1, m2, turno, player1, player2,size);
	}

	else {
		printf("%s will start the game\n", player2);
		printf("\n");
		printf("\n");
		printf("%s turn \n", player2);
		startGame(m1, m2, turno, player1, player2,size);
	}

	//Libertar memória
	free(m1);
	free(m2);
	return 0;
}