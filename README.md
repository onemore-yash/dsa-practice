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
| 1 |  |  |  |  | | |

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
|21|Dijkstra's Algo|medium|1)Start by picking the closest node from your list and explore all its neighbors For each neighbor, if you find a shorter path than what you already know, update that neighbor's distance and add it to check later.Keep doing this until you've checked all reachable nodes, and you'll have the shortest distance from your starting point to everywhere else2) you can use queue in first but it will take nore time because it will take all unnecassary paths3)use set insted of pq because set will erase already existing path which has more distance
|Shortest path|17-06-2026|[Link](https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)|



<img width="32766" height="25" alt="image" src="https://github.com/user-attachments/assets/3781868b-79ac-4b58-a2bc-bd9053616b00" />



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
