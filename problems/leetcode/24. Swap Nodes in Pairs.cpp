class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // If empty or single node
        if (!head || !head->next) {
            return head;
        }
        ListNode* curr = head;
        ListNode* dummyNode = new ListNode();
        ListNode* prev = dummyNode;
        while (curr && curr->next) {
            prev->next = curr->next;
            curr->next = prev->next->next;
            prev->next->next = curr;
            prev = curr;
            curr = curr->next;
        }
        ListNode* newHead = dummyNode->next;
        delete(dummyNode);
        return newHead;
    }
};