# 🍬 Candies and Two Sisters

## 📜 Problem Statement
Alice and Betty are two sisters. You have `n` candies and want to distribute them so that:

- Alice gets `a` candies (`a > 0`).
- Betty gets `b` candies (`b > 0`).
- Each sister gets an integer number of candies.
- Alice gets more candies than Betty (`a > b`).
- All candies are distributed (`a + b = n`).

Your task is to determine how many valid ways exist to distribute exactly `n` candies between the sisters under these conditions. The candies are indistinguishable.

Formally, find the number of ways to represent `n` as `n = a + b`, where `a` and `b` are positive integers, and `a > b`.

You have to answer `t` independent test cases.

## 📥 Input
- The first line contains one integer `t` (1 ≤ `t` ≤ 10⁴) — the number of test cases.
- The next `t` lines each contain an integer `n` (1 ≤ `n` ≤ 2 × 10⁹) — the number of candies.

## 📤 Output
For each test case, print the number of valid ways to distribute `n` candies while satisfying the given conditions. If no such distribution is possible, print `0`.

## 🔢 Examples
### Example 1
**Input:**
```
6
7
1
2
3
2000000000
763243547
```
**Output:**
```
3
0
0
1
999999999
381621773
```

## 📝 Explanation
For `n = 7`, the valid distributions are:
- `a = 6`, `b = 1`
- `a = 5`, `b = 2`
- `a = 4`, `b = 3`

Thus, the answer is `3`.

For `n = 1` and `n = 2`, no valid distribution exists, so the answer is `0`.

## ⚠️ Constraints
- `1 ≤ t ≤ 10⁴`
- `1 ≤ n ≤ 2 × 10⁹`

## 💡 Solution Approach
1. Observe that for `n`, the number of valid `(a, b)` pairs is `(n - 1) / 2`.
2. If `n` is `1` or `2`, no valid distributions exist.
3. Print `(n - 1) / 2` for each test case.

## 🏷️ Tags
- 📊 Mathematics
- 🔢 Number Theory
- 🏗️ Implementation

