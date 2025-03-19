# ⚖️ Young Physicist

## 📌 Problem Statement
Vasya, a high school student, forgot to do his physics homework because he was watching a hockey match. The teacher decided to punish him with a task: determining whether an idle body in space is in **equilibrium**.

A body is in **equilibrium** if the sum of all force vectors acting on it is equal to **zero** in all three dimensions (`x`, `y`, and `z`).

Your task is to check if the given `n` force vectors sum to `(0,0,0)`. If so, the body is in equilibrium; otherwise, it is not.

## 🔢 Input
- The first line contains an integer `n` (`1 ≤ n ≤ 100`) — the number of force vectors.
- The next `n` lines each contain three integers `xi, yi, zi` (`-100 ≤ xi, yi, zi ≤ 100`), representing the force components in the `x`, `y`, and `z` directions.

## 🎯 Output
- Print **"YES"** if the sum of all vectors results in `(0,0,0)`, meaning the body is in equilibrium.
- Otherwise, print **"NO"**.

## 📖 Examples
### Example 1
**Input:**
```
3
4 1 7
-2 4 -1
1 -5 -3
```
**Output:**
```
NO
```

### Example 2
**Input:**
```
3
3 -1 7
-5 2 -4
2 -1 -3
```
**Output:**
```
YES
```

## 💡 Approach
1. Initialize three variables `sum_x`, `sum_y`, and `sum_z` to `0`.
2. Iterate through `n` force vectors and accumulate their components into `sum_x`, `sum_y`, and `sum_z`.
3. After processing all vectors:
   - If `sum_x == 0`, `sum_y == 0`, and `sum_z == 0`, print **"YES"**.
   - Otherwise, print **"NO"**.

## ⏱️ Complexity Analysis
- The solution runs in **O(n)** time, as it only requires a single pass through the `n` vectors.

