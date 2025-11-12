#include<iostream>

using namespace std;

long long counter = 0;

void NumberOfSteps(int number)
{
	if (number == 1)
	{
		counter++;
		return;
	}
	else if (number % 2 == 0)
	{
		counter++;
		NumberOfSteps(number / 2);
	}
	else
	{
		counter++;
		NumberOfSteps(3 * number + 1);
	}
}

int main()
{
	int Number;
	cin >> Number;

	NumberOfSteps(Number);

	cout << counter;
}