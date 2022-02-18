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
    int sum;
public:
    TreeNode *bstToGst(TreeNode *root) {
        traverse(root);
        return root;
    }
    void traverse(TreeNode *node) {
        if (node == nullptr) {
            return;
        }
        traverse(node->right);
        sum += node->val;
        node->val = sum;
        traverse(node->left);
        return;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}