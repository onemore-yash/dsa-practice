// Problem: rod cutting
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/rod-cutting-problem_800284?leftPanelTabValue=PROBLEM
// Date Solved: 13-04-2026
// Approach:
// here you can use previous logic but use here index as rope remaining size like we use weight previous

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

int cutRod(vector<int> &price, int n)
{
    vector<int> dp(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            dp[j] = max(dp[j], price[i] + dp[j - i - 1]);
        }
    }
    return dp[n];
}
