// Problem: Making a large island
// Link: https://leetcode.com/problems/making-a-large-island/description/
// Approach: here first you have to do union of all element as if all element are node and after making union you have to check for all 0's what if we convert them to 1 for them you have to check size of neighbours if it is 1 and store size of their eletement parentin set(avoid repitation) and find maxi
// Date Solved: 20-06-2026

#include <bits/stdc++.h>
using namespace std;

class DJS
{
public:
    vector<int> parent, size;

    DJS(int n)
    {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = find(parent[node]);
    }

    void unibysize(int u, int v)
    {
        int pu = find(u);
        int pv = find(v);

        if (pu == pv)
            return;

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

class Solution
{
public:
    int largestIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        DJS ds(n * n);

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        // Step 1: Connect all existing islands
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {

                if (grid[row][col] == 0)
                    continue;

                for (int k = 0; k < 4; k++)
                {
                    int nr = row + dr[k];
                    int nc = col + dc[k];

                    if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                        grid[nr][nc] == 1)
                    {

                        int node = row * n + col;
                        int adjNode = nr * n + nc;

                        ds.unibysize(node, adjNode);
                    }
                }
            }
        }

        int maxi = 0;

        // Step 2: Try converting each 0 into 1
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {

                if (grid[row][col] == 1)
                    continue;

                set<int> components;

                for (int k = 0; k < 4; k++)
                {
                    int nr = row + dr[k];
                    int nc = col + dc[k];

                    if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                        grid[nr][nc] == 1)
                    {

                        components.insert(ds.find(nr * n + nc));
                    }
                }

                int sizee = 1; // flipped current 0

                for (auto comp : components)
                {
                    sizee += ds.size[comp];
                }

                maxi = max(maxi, sizee);
            }
        }

        // Step 3: Handle case when grid is already all 1's
        for (int i = 0; i < n * n; i++)
        {
            maxi = max(maxi, ds.size[ds.find(i)]);
        }

        return maxi;
    }
};