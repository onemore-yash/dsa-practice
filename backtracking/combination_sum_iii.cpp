// Problem: Combination sum III
// Pattern: backtracking+for-loop+pruning
// Link: https://leetcode.com/problems/combination-sum-iii/description/
// Date Solved: 06-04-2026
// Approach:
// Pick numbers from 1–9 in increasing order(either use for loop or use create a array of 1 to 9), keep adding until size = k, and check if sum == n Use pruning (sum > n or impossible range) to stop exploring invalid branches early

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans, k, n, 0, 0, temp);
        return ans;
    }
    void solve(vector<vector<int>> &ans, int k, int n, int i, int sum, vector<int> &temp)
    {
        if (i == k)
        {
            if (sum == n)
                ans.push_back(temp);
            return;
        }

        if (sum > n)
            return;
        int x;
        if (temp.size() > 0)
            x = temp[temp.size() - 1];
        else
            x = 0;
        for (int j = x + 1; j < 10; j++)
        {
            temp.push_back(j);
            solve(ans, k, n, i + 1, sum + j, temp);
            temp.pop_back();
        }
    }
};
