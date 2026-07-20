class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *node1 = head, *node2 = head;
        while (n--) node1 = node1->next;
        if (!node1) return head->next;
        while (node1->next) node1 = node1->next, node2 = node2->next;
        ListNode *temp = node2->next;
        node2->next = temp->next;
        delete(temp);
        return head;
    }
};