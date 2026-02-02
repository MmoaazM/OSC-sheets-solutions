#include<iostream>
#include<vector>
using namespace std;

class Solution {
    bool rotated=false;
public:
    bool check(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1] && !rotated){
                rotated=true;
            }
            else if(nums[i]>nums[i+1]) return false;
        }

        if(nums[nums.size()-1]>nums[0]&& rotated) return false;
        else return true;
    }
};