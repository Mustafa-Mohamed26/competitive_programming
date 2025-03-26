# 🏃 Marathon

## Problem Statement
Timur and three other people are running a marathon. The value `a` represents the distance that Timur has run, while `b`, `c`, and `d` correspond to the distances run by the other three participants.

The goal is to determine how many participants ran a greater distance than Timur.

## 📂 Input Format
- The first line contains a single integer `t` (1 ≤ `t` ≤ 10⁴) — the number of test cases.
- Each of the next `t` lines contains four distinct integers `a`, `b`, `c`, `d` (0 ≤ `a, b, c, d` ≤ 10⁴).

## 📃 Output Format
For each test case, output a single integer — the number of participants who ran a greater distance than Timur.

## 🔧 Approach
1. Read the integer `t`, which represents the number of test cases.
2. For each test case:
   - Read the four integers `a`, `b`, `c`, `d`.
   - Count how many values among `b`, `c`, and `d` are greater than `a`.
   - Print the count.

## 📝 Example
### ✉️ Input
```
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
```
### 🎯 Output
```
2
0
1
3
```

## ⏳ Complexity Analysis
The solution runs in **O(1)** per test case since it involves a constant number of comparisons.

## 💻 Implementation
Refer to the `marathon.cpp` file for the complete implementation in C++.
