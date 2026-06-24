// Problem: Top view
// Pattern: vertical + bfs +map
// Link: Not noted - add link here
// Date Solved: 06-03-2026
// Approach:
// use bfs and map then is any node altready present in map than there is a node upeer than current node

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
    // Function to return the top view of the binary tree
    vector<int> topView(TreeNode *root)
    {
        // Create a vector to store the final answer
        vector<int> ans;

        // If the tree is empty, return an empty result
        if (root == NULL)
        {
            return ans;
        }

        // Create a map to store vertical level -> node value (only first encountered)
        map<int, int> mpp;

        // Create a queue for BFS that stores {node, vertical_level}
        queue<pair<TreeNode *, int>> q;

        // Push the root node with vertical level 0
        q.push({root, 0});

        // Start BFS traversal
        while (!q.empty())
        {
            // Extract the front element of the queue
            auto it = q.front();
            q.pop();

            // Get the node and its vertical position
            TreeNode *node = it.first;
            int line = it.second;

            // If this vertical position is being visited for the first time, store it
            if (mpp.find(line) == mpp.end())
            {
                mpp[line] = node->val;
            }

            // If there is a left child, push it with vertical level - 1
            if (node->left != NULL)
            {
                q.push({node->left, line - 1});
            }

            // If there is a right child, push it with vertical level + 1
            if (node->right != NULL)
            {
                q.push({node->right, line + 1});
            }
        }

        // Traverse the map and store values in the answer vector
        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }

        // Return the result
        return ans;
    }
};
