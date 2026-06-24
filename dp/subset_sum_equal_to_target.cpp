// Problem: subset sum equal to target
// Pattern: dp+sequence
// Link: https://www.naukri.com/code360/problems/subset-sum-equal-to-k_1550954
// Date Solved: 10-04-2026
// Approach:
// At each index, decide take or not take the element and recursively check if target k can be formed; use DP to store results of (index, target) to avoid recomputation.
// Base cases: if target == 0 return true, if index == 0 check arr[0] == target; final answer comes from combining both choices (take/not take).

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution {
public:

};
