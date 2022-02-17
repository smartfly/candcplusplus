//
// Created by smartfly on 2022/2/6.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        // 定义：dp[i] 记录以 nums[i] 为结尾的「最大子数组和」
        vector<int> dp;
        dp.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            int val = max(nums[i], nums[i] + dp[i-1]);
            dp.push_back(val);
        }
        // 得到 nums 的最大子数组
        int res = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            res = max(res, dp[i]);
        }
        return res;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}