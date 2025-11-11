#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
	bool handleprimaryTestcases(long long Number)
	{
		return (Number <= 0) ? false : true;
	}

	bool isPowerOfThree(long long n)
	{
		bool ans = handleprimaryTestcases(n);
		if (!ans)
		{
			return false;
		}

		double result;
		result = log(n) / log(3);

		if (result - ceil(result) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	long long number;
	cin >> number;

	Solution solution;
	bool ans = solution.isPowerOfThree(number);
	if (ans)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	return 0;
}