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
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        if (candidates.empty()) {
            return res;
        }
        vector<int> track;
        backtrack(candidates, 0, target, 0, track);
        return res;
    }

    void backtrack(vector<int> &candidates, int start, int target, int sum, vector<int> &track) {
        if (sum == target) {
            res.emplace_back(track);
            return;
        }
        if (sum > target) {
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            track.emplace_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, i, target, sum, track);
            sum -= candidates[i];
            track.pop_back();
        }
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}