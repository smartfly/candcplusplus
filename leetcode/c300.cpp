//
// Created by smartfly on 2022/2/7.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        // 定义：dp[i]表示以nums[i]这个数结尾的最长递增子序列的长度并全部初始化为1
        int n = nums.size();
        // 初始化n个1的数组
        vector<int> dp(n, 1);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        int res = 0;
        for (int i = 0; i < dp.size(); ++i) {
            res = max(res, dp[i]);
        }
        return res;
    }
};


int main() {
    vector<int> dp(10, 1);
    for (int a: dp) {
        cout << a << endl;
    }
    return 0;
}