// Problem: Diameter of Binary Tree
// Link: https://leetcode.com/problems/diameter-of-binary-tree/description/
// Approach: using postorder find left and right height and check max with diameter
// Date Solved: 22-06-2026

#include <bits/stdc++.h>
using namespace std;
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
    int height(TreeNode *root, int &diameter)
    {
        if (!root)
            return 0;

        int lh = height(root->left, diameter);
        int rh = height(root->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};