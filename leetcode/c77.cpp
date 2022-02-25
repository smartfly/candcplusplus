//
// Created by smartfly on 2022/2/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
private:
    vector<vector<int>> res;
public:
    vector<vector<int>> combine(int n, int k) {
        if (k <= 0 || n <= 0) {
            return res;
        }
        vector<int> track;
        backtrack(n, k, 1, track);
        return res;
    }

    void backtrack(int n, int k, int start, vector<int> &track) {
        if (k == track.size()) {
            res.emplace_back(track);
            return;
        }
        for (int i = start; i <= n; ++i) {
            track.emplace_back(i);
            backtrack(n, k, i+1, track);
            track.pop_back();
        }
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}