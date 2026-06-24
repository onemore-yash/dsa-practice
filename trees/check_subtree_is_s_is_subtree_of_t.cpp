// Problem: Check Subtree (is S is subtree of T)
// Pattern: Tree Comparison +DFS
// Link: https://www.geeksforgeeks.org/problems/check-if-subtree/1
// Date Solved: 27-02-2026
// Approach:
// for all node of T with root of S check identical

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
    bool identical(TreeNode *r1, TreeNode *r2)
    {

        if (r1 == nullptr && r2 == nullptr)
            return true;

        if (r1 == nullptr || r2 == nullptr)
            return false;

        return (r1->val == r2->val) &&
               identical(r1->left, r2->left) &&
               identical(r1->right, r2->right);
    }
};