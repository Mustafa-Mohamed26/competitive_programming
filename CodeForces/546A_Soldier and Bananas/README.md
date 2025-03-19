# 🍌 Soldier and Bananas

## 📌 Problem Statement
A soldier wants to buy `w` bananas from the shop. The cost of the first banana is `k` dollars, the second banana costs `2k` dollars, the third banana costs `3k` dollars, and so on. 

In other words, the `i`-th banana costs `i × k` dollars.

The soldier has `n` dollars. How many dollars does he need to borrow from his friend to buy `w` bananas?

## 🔢 Input
- Three positive integers `k`, `n`, and `w`:
  - `k` (`1 ≤ k ≤ 1000`) — Cost of the first banana.
  - `n` (`0 ≤ n ≤ 10^9`) — Initial money the soldier has.
  - `w` (`1 ≤ w ≤ 1000`) — Number of bananas the soldier wants.

## 🎯 Output
- Print a single integer: the amount of dollars the soldier must borrow.
- If he doesn't need to borrow money, print `0`.

## 📖 Examples
### Example 1
**Input:**
```
3 17 4
```
**Output:**
```
13
```
**Explanation:**
The total cost of `4` bananas is:
- 1st banana: `3 × 1 = 3`
- 2nd banana: `3 × 2 = 6`
- 3rd banana: `3 × 3 = 9`
- 4th banana: `3 × 4 = 12`

Total cost = `3 + 6 + 9 + 12 = 30`

The soldier has `17` dollars, so he needs to borrow `30 - 17 = 13` dollars.

## 💡 Approach
1. Calculate the total cost using the formula for the sum of an arithmetic series:
   
   - Total cost = `k × (w × (w + 1)) / 2`
2. Compute the required money to borrow:
   
   - Borrowed money = `max(0, total cost - n)`

## ⏱️ Complexity Analysis
- The solution runs in **O(1)** time since it only involves a few arithmetic operations.