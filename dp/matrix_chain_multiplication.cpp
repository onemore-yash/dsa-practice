// Problem: matrix chain multiplication
// Pattern: MCM dp
// Link: https://www.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1
// Date Solved: 06-06-2026
// Approach:
// you have to take 3 pointer i=initial , j=end and k=i+1 to j and simply find all steps and then min from them

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int f(int i, int j, vector<int> &arr, vector<vector<int>> &dp)
    {
        if (i == j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int mini = 1e9;

        for (int k = i; k < j; k++)
        {
            int cost = arr[i - 1] * arr[k] * arr[j] + f(i, k, arr, dp) + f(k + 1, j, arr, dp);

            mini = min(mini, cost);
        }

        return dp[i][j] = mini;
    }

public:
    int matrixMultiplication(vector<int> &arr)
    {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        return f(1, n - 1, arr, dp);
    }
};