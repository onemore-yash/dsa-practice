// Problem: check Symmetric
// Pattern: symmetric/recursive comparision
// Link: https://leetcode.com/problems/symmetric-tree/description/
// Date Solved: 06-03-2026
// Approach:
// check mirror for root left and right

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
    bool isMirror(TreeNode *leftSub, TreeNode *rightSub)
    {

        if (leftSub == nullptr && rightSub == nullptr)
            return true;

        if (leftSub == nullptr || rightSub == nullptr ||
            leftSub->val != rightSub->val)
        {
            return false;
        }

        return isMirror(leftSub->left, rightSub->right) &&
               isMirror(leftSub->right, rightSub->left);
    }

public:
    bool isSymmetric(TreeNode *root)
    {

        if (root == nullptr)
            return true;

        return isMirror(root->left, root->right);
    }
};
