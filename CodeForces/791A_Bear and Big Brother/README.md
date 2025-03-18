# Bear and Big Brother

![Bear Icon](https://example.com/bear_icon.png) ![Growth Icon](https://example.com/growth_icon.png) ![Time Icon](https://example.com/time_icon.png) ![Weight Icon](https://example.com/weight_icon.png) ![Comparison Icon](https://example.com/comparison_icon.png) ![Math Icon](https://example.com/math_icon.png)

## Problem Statement
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh **a** and **b** respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot, and his weight is tripled after every year, while Bob's weight is doubled after every year.

You need to determine after how many full years Limak will become strictly heavier than Bob.

## Input Format
- A single line containing two integers **a** and **b** (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

## Output Format
- Print a single integer, denoting the number of years after which Limak will become strictly larger than Bob.

## Examples
### Example 1
#### Input
```
4 7
```
#### Output
```
2
```
### Example 2
#### Input
```
4 9
```
#### Output
```
3
```
### Example 3
#### Input
```
1 1
```
#### Output
```
1
```

## Explanation
### Example 1 Walkthrough
Initially:
- Limak: 4
- Bob: 7

After **1st year**:
- Limak: 4 * 3 = 12
- Bob: 7 * 2 = 14
(Limak is still smaller)

After **2nd year**:
- Limak: 12 * 3 = 36
- Bob: 14 * 2 = 28
(Limak becomes larger)

Answer: **2 years**

## Solution Approach
1. Start with the given weights **a** and **b**.
2. Use a loop to simulate each year:
   - Multiply Limak’s weight by 3.
   - Multiply Bob’s weight by 2.
   - Count the years until Limak becomes strictly heavier than Bob.
3. Print the number of years required.

This approach ensures a simple and efficient solution given the constraints (maximum value of **b** is only 10).