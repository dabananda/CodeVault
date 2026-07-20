class Node {
public:
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

class MyLinkedList {
public:
    Node* head;
    int size;
    MyLinkedList() : head(nullptr), size(0) {}

    int get(int index) {
        if (index >= size || index < 0) {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }
    void addAtHead(int val) { addAtIndex(0, val); }

    void addAtTail(int val) { addAtIndex(size, val); }

    void addAtIndex(int index, int val) {
        if (index > size || index < 0)
            return;
        Node* curr = head;
        Node* newNode = new Node(val);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }
        size++;
    }

    void deleteAtIndex(int index) {
        if (index >= size || index < 0)
            return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            Node* temp = curr->next->next;
            delete (curr->next);
            curr->next = temp;
        }
        size--;
    }

    ~MyLinkedList() {
        Node* p = head;
        while (head != nullptr) {
            head = head->next;
            delete p;
            p = head;
        }
    }
};