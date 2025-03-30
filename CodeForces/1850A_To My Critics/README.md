# ✅ To My Critics

## 📌 Problem Statement
Suneet has three digits: `a`, `b`, and `c`.

Since math isn't his strongest point, he asks you to determine whether **any two digits** can be chosen so that their sum is **greater than or equal to 10**.

## 🎯 Task
For each test case, print "YES" if such a pair exists and "NO" otherwise.

## 📥 Input Format
- The first line contains a single integer `t` (`1 ≤ t ≤ 1000`), the number of test cases.
- Each test case consists of a single line containing three integers `a, b, c` (`0 ≤ a, b, c ≤ 9`).

## 📤 Output Format
- For each test case, print "YES" if there exists a pair whose sum is at least 10, otherwise print "NO".
- The output is case-insensitive ("YES", "yes", "Yes" are all valid).

## 📝 Examples
### 🔹 Input 1
```
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
```
### 🔹 Output 1
```
YES
NO
YES
NO
YES
```

## 📖 Explanation
- **Test Case 1:** Choosing `8` and `2` gives `8 + 2 = 10` ✅
- **Test Case 2:** The highest possible sum is `4 + 5 = 9`, which is not enough ❌
- **Test Case 3:** Any pair sums to at least `18` ✅
- **Test Case 4:** All values are `0`, so no valid sum ❌
- **Test Case 5:** Choosing `8` and `5` gives `8 + 5 = 13` ✅

## ⚙️ Constraints
- The solution should run efficiently for `t` up to **1000**.
- Each test case consists of only three numbers, making a **constant-time** approach viable.

## 🔹 Notes
- A simple solution is to check if `a + b >= 10`, `a + c >= 10`, or `b + c >= 10`.
- No sorting or additional data structures are needed; a few conditional checks suffice.

