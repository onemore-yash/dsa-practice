// Problem: Number of ways to arrive destination
// Link: https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/
// Approach:Use Dijkstra's algorithm to find the shortest distance to every node while maintaining ways[i], the number of shortest paths to reach node i.
//          If a shorter path is found, update the distance and copy the number of ways; if another path with the same shortest distance is found, add its ways modulo 1e9+7
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {

        const int mod = 1e9 + 7;

        vector<vector<pair<int, int>>> adj(n);

        for (auto &e : roads)
        {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], e[2]});
        }

        vector<long long> dis(n, LLONG_MAX);
        vector<long long> ways(n, 0);

        set<pair<long long, int>> st;

        dis[0] = 0;
        ways[0] = 1;

        st.insert({0, 0});

        while (!st.empty())
        {

            pair<int, int> t = *st.begin();
            int node = t.first;
            int dist = t.second;
            st.erase(st.begin());

            if (dist > dis[node])
                continue;

            for (auto it : adj[node])
            {
                int adjnode = it.first;
                int wt = it.second;
                long long newDist = dist + wt;

                if (newDist < dis[adjnode])
                {

                    dis[adjnode] = newDist;
                    ways[adjnode] = ways[node];

                    st.insert({newDist, adjnode});
                }

                else if (newDist == dis[adjnode])
                {

                    ways[adjnode] =
                        (ways[adjnode] + ways[node]) % mod;
                }
            }
        }

        return ways[n - 1] % mod;
    }
};