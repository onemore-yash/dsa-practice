// Problem: two sum in BST
// Pattern: 2sum+BST
// Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
// Date Solved: 30-03-2026
// Approach:
// use BST iterator for left and right element and chack like simple 2 sum

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
