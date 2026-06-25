// Problem: Correct BST with 2 node swap
// Pattern: inorder traversal
// Link: https://leetcode.com/problems/recover-binary-search-tree/description/
// Date Solved: 30-03-2026
// Approach:
// just do inorder traversal but in unique way do some change at node(left->node->right) we check prev element and if first time violate then store left,mid and at second time we store right then swap accordingly if 1 time violate than they are adjecent otherwise not

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
    TreeNode *first;
    TreeNode *prev;
    TreeNode *mid;
    TreeNode *last;

    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);

        if (prev && prev->val > root->val)
        {
            if (!first)
            {
                first = prev;
                mid = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }

public:
    void recoverTree(TreeNode *root)
    {
        first = mid = last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if (first && last)
            swap(first->val, last->val);
        else if (first && mid)
            swap(first->val, mid->val);
    }
};
