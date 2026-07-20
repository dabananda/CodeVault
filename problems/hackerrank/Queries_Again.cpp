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
    tail = newNode;
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

void printReverse(Node* tail) {
  Node* curr = tail;
  while (curr != nullptr) {
    cout << curr->val << " ";
    curr = curr->prev;
  }
  cout << endl;
}

int getSize(Node* head) {
  int ans = 0;
  Node* curr = head;
  while (curr != nullptr) {
    curr = curr->next;
    ans++;
  }
  return ans;
}

void insertAt(Node*& head, Node*& tail, int pos, int val) {
  int size = getSize(head);
  if (pos < 0 || pos > size) {
    cout << "Invalid" << endl;
    return;
  }

  Node* newNode = new Node(val);
  if (pos == 0) {
    if (head == nullptr) {
      head = newNode;
      tail = head;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  } else if (pos == size) {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  } else {
    Node* curr = head;
    for (int i = 0; i < pos - 1; i++) {
      curr = curr->next;
    }
    newNode->next = curr->next;
    newNode->prev = curr;
    if (curr->next != nullptr) {
      curr->next->prev = newNode;
    }
    curr->next = newNode;
  }
  cout << "L -> ";
  print(head);
  cout << "R -> ";
  printReverse(tail);
}

int main() {
  int q;
  cin >> q;
  Node* head = nullptr;
  Node* tail = nullptr;
  while (q--) {
    int x, v;
    cin >> x >> v;
    insertAt(head, tail, x, v);
  }

  return 0;
}
