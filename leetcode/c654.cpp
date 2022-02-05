//
// Created by taohu on 2022/2/5.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

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
class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        return build(nums, 0, nums.size() - 1);
    }

    TreeNode *build(vector<int> &nums, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        // 找到数组中最大值和对应的索引
        int index = -1, max_val = INT_MIN;
        for (int i = start; i <= end; ++i) {
            if (max_val < nums[i]) {
                index = i;
                max_val = nums[i];
            }
        }
        // 根节点
        TreeNode *root = new TreeNode(max_val);
        // 递归调用构造左右子树
        root->left = build(nums, start, index - 1);
        root->right = build(nums, index + 1, end);
        return root;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}