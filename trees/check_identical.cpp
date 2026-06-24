// Problem: check identical
// Pattern: Tree Comparison (Recursive DFS)
// Link: https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
// Date Solved: 27-02-2026
// Approach:
// check both are null then true one null and other is not then false and check value and left and right

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
    bool isIdentical(TreeNode *r1, TreeNode *r2)
    {
        // code here
        if (!r1 && !r2)
            return true;
        if (!r1 || !r2)
            return false;
        if (r1->val != r2->val)
            return false;
        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }
};
