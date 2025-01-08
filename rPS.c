#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generateComputerChoice(){

	int randomNum;
	char computerChoice;

	srand(time(NULL));
	randomNum = rand() % 3;
	
	switch(randomNum){
		case 0:
		computerChoice = 'R';
		break;
		case 1:
		computerChoice = 'P';
		break;
		case 2:
		computerChoice = 'S';
		break;
		}
	return computerChoice;
}

int main() {
	char userInput;
	char computersTurn;


	printf("Welcome to Rock, Paper, Scissors!\nPlease choose R for Rock, P for paper and S for Scissors." );
	scanf(" %c", &userInput);

	computersTurn = generateComputerChoice();
	printf("Computers Choice: %c\n", computersTurn);

	switch(userInput){
		case 'R':
		switch(computersTurn){
			case 'R':
			printf("The round is a Draw\n");
			break;
			case 'P':
			printf("Computer wins the round!\n");
			break;
			case 'S':
			printf("You win the round!\n");
			break;
			}
		break;
		case 'P':
		switch(computersTurn){
			case 'P':
			printf("The round is a Draw\n");
			break;
			case 'S':
			printf("Computer wins the round!\n");
			break;
			case 'R':
			printf("You win the round!\n");
			break;
			}
		break;	
		case 'S':
		switch(computersTurn){
			case 'S':
			printf("The round is a Draw\n");
			break;
			case 'R':
			printf("Computer wins the round!\n");
			break;
			case 'P':
			printf("You win the round!\n");
			break;
			}
		break;
		}
	}
