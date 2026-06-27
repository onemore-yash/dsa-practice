// Problem: Coin Change II
// Pattern: dp+sequence
// Link: https://leetcode.com/problems/coin-change-ii/description/
// Date Solved: 13-04-2026
// Approach:
// every time add to ways to find how many ways and also you can use knapsack logic

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        vector<long long> dp(amount + 1, 0);

        dp[0] = 1;

        for (int coin : coins)
        {
            for (int j = coin; j <= amount; j++)
            {
                dp[j] = min(dp[j] + dp[j - coin], (long long)INT_MAX);
            }
        }

        return (int)dp[amount];
    }
};