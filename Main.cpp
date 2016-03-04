#include <iostream>
#include "Dice.h"
using namespace std;

int main()
{
	int arr[10];
	for (int k = 0; k < 10; k++)
	{
		arr[k] = k;
	}

	Dice obj(5, 2, arr); 

	double Davg, arravg;

	Davg = obj.average(obj, 8); 
	cout << "The average of the dice is " << Davg << endl;

	arravg = obj.average(arr, 9);
	cout << "The average of the array is " << arravg << endl;

}