// Problem: Best time to buy and sell stock with cooldown
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/
// Date Solved: 02-06-2026
// Approach:
// same as 96 just little change

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> cur(2, 0);
        vector<int> front1(2, 0);
        vector<int> front2(2, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int d = 0; d <= 1; d++)
            {
                int profit = 0;
                if (d)
                {
                    profit = max(-prices[i] + front1[0], front1[1]);
                }
                else
                {
                    profit = max(prices[i] + front2[1], front1[0]);
                }
                cur[d] = profit;
            }
            front2 = front1;
            front1 = cur;
        }
        return cur[1];
    }
};
