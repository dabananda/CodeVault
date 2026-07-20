/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
  // Write your code here
  int n = arr.size();
  if (n == 0) {
    return nullptr;
  }
  Node* head = new Node(arr[0]);
  Node* curr = head;
  for (int i = 1; i < n; i++) {
    Node* newNode = new Node(arr[i]);
    curr->next = newNode;
    curr = curr->next;
  }
  return head;
}