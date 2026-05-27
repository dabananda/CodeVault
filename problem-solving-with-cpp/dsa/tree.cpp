#include <bits/stdc++.h>
using namespace std;

// Tree
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int x) {
    val = x;
    left = NULL;
    right = NULL;
  }
};

/* Binary Search Tree (BST):
-----------------------------
Rule: left subtree < root < right subtree
*/

// BST Insert
TreeNode* insert(TreeNode* root, int val) {
  if (root == NULL) return new TreeNode(val);
  if (val < root->val)
    root->left = insert(root->left, val);
  else
    root->right = insert(root->right, val);
  return root;
}

/* Tree Traversals
-------------------
Traversal Types:
1. DFS
    a. Inorder (Left - Root - Right) [It always return values with sorted order]
    b. Preorder (Root - Left - Right)
    c. Postorder (Left - Right - Root) [Tree recursive traversal works in
postorder]
2. BFS
    a. Level Order
*/

// DFS - Inorder (Left - Root - Right)
void inorder(TreeNode* root) {
  if (root == NULL) return;
  inorder(root->left);
  cout << root->val << " ";
  inorder(root->right);
}

// DFS - Preorder (Root - Left - Right)
void preorder(TreeNode* root) {
  if (root == NULL) return;
  cout << root->val << " ";
  preorder(root->left);
  preorder(root->right);
}

// DFS - Postorder (Left - Right - Root)
void postorder(TreeNode* root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  cout << root->val << " ";
}

// BFS - Level Order Traversal
void levelOrder(TreeNode* root) {
  if (root == NULL) return;
  queue<TreeNode*> q;
  q.push(root);
  while (!q.empty()) {
    TreeNode* curr = q.front();
    q.pop();
    cout << curr->val << " ";
    if (curr->left) q.push(curr->left);
    if (curr->right) q.push(curr->right);
  }
}

// Count tatal nodes
int countNodes(TreeNode* root) {
  if (root == NULL) return 0;
  int left = countNodes(root->left);
  int right = countNodes(root->right);
  return left + right + 1;
}

// Count height
int height(TreeNode* root) {
  if (root == NULL) return 0;
  int left = height(root->left);
  int right = height(root->right);
  return max(left, right) + 1;
}

// Sum of all nodes
int sum(TreeNode* root) {
  if (root == NULL) return 0;
  return sum(root->left) + sum(root->right) + root->val;
}

// Max node value
int maxValue(TreeNode* root) {
  if (root == NULL) return INT_MIN;
  int left = maxValue(root->left);
  int right = maxValue(root->right);
  return max(root->val, max(left, right));
}

// Total leaf nodes
int totalLeafNodes(TreeNode* root) {
  if (root == NULL) return 0;
  if (root->left == NULL && root->right == NULL) return 1;
  return totalLeafNodes(root->left) + totalLeafNodes(root->right);
}

// Total non-leaf nodes
int totalNonLeafNodes(TreeNode* root) {
  if (root == NULL || (root->left == NULL && root->right == NULL)) return 0;
  return totalNonLeafNodes(root->left) + totalNonLeafNodes(root->right) + 1;
}

// Diameter = longest path between ANY two nodes
int diameter = 0;
int getDiameter(TreeNode* root) {
  if (root == NULL) return 0;
  int left = getDiameter(root->left);
  int right = getDiameter(root->right);
  diameter = max(diameter, left + right);
  return max(left, right) + 1;
}

// Balanced Binary Tree
int check(TreeNode* root) {
  if (root == NULL) return 0;
  int left = check(root->left);
  if (left == -1) return -1;
  int right = check(root->right);
  if (right == -1) return -1;
  if (abs(left - right) > 1) return -1;
  return max(left, right) + 1;
}

bool isBalanced(TreeNode* root) { return check(root) != -1; }

// Path Sum
bool hasPathSum(TreeNode* root, int targetSum) {
  if (root == NULL) return false;
  if (root->left == NULL && root->right == NULL) return targetSum == root->val;
  int remaining = targetSum - root->val;
  return hasPathSum(root->left, remaining) || hasPathSum(root->right, remaining);
}

// Delete node
TreeNode* findMin(TreeNode* node) {
  while (node->left) node = node->left;
  return node;
}

TreeNode* deleteNode(TreeNode* root, int key) {
  if (root == NULL) return root;
  if (key < root->val)
    root->left = deleteNode(root->left, key);
  else if (key > root->val)
    root->right = deleteNode(root->right, key);
  else {
    // no child
    if (root->left == NULL && root->right == NULL) {
      delete (root);
      return NULL;
    }
    // one child
    else if (root->left == NULL) {
      TreeNode* temp = root->right;
      delete root;
      return temp;
    } else if (root->right == NULL) {
      TreeNode* temp = root->left;
      delete root;
      return temp;
    }
    // two child
    TreeNode* temp = findMin(root->right);
    root->val = temp->val;
    root->right = deleteNode(root->right, temp->val);
  }
  return root;
}

// main function
int main() {
  TreeNode* root = NULL;

  // Insert values into BST
  vector<int> values = {50, 30, 70, 20, 40, 60, 80};
  for (int v : values) {
    root = insert(root, v);
  }

  // Traversals
  cout << "Inorder Traversal: ";
  inorder(root);
  cout << endl;

  cout << "Preorder Traversal: ";
  preorder(root);
  cout << endl;

  cout << "Postorder Traversal: ";
  postorder(root);
  cout << endl;

  cout << "Level Order Traversal: ";
  levelOrder(root);
  cout << endl;

  // Tree Properties
  cout << "Total Nodes: " << countNodes(root) << endl;
  cout << "Tree Height: " << height(root) << endl;
  cout << "Sum of Nodes: " << sum(root) << endl;
  cout << "Max Node Value: " << maxValue(root) << endl;
  cout << "Total Leaf Nodes: " << totalLeafNodes(root) << endl;
  cout << "Total Non-Leaf Nodes: " << totalNonLeafNodes(root) << endl;
  cout << "Diameter: " << getDiameter(root) << endl;
  cout << "Is Balanced: " << isBalanced(root) << endl;
  cout << "Has Path Sum: " << hasPathSum(root, 10) << endl;
  TreeNode* node = deleteNode(root, 10);
  cout << "Delete Node: " << node->val << endl;

  return 0;
}
