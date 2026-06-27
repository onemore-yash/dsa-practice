// Problem: Count subset with sum K
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/number-of-subsets_3952532?resumeRedirection=true&leftPanelTabValue=PROBLEM
// Date Solved: 11-04-2026
// Approach:
// use same approch as 72 but here every time we have to add all values of recursion and also note that if we are given large values then we have to do mod when we store any value with 1e9+7 and when there is negative numbers are present then we have to use different data structure and if there is nubers start from 0 hten also we have to change base condition

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<long long> dp(k + 1, 0);
    dp[0] = 1;
    if (arr[0] <= k)
        dp[arr[0]] += 1;
    for (int i = 1; i < arr.size(); i++)
    {
        vector<long long> curr(k + 1, 0);
        curr[0] = 1;
        for (int j = 0; j <= k; j++)
        {
            int nottake = dp[j];
            int take = 0;
            if (arr[i] <= j)
                take = dp[j - arr[i]];

            curr[j] = (take + nottake) % MOD;
        }
        dp = curr;
    }

    return dp[k];
}
