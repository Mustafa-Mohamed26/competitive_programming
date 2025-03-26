# Division? 🌟

## Problem Statement
Codeforces classifies its users into 4 divisions based on their rating:

- 💪 **Division 1**: 1900 ≤ rating
- 🏆 **Division 2**: 1600 ≤ rating ≤ 1899
- 📈 **Division 3**: 1400 ≤ rating ≤ 1599
- 📉 **Division 4**: rating ≤ 1399

Given a user's rating, determine which division they belong to.

## 📚 Input Format
- The first line contains an integer `t` (1 ≤ `t` ≤ 10⁴) — the number of test cases.
- Each of the next `t` lines contains a single integer `rating` (-5000 ≤ `rating` ≤ 5000).

## 🔢 Output Format
For each test case, print the corresponding division in the format:
```
Division X
```
Where `X` is the division number (1 to 4).

## 📚 Example
### ✅ Input
```
7
-789
1299
1300
1399
1400
1679
2300
```
### ✅ Output
```
Division 4
Division 4
Division 4
Division 4
Division 3
Division 2
Division 1
```

## 🔎 Approach
1. ⬇️ Read the integer `t`, which represents the number of test cases.
2. ✅ For each test case:
   - Read the integer `rating`.
   - Determine which division it belongs to using conditional checks.
   - Print the corresponding division.

## 🎯 Complexity Analysis
The solution runs in **O(1)** per test case since it involves only a few conditional checks.

## 💻 Implementation
Refer to the `division.cpp` file for the complete C++ implementation.
