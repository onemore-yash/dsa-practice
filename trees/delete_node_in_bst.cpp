// Problem: delete node in BST
// Pattern: path traversal
// Link: https://leetcode.com/problems/delete-node-in-a-bst/submissions/1957728037/
// Date Solved: 24-03-2026
// Approach:
// Search for the node using BST property (left if key smaller, right if bigger),When found → return NULL (leaf), return child other that which is not present (1 child), or replace with(either max from left or min from right) predecessor/successor and delete it (2 children)

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
