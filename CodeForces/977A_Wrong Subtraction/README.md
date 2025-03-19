# ➖ Wrong Subtraction

## 📌 Problem Statement
Little girl Tanya is learning how to decrease a number, but she follows an unusual method for numbers with two or more digits:

- If the **last digit** of the number is **non-zero**, she decreases the number by 1.
- If the **last digit** of the number is **zero**, she divides the number by `10` (removing the last digit).

Given an integer `n`, Tanya will perform the subtraction process `k` times. Your task is to determine the resulting number after all `k` operations.

It is guaranteed that the result will always be a **positive integer**.

## 🔢 Input
- Two integers `n` and `k`:
  - `2 ≤ n ≤ 10^9` — The initial number.
  - `1 ≤ k ≤ 50` — The number of times Tanya will subtract.

## 🎯 Output
- Print the resulting number after `k` operations.

## 📖 Examples
### Example 1
**Input:**
```
512 4
```
**Output:**
```
50
```
**Explanation:**
1. `512 → 511` (last digit is non-zero, subtract 1)
2. `511 → 510` (last digit is non-zero, subtract 1)
3. `510 → 51` (last digit is zero, remove it)
4. `51 → 50` (last digit is non-zero, subtract 1)

### Example 2
**Input:**
```
1000000000 9
```
**Output:**
```
1
```
**Explanation:**
Each time a `0` is removed, the number is divided by `10`. After 9 steps, only `1` remains.

## 💡 Approach
1. **Repeat `k` times:**
   - If `n % 10 ≠ 0`, subtract `1` from `n`.
   - Otherwise, divide `n` by `10` (remove last digit).
2. **Print the final value of `n`**.

## ⏱️ Complexity Analysis
- The solution runs in **O(k)** time since at most `50` operations are performed, which is very efficient.

