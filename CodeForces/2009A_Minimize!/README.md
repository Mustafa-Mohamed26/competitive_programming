# 🔢 A. Minimize!

## 🧠 Problem Description

You are given two integers `a` and `b` such that `a ≤ b`. Over all possible integer values of `c` where `a ≤ c ≤ b`, your task is to **find the minimum value** of the expression:

```
(c - a) + (b - c)
```

### 🔍 Simplification

Note that:
```
(c - a) + (b - c) = b - a
```

This means the result is always `b - a`, regardless of the value of `c`.

---

## 📥 Input

- The first line contains an integer `t` (1 ≤ t ≤ 55) — the number of test cases.
- The next `t` lines each contain two integers `a` and `b` (1 ≤ a ≤ b ≤ 10).

---

## 📤 Output

For each test case, output a single line containing the minimum value of `(c - a) + (b - c)`.

---

## 📘 Example

### Input
```
3
1 2
3 10
5 5
```

### Output
```
1
7
0
```

---

## 💡 Explanation

- **Test case 1:** Choosing `c = 1` gives `(1 - 1) + (2 - 1) = 1`.
- **Test case 2:** Any value of `c` from 3 to 10 results in `(c - 3) + (10 - c) = 7`.
- **Test case 3:** Since `a = b = 5`, the value is `0`.

---

## 🧩 Solution Insight

Since the expression always simplifies to `b - a`, the solution becomes trivial and constant time for each test case.

---

## 🏷️ Tags

- 🧮 Math
- ✂️ Simplification
- ⚙️ Implementation

