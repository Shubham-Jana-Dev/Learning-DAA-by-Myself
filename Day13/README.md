# Big O Notation: Formal Definition and Examples

This folder contains my study notes and solved problems regarding **Big O Notation**, focusing on how to prove if a function is an upper bound of another.

## 📝 Formal Definition
Big O notation is used to describe the **tight upper bound** of a function (usually representing the time or space complexity of an algorithm).

We say $f(n) = O(g(n))$ if and only if there exist positive constants $c$ and $n_0$ such that:
$$f(n) \leq c \cdot g(n) \quad \text{for all } n \geq n_0$$


---

## ✍️ Solved Problems

### Problem 1: Proving a Linear Upper Bound
**Question:** Assume $f(n) = 5n + 50$ and $g(n) = n$. Is $f(n) = O(g(n))$?

**Proof:**
* To satisfy the definition, we need to find constants $c$ and $n_0$ where $5n + 50 \leq c \cdot n$.
* By assuming **$c = 6$**, we test different values of $n$:
    * If $n = 10 \rightarrow 100 \leq 60$ (False)
    * If $n = 50 \rightarrow 300 \leq 300$ (True)
    * If $n = 51 \rightarrow 305 \leq 306$ (True)

**Conclusion:** $5n + 50 = O(n)$ because for $c = 6$ and $n_0 = 50$, the condition $f(n) \leq c \cdot g(n)$ holds true for all $n \geq n_0$.

---

### Problem 2: Testing a Logarithmic Upper Bound
**Question:** Assume $f(n) = 5n + 50$ and $g(n) = \log_{10} n$. Is $g(n)$ an upper bound of $f(n)$?

**Proof:**
* We check if $5n + 50 \leq c \cdot \log_{10} n$ for a large constant (e.g., $c = 1000$).
* **Testing values:**
    * If $n = 10^2 \rightarrow 550 \leq 2000$ (True)
    * If $n = 10^3 \rightarrow 5050 \leq 3000$ (False)
    * If $n = 10^4 \rightarrow 50050 \leq 4000$ (False)

**Conclusion:** As $n$ grows, the linear function $f(n)$ increases much faster than the logarithmic function $g(n)$. No matter how large we make $c$, $f(n)$ will eventually exceed $c \cdot g(n)$. Therefore, **$g(n)$ is NOT an upper bound of $f(n)$**.

---

## 💡 Key Takeaways
1.  **Constants matter:** $n_0$ is the "threshold" after which the upper bound must stay above the function.
2.  **Growth Rates:** Linear growth $O(n)$ cannot be bounded by logarithmic growth $O(\log n)$.