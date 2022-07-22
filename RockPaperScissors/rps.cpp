#include "rps.h"

void RPS::flipCoin()
{
	srand(time(NULL));

	coin = rand() % 3;
	// cout << coin;

	printResult();
	comparison(coin);
}

void RPS::printResult()
{
	cout << "\n\nYour Guess: " << player;
	cout << "\nThe Computer's Guess: " << coin; 
}

void RPS::comparison(int result)
{
	// cin >> player; 
	// cout << coin << endl << player;

	// 1 = Rock
	// 2 = Paper
	// 3 = Scissor


	if (coin == 0 && player == 0)
	{
		cout << "\nRock and Rock; Try Again!\n";
	}
	else if (coin == 0 && player == 1)
	{
		cout << "\nPaper Beats Rock; You Win! :)\n";
	}
	else if (coin == 0 && player == 2)
	{
		cout << "\nRock Beats Scissors; You Lose :(\n";
	}
	else if (coin == 1 && player == 0)
	{
		cout << "\nPaper Beats Rock; You Lose :(\n";
	}
	else if (coin == 1 && player == 1)
	{
		cout << "\nPaper and Paper; Try Again!\n";
	}
	else if (coin == 1 && player == 2)
	{
		cout << "\nScissor Beats Paper; You Win! :)\n";
	}
	else if (coin == 2 && player == 0)
	{
		cout << "\nRock Beats Scissors; You Win! :)\n";
	}
	else if (coin == 2 && player == 1)
	{
		cout << "\nScissor Beats Paper; You Lose :(\n";
	}
	else
	{
		cout << "\nScissor and Scissor; Try Again!\n";
	}
}