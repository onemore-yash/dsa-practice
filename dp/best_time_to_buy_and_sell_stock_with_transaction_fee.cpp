// Problem: Best time to buy and sell stock with transaction fee
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/description/
// Date Solved: 02-06-2026
// Approach:
// same as 96 just minus fee when sell

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int maxProfit(vector<int> &prices, int fee)
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
                    profit = max(prices[i] + ahed[1] - fee, ahed[0]);
                }
                cur[d] = profit;
            }
            ahed = cur;
        }
        return ahed[1];
    }
};