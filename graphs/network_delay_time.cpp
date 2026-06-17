// Problem: network delay time
// Link: https://leetcode.com/problems/network-delay-time/
// Approach: use simple dijkstra algorithm
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &edges, int V, int src)
    {
        vector<vector<pair<int, int>>> adj(V + 1);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
        }
        set<pair<int, int>> st;
        vector<int> dis(V + 1, 1e9);

        dis[src] = 0;
        st.insert({0, src});

        while (!st.empty())
        {
            auto x = *(st.begin());
            int dist = x.first;
            int node = x.second;
            st.erase(x);

            if (dist > dis[node])
                continue;

            for (auto it : adj[node])
            {
                int adjnode = it.first;
                int adjdis = it.second;
                if (dist + adjdis < dis[adjnode])
                {
                    dis[adjnode] = adjdis + dis[node];
                    st.insert({dis[adjnode], adjnode});
                }
            }
        }
        int maxi = INT_MIN;
        for (int i = 1; i < dis.size(); i++)
        {
            if (dis[i] >= 1e9)
                return -1;
            maxi = max(maxi, dis[i]);
        }
        return maxi;
    }
};