// Problem: Count partition with given differnce
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/partitions-with-given-difference_3751628?leftPanelTabValue=PROBLEM
// Date Solved: 11-04-2026
// Approach:
// here you have to take care when nums>=0 and also when arr[i] are very large although it is same as 78 with targert=(totalsum-d)/2 also you have check that totalsum-d is even and also >=0

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

int mod = 1e9 + 7;
int findways(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> prev(k + 1, 0), curr(k + 1, 0);

    if (arr[0] == 0)
        prev[0] = 2;
    else
        prev[0] = 1;

    if (arr[0] != 0 && arr[0] <= k)
        prev[arr[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int sum = 0; sum <= k; sum++)
        {
            int notTake = prev[sum];
            int Take = 0;
            if (arr[i] <= sum)
                Take = prev[sum - arr[i]];

            curr[sum] = (Take + notTake) % mod;
        }
        prev = curr;
    }
    return curr[k];
}
int countPartitions(int n, int d, vector<int> &arr)
{
    int tsum = 0;
    for (int x : arr)
        tsum += x;
    if ((tsum - d) < 0 || (tsum - d) % 2)
        return 0;
    return findways(arr, (tsum - d) / 2);
}
