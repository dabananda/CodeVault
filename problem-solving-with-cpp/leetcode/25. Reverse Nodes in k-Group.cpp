class Solution {
public:
    int len(ListNode* head) {
        ListNode *curr = head;
        int count = 0;
        while (curr) {
            curr = curr->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Single or empty node
        if (!head || !head->next || k > len(head)) return head;
        // Reversing k nodes
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;
        int count = 0;
        while (count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        // Recursive call for the remaining nodes
        if (curr) head->next = reverseKGroup(curr, k);
        // Returning head of the modified list
        return prev;
    }
};