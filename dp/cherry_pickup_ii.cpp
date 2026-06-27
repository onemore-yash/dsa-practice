// Problem: Cherry pickup II
// Pattern: dp+3D
// Link: https://leetcode.com/problems/cherry-pickup-ii/description/
// Date Solved: 09-04-2026
// Approach:
// you can Cache result of state (i, j1, j2) to avoid recomputation If already computed → return stored value, else compute using 9 moves(in recursion Try all 9 combinations (dj1, dj2) at every row for both robots Return max cherries collected, handle overlap (same cell))Build DP from last row → first row using all (j1, j2) states For each state, take max over next row’s 9 transitionsOnly keep current row & next row DP (2D arrays)Replace 3D DP by rolling arrays since only i+1 is needed

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{

public:
    int cherryPickup(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> prev(m, vector<int>(m, 0));
        vector<vector<int>> curr(m, vector<int>(m, 0));

        for (int j1 = 0; j1 < m; j1++)
        {
            for (int j2 = 0; j2 < m; j2++)
            {
                if (j1 == j2)
                    prev[j1][j2] = grid[n - 1][j1];
                else
                    prev[j1][j2] = grid[n - 1][j1] + grid[n - 1][j2];
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j1 = 0; j1 < m; j1++)
            {
                for (int j2 = 0; j2 < m; j2++)
                {
                    int maxi = -1e8;
                    for (int dj1 = -1; dj1 < 2; dj1++)
                    {
                        for (int dj2 = -1; dj2 <= 1; dj2++)
                        {
                            int val = 0;
                            if (j1 == j2)
                                val = grid[i][j1];
                            else
                                val = grid[i][j1] + grid[i][j2];
                            if (j1 + dj1 >= 0 && j1 + dj1 < m && j2 + dj2 >= 0 && j2 + dj2 < m)
                                val += prev[j1 + dj1][j2 + dj2];
                            maxi = max(maxi, val);
                        }
                    }
                    curr[j1][j2] = maxi;
                }
            }
            prev = curr;
        }
        return curr[0][m - 1];
    }
};