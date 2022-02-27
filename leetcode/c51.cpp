//
// Created by smartfly on 2022/2/26.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
private:
    vector<vector<string>> res;
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        backtrack(board, 0);
        return res;
    }
    void backtrack(vector<string> &board, int row) {
        if (row == board.size()) {
            res.emplace_back(board);
            return;
        }
        int n = board[row].size();
        for (int col = 0; col < n; ++col) {
            if (!isValid(board, row, col)) {
                continue;
            }
            board[row][col] = 'Q';
            backtrack(board, row + 1);
            board[row][col] = '.';
        }
    }
    // 校验是否可以在board[row][col]放置皇后
    bool isValid(vector<string> &board, int row, int col) {
        int n = board.size();
        // 检查列
        for (int i = 0; i < n; ++i) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        // 检查右上方
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // 检查左上方
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
};

int main() {
    cout << "Hello World!" << endl;
    cout << string(5, '.') << endl;
    return 0;
}