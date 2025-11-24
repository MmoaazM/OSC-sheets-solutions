class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>>MonotonicStack;  pair<int, int >Element;

        vector<int> result(temperatures.size());

        for (int i = temperatures.size() - 1;i >= 0;i--)
        {
            while (!MonotonicStack.empty() && MonotonicStack.top().first <= temperatures[i])
            {
                MonotonicStack.pop();
            }
            if (MonotonicStack.empty())
            {
                result[i] = 0;
            }
            else
            {
                result[i] = MonotonicStack.top().second - i;
            }

            Element.first = temperatures[i];
            Element.second = i;

            MonotonicStack.push(Element);
        }

        return result;
    }
};