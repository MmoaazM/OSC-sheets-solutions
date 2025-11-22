class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>MonotonicStack;
        vector<int>pairs(10000);
        vector<int>result(nums1.size());
        for (int i = (int)nums2.size() - 1;i >= 0;i--)
        {
            while (!MonotonicStack.empty() && MonotonicStack.top() < nums2[i])
            {
                MonotonicStack.pop();
            }
            if (MonotonicStack.empty())
            {
                pairs[nums2[i]] = -1;
            }
            else {
                pairs[nums2[i]] = MonotonicStack.top();
            }
            MonotonicStack.push(nums2[i]);
        }

        for (int i = 0;i < nums1.size();i++)
        {
            result[i] = pairs[nums1[i]];
        }

        return result;

    }
};