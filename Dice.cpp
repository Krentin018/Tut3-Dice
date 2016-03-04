#include <iostream>

using namespace std;

int num;

int roll()
{
	num = rand() % 6 + 1;
	return num;
}