# ➕ A+B Again?

## 📌 Problem Statement
Given a two-digit positive integer `n`, find the sum of its digits.

## 🔢 Input
- The first line contains an integer `t` (1 ≤ t ≤ 90) — the number of test cases.
- Each of the next `t` lines contains a single two-digit positive integer `n` (10 ≤ n ≤ 99).

## 🎯 Output
- For each test case, output a single integer — the sum of the digits of `n`.

## 🛠️ Explanation & Solution
To find the sum of the digits of `n`:
- Extract the tens digit using integer division (`n / 10`).
- Extract the units digit using the modulus operator (`n % 10`).
- Sum these two values.

### 📖 Example Walkthrough
#### Example Input:
```
8
77
21
40
34
19
84
10
99
```

#### Example Output:
```
14
3
4
7
10
12
1
18
```

## ⏳ Complexity Analysis
- Since each test case requires only basic arithmetic operations, the solution runs in `O(1)` time per test case.

## 📌 Summary
- Extract digits using division and modulus.
- Compute their sum.
- Efficient solution with constant time complexity per test case.

