// Problem: check Balanced BT
// Pattern: Height +tree dp
// Link: https://leetcode.com/problems/balanced-binary-tree/description/
// Date Solved: 27-02-2026
// Approach:
// check left and right height if diff>1 then return -1

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
