// Problem: array to BST
// Pattern: construct BST
// Link: https://www.geeksforgeeks.org/problems/array-to-bst4443/1
// Date Solved: 15-03-2026
// Approach:
// we have to make a function which devide array into 2 parts and we make root to mid and further call for left and right

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
