#include <iostream>
#include <string>
#include <time.h>

using namespace std; 

class RPS
{
public: 

	int coin;
	int player;

	void flipCoin();
	void comparison(int result);
	void printResult();
};