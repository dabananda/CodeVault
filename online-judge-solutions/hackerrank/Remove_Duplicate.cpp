#include <bits/stdc++.h>

using namespace std;

class Node {
 public:
  int val;
  Node* next;

  Node(int val) {
    this->val = val;
    next = nullptr;
  }
};

void addNode(Node*& head, int val) {
  if (head == nullptr) {
    head = new Node(val);
  } else {
    Node* curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = new Node(val);
  }
}

void print(Node* head) {
  Node* curr = head;
  while (curr != nullptr) {
    cout << curr->val << " ";
    curr = curr->next;
  }
  cout << endl;
}

void removeDuplicates(Node* head) {
  Node* curr = head;

  while (curr != nullptr) {
    Node* node = curr;
    while (node->next != nullptr) {
      if (node->next->val == curr->val) {
        Node* temp = node->next;
        node->next = node->next->next;
        delete temp;
      } else {
        node = node->next;
      }
    }
    curr = curr->next;
  }
}

int main() {
  Node* head = nullptr;

  int val;
  while (cin >> val && val != -1) {
    addNode(head, val);
  }

  removeDuplicates(head);
  print(head);

  return 0;
}
