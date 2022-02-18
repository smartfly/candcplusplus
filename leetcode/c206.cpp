//
// Created by smartfly on 2022/2/18.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    // 迭代实现
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = nullptr, *cur = head;
        while (cur != nullptr) {
            ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }

    // 递归实现
    ListNode *reverseListR(ListNode *head) {
        // base case
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *last = reverseListR(head->next);
        head->next->next = head;
        head->next = nullptr;
        return last;
    }
};

