// Problem: Sorted LL to BST
// Pattern: construct BST
// Link: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
// Date Solved: 31-03-2026
// Approach:
// use inorder approch with globle currHead pointer

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
