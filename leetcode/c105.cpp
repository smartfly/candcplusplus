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

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        int n = inorder.size();
        // 构造哈希映射，帮助我们快速定位根节点
        unordered_map<int, int> in_map;
        for (int i = 0; i < n; ++i) {
            in_map[inorder[i]] = i;
        }
        return build(preorder, 0, n-1, inorder, 0, n-1, in_map);
    }

    TreeNode *build(vector<int> &preorder, int pre_start, int pre_end, vector<int> &inorder,
                    int in_start, int in_end, unordered_map<int, int> &in_map) {
        if (pre_start > pre_end || in_start > in_end) {
            return nullptr;
        }
        // 前序遍历中第一个节点就是根节点
        TreeNode *root = new TreeNode(preorder[pre_start]);
        int in_root = in_map[root->val];
        int numLeft = in_root - in_start;
        root->left = build(preorder, pre_start + 1, pre_start + numLeft,
                           inorder, in_start, in_root - 1, in_map);
        root->right = build(preorder, pre_start + numLeft + 1, pre_end,
                            inorder, in_root + 1, in_end, in_map);
        return root;
    }
};

int main() {
    cout << "Hello World" << endl;

    return 0;
}