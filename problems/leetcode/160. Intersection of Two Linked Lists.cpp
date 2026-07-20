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
    int lengthOfNode(ListNode *node) {
        int count = 0;
        while (node) {
            node = node->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node1, *node2;
        int l1 = lengthOfNode(headA);
        int l2 = lengthOfNode(headB);
        int d;
        if (l1 > l2) {
            d = l1 - l2;
            node1 = headA, node2 = headB;
        } else {
            d = l2 - l1;
            node1 = headB, node2 = headA;
        }
        while(d--) {
            node1 = node1->next;
        }
        while (node1 && node2) {
            if (node1 == node2) {
                return node1;
            }
            node1 = node1->next, node2 = node2->next;
        }
        return NULL;
    }
};