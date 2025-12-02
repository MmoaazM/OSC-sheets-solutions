class Solution {

private:
    int element;
    queue<int>result;
    stack<int>s;

public:
    queue<int> reverseFirstK(queue<int> q, int k) {

        if (k > q.size())
        {
            return q;
        }

        for (int i = 0;i < k;i++)
        {
            element = q.front();
            s.push(element);
            q.pop();
        }

        while (!s.empty())
        {
            result.push(s.top());
            s.pop();
        }
        while (!q.empty())
        {
            element = q.front();
            result.push(element);
            q.pop();
        }
        return result;
    }
};