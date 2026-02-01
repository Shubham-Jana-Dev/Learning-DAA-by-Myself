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
| $n$ | $Log \ n$ |

---

#### Elimination Process Visualization
![Diagram showing items being halved from 100 down to 1, and n down to n/2^k]
---
### Mathematical Derivation
$n/2^k = 1$  
$\rightarrow 2^k = n$  
$\rightarrow \log_2 2^k = \log_2 n$  
$\rightarrow K = \log_2 n$

**Time complexity : O(log n)**

---

### Growth Rate of Binary Search
![Graph showing logarithmic growth: 10 items/4 comparisons, 100/7, 1M/20, 1B/30]

---

### Growth Rate Comparison

| Linear Search: $O(n)$ | Binary Search: $O(\log n)$ |
| :--- | :--- |
| graph LR
    A["n items"] --> B["n/2"]
    B --> C["n/2²"]
    C --> D["n/2³"]
    D --> E[...]
    E --> F["n/2ᵏ = 1"]
    
    style F fill:#f9f,stroke:#333,stroke-width:2px | ![Logarithmic Growth Graph] |