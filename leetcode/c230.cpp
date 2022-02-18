//
// Created by smartfly on 2022/2/17.
//

#include <iostream>

using namespace std;

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
    int res;
    int rank;
public:
    int kthSmallest(TreeNode *root, int k) {
        traverse(root, k);
        return res;
    }

    void traverse(TreeNode *node, int k) {
        if (node == nullptr) {
            return;
        }
        traverse(node->left, k);
        // 中序遍历
        rank++;
        if (rank == k) {
            res = node->val;
            return;
        }
        traverse(node->right, k);
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}