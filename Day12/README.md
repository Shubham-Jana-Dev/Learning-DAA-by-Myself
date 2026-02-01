# Day - 12

## Big O notation and binary Search

* Big O notation of binary search.
* Growth rate of binary search.
* Growth rate comparison of linear search and binary search.

In binary search every half of the list is eliminated.

### Binary search:

| Number of items | Number of comparison |
| :--- | :--- |
| 10 | 3 |
| 100 | 7 |
| 1 billion | 30 |
| $n$ | $\log n$ |



---

#### Elimination Process Visualization
![Binary Search Elimination Process](./assets/Binary_and_linear_count_comparison.png)
---
### Mathematical Derivation
$$\frac{n}{2^k} = 1$$
$$\rightarrow 2^k = n$$
$$\rightarrow \log_2 2^k = \log_2 n$$
$$\rightarrow K = \log_2 n$$

**Time complexity : O(log n)**


---

### Growth Rate of Binary Search
![Logarithmic Growth Graph](./assets/Binary_search_graph.png)

---

### Growth Rate Comparison

| Linear Search: $O(n)$ | Binary Search: $O(\log n)$ |
| :--- | :--- |
| ![Linear Search Graph](./assets/Linear_search_graph.png) | ![Binary Search Graph](./assets/Binary_search_graph.png) |