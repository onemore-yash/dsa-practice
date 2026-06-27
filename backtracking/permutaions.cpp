// Problem: permutaions
// Pattern: backtracking+permutaion(ordering)
// Link: https://leetcode.com/problems/permutations/description/
// Date Solved: 04-04-2026
// Approach:
// create new function for backtracking which just do backtrack swap each elements(for start to n )  and withoutswap

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void backtrack(vector<int> &nums, int start, vector<vector<int>> &res)
    {
        if (start == nums.size())
        {
            res.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[start], nums[i]);
            backtrack(nums, start + 1, res);
            swap(nums[start], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        backtrack(nums, 0, res);
        return res;
    }
};