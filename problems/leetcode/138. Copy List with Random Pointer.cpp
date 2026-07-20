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
        // Creating copy node except random next to the original node
        Node* node = head;
        while (node) {
            Node* temp = node->next;
            node->next = new Node(node->val);
            node->next->next = temp;
            node = temp;
        }
        // Copy random pointer
        node = head;
        while (node) {
            if (node->random) {
                node->next->random = node->random->next;
            }
            node = node->next->next;
        }
        // Restore original node
        Node* ans = new Node(0);
        Node* temp = ans;
        Node* curr = head;
        while (curr) {
            temp->next = curr->next;
            temp = temp->next;
            curr->next = curr->next->next;
            curr = curr->next;
        }
        return ans->next;
    }
};