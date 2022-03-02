//
// Created by smartfly on 2022/3/1.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int res = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            if (grid[i][0] == 0) {
                dfs(grid, i, 0);
            }
            if (grid[i][n-1] == 0) {
                dfs(grid, i, n-1);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (grid[0][i] == 0) {
                dfs(grid, 0, i);
            }
            if (grid[m-1][i] == 0) {
                dfs(grid, m-1, i);
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    res++;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || j < 0 || i >= m || j >=n) { // 边界判断
            return;
        }
        if (grid[i][j] == 1) {
            return;
        }
        grid[i][j] = 1;
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