#include <iostream>
#include<vector>
#include<ranges>
#include<cmath>
#include<set>

using namespace std;

class Solution {
    set<int> rowsVar; set<int> colsVar;
    int rows, cols;
public:
    void setZeroes(vector<vector<int>>& matrix) {
        rows = matrix.size();  cols = matrix[0].size();
        for (int i = 0;i < rows;i++)
        {
            for (int j = 0;j < cols;j++)
            {
                if (matrix[i][j] == 0) {
                    rowsVar.insert(i);
                    colsVar.insert(j);
                }
            }
        }

        for (const int& ele:rowsVar) {
                for (int j = 0;j < cols;j++) {
                    matrix[ele][j] = 0;
                }
        }

        for (const int& ele : colsVar) {
            for (int j = 0;j < rows;j++) {
                matrix[j][ele] = 0;
            }
        }
    }
};