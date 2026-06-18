// Problem: Find the City With the Smallest Number of Neighbors at a Threshold Distance
// Link: https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/description/
// Approach: use floyd warshall algo to create that adj matrix and then travers and find node which satisfy condition and store index
// Date Solved: 18-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void floydWarshall(vector<vector<int>> &dist)
    {
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

public:
    int findTheCity(int n, vector<vector<int>> &edges, int distanceThreshold)
    {
        vector<vector<int>> dist(n, vector<int>(n, 1e8));
        for (int i = 0; i < n; i++)
            dist[i][i] = 0;
        for (auto it : edges)
        {
            int i = it[0];
            int j = it[1];
            int w = it[2];
            dist[i][j] = w;
            dist[j][i] = w;
        }
        floydWarshall(dist);

        int ans = -1;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] <= distanceThreshold && i != j)
                    temp++;
            }
            if (mini >= temp)
            {
                ans = i;
                mini = temp;
            }
        }
        return ans;
    }
};