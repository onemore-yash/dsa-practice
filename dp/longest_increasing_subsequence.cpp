// Problem: Longest increasing subsequence
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/longest-increasing-subsequence/description/
// Date Solved: 06-06-2026
// Approach:
// use simple pick not pick dp

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> dp(n, 1);
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            for (int p = 0; p < i; p++)
            {
                if (arr[i] > arr[p])
                {
                    dp[i] = max(dp[i], 1 + dp[p]);
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};