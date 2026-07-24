class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *curr = head;
        int decimal = 0;
        while (curr) {
            decimal = decimal * 2 + curr->val;
            curr = curr->next;
        }
        return decimal;
    }
};