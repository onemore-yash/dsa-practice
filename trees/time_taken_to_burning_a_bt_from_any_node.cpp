// Problem: time taken to burning a BT from any node
// Pattern: graph+bfs
// Link: https://www.geeksforgeeks.org/problems/burning-tree/1
// Date Solved: 13-03-2026
// Approach:
// first we have to make reverse means parent mapping so by lavel order traversal we return address of target and make a map which contain parent mapping then do bfs using visited map and each time increase time and return it

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
    TreeNode *markParents(TreeNode *root, int target,
                          unordered_map<TreeNode *, TreeNode *> &parent)
    {

        queue<TreeNode *> q;
        q.push(root);

        TreeNode *targetNode = NULL;

        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();

            if (curr->val == target)
                targetNode = curr;

            if (curr->left)
            {
                parent[curr->left] = curr;
                q.push(curr->left);
            }

            if (curr->right)
            {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }

        return targetNode;
    }

    int minTime(TreeNode *root, int target)
    {

        unordered_map<TreeNode *, TreeNode *> parent;
        TreeNode *targetNode = markParents(root, target, parent);

        unordered_map<TreeNode *, int> vis;
        queue<TreeNode *> q;

        q.push(targetNode);
        vis[targetNode] = 1;

        int time = 0;

        while (!q.empty())
        {

            int sz = q.size();
            bool burned = false;

            while (sz--)
            {

                TreeNode *curr = q.front();
                q.pop();

                if (curr->left && !vis[curr->left])
                {
                    vis[curr->left] = 1;
                    q.push(curr->left);
                    burned = true;
                }

                if (curr->right && !vis[curr->right])
                {
                    vis[curr->right] = 1;
                    q.push(curr->right);
                    burned = true;
                }

                if (parent[curr] && !vis[parent[curr]])
                {
                    vis[parent[curr]] = 1;
                    q.push(parent[curr]);
                    burned = true;
                }
            }

            if (burned)
                time++;
        }

        return time;
    }
};
