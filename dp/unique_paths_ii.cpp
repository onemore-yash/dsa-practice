// Problem: unique paths II
// Pattern: dp+2D
// Link: https://leetcode.com/problems/unique-paths-ii/description/
// Date Solved: 09-04-2026
// Approach:
// same as before but just when we see rock then put at that point and take care of all boundy contries

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<int> temp(n, 0);
        temp[0] = (obstacleGrid[0][0] == 1) ? 0 : 1;
        for (int i = 1; i < n; i++)
        {
            if (obstacleGrid[0][i] == 1)
                temp[i] = 0;
            else
                temp[i] = temp[i - 1];
        }
        for (int i = 1; i < m; i++)
        {
            if (obstacleGrid[i][0] == 1)
                temp[0] = 0;
            for (int j = 1; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                    temp[j] = 0;

                else
                    temp[j] += temp[j - 1];
            }
        }
        return temp[n - 1];
    }
};