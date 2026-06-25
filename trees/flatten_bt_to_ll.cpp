// Problem: Flatten BT to LL
// Pattern: in place modification using morris traversal
// Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/
// Date Solved: 13-03-2026
// Approach:
// first we check if no left then do nothig go right else find rightmost of left and attach original left to right and make left to NULL

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
    void flatten(TreeNode *root)
    {
        if (!root)
            return;

        TreeNode *temp = root;
        while (temp)
        {
            if (!temp->left)
                temp = temp->right;
            else
            {
                TreeNode *pre = temp->left;
                while (pre->right)
                    pre = pre->right;
                TreeNode *righti = temp->right;
                temp->right = temp->left;
                pre->right = righti;
                temp->left = NULL;
                temp = temp->right;
            }
        }
        return;
    }
};
