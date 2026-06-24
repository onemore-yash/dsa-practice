// Problem: maximum sum BST in BT
// Pattern: postorder + DP
// Link: https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/
// Date Solved: 31-03-2026
// Approach:
// we have to make a structure which carry isBST,sum,maxval and minval and then we have to do post order traversal of this structure sunction

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
