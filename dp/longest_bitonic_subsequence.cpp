// Problem: Longest bitonic subsequence
// Pattern: dp on LIS
// Link: https://www.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1
// Date Solved: 06-06-2026
// Approach:
// you have to make 2 vector in 101 increase and decrease then find max from their sum

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestBitonicSequence(int n, vector<int> &nums)
    {
        vector<int> dp1(n, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp1[i] < dp1[j] + 1 && nums[i] > nums[j])
                {
                    dp1[i] = dp1[j] + 1;
                }
            }
        }

        vector<int> dp2(n, 1);
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (dp2[i] < dp2[j] + 1 && nums[i] > nums[j])
                {
                    dp2[i] = dp2[j] + 1;
                }
            }
        }

        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (dp1[i] > 1 && dp2[i] > 1)
            {
                maxi = max(maxi, dp1[i] + dp2[i] - 1);
            }
        }

        return maxi;
    }
};
