class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            ListNode *temp = lists[i];
            while (temp) {
                v.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(v.begin(), v.end());
        n = v.size();
        ListNode *newNode = new ListNode();
        ListNode *head = newNode;
        for (int i = 0; i < n; i++) {
            newNode->next = new ListNode(v[i]);
            newNode = newNode->next;
        }
        return head->next;
    }
};