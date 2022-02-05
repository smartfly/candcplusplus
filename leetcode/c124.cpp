//
// Created by taohu on 2022/2/4.
// 二叉树中的最大路劲和
//

#include <iostream>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int maxSum = INT_MIN;
public:
    int maxGrain(TreeNode *node) {
        if (node == nullptr) return 0;
        int left = max(0, maxGrain(node->left));
        int right = max(0, maxGrain(node->right));
        // 后序遍历代码位置
        maxSum = max(maxSum, left + right + node->val);
        return max(left, right) + node->val;
    }

    int maxPathSum(TreeNode *root) {
        maxGrain(root);
        return maxSum;
    }
};

int main() {
    cout << "Hello World" << endl;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    Solution s;
    int res = s.maxPathSum(root);
    cout << res << endl;
    return 0;
}