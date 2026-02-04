#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    int max=0;
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        auto start=nums.begin(); auto end=nums.begin();

        while(end!=nums.end()){
            end=find(start,nums.end(),0);

            if(end-start>max) max=end-start;

            if(end!=nums.end()) start=end+1;

        }

        return max;
    }
};