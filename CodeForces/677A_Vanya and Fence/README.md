# 🚧 Vanya and Fence

## 📌 Problem Statement
Vanya and his friends are walking along a fence of height **h**. To avoid being noticed by the guard:
- If a person's height **aᵢ** is **≤ h**, they walk normally (width = 1).
- If a person's height **aᵢ** is **> h**, they bend down (width = 2).

Friends want to walk in a **single row** while talking. Your task is to determine the **minimum width of the road** required.

---
## 📥 Input
- The first line contains two integers **n** and **h**:
  - **n** (1 ≤ n ≤ 1000) — the number of friends.
  - **h** (1 ≤ h ≤ 1000) — the height of the fence.
- The second line contains **n** integers **aᵢ** (1 ≤ aᵢ ≤ 2h), the heights of the friends.

---
## 📤 Output
- Print a single integer — the **minimum required width** of the road.

---
## 🏆 Examples
### Example 1
**Input:**
```
3 7
4 5 14
```
**Output:**
```
4
```

### Example 2
**Input:**
```
6 1
1 1 1 1 1 1
```
**Output:**
```
6
```

### Example 3
**Input:**
```
6 5
7 6 8 9 10 5
```
**Output:**
```
11
```

---
## 🔍 Solution Approach
1. **Initialize total width to 0**.
2. **Iterate through each friend's height**:
   - If **aᵢ ≤ h**, add **1** to the width.
   - If **aᵢ > h**, add **2** to the width.
3. **Print the total width** as the answer.

---
## ⏳ Complexity Analysis
- **O(n)** time complexity: We iterate through the list once.
- **O(1)** space complexity: Only a few extra variables are used.

---
## 🏁 Conclusion
This problem requires a simple **conditional check** and **summation** over a list, making it an easy problem to solve efficiently.

