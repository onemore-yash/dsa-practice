// Problem: min cost climbing stairs
// Pattern: dp+min
// Link: https://leetcode.com/problems/min-cost-climbing-stairs/description/
// Date Solved: 07-04-2026
// Approach:
// use simple dp use a linear array to store value and every time check if cur is already computed in array then simple return no need to compute that and also you can use 2 previous pointer to optimize space which every time store min value

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int prev2 = cost[0];
        int prev = cost[1];

        for (int i = 2; i < cost.size(); i++)
        {
            int cur = cost[i] + min(prev, prev2);
            prev2 = prev;
            prev = cur;
        }
        return min(prev, prev2);
    }
};
