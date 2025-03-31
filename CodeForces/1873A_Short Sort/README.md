# 🔀 Short Sort

## 📜 Problem Statement
There are three cards with letters `a`, `b`, and `c` placed in a row in some order. You can perform the following operation at most once:

- Pick two cards and swap them.

Determine if it is possible to make the row become `abc` after at most one swap. 
If possible, output **"YES"**, otherwise output **"NO"**.

## 📥 Input Format
The input consists of:
- An integer `t` (1 ≤ t ≤ 6) — the number of test cases.
- `t` lines, each containing a single string representing the row of cards. Each string consists of exactly three characters: `a`, `b`, and `c` in some order.

## 📤 Output Format
For each test case, output **"YES"** if the row can be transformed into `abc` with at most one swap, otherwise output **"NO"**.

You may print the answer in any case (e.g., "yes", "Yes", "YES" are all valid positive answers).

## 📌 Example
### 📥 Input
```
6
abc
acb
bac
bca
cab
cba
```
### 📤 Output
```
YES
YES
YES
NO
NO
YES
```

## 🔍 Explanation
- **Test case 1:** `abc` → Already in order → **YES**
- **Test case 2:** `acb` → Swap `c` and `b` → `abc` → **YES**
- **Test case 3:** `bac` → Swap `b` and `a` → `abc` → **YES**
- **Test case 4:** `bca` → No single swap can transform it into `abc` → **NO**
- **Test case 5:** `cab` → No single swap can transform it into `abc` → **NO**
- **Test case 6:** `cba` → Swap `c` and `a` → `abc` → **YES**

## 💡 Solution Approach
1. Read `t` test cases.
2. For each string:
   - If it is already `abc`, print **"YES"**.
   - If swapping two characters can make it `abc`, print **"YES"**.
   - Otherwise, print **"NO"**.

## ⏳ Complexity Analysis
- Since there are only six possible permutations of `a`, `b`, and `c`, checking the condition takes constant time `O(1)` per test case.
- Overall, the solution runs in `O(t)`, which is efficient given the constraints.