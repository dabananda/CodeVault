/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 10:52:47
Date          : 2026-02-19
Problem Link  : https://leetcode.com/problems/linked-list-cycle/description/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast && fast->next) {
            fast = fast->next->next, slow = slow->next;
            if (fast == slow) return true;
        }
        return false;
    }
};