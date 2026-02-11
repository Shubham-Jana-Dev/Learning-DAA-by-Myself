# Big O Notation: Identifying Dominant Terms

This section covers the practical workflow for finding the upper bound of polynomial functions by focusing on the term that grows the fastest as $n$ approaches infinity.

## 🛠 The 3-Step Workflow
1.  **Identify the Dominant Term:** Compare parts of the function (e.g., $n$ vs. a constant) to see which grows faster.
2.  **Choose $g(n)$:** Select a standard complexity class (like $n, n^2, n \log n$) based on that dominant term.
3.  **Apply Formal Definition:** Find constants $c$ and $n_0$ such that $f(n) \leq c \cdot g(n)$.

---

## ✍️ Solved Problems

### Problem 1: Linear Function $f(n) = 3n + 8$
* **Step 1 (Dominant Term):** Comparing $3n$ and $8$ at $n=1000$ shows $3000 \gg 8$. Thus, $3n$ is dominant.
* **Step 2 (Choose $g(n)$):** We choose $g(n) = n$.
* **Step 3 (Proof):** * Assume **$c = 4$**.
    * Test $3n + 8 \leq 4n$:
        * At $n=7: 29 \leq 28$ (False).
        * At $n=8: 32 \leq 32$ (True).
    * **Result:** $3n + 8 = O(n)$ for **$c = 4$** and **$n_0 = 8$**.


---

### Problem 2: Quadratic Function $f(n) = n^2 + 10$
* **Step 1 (Dominant Term):** Comparing $n^2$ and $10$ shows $n^2$ grows rapidly while $10$ remains constant. $n^2$ is dominant.
* **Step 2 (Choose $g(n)$):** We choose $g(n) = n^2$.
* **Step 3 (Proof):**
    * Assume **$c = 2$**.
    * Test $n^2 + 10 \leq 2n^2$:
        * At $n=3: 19 \leq 18$ (False).
        * At $n=4: 26 \leq 32$ (True).
    * **Result:** $n^2 + 10 = O(n^2)$ for **$c = 2$** and **$n_0 = 4$**.

---

## 💡 Key Takeaways
* **Dominance:** For any polynomial, the term with the highest exponent determines the Big O complexity.
* **$n_0$ Calculation:** The $n_0$ value is the exact point where the $c \cdot g(n)$ line finally overtakes the $f(n)$ line.
*