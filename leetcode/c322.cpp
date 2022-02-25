//
// Created by smartfly on 2022/2/20.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> memo(amount + 1, INT_MIN);
        int res = helper(coins, amount, memo);
        return (res == INT_MIN) ? -1 : res;
    }

    int helper(vector<int> &coins, int amount, vector<int> &memo) {
        // base case
        if (amount == 0) return 0;
        if (amount < 0) return -1;

        if (memo[amount] != INT_MIN) {
            return memo[amount];
        }
        int res = INT_MAX;
        for (int coin: coins) {
            int subProblem = helper(coins, amount - coin, memo);
            if (subProblem == -1) {
                continue;
            }
            res = min(res, subProblem + 1);
        }
        memo[amount] = (res == INT_MAX) ? -1 : res;
        return memo[amount];
    }

    int dp(vector<int> &coins, int amount) {
        vector<int> dp(amount + 1, amount+1);
        // base case
        dp[0] = 0;
        for (int i = 0; i < dp.size(); ++i) {
            for (int coin: coins) {
                if (i - coin < 0) {
                    continue;
                }
                dp[i] = min(dp[i], 1+dp[i-coin]);
            }
        }
        return (dp[amount] == amount +1) ? -1 : dp[amount];
    }
};

int main() {
    cout << "Hello World!" << endl;
    Solution s;
    vector<int> a = {186, 419, 83, 408};
    int res = s.coinChange(a, 6249);
    cout << res << endl;
    return 0;
}