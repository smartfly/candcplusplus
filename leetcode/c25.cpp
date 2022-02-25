//
// Created by smartfly on 2022/2/19.
//

#include "list_node.h"
#include <iostream>

using namespace std;

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (head == nullptr) return nullptr;
        // 区间【a,b)包含k个待反转元素
        ListNode *a, *b;
        a = b = head;
        for (int i = 0; i < k; ++i) {
            // 不足k个，不需要反转 base case
            if (b == nullptr) return head;
            b = b->next;
        }
        // 反转前k个元素
        ListNode *newHead = reverse(a, b);
        // 递归反转后续链表并链接起来
        a->next = reverseKGroup(b, k);
        return newHead;
    }

    // 反转链表
    ListNode *reverse(ListNode *a, ListNode *b) {
        ListNode *pre, *cur, *next;
        pre = nullptr;
        cur = a;
        // while 终止的条件改一下就行
        while (cur != b) {
            next = cur->next;
            cur->next = pre;
            //更新指针位置
            pre = cur;
            cur = next;
        }
        return pre;
    }

//    ListNode *reverse(ListNode *a) {
//        ListNode *pre, *cur, *next;
//        pre = nullptr;
//        cur = a;
//        next = a;
//        while (cur != nullptr) {
//            next = cur->next;
//            // 逐个节点反转
//            cur->next = pre;
//            // 更新指针位置
//            pre = cur;
//            cur = next;
//        }
//        // 返回反转后的头节点
//        return pre;
//    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}