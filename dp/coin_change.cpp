// Problem: Coin Change
// Pattern: dp+sequence
// Link: https://leetcode.com/problems/coin-change/description/
// Date Solved: 12-04-2026
// Approach:
// simply use take not take but when you use take then you should not move to next index because you may need more than one time that coin and take minimum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &arr, int T)
    {
        int n = arr.size();

        vector<int> prev(T + 1, 0);
        vector<int> cur(T + 1, 0);

        for (int i = 0; i <= T; i++)
        {
            if (i % arr[0] == 0)
                prev[i] = i / arr[0];
            else
                prev[i] = 1e9;
        }

        for (int ind = 1; ind < n; ind++)
        {
            for (int target = 0; target <= T; target++)
            {

                int notTake = prev[target];

                int take = 1e9;
                if (arr[ind] <= target)
                    take = 1 + cur[target - arr[ind]];

                cur[target] = min(notTake, take);
            }

            prev = cur;
        }

        int ans = prev[T];

        if (ans >= 1e9)
            return -1;

        return ans;
    }
};
