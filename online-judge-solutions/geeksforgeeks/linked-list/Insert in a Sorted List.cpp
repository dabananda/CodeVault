/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:43:12
Date          : 2026-02-19
Problem Link  : https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
*/

/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;
        Node* curr = dummy->next;
        bool flag = false;
        while (curr) {
            if (curr->data >= key) {
                Node* newNode = new Node(key);
                newNode->next = curr;
                prev->next = newNode;
                flag = true;
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        if (!flag) {
            Node* node = new Node(key);
            prev->next = node;
        }
        return dummy->next;
    }
};