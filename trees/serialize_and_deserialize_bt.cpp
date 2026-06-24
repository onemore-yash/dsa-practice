// Problem: Serialize and De-serialize BT
// Pattern: construction of BT + level order traversal
// Link: https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/
// Date Solved: 12-03-2026
// Approach:
// in serialization we have to make string so we are doing level order travesal and instead of null children we put # and in deserialize we reverse this we put null when # comes

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
