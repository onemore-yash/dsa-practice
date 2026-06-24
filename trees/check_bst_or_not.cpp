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
};
