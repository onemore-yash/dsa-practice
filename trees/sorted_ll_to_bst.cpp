// Problem: Sorted LL to BST
// Pattern: construct BST
// Link: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
// Date Solved: 31-03-2026
// Approach:
// use inorder approch with globle currHead pointer

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
    ListNode *currHead;
    TreeNode *Build(int left, int right)
    {
        if (left > right)
            return NULL;
        int mid = left + (right - left) / 2;

        TreeNode *leftsubtree = Build(left, mid - 1);
        TreeNode *root = new TreeNode(currHead->val);
        root->left = leftsubtree;

        currHead = currHead->next;
        root->right = Build(mid + 1, right);

        return root;
    }

public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        if (!head)
            return NULL;
        int n = 0;
        ListNode *temp = head;
        while (temp)
        {
            n++;
            temp = temp->next;
        }
        currHead = head;
        return Build(0, n - 1);
    }
};
