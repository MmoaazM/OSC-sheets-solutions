#include<iostream>
#include<vector>

using namespace std;

void PrimeFactorization(long long number, vector<int>& NumberOfPrimeFactors)
{
	int counter;
	for (int i = 2; i * i <= number;i++)
	{
		counter = 1;

		while (number % i == 0)
		{
			counter++;
			number /= i;
		}

		NumberOfPrimeFactors.push_back(counter);
	}
	if (number > 2)
	{
		NumberOfPrimeFactors.push_back(2);
	}
}

long long NumberOfDivisors(vector<int>& NumberOfPrimeFactors)
{
	long long result = 1;

	while (!NumberOfPrimeFactors.empty())
	{
		result *= NumberOfPrimeFactors[NumberOfPrimeFactors.size() - 1];

		NumberOfPrimeFactors.pop_back();
	}

	return result;
}

int main()
{
	vector<int>NumberOfPrimeFactors;

	long long number;
	cin >> number;

	PrimeFactorization(number, NumberOfPrimeFactors);

	unsigned long long result;

	result = NumberOfDivisors(NumberOfPrimeFactors);

	if (result % 2 == 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}


	return 0;
}