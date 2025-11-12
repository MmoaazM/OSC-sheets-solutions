class Solution {
public:
    int fib(int n) {

        if (n == 0)
        {
            return 0;
        }

        int first = 0, second = 1;
        long long result = 1;
        n--;
        while (n--)
        {
            result = first + second;
            first = second;
            second = result;
        }

        return result;
    }
};