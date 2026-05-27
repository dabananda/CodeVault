class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;  // Base cases
        // Find middle using fast and slow pointers
        ListNode* slow = head, *fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Divide the list into two halves
        ListNode* mid = slow->next;
        slow->next = nullptr;  // Disconnect the halves
        // Recursively sort the halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);
        // Merge the sorted halves
        return mergeList(left, right);
    }

    ListNode* mergeList(ListNode* l1, ListNode* l2) {
        // Create a dummy head to simplify merging
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        // Merge lists in sorted order
        while (l1 && l2) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        // Append remaining nodes (if any)
        curr->next = l1 ? l1 : l2;
        return dummy->next;  // Return the actual sorted list
    }
};