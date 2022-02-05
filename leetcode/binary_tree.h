//
// Created by taohu on 2022/2/5.
//

#ifndef HELLOWORLD_BINARY_TREE_H
#define HELLOWORLD_BINARY_TREE_H

/**************************************************************************************************/
/*                                      Definition                                                */
/**************************************************************************************************/
// defined by leetcode
// normal binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

#endif //HELLOWORLD_BINARY_TREE_H

