# DAA Learning Journey: Day 09 & 10

## 📅 Day 09: Importance of Algorithm Analysis

### 🎯 Objective
To solve a problem using the most **efficient algorithm** (minimum time and memory consumption).

### 🔍 Example: Finding the Key (90)
**Input Array:** `[1, 23, 34, 46, 65, 78, 90, 100]`

#### Approach 1: Linear Search
* **Method:** Check each element one by one from the start.
* **Process:** $1 \to 23 \to 34 \to 46 \to 65 \to 78 \to 90$ (Found!)
* **Result:** **7 comparisons**.

#### Approach 2: Binary Search
> **Note:** This only works if the list is **sorted**.
1.  **Midpoint:** $L=8, mid=46$ (Index 3).
2.  **Compare:** Is $90 > 46$? **Yes**.
3.  **New Range:** Search right side `[65, 78, 90, 100]`.
* **Result:** **3 comparisons**.

---

