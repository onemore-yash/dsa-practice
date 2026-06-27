// Problem: Brust balloons
// Pattern: MCM dp
// Link: https://leetcode.com/problems/burst-balloons/description/
// Date Solved: 07-06-2026
// Approach:
// same as 108 just change little in condition

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int solve(int i, int j, vector<int> &nums,
              vector<vector<int>> &dp)
    {

        if (i > j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int maxi = 0;

        for (int k = i; k <= j; k++)
        {

            int coins = nums[i - 1] * nums[k] * nums[j + 1] + solve(i, k - 1, nums, dp) + solve(k + 1, j, nums, dp);

            maxi = max(maxi, coins);
        }

        return dp[i][j] = maxi;
    }

public:
    int maxCoins(vector<int> &nums)
    {

        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return solve(1, n - 2, nums, dp);
    }
};
