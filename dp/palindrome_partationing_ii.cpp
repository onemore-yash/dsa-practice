// Problem: palindrome partationing II
// Pattern: partation dp
// Link: https://leetcode.com/problems/palindrome-partitioning-ii/description/
// Date Solved: 07-06-2026
// Approach:
// run a loop from i to n every time and check if that partation make palindrom or not if yes then from all that cost choose minimum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool check(int i, int j, string &s)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int f(int i, int n, string &s, vector<int> &dp)
    {
        if (i == n)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int mini = INT_MAX;
        for (int j = i; j < n; j++)
        {
            if (check(i, j, s))
            {
                int cost = 1 + f(j + 1, n, s, dp);
                mini = min(mini, cost);
            }
        }
        return dp[i] = mini;
    }

public:
    int minCut(string s)
    {
        int n = s.length();
        vector<int> dp(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            int mini = INT_MAX;
            for (int j = i; j < n; j++)
            {
                if (check(i, j, s))
                {
                    int cost = 1 + dp[j + 1];
                    mini = min(mini, cost);
                }
            }
            dp[i] = mini;
        }
        return dp[0] - 1;
    }
};
