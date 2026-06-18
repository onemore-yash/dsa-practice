// Problem: Floyd-Warshall Algorithm
// Link: https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1
// Approach:it is like brut force you have to use adj matrix and modify you have to check for every node if they were a via node and take min
// Date Solved: 18-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void floydWarshall(vector<vector<int>> &dist)
    {
        // Code here
        int n = dist.size();
        for (int via = 0; via < n; via++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (dist[i][via] != 1e8 && dist[via][j] != 1e8 && dist[i][j] > dist[i][via] + dist[via][j])
                    {
                        dist[i][j] = dist[i][via] + dist[via][j];
                    }
                }
            }
        }
        return;
    }
};