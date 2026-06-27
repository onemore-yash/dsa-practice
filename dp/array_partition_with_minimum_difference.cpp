// Problem: array partition with minimum difference
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/array-partition-with-minimum-difference_842494?leftPanelTabValue=PROBLEM
// Date Solved: 11-04-2026
// Approach:
// here dp is work only when all elements are either non negatives or when negativies then number of them should be >30 so for non negatives we can use simple 72th problem and we can run for loon in last row of dp which give us which sums are possible where range is 0 to totalsum/2 then we can get minimum abs value

#include <bits/stdc++.h>
using namespace std;

int minSubsetSumDifference(vector<int> &arr, int n)
{
    int totalsum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalsum += arr[i];
    }
    int k = totalsum;
    vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = true;
    if (arr[0] <= k)
        dp[0][arr[0]] = true;

    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTake = dp[ind - 1][target];
            bool Take = false;
            if (target >= arr[ind])
                Take = dp[ind - 1][target - arr[ind]];
            dp[ind][target] = Take | notTake;
        }
    }

    int mini = 1e9;
    for (int i = 0; i <= totalsum / 2; i++)
    {
        if (dp[n - 1][i])
            mini = min(mini, abs(i - (totalsum - i)));
    }
    return mini;
}
