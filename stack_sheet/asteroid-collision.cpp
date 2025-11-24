class Solution {
    vector<int>Positive;
    vector<int>result;
    bool IsEqual = 0;

public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        for (int i = 0;i < asteroids.size();i++)
        {
            if (asteroids[i] > 0)  Positive.push_back(asteroids[i]);
            else
            {
                while (!Positive.empty() && abs(asteroids[i]) >= Positive.back())
                {
                    if (abs(asteroids[i]) == Positive.back())
                    {
                        IsEqual = 1; Positive.pop_back();break;
                    }
                    Positive.pop_back();
                }
                if (Positive.empty() && !IsEqual)
                {
                    result.push_back(asteroids[i]);

                }
                else if (IsEqual)   IsEqual = 0;
            }
        }
        for (int& ele : Positive)
        {
            result.push_back(ele);
        }
        return result;
    }
};