//
// Created by smartfly on 2022/2/18.
//

#include "list_node.h"
#include <iostream>

using namespace std;

class Solution {
private:
    ListNode successor = null; // 后驱节点
public:
    ListNode *reverseBetween(ListNode *head, int left, int right) {
        // base case
        if (left == 1) {
            // 反转前right个元素
            return reverseN(head, right);
        }
        head->next = reverseBetween(head->next, left - 1, right - 1);
        return head;
    }

    // 反转前n个节点
    ListNode *reverseN(ListNode *head, int n) {
        // base case
        if (n == 1) {
            successor = head->next;
            return head;
        }
        ListNode *last = reverseN(head->next, n - 1);
        head->next->next = head;
        head->next = successor;
        return last;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}