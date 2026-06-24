// Problem: Print root to node path
// Pattern: DFS + backtracking
// Link: Not noted - add link here
// Date Solved: 06-03-2026
// Approach:
// we use bool function to check it curr is target or left or right if yes then we keep that element in ans vector else pop form vector and return false

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
    // Function to find the path from root to node with value x
    bool getPath(TreeNode *root, vector<int> &arr, int x)
    {
        // If current node is NULL, return false
        if (!root)
        {
            return false;
        }

        // Add current node's value to the path
        arr.push_back(root->val);

        // If current node's value is equal to x, return true
        if (root->val == x)
        {
            return true;
        }

        // Recursively search in left or right subtree
        if (getPath(root->left, arr, x) ||
            getPath(root->right, arr, x))
        {
            return true;
        }

        // If not found, backtrack and remove current node
        arr.pop_back();
        return false;
    }

    // Function to get the path from root to node with value B
    vector<int> solve(TreeNode *A, int B)
    {
        // Vector to store the path
        vector<int> arr;

        // If root is NULL, return empty path
        if (A == NULL)
        {
            return arr;
        }

        // Call helper function to fill the path
        getPath(A, arr, B);

        // Return the resulting path
        return arr;
    }
};
