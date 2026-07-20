#include <bits/stdc++.h>

class Node {
    public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = nullptr;
    }
};
class Queue {
public:
    Node* head;
    Node* tail;
    Queue() {
        // Implement the Constructor
        head = nullptr;
        tail = nullptr;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return head == nullptr;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if (isEmpty()) {
            return -1;
        }
        Node* temp = head;
        int val = head->val;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        }
        delete temp;
        return val;
    }

    int front() {
        // Implement the front() function
        if (isEmpty()) {
            return -1;
        }
        return head->val;
    }
};