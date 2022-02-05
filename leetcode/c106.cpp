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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // 构造哈希映射，帮助我们快速定位根节点
        unordered_map<int, int> in_map;
        for (int i = 0; i < inorder.size(); ++i) {
            in_map[inorder[i]] = i;
        }
        return build(inorder, 0, inorder.size() - 1,
                     postorder, 0, postorder.size() - 1, in_map);
    }

    TreeNode *build(vector<int> &inorder, int in_start, int in_end,
                    vector<int> &postorder, int post_start, int post_end, unordered_map<int, int> &in_map) {
        if (in_start > in_end || post_start > post_end) {
            return nullptr;
        }
        TreeNode *root = new TreeNode(postorder[post_end]);
        int in_root = in_map[root->val];
        int num_left = in_root - in_start;
        root->left = build(inorder, in_start, in_root - 1,
                          postorder, post_start, post_start + num_left - 1, in_map);
        root->right = build(inorder, in_root + 1, in_end,
                           postorder, post_start + num_left, post_end - 1, in_map);
        return root;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}