#include<iostream>
using namespace std;

void ArrangeNumbers(long long& number1, long long& number2)
{
	if (number1 > number2)
		swap(number1, number2);
}

long long SumBetween2Numbers(long long number1, long long number2)
{
	long long sum1, sum2;
	sum1 = number2 * (number2 + 1) / 2;
	sum2 = number1 * (number1 - 1) / 2;

	return sum1 - sum2;
}

long long SumOfEvenNumbersBetween2Numbers(long long number1, long long number2)
{
	long long start, end;

	start = ceil(((double)number1 / 2)) * 2;
	end = floor(((double)number2 / 2)) * 2;


	if (start == end)
		return start;


	long long NumberOfTerms = (end - start) / 2 + 1;

	long long sum = ((double)NumberOfTerms / 2) * (start + end);

	return sum;

}

long long SumOfOddNumbersBetween2Numbers(long long number1, long long number2)
{
	return SumBetween2Numbers(number1, number2) - SumOfEvenNumbersBetween2Numbers(number1, number2);
}

void main()
{

	long long number1, number2;

	cin >> number1 >> number2;
	ArrangeNumbers(number1, number2); /// if number1 > number2 we handle it 

	cout << SumBetween2Numbers(number1, number2) << endl;

	cout << SumOfEvenNumbersBetween2Numbers(number1, number2) << endl;

	cout << SumOfOddNumbersBetween2Numbers(number1, number2) << endl;

}