# Day 12: Binary Search Deep Dive

## 1. Evolution of the Algorithm
Transitioned from a basic Linear Search $O(n)$ to an optimized Binary Search $O(\log n)$.

### Logic Comparison
- **Linear Search:** Scans index by index.
- **Binary Search (Iterative):** Uses a `while` loop to prune half of the search space each iteration.
- **Binary Search (Recursive):** Uses the function call stack to achieve the same pruning, providing cleaner code but utilizing $O(\log n)$ stack space.


## 2. Implementation Insights
### Handling Array Decay
A critical learning point was **Array Decay**. In C, passing an array to a function converts it to a pointer.
* **Wrong:** `int length = sizeof(arr)/sizeof(arr[0])` inside the function (returns pointer size).
* **Correct:** Calculate `length` in `main()` and pass it as a parameter.

### Pointer Arithmetic vs. Indexing
To simulate low-level memory logic, I utilized pointer arithmetic:
$$*(arr + mid) \equiv arr[mid]$$

## 3. Mathematical Growth Rate
The number of steps $k$ required to find an element in an array of size $n$ is:
$$\frac{n}{2^k} = 1 \implies 2^k = n \implies k = \log_2 n$$