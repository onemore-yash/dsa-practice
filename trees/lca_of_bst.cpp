// Problem: LCA of BST
// Pattern: path traversal
// Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
// Date Solved: 27-03-2026
// Approach:
// chack for node if both exist in same side then recursivly call for that side otherwise return root

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
