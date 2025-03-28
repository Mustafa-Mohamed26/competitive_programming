# 🔢 Medium Number

## 📝 Problem Statement
Given three distinct integers `a`, `b`, and `c`, find the **medium number** among them. The **medium number** is the one that is neither the minimum nor the maximum of the three numbers.

For example, the medium number of **5, 2, 6** is **5**, since **2** is the minimum and **6** is the maximum.

## 📥 Input
- The first line contains a single integer `t` (1 ≤ t ≤ 6840) — the number of test cases.
- Each of the next `t` lines contains three distinct integers `a`, `b`, and `c` (1 ≤ a, b, c ≤ 20).

## 📤 Output
For each test case, output a single integer — the medium number among the three.

## 🔍 Examples
### ✅ Input
```
9
5 2 6
14 3 4
20 2 1
1 2 3
11 19 12
10 8 20
6 20 3
4 1 3
19 8 4
```
### ✅ Output
```
5
4
2
2
12
10
6
3
8
```

## 💡 Solution Approach
To find the medium number among `a`, `b`, and `c`, follow these steps:
1. **Sort** the three numbers.
2. **Pick the second** number (middle element) after sorting.
3. Print the result for each test case.

This approach ensures an **efficient** and **accurate** solution in **O(1)** time complexity per test case.

