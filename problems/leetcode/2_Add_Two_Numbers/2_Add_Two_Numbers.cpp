class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyHead = new ListNode(0);
        ListNode *tail = dummyHead;
        int carry = 0;
        while (l1 || l2 || carry) {
            int d1 = l1 ? l1->val : 0;
            int d2 = l2 ? l2->val : 0;
            int sum = d1 + d2 + carry;
            int d = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(d);
            tail->next = newNode;
            tail = tail->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        ListNode *head = dummyHead->next;
        delete(dummyHead);
        return head;
    }
};