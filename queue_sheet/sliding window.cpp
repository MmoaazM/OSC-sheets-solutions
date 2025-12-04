class Solution {
    deque<int>SlidingWindow;

    vector<int>result;

    void ConstructFirstWindow(vector<int>& nums, int k)
    {
        for (int i = 0;i < k;i++)
        {
            while (!SlidingWindow.empty() && nums[i] > SlidingWindow.back())
            {
                SlidingWindow.pop_back();
            }
            SlidingWindow.push_back(nums[i]);
        }
        result.push_back(SlidingWindow.front());
    }

public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {


        ConstructFirstWindow(nums, k); /// this window is a little different in inplementation

        for (int i = k;i < nums.size();i++)
        {
            if (nums[i - k] == SlidingWindow.front()) SlidingWindow.pop_front();

            while (!SlidingWindow.empty() && nums[i] > SlidingWindow.back())
            {
                SlidingWindow.pop_back();
            }
            SlidingWindow.push_back(nums[i]);

            result.push_back(SlidingWindow.front());
        }
        return result;
    }
};