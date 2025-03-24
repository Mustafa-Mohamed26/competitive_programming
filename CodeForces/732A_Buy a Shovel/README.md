# Buy a Shovel ⛏️💰

## Problem Statement 📝
Polycarp urgently needs a shovel! He goes to a shop and finds an appropriate one that costs `k` burles. The shop has an **unlimited** number of these shovels.

Polycarp has an **unlimited** number of "10-burle coins" 🪙 and exactly **one** coin of `r` burles (`1 ≤ r ≤ 9`).

Polycarp wants to buy the **minimum** number of shovels such that he can pay exactly without requiring any change.

## Input 📥
A single line containing two integers:
- `k` (1 ≤ k ≤ 1000) — the price of one shovel ⛏️
- `r` (1 ≤ r ≤ 9) — the denomination of the extra coin Polycarp has in his pocket.

Polycarp has enough "10-burle coins" to buy any number of shovels.

## Output 📤
Print a single integer — the **minimum** number of shovels Polycarp has to buy to pay **exactly** without requiring any change.

## Examples 🔍
### Example 1
#### Input:
```
117 3
```
#### Output:
```
9
```

### Example 2
#### Input:
```
237 7
```
#### Output:
```
1
```

### Example 3
#### Input:
```
15 2
```
#### Output:
```
2
```

## Explanation 📖
In **Example 1**:
- The total cost of **9 shovels** is **9 × 117 = 1053** burles.
- He can pay this amount exactly using **10-burle coins** 🪙 and **one 3-burle coin**.
- Buying fewer than 9 shovels will require change, so the answer is **9**.

In **Example 2**:
- Buying **1** shovel costs **237** burles.
- This amount is exactly divisible by **10**, so he can pay without requiring the extra `r` coin.
- The answer is **1**.

In **Example 3**:
- The total cost of **2 shovels** is **2 × 15 = 30**.
- This amount is divisible by **10**, meaning he can pay without requiring change.
- The answer is **2**.

## Solution Approach 🔧
To find the **minimum number of shovels** `x`:
1. Start with `x = 1` and increase it until the total cost `x * k` satisfies either:
   - `x * k` is **divisible by 10** 🔟, or
   - `x * k` leaves a remainder of `r` when divided by 10.
2. Print the first valid `x`.

This approach ensures the **minimum** number of shovels needed to pay exactly without requiring change.

---
This README provides a complete explanation of the problem, input/output format, examples, and an efficient approach to solving the problem. ⛏️💰🚀

