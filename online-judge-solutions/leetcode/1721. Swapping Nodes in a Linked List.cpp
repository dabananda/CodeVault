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

/**
 * Title: 1721. Swapping Nodes in a Linked List
 * Link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
 * complexity: Time - O(n), Space - O(1)
 * Author: Dabananda Mitra
 * Date: 2024-07-04 10:50:31
 *
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int size = 0;
        ListNode* curr = head;
        while (curr) {
            curr = curr->next;
            size++;
        }
        curr = head;
        for (int i = 1; i < k; i++) {
            curr = curr->next;
        }
        ListNode* a = curr;
        curr = head;
        for (int i = 1; i <= size - k; i++) {
            curr = curr->next;
        }
        ListNode* b = curr;
        swap(a->val, b->val);
        return head;
    }
};