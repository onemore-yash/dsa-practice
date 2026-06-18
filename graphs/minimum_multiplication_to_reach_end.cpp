// Problem: minimum multiplication to reach end
// Link: https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1
// Approach: you have to use dijkstra algo but with some modification like you have to use queue because elements already stored in increasing order also make 1000 size of dis array
// Date Solved: 18-06-2026

#include <bits/stdc++.h>
using namespace std;

int mod = 1000;
class Solution
{
public:
    int minSteps(vector<int> &arr, int start, int end)
    {
        vector<int> dis(1000, INT_MAX);
        queue<pair<int, int>> q;
        q.push({0, start});
        dis[start] = 0;
        while (!q.empty())
        {
            int d = q.front().first;
            int n = q.front().second;
            q.pop();
            if (n == end)
                return dis[end];
            for (auto it : arr)
            {
                int x = (it * n) % mod;
                if (dis[x] > d + 1)
                {
                    dis[x] = d + 1;
                    q.push({d + 1, x});
                }
            }
        }

        return dis[end] == INT_MAX ? -1 : dis[end];
    }
};