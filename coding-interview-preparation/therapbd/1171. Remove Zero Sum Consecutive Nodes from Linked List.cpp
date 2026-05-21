/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 10:53:50
Date          : 2026-02-19
Problem Link  : https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        unordered_map<int, ListNode*> mp;
        int prefixSum = 0;
        ListNode* curr = dummy;
        while (curr) {
            prefixSum += curr->val;
            mp[prefixSum] = curr;
            curr = curr->next;
        }
        prefixSum = 0;
        curr = dummy;
        while (curr) {
            prefixSum += curr->val;
            curr->next = mp[prefixSum]->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};