// Problem: Dikstra algo
// Link: https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
// Approach: 1)Start by picking the closest node from your list and explore all its neighbors. For each neighbor, if you find a shorter path than what you already know, update that neighbor's distance and add it to check later.Keep doing this until you've checked all reachable nodes, and you'll have the shortest distance from your starting point to everywhere else.
//           2) you can use queue in first but it will take nore time because it will take all unnecassary paths
//           3)use set insted of pq because set will erase already existing path which has more distance
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

// using priority queue
class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dis(V, 1e9);

        dis[src] = 0;
        pq.push({0, src});

        while (!pq.empty())
        {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for (auto it : adj[node])
            {
                int adjnode = it.first;
                int adjdis = it.second;
                if (adjdis + dis[node] < dis[adjnode])
                {
                    dis[adjnode] = adjdis + dis[node];
                    pq.push({dis[adjnode], adjnode});
                }
            }
        }
        return dis;
    }
};

// using set
class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }
        set<pair<int, int>> st;
        vector<int> dis(V, 1e9);

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
                if (adjdis + dis[node] < dis[adjnode])
                {
                    dis[adjnode] = adjdis + dis[node];
                    st.insert({dis[adjnode], adjnode});
                }
            }
        }
        return dis;
    }
};
