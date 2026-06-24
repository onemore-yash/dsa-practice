// Problem: balance a BST
// Pattern: construct BST
// Link: https://www.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
// Date Solved: 15-03-2026
// Approach:
// from inorder traversal find sorted vector and then build BST

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
    int height(TreeNode *node)
    {
        if (!node)
            return 0;
        int lh = height(node->left);
        if (lh == -1)
            return -1;
        int rh = height(node->right);
        if (rh == -1)
            return -1;
        if (abs(rh - lh) > 1)
            return -1;
        return 1 + max(lh, rh);
    }

public:
    bool isBalanced(TreeNode *root)
    {
        return (height(root) != -1);
    }
};