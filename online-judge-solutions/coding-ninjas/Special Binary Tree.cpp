#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    // Write your code here.
    if (!root->left && !root->right) return true;
    if (!root->left || !root->right) return false;
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if (!l || !r) return false;
    return true;
}