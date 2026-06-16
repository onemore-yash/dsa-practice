// Problem: Word ladder II
// Link: https://www.geeksforgeeks.org/problems/word-ladder-ii/1
// Approach: "Multi-source BFS storing full paths in the queue (each queue element = path so far); process level-by-level, erasing used words only after a full level finishes (so same-level branches can share words) — stop once endWord is reached.
//            Then DFS isn't needed: when word==endWord, push the whole path directly into ans if its length matches the first found path's length. but this is not worked in leetcode solution"
// Date Solved: 14-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> findSequences(string beginWord, string endWord,
                                         vector<string> &wordList)
    {
        vector<vector<string>> ans;
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<string> usedonlevel;
        usedonlevel.push_back(beginWord);
        int level = 0;
        while (!q.empty())
        {
            vector<string> vec = q.front();
            q.pop();
            if (vec.size() > level)
            {
                level++;
                for (auto it : usedonlevel)
                {
                    st.erase(it);
                }
                usedonlevel.clear();
            }
            string word = vec.back();

            if (word == endWord)
            {
                if (ans.size() == 0)
                {
                    ans.push_back(vec);
                }
                else if (ans[0].size() == vec.size())
                {
                    ans.push_back(vec);
                }
            }
            for (int i = 0; i < word.size(); i++)
            {
                char original = word[i];
                for (char c = 'a'; c <= 'z'; c++)
                {
                    word[i] = c;
                    if (st.count(word) > 0)
                    {
                        vec.push_back(word);
                        q.push(vec);
                        usedonlevel.push_back(word);
                        vec.pop_back();
                    }
                }
                word[i] = original;
            }
        }

        return ans;
    }
};