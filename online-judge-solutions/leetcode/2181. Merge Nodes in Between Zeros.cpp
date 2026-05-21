class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* newNode = head;
        int sum = 0;
        while (curr != nullptr && curr->val == 0) {
            curr = curr->next;
        }
        while (curr != nullptr) {
            if (curr->val == 0) {
                newNode->val = sum;
                sum = 0;
                if (curr->next != nullptr) {
                    newNode = newNode->next;
                    // curr = curr->next;
                }
            } else {
                sum = sum + curr->val;
            }
            curr = curr->next;
        }
        newNode->next = nullptr;
        return head;
    }
};