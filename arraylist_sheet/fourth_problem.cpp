#include<iostream>
#include<vector>

using namespace std;

class Solution {
    vector<vector<int>>result;
public:
    vector<vector<int>> generate(int numRows) {
        result.push_back({1});
        if(numRows>1)
         result.push_back({1,1});

        for(int i=2;i<numRows;i++){
            vector<int>inner(i);inner[0]=1;
            int Size=i;
            
            for(int j=1;j<Size;j++){
                inner[j]=inner[j-1]*(Size-j+1)/j;
            }
            inner.push_back(1);
            result.push_back(inner);
        }

        return result;
    }
};