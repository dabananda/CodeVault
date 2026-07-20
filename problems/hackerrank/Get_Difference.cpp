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

void addNode(Node*& head, Node*& tail, int val) {
  if (head == nullptr) {
    head = new Node(val);
    tail = head;
  } else {
    tail->next = new Node(val);
    tail = tail->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;

  int val;
  while (cin >> val && val != -1) {
    addNode(head, tail, val);
  }

  if (head == nullptr || head->next == nullptr) {
    cout << "0" << endl;
    return 0;
  }

  int minVal = INT_MAX, maxVal = INT_MIN;
  Node* curr = head;
  while (curr != nullptr) {
    if (curr->val > maxVal) {
      maxVal = curr->val;
    }
    if (curr->val < minVal) {
      minVal = curr->val;
    }
    curr = curr->next;
  }

  cout << maxVal - minVal << endl;

  return 0;
}
