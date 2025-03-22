# 💤 Insomnia Cure - Problem Statement and Solution

## 📚 Problem Description
A princess is counting **dragons** to help her fall asleep. However, she imagines that some dragons suffer damages based on the following conditions:
- Every **k-th** dragon gets punched in the face with a frying pan.
- Every **l-th** dragon gets its tail shut into the balcony door.
- Every **m-th** dragon gets its paws trampled with sharp heels.
- Every **n-th** dragon is threatened by the princess to call her mom, causing panic.

Given `d` total dragons, count how many dragons suffered damage **at least once**.

## 📅 Input Format
- 🔢 Five integers, each on a separate line:
  - `k, l, m, n` (1 ≤ k, l, m, n ≤ 10) - conditions affecting dragons.
  - `d` (1 ≤ d ≤ 10⁵) - total number of dragons.

## 📈 Output Format
- 📝 Print a single integer — the **number of affected dragons**.

## 📝 Examples
### Example 1
**📌 Input:**
```
1
2
3
4
12
```
**📌 Output:**
```
12
```
**💡 Explanation:**
- Every dragon is affected because the smallest step is `1`.

### Example 2
**📌 Input:**
```
2
3
4
5
24
```
**📌 Output:**
```
17
```
**💡 Explanation:**
- Dragons `1, 7, 11, 13, 17, 19, 23` escape unharmed.

## 🔄 Solution Approach
1. **Iterate through all dragons from `1` to `d`**.
2. **Count** how many are divisible by at least one of `k, l, m, n`.
3. **Print the total count**.

## 💡 Optimized Approach
Instead of iterating through all numbers (O(d)), we can use the **inclusion-exclusion principle** to calculate the number of affected dragons directly.

## 💨 Complexity Analysis
- **Brute force:** O(d)
- **Optimized:** O(1) using inclusion-exclusion principle.

## 🔮 Edge Cases Considered
1. **Smallest input:** `d = 1`, ensures correct output for minimal cases.
2. **When no dragon is affected:** If `k, l, m, n > d`, output should be `0`.
3. **When all dragons are affected:** If `k = 1`, all `d` dragons are affected.

## 💪 Conclusion
This problem is effectively solved using **brute force** or **mathematical inclusion-exclusion**, ensuring an efficient way to count damaged dragons. 🚀

