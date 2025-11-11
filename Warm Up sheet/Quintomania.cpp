#include<iostream>
#include<deque>

using namespace std;

deque<int>numbers;

bool IsPerfectNote()
{
	while (numbers.size() > 1)
	{
		if (abs(numbers[0] - numbers[1]) != 5 && abs(numbers[0] - numbers[1]) != 7) return false;

		numbers.pop_front();
	}

	return true;
}

int main()
{
	int t;
	cin >> t;

	int n;
	while (t--)
	{
		n = 0;
		cin >> n;

		int element;
		for (int i = 0;i < n;i++)
		{
			cin >> element;
			numbers.push_back(element);
		}

		bool IsPerfect = IsPerfectNote();

		(IsPerfect) ? cout << "yes\n" : cout << "no\n";

		numbers.clear();
	}

	system("pause>0");

	return 0;
}