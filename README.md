# DSA Practice — C++

My Data Structures & Algorithms solutions, written in C++ while preparing for software engineering placements.

---

## 📌 About

- **Language:** C++
- **Platforms:** LeetCode, GeeksforGeeks, coding ninjas
- **Goal:** Strengthen problem-solving skills for technical interviews

---

## 📂 Repository Structure

```
dsa-practice/
├── arrays/
├── strings/
├── linked-list/
├── stacks-queues/
├── trees/
├── graphs/
├── dynamic-programming/
├── tries/
├── advanced/
└── README.md
```

---

## 📊 Progress Overview

| Topic | Status | Problems Solved |
|---|---|---|
| Arrays | ✅  | 40 |
| Strings | ✅  | 15 |
| Linked List | ✅  | 31 |
| Stacks & Queues |  🟡 |  |
| Trees | ✅  | 49 |
| Graphs | ✅  | 41 |
| Dynamic Programming | ✅  | 54 |
| Tries | 🔴 |  |
| Advanced (Segment Tree, etc.) | 🔴 |  |
| **Total** |  |  |

> Status legend: ✅ Done | 🟡 In Progress | 🔴 Not Started

---

## 🧠 Problems Solved

### Arrays

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

### Strings

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

### Linked List

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

### Stacks & Queues

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

## 🌳 Trees & BST

