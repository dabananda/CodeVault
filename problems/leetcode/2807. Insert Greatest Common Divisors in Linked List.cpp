// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while (curr->next != nullptr) {
            ListNode* first = curr;
            ListNode* second = curr->next;
            int gcd = __gcd(first->val, second->val);
            ListNode* newNode = new ListNode(gcd);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = second;
        }
        return head;
    }
};