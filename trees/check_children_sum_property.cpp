// Problem: check children sum property
// Pattern: DFS + recursion
// Link: Not noted - add link here
// Date Solved: 07-03-2026
// Approach:
// we find children sum and compare with parent if sum greater than root then change root to child val sum else we update children with curr root ; recurcivly call fun for left and right and at the end we calculate children sum and if children exist then change root val to total sum

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
    // Function to change the values of the nodes
    // based on the sum of its children's values.
    void changeTree(TreeNode *root)
    {
        // Base case: If the current node
        // is NULL, return and do nothing.
        if (root == NULL)
        {
            return;
        }

        // Calculate the sum of the values of
        // the left and right children, if they exist.
        int child = 0;
        if (root->left)
        {
            child += root->left->val;
        }
        if (root->right)
        {
            child += root->right->val;
        }

        // Compare the sum of children with
        // the current node's value and update
        if (child >= root->val)
        {
            root->val = child;
        }
        else
        {
            // If the sum is smaller, update the
            // child with the current node's value.
            if (root->left)
            {
                root->left->val = root->val;
            }
            else if (root->right)
            {
                root->right->val = root->val;
            }
        }

        // Recursively call the function
        // on the left and right children.
        changeTree(root->left);
        changeTree(root->right);

        // Calculate the total sum of the
        // values of the left and right
        // children, if they exist.
        int tot = 0;
        if (root->left)
        {
            tot += root->left->val;
        }
        if (root->right)
        {
            tot += root->right->val;
        }

        // If either left or right child
        // exists, update the current node's
        // value with the total sum.
        if (root->left or root->right)
        {
            root->val = tot;
        }
    }
};

// Function to print the inorder
// traversal of the tree
void inorderTraversal(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}
