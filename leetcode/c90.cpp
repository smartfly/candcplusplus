//
// Created by smartfly on 2022/2/27.
//


#include <vector>
#include <iostream>

using namespace std;

class Solution {
private:
    vector<vector<int>> res;
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        vector<bool> used(nums.size(), false);
        vector<int> track;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, track, used);
        return res;
    }

    void backtrack(vector<int> &nums, int start, vector<int> track, vector<bool> &used) {
        res.emplace_back(track);
        for (int i = start; i < nums.size(); ++i) {
            // 对同一树层使用过的元素进行跳过
            if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) {
                continue;
            }
            track.emplace_back(nums[i]);
            used[i] = true;
            backtrack(nums, i+1, track, used);
            used[i] = false;
            track.pop_back();
        }
    }
};

int main() {
    cout << "Hello World!" << endl;
    cout << false << endl; // 0
    cout << true << endl;   // 1
    return 0;
}