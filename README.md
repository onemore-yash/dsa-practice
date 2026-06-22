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
| Arrays |  |  |
| Strings |  |  |
| Linked List |  |  |
| Stacks & Queues |  |  |
| Trees |  |  |
| Graphs |  |  |
| Dynamic Programming |  |  |
| Tries |  |  |
| Advanced (Segment Tree, etc.) |  |  |
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

### Trees

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 | Diameter of BT |easy  |  using postorder find left and right height and check max with diameter|height|22-06-2026 |[Link](https://leetcode.com/problems/diameter-of-binary-tree/description/) |

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
### Dynamic Programming

| # | Problem | Difficulty | Approach |pattern| date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

### Tries

| # | Problem | Difficulty | Approach | pattern|date | link |
|---|---|---|---|---|---|---|
| 1 |  |  |  |  | | |

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
