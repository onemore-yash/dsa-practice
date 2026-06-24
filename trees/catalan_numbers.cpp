// Problem: catalan numbers
// Pattern: one type of series
// Link: https://www.geeksforgeeks.org/dsa/applications-of-catalan-numbers/
// Date Solved: 31-03-2026
// Approach:
// 2nCn

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
