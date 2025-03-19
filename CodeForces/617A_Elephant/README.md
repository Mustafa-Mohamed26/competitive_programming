# 🐘 Elephant Problem

## 📌 Problem Statement
An elephant wants to visit his friend. His house is located at point `0`, and his friend's house is located at point `x` (`x > 0`) on a coordinate line. The elephant can move `1`, `2`, `3`, `4`, or `5` positions forward in one step.

Determine the minimum number of steps the elephant needs to take to reach his friend's house at position `x`.

## 🔢 Input
- A single integer `x` (`1 ≤ x ≤ 1,000,000`) representing the friend's house position.

## 🎯 Output
- Print a single integer: the minimum number of steps needed.

## 📖 Examples
### Example 1
**Input:**
```
5
```
**Output:**
```
1
```
**Explanation:**
The elephant can reach the destination in one step of length 5.

### Example 2
**Input:**
```
12
```
**Output:**
```
3
```
**Explanation:**
The elephant can reach `x = 12` by moving 3, 5, and 4 (or other optimal ways).

## 💡 Approach
The problem can be solved using a simple mathematical approach:
1. The elephant should always take the largest possible step (5 units) to minimize the number of moves.
2. The minimum steps required can be calculated as:
   - `steps = x / 5` (integer division)
   - If `x` is not perfectly divisible by `5`, an extra step is needed to cover the remaining distance.
3. The formula to compute the result is:
   ```
   steps = (x + 4) / 5  (using integer division)
   ```

## ⏱️ Complexity Analysis
- The solution runs in **O(1)** time since it only involves a simple arithmetic operation.