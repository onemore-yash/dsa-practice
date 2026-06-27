// Problem: Ninja's Training
// Pattern: dp+2D
// Link: https://www.naukri.com/code360/problems/ninja%E2%80%99s-training_3621003
// Date Solved: 08-04-2026
// Approach:
// here we can make a 2D matrix where each row define days and colums tasks where last n+1th column shows when no task is done at that day in the base case we compute oth row where each cell have max value other than that and last one store max from all and ans is dp[n][4] now in the space optimization insteade of 2D matrix we can take a 1D array which can store values of previous level which is useful to compute values for  curr level then we change prev to curr and at the end we return prev[4]

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<int> prev(4, 0);
    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][1], points[0][0]);
    prev[3] = max(points[0][1], max(points[0][2], points[0][3]));

    for (int day = 1; day < n; day++)
    {
        vector<int> temp(4, 0);
        for (int last = 0; last < 4; last++)
        {
            temp[last] = 0;
            for (int task = 0; task < 3; task++)
            {
                if (task != last)
                {
                    temp[last] = max(temp[last], points[day][task] + prev[task]);
                }
            }
        }
        prev = temp;
    }
    return prev[3];
}