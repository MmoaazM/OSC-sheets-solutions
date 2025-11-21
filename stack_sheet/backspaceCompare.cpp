class Solution {
    string MakeStringPure(string input)
    {
        string result;
        for (int i = 0;i < input.size();i++)
        {
            if (input[i] == '#')
            {
                if (result.empty())
                {
                    result = "";
                }
                else
                {
                    result.pop_back();
                }

            }
            else
            {
                result.push_back(input[i]);
            }
        }
        return result;
    }
public:
    bool backspaceCompare(string s, string t) {

        s = MakeStringPure(s);
        t = MakeStringPure(t);

        if (s.size() != t.size())
        {
            return false;
        }
        for (int i = 0;i < s.size();i++)
        {
            if (s[i] != t[i])
            {
                return false;
            }
        }

        return true;
    }
};