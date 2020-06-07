//
// Created by smartfly on 2020/6/7.
//

// 输入：head = [1,3,2]
// 输出：[2,3,1]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode *head) {
        vector<int> result;
        ListNode *temp;
        temp = head;
        while (temp != NULL) {
            result.push_back(temp->val);
            temp = temp->next;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution solution;
    ListNode node1 = ListNode(1);
    ListNode node2 = ListNode(3);
    ListNode node3 = ListNode(2);
    ListNode *head = NULL;
    head = &node1;
    node1.next = &node2;
    node2.next = &node3;
    vector<int> result = solution.reversePrint(head);
    for (auto i : result) {
        cout << i << endl;
    }
    return 0;
}