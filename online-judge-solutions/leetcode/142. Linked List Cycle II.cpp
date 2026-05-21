/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://leetcode.com/problems/linked-list-cycle-ii/description/
// Time complexity: O(n)
// Space complexity: O(1)

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
  ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    if (head == nullptr || head->next == nullptr) {
      return nullptr;
    }
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next, fast = fast->next->next;
      if (slow == fast) {
        slow = head;
        while (slow != fast) {
          slow = slow->next, fast = fast->next;
        }
        return slow;
      }
    }
    return nullptr;
  }
};