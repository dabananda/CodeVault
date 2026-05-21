#include <iostream>

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

void append(Node*& head, Node*& tail, int val) {
  if (head == nullptr) {
    head = new Node(val);
    tail = head;
  } else {
    tail->next = new Node(val);
    tail = tail->next;
  }
}

int findIndex(Node* head, int x) {
  int index = 0;
  Node* curr = head;
  while (curr != nullptr) {
    if (curr->val == x) {
      return index;
    }
    curr = curr->next;
    index++;
  }
  return -1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Node* head = nullptr;
    Node* tail = nullptr;

    int value;
    while (true) {
      cin >> value;
      if (value == -1) break;
      append(head, tail, value);
    }

    int x;
    cin >> x;
    int index = findIndex(head, x);
    cout << index << endl;
  }
  return 0;
}
