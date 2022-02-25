//
// Created by smartfly on 2022/2/19.
//

#include "list_node.h"
#include <iostream>

using namespace std;

class Solution {
private:
    ListNode *left;
public:
    bool isPalindrome(ListNode *head) {
        left = head;
        return traverse(head);
    }

    bool traverse(ListNode *right) {
        if (right == nullptr) return true;
        bool res = traverse(right->next);
        // 后序遍历代码
        res = res && (right->val == left->val);
        left = left->next;
        return res;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}