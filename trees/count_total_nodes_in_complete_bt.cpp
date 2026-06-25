// Problem: count total nodes in complete BT
// Pattern: Height Based Problems
// Link: https://leetcode.com/problems/count-complete-tree-nodes/description/
// Date Solved: 09-03-2026
// Approach:
// find left and right height by special functions and if they same simply return value othewise return 1+for children

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
    int leftHeight(TreeNode *root)
    {
        int h = 0;
        while (root)
        {
            h++;
            root = root->left;
        }
        return h;
    }

    int rightHeight(TreeNode *root)
    {
        int h = 0;
        while (root)
        {
            h++;
            root = root->right;
        }
        return h;
    }

public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};