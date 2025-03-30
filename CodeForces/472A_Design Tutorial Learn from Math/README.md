# 🧮 Design Tutorial: Learn from Math

## 📌 Problem Statement
One way to create a task is to learn from math. You can generate some random mathematical statement or modify some theorems to derive something new and build a problem from it.

For example, consider the well-known "Goldbach's conjecture":
> Each even number no less than four can be expressed as the sum of two prime numbers.

We can modify this and create a new statement:
> Each integer no less than 12 can be expressed as the sum of two composite numbers.

Unlike Goldbach's conjecture, this statement can be proven.

### 🎯 Task
You are given an integer `n` (where `12 ≤ n ≤ 10^6`). Your goal is to express `n` as a sum of two composite numbers.

### 📥 Input Format
- A single integer `n` (`12 ≤ n ≤ 10^6`).

### 📤 Output Format
- Output two composite numbers `x` and `y` (`1 < x, y < n`) such that `x + y = n`.
- If there are multiple solutions, output any valid pair.

### 📝 Examples
#### 🔹 Input
```
12
```
#### 🔹 Output
```
4 8
```
#### 🔹 Input
```
15
```
#### 🔹 Output
```
6 9
```
#### 🔹 Input
```
23
```
#### 🔹 Output
```
8 15
```
#### 🔹 Input
```
1000000
```
#### 🔹 Output
```
500000 500000
```

### 📖 Explanation
- In the first example, `12 = 4 + 8` where both `4` and `8` are composite numbers. Other valid outputs include `6 6` or `8 4`.
- In the second example, `15 = 6 + 9`, both `6` and `9` being composite.
- In the third example, `23 = 8 + 15`, both `8` and `15` being composite.
- In the fourth example, `1000000 = 500000 + 500000`, both `500000` being composite.

### ⚙️ Constraints
- `n` is always greater than or equal to `12`.
- `n` is at most `10^6`.
- The solution is guaranteed to exist for all `n` in the given range.

### 📝 Notes
- A composite number is a positive integer greater than `1` that is **not prime**.
- The solution should be efficient, considering the constraint `n ≤ 10^6`.
- Any valid pair of composite numbers satisfying the conditions is acceptable.

