/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode curr = head, prev = head;
        while (n-- > 0)
            curr = curr.next;
        if (curr == null) return head.next;
        while (curr.next != null)
        {
            prev = prev.next;
            curr = curr.next;
        }
        ListNode temp = prev.next;
        prev.next = temp.next;
        return head;
    }
}