// Problem: insertion in BST
// Pattern: path traversal
// Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/
// Date Solved: 18-03-2026
// Approach:
// start from root chack every node one direction right or left by comparision and when you get NULL then insert at that point

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
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (!root)
            return new TreeNode(val);
        TreeNode *temp = root;
        while (true)
        {
            if (temp->val <= val)
            {
                if (temp->right)
                    temp = temp->right;
                else
                {
                    temp->right = new TreeNode(val);
                    return root;
                }
            }
            else
            {
                if (temp->left)
                    temp = temp->left;
                else
                {
                    temp->left = new TreeNode(val);
                    return root;
                }
            }
        }
        return root;
    }
};