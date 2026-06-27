// Problem: Best time to buy and sell stock II
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
// Date Solved: 02-06-2026
// Approach:
// use simple dp where 2 index(index,buy) and take care of 4 ways(2 for buy and 2 for sell )

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int solve(int i, int d, vector<int> &prices, vector<vector<int>> &dp)
    {
        if (i == prices.size())
            return 0;

        int profit = 0;
        if (dp[i][d] != -1)
            return dp[i][d];
        if (d)
        {
            profit = max(-prices[i] + solve(i + 1, 0, prices, dp), solve(i + 1, 1, prices, dp));
        }
        else
        {
            profit = max(prices[i] + solve(i + 1, 1, prices, dp), solve(i + 1, 0, prices, dp));
        }
        return dp[i][d] = profit;
    }

public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> ahed(2, 0), cur(2, 0);

        ahed[0] = ahed[1] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int d = 0; d <= 1; d++)
            {
                int profit = 0;
                if (d)
                {
                    profit = max(-prices[i] + ahed[0], ahed[1]);
                }
                else
                {
                    profit = max(prices[i] + ahed[1], ahed[0]);
                }
                cur[d] = profit;
            }
            ahed = cur;
        }
        return ahed[1];
    }
};