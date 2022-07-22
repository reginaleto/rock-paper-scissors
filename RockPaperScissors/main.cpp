#define _CRT_SECURE_NO_WARNINGS

#include "rps.h"

int main()
{
	RPS challenger;

	for (int i = 0; i < 100; i++)
	{
		cout << "\nRock, Paper, Scissors, Shoot! \n";
		cout << "0 = Rock\n";
		cout << "1 = Paper\n";
		cout << "2 = Scissors\n";

		cout << "Shoot! -- ";
		cin >> challenger.player;

		challenger.flipCoin();
	}

	
}