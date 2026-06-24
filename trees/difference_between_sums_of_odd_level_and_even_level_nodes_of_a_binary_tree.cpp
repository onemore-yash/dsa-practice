// Problem: Difference between sums of odd level and even level nodes of a Binary Tree
// Pattern: lavel order variation
// Link: https://www.geeksforgeeks.org/problems/odd-even-level-difference/1
// Date Solved: 09-03-2026
// Approach:
// use level order with boolean and sum

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
