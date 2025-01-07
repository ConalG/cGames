#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char userInput;
	int computersChoice;

	printf("Welcome to Rock, Paper, Scissors!\nPlease choose R for Rock, P for paper and S for Scissors." );
	scanf(" %c", &userInput);

	srand(time(NULL));
	computersChoice = rand() % 3;
	printf("ComputersChoice: %d",computersChoice);
	



	}
