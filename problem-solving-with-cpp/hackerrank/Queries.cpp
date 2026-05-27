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

void addNode(Node*& head, int val) {
  if (head == nullptr) {
    head = new Node(val);
  } else {
    Node* newNode = new Node(val);
    Node* curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    curr->next = newNode;
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

void insertAtHead(Node*& head, int val) {
  Node* tmp = new Node(val);
  tmp->next = head;
  head = tmp;
}

void deleteHead(Node*& head) {
  if (head != nullptr) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }
}

int sizeOfList(Node* head) {
  int count = 0;
  Node* curr = head;
  while (curr != nullptr) {
    count++;
    curr = curr->next;
  }
  return count;
}

void deleteByPosition(Node*& head, int pos) {
  if (pos < 0 || head == nullptr) return;
  if (pos == 0) {
    deleteHead(head);
  } else {
    Node* curr = head;
    for (int i = 0; curr != nullptr && i < pos - 1; i++) {
      curr = curr->next;
    }
    if (curr == nullptr || curr->next == nullptr) return;
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
  }
}

int main() {
  Node* head = nullptr;
  int query;
  cin >> query;
  while (query--) {
    int x, v;
    cin >> x >> v;

    if (x == 0) {
      insertAtHead(head, v);
    } else if (x == 1) {
      addNode(head, v);
    } else if (x == 2) {
      deleteByPosition(head, v);
    }
    print(head);
  }

  return 0;
}
