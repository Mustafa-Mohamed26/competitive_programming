# 🏛️ Holiday Of Equality

## 📌 Problem Statement
In Berland, it is the holiday of equality. To celebrate, the king decided to equalize the welfare of all citizens using the state treasury. As the royal treasurer, you must calculate the minimum amount of money required to achieve this.

The kingdom has `n` citizens, and each citizen's welfare is represented as an integer in burles (Berland's currency). The king can only give money—he cannot take any away.

## 🔢 Input
- The first line contains an integer `n` (1 ≤ n ≤ 100) — the number of citizens.
- The second line contains `n` integers `a1, a2, ..., an` (0 ≤ ai ≤ 10^6), where `ai` represents the welfare of the i-th citizen.

## 🎯 Output
- Print a single integer `S` — the minimum number of burles needed to equalize all citizens' welfare.

## 🛠️ Explanation & Solution
To make all citizens have equal welfare:
1. Determine the wealthiest citizen's welfare (maximum value in the array).
2. For each citizen, calculate the difference between their welfare and the maximum value.
3. Sum all these differences to get the total amount of money needed.

### 📖 Example Walkthrough
#### Example 1:
**📝 Input:**
```
5
0 1 2 3 4
```
**✅ Output:**
```
10
```
**🔍 Explanation:**
- The richest citizen has 4 burles.
- Each citizen receives the necessary burles: `4, 3, 2, 1, 0`.
- Total money needed = `4 + 3 + 2 + 1 = 10`.

#### Example 2:
**📝 Input:**
```
3
1 3 1
```
**✅ Output:**
```
4
```
**🔍 Explanation:**
- The richest citizen has 3 burles.
- The first and third citizens receive 2 burles each.
- Total money needed = `2 + 0 + 2 = 4`.

## ⏳ Complexity Analysis
- Finding the maximum welfare takes `O(n)`.
- Computing the total difference takes `O(n)`.
- Overall, the solution runs in `O(n)`, which is optimal for the given constraints.

## 📌 Summary
- Find the maximum welfare value.
- Compute the sum of differences between each citizen’s welfare and the maximum.
- Efficient `O(n)` solution.

