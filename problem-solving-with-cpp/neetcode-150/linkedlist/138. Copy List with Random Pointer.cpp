/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;

        unordered_map<Node*, Node*> m;
        Node* newHead = new Node(head->val);
        Node* newNode = newHead;
        Node* oldNode = head->next;
        m[head] = newHead;

        // 1. copy to new list
        while(oldNode) {
            newNode->next = new Node(oldNode->val);
            m[oldNode] = newNode->next;
            oldNode = oldNode->next;
            newNode = newNode->next;
        }

        // 2. copy random pointer to new list
        oldNode = head;
        newNode = newHead;
        while (oldNode) {
            newNode->random = m[oldNode->random];
            oldNode = oldNode->next;
            newNode = newNode->next;
        }
        return newHead;
    }
};