/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
 public:
  ListNode* deleteMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    if (head == nullptr || head->next == nullptr) {
      return nullptr;
    }
    fast = fast->next->next;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete (temp);
    return head;
  }
};