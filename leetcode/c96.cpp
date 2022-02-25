//
// Created by smartfly on 2022/2/19.
//

#include "list_node.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> memo;
public:
    int numTrees(int n) {
        // 初始化化n+1个元素为0的数组
        memo = vector<int>(n + 1, 0);
        return count(1, n);
    }

    int count(int low, int high) {
        // base case
        if (low > high) {
            return 1;
        }
        if(memo[high-low]) return memo[high-low];
        int res = 0;
        for (int i = low; i <= high; ++i) {
            // i 的值作为根节点
            int left = count(low, i - 1);
            int right = count(i + 1, high);
            // 左右子树的组合数乘积是BST的总数
            res += left * right;
        }
        memo[high-low] = res;
        return res;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}