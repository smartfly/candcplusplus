//
// Created by smartfly on 2022/3/1.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    res++;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
    // 
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n) { // 边界判断
            return;
        }
        if (grid[i][j] == '0') {
            // 已经遍历i，j
            return;
        }
        // 将节点(i, j)变成海水
        grid[i][j] = '0';
        dfs(grid, i-1, j); // 向上
        dfs(grid, i+1, j); // 向下
        dfs(grid, i, j-1); // 向左
        dfs(grid, i, j+1); // 向右
    }
};

int main() {
    cout << "Hell World" << endl;
    return 0;
}