# ➕ Sum Problem - Solution Guide

## 📌 Problem Statement
You are given three integers **a**, **b**, and **c**. Your task is to determine if one of them is the sum of the other two.

### 📥 Input
- The first line contains a single integer **t** (1 ≤ t ≤ 9261) — the number of test cases.
- Each of the next **t** lines contains three integers **a, b, c** (0 ≤ a, b, c ≤ 20).

### 📤 Output
- Print **"YES"** if one of the numbers is the sum of the other two.
- Otherwise, print **"NO"**.
- The output is case-insensitive (e.g., "yes", "Yes", and "YES" are all valid).

## 📖 Example
### 📥 Input
```
7
1 4 3
2 5 8
9 11 20
0 0 0
20 20 20
4 12 3
15 7 8
```
### 📤 Output
```
YES
NO
YES
YES
NO
NO
YES
```

## 🛠️ Solution Approach
1. **🔢 Check all three possibilities:**
   - If `a + b == c`, print "YES".
   - If `a + c == b`, print "YES".
   - If `b + c == a`, print "YES".
   - Otherwise, print "NO".
2. **✅ Process all test cases** and output results accordingly.

## ⏳ Complexity Analysis
- 📌 The solution runs in **O(t)** time complexity since each test case is checked in constant time.

## 🔍 Edge Cases Considered
- ⚡ Cases where `a, b, c` are all zero.
- ⚡ Cases where all numbers are equal but not forming a valid sum.
- ⚡ The maximum constraint `t = 9261` to ensure performance.

## 🎯 Conclusion
This approach efficiently determines whether one number in each test case is the sum of the other two using simple arithmetic checks. ✅

