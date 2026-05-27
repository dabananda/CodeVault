/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:13:02
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/print-linked-list-elements/0
*/

/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/

class Solution
{
    public:
    void display(Node *head)
    {
      while(head != NULL) {
          cout << head->data << " ";
          head = head->next;
      }
    }
};