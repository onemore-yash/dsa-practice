// Problem: preorder to BST
// Pattern: construct BST
// Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/
// Date Solved: 27-03-2026
// Approach:
// use a globle variable for upper bound and then make root and after make left and right recursivly

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
