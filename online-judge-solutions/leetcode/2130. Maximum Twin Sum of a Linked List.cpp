class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *curr = head;
        vector<int> v;
        while (curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int n = v.size(), maxSum = 0, temp;
        for (int i = 0; i < n / 2; i++) {
            temp = v[i] + v[n - i - 1];
            maxSum = max(maxSum, temp);
        }
        return maxSum;
    }
};