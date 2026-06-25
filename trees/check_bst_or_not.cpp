// Problem: check BST or not
// Pattern: path traversal
// Link: https://www.geeksforgeeks.org/problems/check-for-bst/1
// Date Solved: 24-03-2026
// Approach:
// run morris traversal for inorder and for each node check curnode value is less than previoius or not

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
    bool isBST(TreeNode *root)
    {
        // code here
        TreeNode *cur = root;
        TreeNode *pre = NULL;
        int prevalue = INT_MIN;
        while (cur)
        {
            if (!cur->left)
            {
                if (cur->val <= prevalue)
                    return false;
                prevalue = cur->val;
                cur = cur->right;
            }
            else
            {
                pre = cur->left;
                while (pre->right && pre->right != cur)
                {
                    pre = pre->right;
                }
                if (!pre->right)
                {
                    pre->right = cur;
                    cur = cur->left;
                }
                else
                {
                    pre->right = NULL;
                    if (cur->val <= prevalue)
                        return false;

                    prevalue = cur->val;
                    cur = cur->right;
                }
            }
        }
        return true;
    }
};