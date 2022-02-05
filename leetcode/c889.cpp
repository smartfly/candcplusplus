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
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder) {
        unordered_map<int, int> post_map;
        for(int i = 0; i < preorder.size(); i++) {
            post_map[postorder[i]] = i;
        }
        return build(preorder, 0, preorder.size()-1,
                     postorder, 0, postorder.size()-1, post_map);
    }

    TreeNode *build(vector<int> &preorder, int pre_start, int pre_end,
                    vector<int> &postorder, int post_start, int post_end, unordered_map<int, int> &post_map) {
        if (pre_start > pre_end) {
            return nullptr;
        }
        if (pre_start == pre_end) {
            return new TreeNode(preorder[pre_start]);
        }
        // 获取根节点root
        TreeNode *root = new TreeNode(preorder[pre_start]);
        // root.left 的值是前序遍历第二个元素
        // 通过前序和后序遍历构造二叉树的关键在于通过左子树的根节点
        // 确定 preorder 和 postorder 中左右子树的元素区间
        int left_root_val = preorder[pre_start + 1];
        int post_root = post_map[left_root_val];
        int num_left = post_root - post_start + 1;
        root->left = build(preorder, pre_start + 1, pre_start + num_left,
                           postorder, post_start, post_root, post_map);
        root->right = build(preorder, pre_start + num_left + 1, pre_end,
                            postorder, post_root + 1, post_end - 1, post_map);
        return root;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}