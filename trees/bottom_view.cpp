// Problem: Bottom view
// Pattern: vertical + bfs +map
// Link: Not noted - add link here
// Date Solved: 06-03-2026
// Approach:
// same as top view but if curr is already presant in map than we update it

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
    // Function to return the
    // bottom view of the binary tree
    vector<int> bottomView(TreeNode *root)
    {
        // Vector to store the result
        vector<int> ans;

        // Check if the tree is empty
        if (root == NULL)
        {
            return ans;
        }

        // Map to store the bottom view nodes
        // based on their vertical positions
        map<int, int> mpp;

        // Queue for BFS traversal, each
        // element is a pair containing node
        // and its vertical position
        queue<pair<TreeNode *, int>> q;

        // Push the root node with its vertical
        // position (0) into the queue
        q.push({root, 0});

        // BFS traversal
        while (!q.empty())
        {
            // Retrieve the node and its vertical
            // position from the front of the queue
            auto it = q.front();
            q.pop();
            TreeNode *node = it.first;
            int line = it.second;

            // Update the map with the node's val
            // for the current vertical position
            mpp[line] = node->val;

            // Process left child
            if (node->left != NULL)
            {
                // Push the left child with a decreased
                // vertical position into the queue
                q.push({node->left, line - 1});
            }

            // Process right child
            if (node->right != NULL)
            {
                // Push the right child with an increased
                // vertical position into the queue
                q.push({node->right, line + 1});
            }
        }

        // Transfer values from the
        // map to the result vector
        for (auto it : mpp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};
