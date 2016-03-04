#include "Dice.h"
#include <iostream>

using namespace std;

Dice::Dice()
{
}


Dice::~Dice()
{
}

int sum;
int droll;
int num;

int roll()
{
	num = rand() % 6 + 1;
	return num;
}

double average(Dice dobj, int n)
{
	int k = 0;
	sum = 0;
	while (k<n)
	{
		droll = dobj.roll();
		cout << "you diced a" << droll << endl;
		sum += droll;
	}
	return (sum / n);
}
