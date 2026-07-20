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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* res = new ListNode();
        ListNode* curr = res;
        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            int num = sum % 10;
            carry = sum / 10;
            curr->next = new ListNode(num);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr, l2 = l2 ? l2->next : nullptr;
        }
        return res->next;
    }
};