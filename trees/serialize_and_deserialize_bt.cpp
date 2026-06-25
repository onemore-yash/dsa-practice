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
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string ans = "";
        if (!root)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (!temp)
                ans += "#,";
            else
            {
                ans += to_string(temp->val) + ",";
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        if (data.empty())
            return NULL;
        stringstream s(data);
        string str;

        getline(s, str, ',');

        TreeNode *root = new TreeNode(stoi(str));

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            getline(s, str, ',');

            if (str != "#")
            {
                TreeNode *leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }
            getline(s, str, ',');
            if (str != "#")
            {
                TreeNode *rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
            }
        }
        return root;
    }
};