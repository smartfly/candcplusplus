//
// Created by smartfly on 2022/2/20.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // 暴力破解
    int fib1(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return fib1(n - 1) + fib1(n - 2);
    }

    // memo备忘录
    int fibByMemo(int n) {
        vector<int> memo(n + 1, 0);
        return helper(memo, n);
    }

    int helper(vector<int> &memo, int n) {
        // base case
        if (n == 0 || n == 1) {
            return n;
        }
        if (memo[n] != 0) {
            return memo[n];
        }
        memo[n] = helper(memo, n - 1) + helper(memo, n - 2);
        return memo[n];
    }

    // dp数组
    int fibByDp(int n) {
        if (n == 0) {
            return 0;
        }
        vector<int> dp(n + 1, 0);
        // base case
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

    // dp数组
    int fibByDpAdvance(int n) {
        if (n == 0) {
            return 0;
        }
        // base case
        int dp0 = 0;
        int dp1 = 1;
        for (int i = 2; i <= n; ++i) {
           int dp = dp0 + dp1;
           dp0 = dp1;
           dp1 = dp;
        }
        return dp1;
    }
};

int main() {
    cout << "Hello World!" << endl;
    Solution s;
    int a = s.fibByMemo(20);
    cout << a << endl;
    return 0;
}