# Divisibility Problem 

## 🚀 Problem Statement
You are given two positive integers `a` and `b`. In one move, you can increase `a` by `1` (replace `a` with `a + 1`). Your task is to determine the **minimum number of moves** required to make `a` divisible by `b`. If `a` is already divisible by `b`, the answer is `0`. 🔢

## 📥 Input Format
- The first line contains a single integer `t` (1 ≤ t ≤ 10^4) — the number of test cases.
- Each of the next `t` lines contains two integers `a` and `b` (1 ≤ a, b ≤ 10^9).

## 📤 Output Format
For each test case, print the minimum number of moves required to make `a` divisible by `b`.

## 📌 Examples

### 📝 Input
```
5
10 4
13 9
100 13
123 456
92 46
```

### ✅ Output
```
2
5
4
333
0
```

## 🛠 Solution Approach
1. If `a` is already divisible by `b` (`a % b == 0`), print `0`.
2. Otherwise, calculate the next multiple of `b` greater than or equal to `a`.
3. The number of moves required is:
   ```
   moves = b - (a % b)
   ```
4. Print the computed value for each test case.

## ⏳ Complexity Analysis
- Since we perform only a modulus operation and a subtraction for each test case, the time complexity is **O(1)** per test case.
- The overall complexity is **O(t)**, which is efficient for large inputs. ⚡