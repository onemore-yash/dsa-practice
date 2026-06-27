// Problem: 0 1 knapsack
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/0-1-knapsack_920542?leftPanelTabValue=PROBLEM
// Date Solved: 12-04-2026
// Approach:
// use take not take and you can optimize it to only one 1D array

#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    vector<int> prev(maxWeight + 1, 0);
    vector<int> curr(maxWeight + 1, 0);

    for (int w = weight[0]; w <= maxWeight; w++)
    {
        prev[w] = value[0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= maxWeight; j++)
        {
            int notTake = prev[j];
            int Take = INT_MIN;
            if (weight[i] <= j)
            {
                Take = value[i] + prev[j - weight[i]];
            }
            curr[j] = max(notTake, Take);
        }
        prev = curr;
    }
    return prev[maxWeight];
}
