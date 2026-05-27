/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 13:22:46
Date          : 2026-02-19
Problem Link  : https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1
*/

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        Node* first = head;
        Node* second = head;
        while (second->next != NULL) {
            second = second->next;
        }
        vector<pair<int, int>> v;
        while (first != second && second->next != first) {
            if (first->data + second->data == target) {
                v.push_back({first->data, second->data});
                first = first->next;
                second = second->prev;
            } else {
                if (first->data + second->data < target) first = first->next;
                else second = second->prev;
            }
        }
        return v;
    }
};