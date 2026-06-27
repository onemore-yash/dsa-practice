// Problem: Best time to buy and sell stock IV
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/
// Date Solved: 02-06-2026
// Approach:
// use simple dp where 3 index(index,buy,cap) and take care of 4 ways(2 for buy and 2 for sell ) but here cap=k

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int f(int i, int d, int cap, vector<int> &prices, vector<vector<vector<int>>> &dp)
    {
        if (i == prices.size() || cap == 0)
            return 0;

        int profit = 0;
        if (dp[i][d][cap] != -1)
            return dp[i][d][cap];
        if (d)
        {
            profit = max(-prices[i] + f(i + 1, 0, cap, prices, dp), f(i + 1, 1, cap, prices, dp));
        }
        else
        {
            profit = max(prices[i] + f(i + 1, 1, cap - 1, prices, dp), f(i + 1, 0, cap, prices, dp));
        }

        return dp[i][d][cap] = profit;
    }

public:
    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> next(2, vector<int>(k + 1, 0));
        vector<vector<int>> cur(2, vector<int>(k + 1, 0));

        for (int i = n - 1; i >= 0; i--)
        {
            for (int d = 0; d <= 1; d++)
            {
                for (int cap = 1; cap <= k; cap++)
                {
                    int profit = 0;
                    if (d)
                    {
                        profit = max(-prices[i] + next[0][cap], next[1][cap]);
                    }
                    else
                    {
                        profit = max(prices[i] + next[1][cap - 1], next[0][cap]);
                    }

                    cur[d][cap] = profit;
                }
            }
            next = cur;
        }
        return cur[1][k];
    }
};