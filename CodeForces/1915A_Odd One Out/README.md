# 🔢 Odd One Out

## 📌 Problem Statement
You are given three digits `a`, `b`, `c`. Two of them are equal, but the third one is different from the other two.

Find the value that occurs exactly once.

## 🔢 Input
- The first line contains a single integer `t` (1 ≤ t ≤ 270) — the number of test cases.
- Each of the next `t` lines contains three digits `a`, `b`, `c` (0 ≤ a, b, c ≤ 9). Two of these digits are equal, and the third one is different.

## 🎯 Output
- For each test case, output the value that occurs exactly once.

## 🛠️ Explanation & Solution
To determine the unique value:
- If `a == b`, then `c` is the odd one out.
- If `a == c`, then `b` is the odd one out.
- Otherwise, `a` is the odd one out.

### 📖 Example Walkthrough
#### Example Input:
```
10
1 2 2
4 3 4
5 5 6
7 8 8
9 0 9
3 6 3
2 8 2
5 7 7
7 7 5
5 7 5
```

#### Example Output:
```
1
3
6
7
0
6
8
5
5
7
```

## ⏳ Complexity Analysis
- Each test case is processed in `O(1)`, making the overall complexity `O(t)`, which is optimal for the given constraints.

## 📌 Summary
- Compare the three digits to identify the unique one.
- Use simple conditional checks for an `O(1)` solution per test case.
- Efficient `O(t)` approach.

