/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 16:15:48
Date          : 2026-02-19
Problem Link  : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // dfs
        // if (root == NULL) return 0;
        // int a = 1 + maxDepth(root->left);
        // int b = 1 + maxDepth(root->right);
        // return max(a, b);

        // bfs
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while (!q.empty()) {
            depth++;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return depth;
    }
};