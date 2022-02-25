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
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> track;
        backtrack(nums, 0, track);
        return res;
    }

    void backtrack(vector<int> &nums, int start, vector<int> &track) {
        res.emplace_back(track);
        for (int i = start; i < nums.size(); ++i) {
            track.emplace_back(nums[i]);
            backtrack(nums, i + 1, track);
            track.pop_back();
        }
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}