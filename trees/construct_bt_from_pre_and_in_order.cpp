// Problem: construct BT from pre and in order
// Pattern: construction of BT
// Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1943923613/
// Date Solved: 10-03-2026
// Approach:
// from pre order we find the root and we make map of inorder then make a function for build tree we first make root then recursivly make left a nd right

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
