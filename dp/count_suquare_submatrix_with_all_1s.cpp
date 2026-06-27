// Problem: count suquare submatrix with all 1's
// Pattern: dp on square
// Link: https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/
// Date Solved: 07-06-2026
// Approach:
// make 2d matrix and for each 1's count number of square by him when it is digonal right down element by prev 3 neighbours

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int countSquares(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = matrix[i][0];
            ans += dp[i][0];
        }
        for (int i = 1; i < m; i++)
        {
            dp[0][i] = matrix[0][i];
            ans += dp[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] == 1)
                {
                    dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
                    ans += dp[i][j];
                }
            }
        }
        return ans;
    }
};