| # | Problem | Difficulty | Approach | Pattern | Date | Link |
|---|---|---|---|---|---|---|
| 1 | Diameter in BT | Easy | using postorder find left and right height and check max with diameter | Tree dp(postorder dfs) | 27-02-2026 | [Link](https://leetcode.com/problems/diameter-of-binary-tree/description/) |
| 2 | check Balanced BT | Easy | check left and right height if diff>1 then return -1 | Height +tree dp | 27-02-2026 | [Link](https://leetcode.com/problems/balanced-binary-tree/description/) |
| 3 | Max depth in BT | Easy | find left and right height and return max of them+1 | Height Based Problems/basic bfs | 27-02-2026 | [Link](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/) |
| 4 | Check Subtree (is S is subtree of T) | Medium | for all node of T with root of S check identical | Tree Comparison +DFS | 27-02-2026 | [Link](https://www.geeksforgeeks.org/problems/check-if-subtree/1) |
| 5 | check identical | Easy | check both are null then true one null and other is not then false and check value and left and right | Tree Comparison (Recursive DFS) | 27-02-2026 | [Link](https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1) |
| 6 | max path sum | Hard | use dfs for left and right max height for every node and Update global max sum considering node as turning point and Return the best one-sided path sum | Tree DP (Global Maximum Path) | 03-03-2026 | [Link](https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/1936724378/) |
| 7 | count single valued subtree | Medium | make bool function and check left right with root and update global count | Postorder DFS / Tree Property Check | 03-03-2026 | [Link](https://www.geeksforgeeks.org/problems/single-valued-subtree/1) |
| 8 | Zig Zag Traversal | Medium | use level order with boolean | lavel order variation | 03-03-2026 | [Link](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) |
| 9 | morrise traversal | Medium | If no left → visit → go right Else:Find predecessor If no thread → create thread → go left Else:remove thread,visit,go right| Traversal in BT in TC :O(n) with O(1) SC | Not noted | No link |
| 10 | boundary Traversal | Hard | make functions of collect left right and leaves(use morris traversal) | lavel order variation | 03-03-2026 | [Link](https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1) |
| 11 | Top view | Medium | use bfs and map then is any node altready present in map than there is a node upeer than current node  | vertical + bfs +map | 06-03-2026 | No link |
| 12 | Bottom view | Medium | same as top view but if curr is already presant in map than we update it | vertical + bfs +map | 06-03-2026 | No link |
| 13 | right view | Easy | same as top view but do right then left | lavel order variation | 06-03-2026 | [Link](https://leetcode.com/problems/binary-tree-right-side-view/description/) |
| 14 | left view | Easy | same as right view but left then right | lavel order variation | 06-03-2026 | No link |
| 15 | check Symmetric | Easy | check mirror for root left and right | symmetric/recursive comparision | 06-03-2026 | [Link](https://leetcode.com/problems/symmetric-tree/description/) |
| 16 | vertical order traversal | Hard | use bfs with map<int,map<int,multiset<int>>>  here use multiset because at any perticular point there exist many node with same value | lavel order variation | 06-03-2026 | [Link](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/?envType=problem-list-v2&envId=binary-tree) |
| 17 | LCA of BT | Medium | check for left and right subtree if both exist then return root else if only left exist then left else right (it can be null) | LCA type | 06-03-2026 | [Link](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/) |
| 18 | Print root to node path | Medium | we use bool function to check it curr is target or left or right if yes then we keep that element in ans vector else pop form vector and return false | DFS + backtracking | 06-03-2026 | No link |
| 19 | maximum width of BT | Medium | use BFS and at every level find last and first index and every time check max | BFS+indexing | 06-03-2026 | [Link](https://leetcode.com/problems/maximum-width-of-binary-tree/submissions/1939897367/) |
| 20 | check children sum property | Medium | we find children sum and compare with parent if sum greater than root then change root to child val sum else we update children with curr root ; recurcivly call fun for left and right and at the end we calculate children sum and if children exist then change root val to total sum | DFS + recursion | 07-03-2026 | No link |
| 21 | maximum sum leaf to root path | Medium | do dfs and maintain maxsum by check if curr node is leaf or not and call for left and right | backtracking/dfs+global max | 09-03-2026 | [Link](https://www.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1) |
| 22 | Difference between sums of odd level and even level nodes of a Binary Tree | Easy | use level order with boolean and sum | lavel order variation | 09-03-2026 | [Link](https://www.geeksforgeeks.org/problems/odd-even-level-difference/1) |
| 23 | all nodes distance k in binary tree | Medium | first we need to make a map structure which store parent nodes and after that do bfs traversal than chack k distance and make visited set| bfs+convert to undirected like graph structure | 09-03-2026 | [Link](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/) |
| 24 | count total nodes in complete BT | Medium | find left and right height by special functions and if they same simply return value othewise return 1+for children | Height Based Problems | 09-03-2026 | [Link](https://leetcode.com/problems/count-complete-tree-nodes/description/) |
| 25 | print ancestors of given node | Medium | make a bool function which check either it currently in right or left if one  of  them is true then add that in globle vector else return false and check for children | LCA type/root to path type | 09-03-2026 | [Link](https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1) |
| 26 | construct BT from pre and in order | Medium | from pre order we find the root and we make map of inorder then make a function for build tree we first make root then recursivly make left a nd right | construction of BT | 10-03-2026 | [Link](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1943923613/) |
| 27 | construct BT from post and in order | Medium | same as pre+in but here make root last of post and limits | construction of BT | 11-03-2026 | [Link](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/) |
| 28 | Serialize and De-serialize BT | Hard | in serialization we have to make string so we are doing level order travesal and instead of null children we put # and in deserialize we reverse this we put null when # comes | construction of BT + level order traversal | 12-03-2026 | [Link](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/) |
| 29 | Flatten BT to LL | Medium | first we check if no left then do nothig go right else find rightmost of left and attach original left to right and make left to NULL | in place modification using morris traversal | 13-03-2026 | [Link](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/) |
| 30 | time taken to burning a BT from any node | Hard | first we have to make reverse means parent mapping so by lavel order traversal we return address of target and make a map which contain parent mapping then do bfs using visited map and each time increase time and return it | graph+bfs | 13-03-2026 | [Link](https://www.geeksforgeeks.org/problems/burning-tree/1) |
| 31 | max path sum between to leaves | Hard | here we make a recur function which return best path with root and in this function we find for left and right and check if there exist both children (because then only we can connect 2 leaves) then do change in globle variable (and also there is special case when there is only either right or left subtree then we need to return max(val,sum)) | BT DP | 13-03-2026 | [Link](https://www.geeksforgeeks.org/problems/maximum-path-sum/1) |
| 32 | k sum path | Medium | here for each node  visit node,update currsum,check valid path,add prefix sum,go left,go right,remove prefix sum | prefix sum+hashmap | 13-03-2026 | [Link](https://www.geeksforgeeks.org/problems/k-sum-paths/1) |
| 33 | number of turns in BT | Medium | we need to find LCA then count turns from lca to both a and b and also we need to put condition in main function that if either lca is a or b or neither then from that we call dfs function to count turns from lca to a and lca to b in dfs we have parent direction we call for left and right and check if direction is changed or not | LCA+path analysis | 13-03-2026 | [Link](https://www.geeksforgeeks.org/problems/number-of-turns-in-binary-tree/1) |
| 34 | clone a BT | Medium | here each node have 3 pointers we need to make sure that left ,right is copied and random pointer points to correct cloned nodes not original for this we use hashmap(original node-> cloned node if node already exiast in map then simply return cloned val of that node otherwise create new node and store it in map and recursivly point all left,right and rendom) | hashmap mapping/ graph cloning | 14-03-2026 | [Link](https://www.geeksforgeeks.org/problems/clone-a-binary-tree/1) |
| 35 | array to BST | Medium | we have to make a function which devide array into 2 parts and we make root to mid and further call for left and right  | construct BST | 15-03-2026 | [Link](https://www.geeksforgeeks.org/problems/array-to-bst4443/1) |
| 36 | kth largest in BST with O(1) space | Hard | use morrise traversal but in reverse order | morrise traverasl | 15-03-2026 | [Link](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/)|
| 37 | balance a BST | Medium | from inorder traversal find sorted vector and then build BST | construct BST | 15-03-2026 | [Link](https://www.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1) |
| 38 | insertion in BST | Medium | start from root chack every node one direction right or left by comparision and when you get NULL then insert at that point | path traversal | 18-03-2026 | [Link](https://leetcode.com/problems/insert-into-a-binary-search-tree/) |
| 39 | check BST or not | Medium | run morris traversal for inorder and for each node check curnode value is less than previoius or not | path traversal | 24-03-2026 | [Link](https://www.geeksforgeeks.org/problems/check-for-bst/1) |
| 40 | delete node in BST | Medium | Search for the node using BST property (left if key smaller, right if bigger),When found → return NULL (leaf), return child other that which is not present (1 child), or replace with(either max from left or min from right) predecessor/successor and delete it (2 children) | path traversal | 24-03-2026 | [Link](https://leetcode.com/problems/delete-node-in-a-bst/submissions/1957728037/) |
| 41 | LCA of BST | Easy | chack for node if both exist in same side then recursivly call for that side otherwise return root | path traversal | 27-03-2026 | [Link](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/) |
| 42 | preorder to BST | Medium | use a globle variable for upper bound and then make root and after make left and right recursivly | construct BST | 27-03-2026 | [Link](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/) |
| 43 | BST iterator | Medium | use stack in first we put all left of stack then every time we call next then we put all left of top->right from stack| construct BST | 28-03-2026 | [Link](https://leetcode.com/problems/binary-search-tree-iterator/) |
| 44 | two sum in BST | Easy | use BST iterator for left and right element and chack like simple 2 sum | 2sum+BST | 30-03-2026 | [Link](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/) |
| 45 | Correct BST with 2 node swap | Medium | just do inorder traversal but in unique way do some change at node(left->node->right) we check prev element and if first time violate then store left,mid and at second time we store right then swap accordingly if 1 time violate than they are adjecent otherwise not | inorder traversal | 30-03-2026 | [Link](https://leetcode.com/problems/recover-binary-search-tree/description/) |
| 46 | maximum sum BST in BT | Hard | we have to make a structure which carry isBST,sum,maxval and minval and then we have to do post order traversal of this structure sunction | postorder + DP | 31-03-2026 | [Link](https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/) |
| 47 | catalan numbers | Medium | 2nCn | one type of series | 31-03-2026 | [Link](https://www.geeksforgeeks.org/dsa/applications-of-catalan-numbers/) |
| 48 | Unique BSTs | Medium | just use catalan numbers | BST+DP | 31-03-2026 | [Link](https://leetcode.com/problems/unique-binary-search-trees/description/?envType=problem-list-v2&envId=binary-tree) |
| 49 | Sorted LL to BST | Medium | use inorder approch with globle currHead pointer | construct BST | 31-03-2026 | [Link](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/) |

## 🔁 Backtracking 

| # | Problem | Difficulty | Approach | Pattern | Date | Link |
|---|---|---|---|---|---|---|
| 1 | subset I | Medium | create new function for backtracking which just do backtrack with ith element and without | backtracking+take/not take | 04-04-2026 | [Link](https://leetcode.com/problems/subsets/description/) |
| 2 | subset II | Medium | sort given array ,create new function for backtracking which just do backtrack with ith element and skip same elements then without it| backtracking+take/not take | 04-04-2026 | [Link](https://leetcode.com/problems/subsets-ii/description/) |
| 3 | fibonacci number | Easy | use golden ratio formula | Not noted | Not noted | No link |
| 4 | permutaions | Medium | create new function for backtracking which just do backtrack swap each elements(for start to n )  and withoutswap  | backtracking+permutaion(ordering) | 04-04-2026 | [Link](https://leetcode.com/problems/permutations/description/) |
| 5 | Combination sum | Medium | same as before but here you have 2 choices either you take element then stay at same index oherwise i+1 when sum>target or i>=size then return aslo base case when targer== sum then take  and return  | backtracking+take/not take | 04-04-2026 | [Link](https://leetcode.com/problems/combination-sum/description/) |
| 6 | Combination sum II | Medium | just combine logic of 52 and 49 | backtracking+for-loop | 05-04-2026 | [Link](https://leetcode.com/problems/combination-sum-ii/description/) |
| 7 | palindrome partationing | Medium | At each index i, try all substrings s[i…j]; if the substring is a palindrome, include it in the current partition.Then recursively solve for the remaining string starting from j + 1, and backtrack to explore other cuts.and when i==size then simply add no need to check palindrome because we already took palidrome elements in subset | backtracking+partation | 05-04-2026 | [Link](https://leetcode.com/problems/palindrome-partitioning/description/) |
| 8 | generate parantheses | Medium | if size of curr ==2n then add and ,  Add '(' if open < n  Add ')' if close < open | backtracking+need validation(constrain base)(pruning) | 05-04-2026 | [Link](https://leetcode.com/problems/generate-parentheses/description/) |
| 9 | letter combination of phone number | Medium | first make a map which store char corresponding to each number then just every time append each element for each element take all possibilites by for loop| backtracking+for-loop | 05-04-2026 | [Link](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) |
| 10 | Restore IP address | Medium | Try all possible substrings of length 1–3 and check if each is a valid IP segment. If valid, recursively build the next part; after placing 3 dots, validate and add the final segment. | backtracking+partation | 05-04-2026 | [Link](https://leetcode.com/problems/restore-ip-addresses/description/) |
| 11 | word search | Medium | we have to use dfs function at every node se iterate through all elements and check dfs function in dfs function we check all 4 direction and we put # symbol as visited when backtrack then instead # put that back which we can store in some temp and also put all boundry conditions with element check and when we get word size then return true | backtracking+dfs+pruning | 06-04-2026 | [Link](https://leetcode.com/problems/word-search/description/) |
| 12 | N-Queens | Hard | here we travel row by row and in each row we try to put 1 Queen so in each row we check diagonals in only upper part because below is empty and that column at  every position if there is no Queen in these positions then we put Q here and just backtrack for next row when we reach at row==n then we add into ans  | backtracking+for-loop+pruning | 06-04-2026 | [Link](https://leetcode.com/problems/n-queens/) |
| 13 | Combination sum III | Medium | Pick numbers from 1–9 in increasing order(either use for loop or use create a array of 1 to 9), keep adding until size = k, and check if sum == n Use pruning (sum > n or impossible range) to stop exploring invalid branches early | backtracking+for-loop+pruning | 06-04-2026 | [Link](https://leetcode.com/problems/combination-sum-iii/description/) |

## 📐 Dynamic Programming

| # | Problem | Difficulty | Approach | Pattern | Date | Link |
|---|---|---|---|---|---|---|
| 1 | Climbing stairs | Easy | use simple dp use a linear array to store sum value and every time check if cur is already computed in array then simple return no need to compute that and also you can use 2 previous pointer to optimize space | dp+sum | 06-04-2026 | [Link](https://leetcode.com/problems/climbing-stairs/description/) |
| 2 | min cost climbing stairs | Easy | use simple dp use a linear array to store value and every time check if cur is already computed in array then simple return no need to compute that and also you can use 2 previous pointer to optimize space which every time store min value| dp+min | 07-04-2026 | [Link](https://leetcode.com/problems/min-cost-climbing-stairs/description/) |
| 3 | min cost climbing stairs(you can jump 1 to k(given)) | Medium | same logic but at each index  we need to find min by for loop | dp+min+for-loop | 07-04-2026 | No link |
| 4 | House Robber | Medium | same logic but at each step we have two opetions either take or not take then we choose max from them| dp+take/not-take | 07-04-2026 | [Link](https://leetcode.com/problems/house-robber/description/) |
| 5 | House Robber II | Medium | here we have to divide it in 2 parts first exclude first and in second exclude last then solve same as 3 | dp+take/not-take in cycle | 08-04-2026 | [Link](https://leetcode.com/problems/house-robber-ii/description/) |
| 6 | Ninja's Training | Medium | here we can make a 2D matrix where each row define days and colums tasks where last n+1th column shows when no task is done at that day in the base case we compute oth row where each cell have max value other than that and last one store max from all and ans is dp[n][4] now in the space optimization insteade of 2D matrix we can take a 1D array which can store values of previous level which is useful to compute values for  curr level then we change prev to curr and at the end we return prev[4] | dp+2D | 08-04-2026 | [Link](https://www.naukri.com/code360/problems/ninja%E2%80%99s-training_3621003) |
| 7 | unique paths | Medium |in 2D matrix put 1 in 0th row and column and then at every cell sum both previous diagonal elements or in space optimization just make 0th row's size vector of all 1's and every time just add previous element  for every row | dp+2D | 09-04-2026 | [Link](https://leetcode.com/problems/unique-paths/description/) |
| 8 | unique paths II | Medium | same as before but just when we see rock then put at that point and take care of all boundy contries | dp+2D | 09-04-2026 | [Link](https://leetcode.com/problems/unique-paths-ii/description/) |
| 9 | minimum path sum | Medium | same as before but just insteade of sum do min | dp+2D+min | 09-04-2026 | [Link](https://leetcode.com/problems/minimum-path-sum/description/) |
| 10 | Triangle | Medium | 1)you can make 2D temp array and every time you travel and compute from upper and upper left element  2)you can use bottom up approch in this you make 2D and just every time use min from I and i+1th index and  return at the top 3) in space optimization you can also make linear array prev and you every time make a new curr array from that prev and at the end you can return prev[0](because it is bottom up approch) | dp+2D | 09-04-2026 | [Link](https://leetcode.com/problems/triangle/description/) |
| 11 | Cherry pickup II | Hard | you can Cache result of state (i, j1, j2) to avoid recomputation If already computed → return stored value, else compute using 9 moves(in recursion Try all 9 combinations (dj1, dj2) at every row for both robots Return max cherries collected, handle overlap (same cell))Build DP from last row → first row using all (j1, j2) states For each state, take max over next row’s 9 transitionsOnly keep current row & next row DP (2D arrays)Replace 3D DP by rolling arrays since only i+1 is needed | dp+3D | 09-04-2026 | [Link](https://leetcode.com/problems/cherry-pickup-ii/description/) |
| 12 | subset sum equal to target | Medium |At each index, decide take or not take the element and recursively check if target k can be formed; use DP to store results of (index, target) to avoid recomputation Base cases: if target == 0 return true, if index == 0 check arr[0] == target; final answer comes from combining both choices (take/not take). | dp+sequence | 10-04-2026 | [Link](https://www.naukri.com/code360/problems/subset-sum-equal-to-k_1550954) |
| 13 | partation equal subset sum | Medium | find you have to find sum of all num and check it is even or not if odd then return false otherwise 1)you can use 71 with target sum/2 2) you can use a backward method (because we need each element only one time ) and every time we have to take or or target and target -num(dp[target]=dp[target]||dp[target-num]) | dp+sequence | 10-04-2026 | [Link](https://leetcode.com/problems/partition-equal-subset-sum/description/) |
| 14 | array partition with minimum difference | Medium | here dp is work only when all elements are either non negatives or when negativies then number of them should be >30 so for non negatives we can use simple 72th problem and we can run for loon in last row of dp which give us which sums are possible where range is 0 to totalsum/2 then we can get minimum abs value | dp+sequence | 11-04-2026 | [Link](https://www.naukri.com/code360/problems/array-partition-with-minimum-difference_842494?leftPanelTabValue=PROBLEM) |
| 15 | Count subset with sum K | Medium | use same approch as 72 but here every time we have to add all values of recursion and also note that if we are given large values then we have to do mod when we store any value with 1e9+7 and when there is negative numbers are present then we have to use different data structure and if there is nubers start from 0 hten also we have to change base condition | dp+sequence | 11-04-2026 | [Link](https://www.naukri.com/code360/problems/number-of-subsets_3952532?resumeRedirection=true&leftPanelTabValue=PROBLEM) |
| 16 | Count partition with given differnce | Medium | here you have to take care when nums>=0 and also when arr[i] are very large although it is same as 78 with targert=(totalsum-d)/2 also you have check that totalsum-d is even and also >=0 | dp+sequence | 11-04-2026 | [Link](https://www.naukri.com/code360/problems/partitions-with-given-difference_3751628?leftPanelTabValue=PROBLEM) |
| 17 | Assign Cookies | Easy | just take 2 pointer apporch | greedy | 11-04-2026 | [Link](https://leetcode.com/problems/assign-cookies/description/) |
| 18 | 0 1 knapsack | Medium | use take not take and you can optimize it to only one 1D array | dp+sequence | 12-04-2026 | [Link](https://www.naukri.com/code360/problems/0-1-knapsack_920542?leftPanelTabValue=PROBLEM) |
| 19 | Coin Change | Medium | simply use take not take but when you use take then you should not move to next index because you may need more than one time that coin and take minimum | dp+sequence | 12-04-2026 | [Link](https://leetcode.com/problems/coin-change/description/) |
| 20 | Target Sum | Medium | make a formula of newtarget and simple use dp | dp+sequence | 13-04-2026 | [Link](https://leetcode.com/problems/target-sum/description/) |
| 21 | Coin Change II | Medium | every time add to ways to find how many ways and also you can use knapsack logic | dp+sequence | 13-04-2026 | [Link](https://leetcode.com/problems/coin-change-ii/description/) |
| 22 | unbounded Knapsack | Medium | here you can unlimited time choose same index so use common dp | dp+sequence | 13-04-2026 | [Link](https://www.naukri.com/code360/problems/unbounded-knapsack_1215029) |
| 23 | rod cutting | Medium |here you can use previous logic but use here index as rope remaining size like we use weight previous| dp+sequence | 13-04-2026 | [Link](https://www.naukri.com/code360/problems/rod-cutting-problem_800284?leftPanelTabValue=PROBLEM) |
| 24 | Longest common subsequence | Medium | here you have to give index I to 1st and j to 2nd string and then write base case and comparision | dp on string(lcs type) | 31-05-2026 | [Link](https://www.naukri.com/code360/problems/longest-common-subsequence_624879?leftPanelTabValue=PROBLEM) |
| 25 | print LCS | Medium | first make dp table then do backtrack and make answer | dp on string(lcs type) | 31-05-2026 | [Link](https://www.naukri.com/code360/problems/print-longest-common-subsequence_8416383?leftPanelTabValue=PROBLEM) |
| 26 | Longest common substring | Medium | remove that 2 condition from subsequence and add one more variable maxi | dp on string(lcs type) | 01-06-2026 | [Link](https://www.naukri.com/code360/problems/longest-common-substring_1235207?leftPanelTabValue=PROBLEM) |
| 27 | Longest common palindrom | Medium | same as LCS | dp on string(lcs type) | 01-06-2026 | [Link](https://leetcode.com/problems/longest-palindromic-subsequence/description/) |
| 28 | min insertion to make string palindrom | Medium | use 27 to solve | dp on string(lcs type) | 01-06-2026 | [Link](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/) |
| 29 | min insertion/deletion to convert A to B | Medium | use 25 and one formula | dp on string(lcs type) | 01-06-2026 | [Link](https://leetcode.com/problems/delete-operation-for-two-strings/description/) |
| 30 | shortest common supersequence | Medium | use 26 | dp on string(lcs type) | 01-06-2026 | [Link](https://leetcode.com/problems/shortest-common-supersequence/description/) |
| 31 | Distinct subsequences | Hard | use simple dp and take care of variable type | dp on string(string matching) | 01-06-2026 | [Link](https://leetcode.com/problems/distinct-subsequences/description/) |
| 32 | Edit distance | Medium | use simple dp and take care conditions | dp on string(string matching) | 01-06-2026 | [Link](https://leetcode.com/problems/edit-distance/description/) |
| 33 | wildcard matching | Hard | use simple dp but take care of base conditions | dp on string(string matching) | 01-06-2026 | [Link](https://leetcode.com/problems/wildcard-matching/) |
| 34 | Best time to buy and sell stock I | Easy | use a mini pointer and run for loop | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/) |
| 35 | Best time to buy and sell stock II | Medium | use simple dp where 2 index(index,buy) and take care of 4 ways(2 for buy and 2 for sell ) | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/) |
| 36 | Best time to buy and sell stock III | Hard | use simple dp where 3 index(index,buy,cap) and take care of 4 ways(2 for buy and 2 for sell ) | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/) |
| 37 | Best time to buy and sell stock IV | Hard | use simple dp where 3 index(index,buy,cap) and take care of 4 ways(2 for buy and 2 for sell ) but here cap=k | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/) |
| 38 | Best time to buy and sell stock with cooldown | Medium | same as 36 just little change | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/) |
| 39 | Best time to buy and sell stock with transaction fee | Medium | same as 36 just minus fee when sell | dp on stocks | 02-06-2026 | [Link](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/description/) |
| 40 | Longest increasing subsequence | Medium | use simple pick not pick dp | dp on LIS | 06-06-2026 | [Link](https://leetcode.com/problems/longest-increasing-subsequence/description/) |
| 41 | print Longest increasing subsequence | Medium | use 40 and for print make a prev array which store prev index which element match | dp on LIS | 06-06-2026 | No link |
| 42 | Longest increasing subsequence | Medium | use temp array and just add and replace and at the end return size of temp | dp on LIS | 06-06-2026 | [Link](https://leetcode.com/problems/longest-increasing-subsequence/description/) |
| 43 | Largest divisible subset | Medium | use same as 40 but change one condition and sort the arr | dp on LIS | 06-06-2026 | [Link](https://leetcode.com/problems/largest-divisible-subset/) |
| 44 | Longest string chain | Medium | same as 40 but just sort word array and change one condition | dp on LIS | 06-06-2026 | [Link](https://leetcode.com/problems/longest-string-chain/description/) |
| 45 | Longest bitonic subsequence | Medium | you have to make 2 vector in 40 increase and decrease then find max from their sum | dp on LIS | 06-06-2026 | [Link](https://www.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1) |
| 46 | number of LIS | Medium | you have to make 2 vector in 101 increase and decrease then find max from their sum | dp on LIS | 06-06-2026 | [Link](https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/) |
| 47 | matrix chain multiplication | Hard | make a count array and every time if curr element is less than 1+prev then simply inherete and if curr==prev+1 then do cnt[i]+=cnt[j] and at the end sum all whose length is equal to maxi| MCM dp | 06-06-2026 | [Link](https://www.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1) |
| 48 | min cost to cut a stick | Hard | same as 47 just change little in condition | MCM dp | 06-06-2026 | [Link](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/) |
| 49 | Brust balloons | Hard | same as 47 just change little in condition | MCM dp | 07-06-2026 | [Link](https://leetcode.com/problems/burst-balloons/description/) |
| 50 | diff ways to evaluate a bool exp | Medium | dp[i][j][isTrue] stores the number of ways to parenthesize the substring exp[i...j] so that it evaluates toTrue/FalseFor every operator between i and j, split into left and right parts, get (lT, lF, rT, rF), and combine them according to the operator's truth table (&, \, ^)Fill DP for increasing substring lengths (or use i from n-1 → 0 and j from i → n-1) so that smaller subproblems are already computed before larger ones | MCM dp | 07-06-2026 | [Link](https://www.geeksforgeeks.org/problems/boolean-parenthesization5610/1) |
| 51 | palindrome partationing II | Hard | run a loop from i to n every time and check if that partation make palindrom or not if yes then from all that cost choose minimum | partation dp | 07-06-2026 | [Link](https://leetcode.com/problems/palindrome-partitioning-ii/description/) |
| 52 | partation array for max sum | Medium | same as 51 | partation dp | 07-06-2026 | [Link](https://leetcode.com/problems/partition-array-for-maximum-sum/) |
| 53 | maximal ractangle | Hard | you have to use largest ractangle area code for each column you have to update temp array and call this function | dp on square | 07-06-2026 | [Link](https://leetcode.com/problems/maximal-rectangle/description/) |
| 54 | count suquare submatrix with all 1's | Medium | make 2d matrix and for each 1's count number of square by him when it is digonal right down element by prev 3 neighbours | dp on square | 07-06-2026 | [Link](https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/) |
### Graphs

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 | BFS Traversal of Graph | easy | Visited array + queue, push adjacent unvisited nodes | BFS|09-06-2026 | [Link](https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1) |
|2|	DFS	|easy |you have to make helper function and for any node you have to recursivly call helper for adjecent nodes and everytime store to res vector which we also pass with function	graph	| DFS|09-06-2026	|[Link](https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1) |
|3|	Number of Provinces|	medium|you have to use vis array you have to run a loop and for evey non visited node you have to increase cnt and call bfs/dfs|	BFS/DFS|	10-06-2026|[Link](	https://leetcode.com/problems/number-of-provinces/description/)|
|4 |Rotting oranges|medium	|first count total oranges and which are rotten put their coordinates In queue then do bfs(level wise travel like) then make fresh to rotton and count rotton every time then at the end check if rotton==total then return count and else -1	|BFS|	10-06-2026	|[Link](https://leetcode.com/problems/rotting-oranges/)|
|5|	Flood Fill|medium|	use simple BFS|	BFS	|10-06-2026	|[Link](https://leetcode.com/problems/flood-fill/description/)
|6|	Undirected Graph cycle|medium|	use DFS and keep trake of parent as bool function	|DFS|	11-06-2026|	[Link](https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1)|
|7|	Course schedule(6 for directed)|medium|	1)here parent version is not work we have to define one more pathvis vector and every time at end we have to reset it 2)here use same code as topological sort and at the end you only have to check if size of ans is equal to n or not	|DFS/Topological sort|	11-06-2026|[Link](https://leetcode.com/problems/course-schedule/description/)|
|8|	01 matrix|medium|	use simple BFS with some condition change|	BFS|	11-06-2026|	[Lint](https://leetcode.com/problems/01-matrix/)|
|9|	Surrounded Regions|medium|	use simple BFS  but here you have start from zeros which are on the corners	|BFS|	11-06-2026	|[Link](https://leetcode.com/problems/surrounded-regions/description/)|
|10|	Number of Enclaves|medium|	Use simple BFS but you have to minuse from total which can wrok off the Boundary|BFS|12-06-2026	|[Link](https://leetcode.com/problems/number-of-enclaves/description/)|
|11|	Word ladder	|Hard|you have to do like bfs because each step you have word and you have to check all possibilities for each char from word and if match then push to queue and increase steps	|BFS|	12-06-2026	|[Link](https://leetcode.com/problems/word-ladder/description/)|
|12|	Word ladder II|very hard|Multi-source BFS storing full paths in the queue (each queue element = path so far); process level-by-level, erasing used words only after a full level finishes (so same-level branches can share words) — stop once endWord is reached Then DFS isn't needed: when word==endWord, push the whole path directly into ans if its length matches the first found path's length but this will not worked in leetcode solution	|BFS|	14-06-2026	|[Link](https://www.geeksforgeeks.org/problems/word-ladder-ii/1)|
|13|	Number of islands|medium|	you have to do travers and do bfs parallel if a node is not visited then store it in queue and do bfs and for every unvisited you have to increase count	|BFS	|14-06-2026	|[Link](https://leetcode.com/problems/number-of-islands/)|
|14|	Bipartite graph	|easy|use bfs for diconected graph and color child with other color than parents and every time check	|BFS|	14-06-2026|	[Link](https://leetcode.com/problems/is-graph-bipartite/description/)|
|15|	Course schedule II	|medium|1)DFS each node for unvisited neighbors recurse if a neighbor is in current path (pathvis)  cycle found return {} After visiting all neighbors, push node to ans (post-order), then reverse ans at the end for correct topological order 2)use same code as topological sort and at the end just check if ans(size)==n then return reverse of ans otherwise return {}|	BFS|	14-06-2026|	[Link](https://leetcode.com/problems/course-schedule-ii/description/)|
|16|	Topological sort/kahn's algo|medium|(1-topological sort)you have to use DFS but when you return every time you have to push that element in stack and at the end from stack push all element in to vector (2-kahn's algo)here you solve with BFS with some modification like you use indegree instead of visted array|Topological sort|15-06-2026|[Link](https://www.geeksforgeeks.org/problems/topological-sort/1)|
|17|	Find eventual safe states|	medium|first you have to reverse the graph then apply topological sort	|Topological sort	|15-06-2026	|[Link](https://leetcode.com/problems/find-eventual-safe-states/description/)|
|18|	Alien Dictionary|hard|	here from words you have to make adjacancy list and then simply do topoogical sort	|Topological sort	|15-06-2026|	[Link](https://www.geeksforgeeks.org/problems/alien-dictionary/1)|
|19|	 print Shortest path in unweighted graph|medium|	"BFS + parent tracking → shortest distance guaranteed (level-by-level exploration) Path reconstruction: destination → trace parents → source → reverse"	|shortest path/BFS|	16-06-2026|	[Link](https://www.naukri.com/code360/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTabValue=PROBLEM)|
|20|	Shortest path in DAG|hard|	here you have to first find stack using topological sort then one by one take element from stack and check distance with neighbours for that you have to define one distance array and initialize with 1e9 then every time if you found min diatance then change in distance array	|Topological sort+BFS|	16-06-2026|	[Link](https://www.naukri.com/code360/problems/shortest-path-in-dag_8381897?leftPanelTabValue=PROBLEM)|
|21|Dijkstra's Algo|medium|1)Start by picking the closest node from your list and explore all its neighbors For each neighbor, if you find a shorter path than what you already know, update that neighbor's distance and add it to check later.Keep doing this until you've checked all reachable nodes, and you'll have the shortest distance from your starting point to everywhere else2) you can use queue in first but it will take nore time because it will take all unnecassary paths3)use set insted of pq because set will erase already existing path which has more distance|Shortest path|17-06-2026|[Link](https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)|
|22|Shortest Path in Binary Matrix|medium|you can use either use dijkstra algo or BFS in that explore all 8 direction|shortest path|17-06-2026|[Link](https://leetcode.com/problems/shortest-path-in-binary-matrix/description/)|
|23|path with min effort|medium|you have to use dijkstra algo and for every neighbour you have to calculate effort and compare with curr node's effort and take minimum|Shortest path|17-06-2026|[Link](https://leetcode.com/problems/path-with-minimum-effort/description/)|
|24|cheapest flights within k stops|medium|1)modify dijkstra algorithm: use queue to save logn time and check for k+1 which handal edge case 2)you can also use while loop for k+1 time and evey time you replace stat vector and store min|shortest path|17-06-2026|[Link](https://leetcode.com/problems/cheapest-flights-within-k-stops/)|
|25|Network delay time|medium|use simple dijkstra algorithm|shortest path|17-06-2026|[Link](https://leetcode.com/problems/network-delay-time/)|
|26|Number of ways to arrive destination|medium|Use Dijkstra's algorithm to find the shortest distance to every node while maintaining ways[i],the number of shortest paths to reach node i If a shorter path is found, update the distance and copy the number of ways; if another path with the same shortest distance is found, add its ways modulo 1e9+7|Shortest Path|17-06-2026|[Link](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/)|
|27|minimum multiplication to reach end|easy|you have to use dijkstra algo but with some modification like you have to use queue because elements already stored in increasing order also make 1000 size of dis array|Shortest path|18-06-2026|[Link](https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1)|
|28|Bellman Ford Algo|medium|you have to relax edges V-1 time and if you want to find is there a negetive cycle then you have to relax one more time and check is distance decreasing then there is negative cycle|Shortest Path|18-06-2026|[Link]( https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1)|
|29|Floyd warshall|easy|it is like brut force you have to use adj matrix and modify you have to check for every node if they were a via node and take min|Shortest path|18-06-2026|[Link](https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1)|
|30|Find the City With the Smallest Number of Neighbors at a Threshold Distance|medium|use floyd warshall algo to create that adj matrix and then travers and find node which satisfy condition and store index|Shortest PAth|18-06-2026|[Link](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/description/)|
|31|Minimum Spanning Tree|medium|you have to use priority queue with vis array and start with any node and store weight,node and parent if you need edges at the end and every time you have to take top of pq and if already visited then continue otherwise sum+=w and put non visited neighbour in pq|MST|19-06-2026|[Link](https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1)|
|32|Disjoint Set|Hard| Each element initially belongs to its own set; find() returns the representative (ultimate parent) of a set using path compression union() merges two sets by connecting their representatives, preferably using rank or size to keep the tree shallow|Disjoint Set|19-06-2026|[Link](https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1)|
|33|Number of Operations to Make Network Connected|medium| here you need 2 things number of disjoint componant and number of extra edges you can find by Disjoint set if parent same then extraedge++ and at the end check parent array if parent[i]==i then cnt++ and if extra>=cnt-1 then cnt-1 otherwise -1|Disjoint Set|19-06-2026|[Link](https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/)|
|34|Most Stones Removed with Same Row or Column|hard|you have to use row and col as nodes and make parent array of size maxrow+maxcol+1 and for every stone you have to join col to row and for that you have to use DJS and we just need nodes in DJS which are involv in having stone so we store r and c in unordered map as they will have stone and we just need to count them for ultimate parent|Disjoint Set|19-06-2026|[Link](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/)|
|35|Account Merge|hard|Use DSU to group account indices that share at least one common email by mapping each email to the first account where it appears and unioning subsequent accounts containing that email After forming the groups, collect all emails belonging to the same DSU parent, sort them, and prepend the account holder's name to construct the merged accounts|Disjoint Set|19-06-2026|[Link](https://leetcode.com/problems/accounts-merge/)|
|36|Number of Island II|hard|Treat each newly added land cell as a separate island and increase the island count by 1 Check its 4 neighbors; if a neighbor is land and belongs to a different DSU component, union them and decrease the island count by 1|Disjoint Set|20-06-2026|[Link](https://www.geeksforgeeks.org/problems/number-of-islands/1)|
|37|Makint a Large Island|hard|here first you have to do union of all element as if all element are node and after making union you have to check for all 0's what if we convert them to 1 for them you have to check size of neighbours if it is 1 and store size of their eletement parentin set(avoid repitation) and find maxi|Disjoint Set|20-06-2026|[Link](https://leetcode.com/problems/making-a-large-island/description/)|
|38|Swim in rising water|medium|use Dijkstra algo and in priority queue store max weight from node and neighbours weight and row and colum and if you areach last position then return node's weight weight o/w -1|Shortest path|20-06-2026|[Link](https://leetcode.com/problems/swim-in-rising-water/)|
|39|Bridges in Graph(Tarjan's Algo)|medium|here you have to do DFS with 2 state for each node explore time and lowest time and every time you ahve to ignore edge with parent and for every unvisited node you have to check if low>explore then it is a bridge|DFS|20-06-2026|[Link](https://leetcode.com/problems/critical-connections-in-a-network/description/)|
|40|Articulation Point|medium|same logic as bridge in graph but some condition change here you have to change conditon to low[it]>=low[parent] and it should not be the start point for start point and every time you have to mark that one to avoid repetition you have to insert new condition you have to count children|DFS|21-06-2026|[Link](https://www.geeksforgeeks.org/problems/articulation-point-1/1)|
|41|Count Strongly Connected Componants(Kosaraju's Algo)|medium|if we perform a DFS on the graph and record the finishing times of nodes, then by reversing the graph and doing DFS in the order of decreasing finishing times, we can group nodes into SCCs|DFS|21-06-2026|[Link](https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1)|

### Tries

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |Implement Tries  | medium |  you have to make node structure in then define one links array of size 26 and flag some function like countkeys,put,isend,get,setend1)insert:in this for every char you have to check link exist not then use put and move and at then end set true2)search:check containskey for every char and at the end if we reach true then return true o/w false3)start with:same as search but last condition removed | Tries | 27-06-2026|[Link](https://leetcode.com/problems/implement-trie-prefix-tree/description/) |
|2|Implement Tries II|medium|same as first but here 2 new variable you need prefix and end and when you add then increase and when delete then decrease|Tries|28-06-2026|[Link](https://www.naukri.com/code360/problems/-implement-trie-ll_1387095)|
|3|Longest valid word with all prefixes|medium|use trie and for every word you have to check is all prefix present of not and from all words you have to choose max lan|Tries|28-06-2026|[Link](https://www.geeksforgeeks.org/problems/longest-valid-word-with-all-prefixes/1)|
|4|Count of distinct substring|medium|just need node structure and you have to go through all possiblities and is that char is not present you have to increase cnt|Tries|29-06-2026|[Link](https://www.geeksforgeeks.org/problems/count-of-distinct-substrings/1)|
|5|Max XOR of two num in an arr|medium|in tries you need 2 function insert in which you insert 32 bits in left to right and 2nd function is getmax in that you check from left to right if opposite bit present then you go there o/w you go to next bitand return max|Tries|29-06-2026|[Link](https://www.geeksforgeeks.org/problems/maximum-xor-of-two-numbers-in-an-array/1)|

### Advanced

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

---

## 🛠️ Tech Stack

- **Language:** C++17
- **Compiler:** g++ / VS Code

---

## 👤 Author

**Yash Patel**
B.Tech Mathematics & Computing, Dhirubhai Ambani University (DAU)
[GitHub](https://github.com/onemore-yash) • [LinkedIn](www.linkedin.com/in/yashkumbhani)
