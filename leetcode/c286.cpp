//
// Created by smartfly on 2022/2/28.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // 普通解法
    int missingNumber(vector<int> &nums) {
        int n = nums.size();
        for (int i = 0; i <= n; i++) {
            auto iter = find(nums.begin(), nums.end(), i);
            if (iter == nums.end()) {
                return i;
            }
        }
        return 0;
    }
    // 进阶解法
    int missingNumber1(vector<int> &nums) {
        int n = nums.size();
        int res = 0;
        res ^= n;
        for (int i = 0; i < n; ++i) {
            res ^= i ^ nums[i];
        }
        return res;
    }
};

int main() {
    cout << "Hell World" << endl;
    vector<int> nums{3, 0, 1};
    Solution s;
    int a = s.missingNumber(nums);
    cout << a << endl;
    return 0;
}