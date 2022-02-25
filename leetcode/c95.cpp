//
// Created by smartfly on 2022/2/19.
//

#include "binary_tree.h"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<TreeNode *> generateTrees(int n) {
        if (n == 0) return {};
        return build(1, n);
    }

    vector<TreeNode *> build(int low, int high) {
        vector<TreeNode *> res;
        // base case
        if (low > high) {
            res.push_back(nullptr);
            return res;
        }
        // 穷举root节点的所有可能性
        for (int i = low; i <= high; ++i) {
            // 递归构造出左右子树的所有合法BST
            vector<TreeNode *> leftTree = build(low, i-1);
            vector<TreeNode *> rightTree = build(i+1, high);
            // 给root节点穷举所有左右子树的组合
            for (TreeNode *left: leftTree) {
                for (TreeNode *right: rightTree) {
                    // i作为根节点root的值
                    TreeNode *root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    res.push_back(root);
                }
            }
        }
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}