// Problem: construct BT from post and in order
// Pattern: construction of BT
// Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/
// Date Solved: 11-03-2026
// Approach:
// same as pre+in but here make root last of post and limits

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
};
