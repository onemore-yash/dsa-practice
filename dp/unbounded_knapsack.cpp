// Problem: unbounded Knapsack
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/unbounded-knapsack_1215029
// Date Solved: 13-04-2026
// Approach:
// here you can unlimited time choose same index so use common dp

#include <bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<int> dp(w + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = weight[i]; j <= w; j++)
        {
            dp[j] = max(dp[j], profit[i] + dp[j - weight[i]]);
        }
    }
    return dp[w];
}