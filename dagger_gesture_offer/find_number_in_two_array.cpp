//
// Created by smartfly on 2020/6/7.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target) {
        if (matrix.empty()) {
            return false;
        }
        int row = 0;
        int col_len = matrix[0].size();
        int col = col_len-1;

        while (row <= matrix.size()-1 && col >= 0) {
            if (target == matrix[row][col]) {
                return true;
            } else if (target > matrix[row][col]) {
                row++;
            } else {
                col--;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> input = {{1,  4,  7,  11, 15},
                                 {2,  5,  8,  12, 19},
                                 {3,  6,  9,  16, 22},
                                 {10, 13, 14, 17, 24},
                                 {18, 21, 23, 26, 30},};
    bool result = solution.findNumberIn2DArray(input, 10);
    cout << result << endl;
    return 0;
}