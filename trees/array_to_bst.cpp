// Problem: array to BST
// Pattern: construct BST
// Link: https://www.geeksforgeeks.org/problems/array-to-bst4443/1
// Date Solved: 15-03-2026
// Approach:
// we have to make a function which devide array into 2 parts and we make root to mid and further call for left and right

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution
{
    Node *sortedArrayToBSTRecur(vector<int> &arr, int start, int end)
    {
        if (start > end)
            return nullptr;

        int mid = start + (end - start) / 2;
        Node *root = new Node(arr[mid]);
        root->left = sortedArrayToBSTRecur(arr, start, mid - 1);
        root->right = sortedArrayToBSTRecur(arr, mid + 1, end);
        return root;
    }

public:
    Node *sortedArrayToBST(vector<int> &arr)
    {
        // code here
        return sortedArrayToBSTRecur(arr, 0, arr.size() - 1);
    }
};