// Problem: cheapest flights within k stops
// Link: https://leetcode.com/problems/cheapest-flights-within-k-stops/
// Approach: 1)modify dijkstra algorithm: use queue to save logn time and check for k+1 which handal edge case
//           2)you can also use while loop for k+1 time and evey time you replace stat vector and store min
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (auto &f : flights)
        {
            adj[f[0]].push_back({f[1], f[2]});
        }

        queue<vector<int>> pq;
        pq.push({0, src, 0});
        vector<int> dis(n, INT_MAX);
        dis[src] = 0;
        while (!pq.empty())
        {
            auto top = pq.front();
            pq.pop();
            int cost = top[0], node = top[1], stops = top[2];

            if (stops > k)
                continue;

            for (auto it : adj[node])
            {
                int next = it.first, w = it.second;
                if (cost + w < dis[next] && stops <= k)
                {
                    dis[next] = cost + w;
                    pq.push({cost + w, next, stops + 1});
                }
            }
        }
        if (dis[dst] == INT_MAX)
            return -1;
        return dis[dst];
    }
};