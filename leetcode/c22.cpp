//
// Created by smartfly on 2022/2/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if (n == 0) {
            return res;
        }
        string track;
        backtrack(n, n, track, res);
        return res;
    }

    void backtrack(int left, int right, string &track, vector<string> &res) {
        // 若左扩号剩下的多，说明不合法
        if (right < left) {
            return;
        }
        if (left < 0 || right < 0) {
            return;
        }
        if (left == 0 && right == 0) {
            res.emplace_back(track);
            return;
        }
        track.push_back('(');
        backtrack(left-1, right, track, res);
        track.pop_back();

        track.push_back(')');
        backtrack(left, right-1, track, res);
        track.pop_back();
    }
};


int main() {
    cout << "Hello World!" << endl;
    Solution s;
    vector<string> res = s.generateParenthesis(3);
    for (string a: res) {
        cout << a << endl;

    }
    return 0;
}