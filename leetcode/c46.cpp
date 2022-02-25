//
// Created by smartfly on 2022/2/25.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> track;
        backtrack(nums, track);
        return res;
    };
    void backtrack(vector<int>& nums, vector<int>& track) {
        if (track.size() == nums.size()) {
            res.emplace_back(track);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            auto iter = find(track.begin(), track.end(), i);
            if (iter != track.end()) {
                continue;
            }
            track.emplace_back(nums[i]);
            backtrack(nums, track);
            track.pop_back();
        }
    }
};