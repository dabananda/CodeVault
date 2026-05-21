/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 09:55:09
Date          : 2026-02-20
*/

/*
Problem Statement:
You are given the root of a binary tree. Each node contains an integer (can be negative).
Return the maximum value present in the tree.
*/

int findMax(TreeNode* root) {
    if (root == NULL)
        return INT_MIN;
    int left = findMax(root->left);
    int right = findMax(root->right);
    return max(root->val, max(left, right));
}