// Problem: kth largest in BST with O(1) space
// Pattern: morrise traverasl
// Link: https://www.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
// Date Solved: 15-03-2026
// Approach:
// use morrise traversal but in reverse order

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
