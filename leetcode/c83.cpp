//
// Created by smartfly on 2022/2/26.
//
#include "list_node.h"
#include <iostream>

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) {
            return head;
        }
        ListNode *slow = head, *fast = head;
        while (fast != nullptr) {
            if (fast->val != slow->val) {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = nullptr;
        return head;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}