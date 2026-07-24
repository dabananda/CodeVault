class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // finding middle
        ListNode *fast = head, *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        // If the list has an odd length, move slow one step ahead
        if (fast) {
            slow = slow->next;
        }
        // reversing list (slow)
        ListNode *prev = nullptr, *temp = nullptr;
        while (slow) {
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        // comparing the two halves
        ListNode *left = head, *right = prev;
        while (right) {
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
};