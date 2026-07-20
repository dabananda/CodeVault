/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:59:18
Date          : 2026-02-19
Problem Link  : https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
*/

/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            return head;
        }
        Node* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
        return head;
    }
};