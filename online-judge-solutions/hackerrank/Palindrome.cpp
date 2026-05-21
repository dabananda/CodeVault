#include <iostream>

using namespace std;

class Node {
 public:
  int val;
  Node* next;
  Node* prev;

  Node(int val) {
    this->val = val;
    next = nullptr;
    prev = nullptr;
  }
};

void insert(Node*& head, Node*& tail, int val) {
  Node* newNode = new Node(val);
  if (head == nullptr) {
    head = newNode;
    tail = head;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;
  int val;
  while (cin >> val && val != -1) {
    insert(head, tail, val);
  }

  Node* i = head;
  Node* j = tail;
  string result = "YES";
  while (i != j) {
    if (i->val != j->val) {
      result = "NO";
      break;
    }
    i = i->next;
    j = j->prev;
  }
  cout << result << endl;

  return 0;
}