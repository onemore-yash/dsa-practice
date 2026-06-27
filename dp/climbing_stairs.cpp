// Problem: Climbing stairs
// Pattern: dp+sum
// Link: https://leetcode.com/problems/climbing-stairs/description/
// Date Solved: 06-04-2026
// Approach:
// use simple dp use a linear array to store sum value and every time check if cur is already computed in array then simple return no need to compute that and also you can use 2 previous pointer to optimize space

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
    int solve(int n, vector<int> &dp)
    {
        if (n == 0 || n == 1)
            return 1;

        if (dp[n] != -1)
            return dp[n];
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

public:
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp);
    }
};