# 🔢 Sum of Round Numbers

## 📌 Problem Statement
A positive integer is called **round** if it is of the form `d00...0`, meaning all its digits except the leftmost one are zero. Examples of round numbers include `4000`, `1`, `9`, `800`, and `90`. However, numbers like `110`, `707`, `222`, and `1001` are not round.

Given a number `n`, the task is to represent it as a sum of round numbers using the minimum number of summands.

## 📝 Input
- 📌 The first line contains an integer `t` (1 ≤ t ≤ 10⁴) — the number of test cases.
- 📌 Each of the next `t` lines contains an integer `n` (1 ≤ n ≤ 10⁴).

## ✅ Output
For each test case:
- 🔢 Print an integer `k` — the minimum number of summands.
- 🔢 Print `k` terms, each being a round number, whose sum equals `n`.
- 🔄 The summands can be printed in any order.

## 📊 Examples
### Example 1
**Input:**
```
5
5009
7
9876
10000
10
```
**Output:**
```
2
5000 9
1
7
4
9000 800 70 6
1
10000
1
10
```

## 📌 Constraints
- 🔢 The number of test cases `t` is at most `10⁴`.
- 🔢 The number `n` is at most `10⁴`.

## 🔍 Solution Approach
1. 🔗 Iterate through the digits of `n` from right to left.
2. 📊 Extract non-zero digits and multiply them by their place value.
3. ✅ Store the round numbers in a list.
4. 🖨️ Print the count of round numbers and then the numbers themselves.

## 🏷️ Tags
- 📝 Number Decomposition
- 🎨 Mathematics
- 👨‍💻 Implementation

