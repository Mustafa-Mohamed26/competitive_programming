# Vanya and Lanterns 🌆💡

## Problem Statement
Vanya walks late at night along a straight street of length `l`, lit by `n` lanterns. Consider a coordinate system where:
- The beginning of the street corresponds to point **0**.
- The end of the street corresponds to point **l**.

Each lantern is positioned at a point `ai` on the street. The lanterns emit light that covers all points within a distance of **d** from their position, where `d` is the same for all lanterns.

Vanya wants to find the **minimum light radius** `d` that ensures the entire street is lit. 💡

## Input 📥
The input consists of two lines:
1. The first line contains two integers:
   - `n` (1 ≤ n ≤ 1000) — The number of lanterns 🌆
   - `l` (1 ≤ l ≤ 10¹⁰) — The length of the street 🛣️
2. The second line contains `n` space-separated integers `ai` (0 ≤ ai ≤ l), representing the positions of the lanterns on the street.
   - Multiple lanterns may be at the same position.
   - Lanterns may be located at the ends of the street (0 or l).

## Output 📤
Print the **minimum required light radius** `d`, ensuring that the whole street is covered. The answer is considered correct if its absolute or relative error does not exceed **10⁻⁹**.

## Examples 📝
### Example 1
#### Input:
```
7 15
15 5 3 7 9 14 0
```
#### Output:
```
2.5000000000
```

### Example 2
#### Input:
```
2 5
2 5
```
#### Output:
```
2.0000000000
```

## Explanation 🔎
In the second example:
- If `d = 2`, the first lantern at position `2` lights up the segment `[0, 4]`.
- The second lantern at position `5` lights up `[3, 5]`.
- Since the entire street `[0, 5]` is covered, the required minimum `d` is **2.0000000000**.

## Solution Approach 🚀
To determine the **minimum required light radius** `d`:
1. **Sort the lantern positions** to process them in increasing order. 🔢
2. **Find the maximum gap** between consecutive lanterns and determine half of that gap (`gap/2`), as each lantern contributes to lighting half of the distance to the next one. 📏
3. **Check the edges**:
   - The first lantern should cover from `0` to its position.
   - The last lantern should cover from its position to `l`.
4. The required `d` is the **maximum** of:
   - The first gap (`a[0] - 0`)
   - The last gap (`l - a[n-1]`)
   - Half of the maximum gap between consecutive lanterns (`max_gap / 2`).

---
This README provides a clear explanation of the problem, input/output format, examples, and an optimal solution approach. 🌆💡🚀