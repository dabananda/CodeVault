/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 14:31:38
Date          : 2026-02-19
Problem Link  : https://leetcode.com/problems/remove-linked-list-elements/description/
*/

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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};