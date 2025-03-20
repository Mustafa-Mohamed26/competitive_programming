# 🧲 Magnets

## 📌 Problem Statement
Mad scientist **Mike** entertains himself by arranging rows of **rectangular magnets**. Each magnet has two poles:
- **Positive (`+`)** represented as `0`
- **Negative (`-`)** represented as `1`

Mike places magnets **horizontally** on the table, one at a time. A magnet can either:
- **Attract** the previous one (`01` followed by `01` or `10` followed by `10` → same group)
- **Repel** the previous one (`01` followed by `10` or `10` followed by `01` → new group)

Your task is to determine the number of groups of magnets formed.

## 🔢 Input
- The first line contains an integer `n` \(1 \leq n \leq 100000\) — the number of magnets.
- The next `n` lines each contain **either**:
  - `01` (plus-minus orientation)
  - `10` (minus-plus orientation)

## 📤 Output
- Print a **single integer** — the number of groups of magnets.

## ✅ Examples
### Example 1
**Input:**
```
6
10
10
10
01
10
10
```
**Output:**
```
3
```

### Example 2
**Input:**
```
4
01
01
10
10
```
**Output:**
```
2
```

## 🔗 Related Topics
- ✅ String Processing
- ✅ Consecutive Group Counting
- ✅ Simple Iteration

## 🏁 Conclusion
This problem can be efficiently solved by iterating through the sequence of magnets and counting the number of **transitions** between different types of magnets. 🚀

