class Solution {

    string OpenBrackets = "({[";
    string ClosedBrackets = ")}]";
    stack<char>AllOpenBrackets;

public:
    bool isValid(string s) {
        if (s.size() & 1) return false;

        int index;
        for (int i = 0;i < s.size();i++)
        {
            index = OpenBrackets.find(s[i]);

            if (index != string::npos)
            {
                AllOpenBrackets.push(s[i]);
            }
            else
            {
                index = ClosedBrackets.find(s[i]);
                if (AllOpenBrackets.empty() || AllOpenBrackets.top() != OpenBrackets[index]) return false;
                else AllOpenBrackets.pop();
            }
        }
        if (AllOpenBrackets.empty())
            return true;
        else return false;

    }
};