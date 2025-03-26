# 🎀 Cut Ribbon

## 📜 Problem Statement
Polycarpus has a ribbon of length `n`, and he wants to cut it into pieces that meet the following conditions:
- Each ribbon piece must have a length of `a`, `b`, or `c`.
- The number of ribbon pieces should be maximized.

Help Polycarpus determine the **maximum number of ribbon pieces** after cutting.

## 📥 Input Format
- The first line contains four space-separated integers `n`, `a`, `b`, and `c` (1 ≤ `n, a, b, c` ≤ 4000).
- `n` is the length of the original ribbon.
- `a`, `b`, and `c` are the possible lengths of the ribbon pieces.
- The values of `a`, `b`, and `c` may be the same.

## 📤 Output Format
Print a single integer — the maximum number of ribbon pieces that can be obtained.
It is guaranteed that at least one valid way to cut the ribbon exists.

## 🔍 Examples
### ✅ Example 1
#### 📥 Input
```
5 5 3 2
```
#### 📤 Output
```
2
```
#### 💡 Explanation
- The ribbon can be cut into two pieces: one of length `2` and another of length `3`.

### ✅ Example 2
#### 📥 Input
```
7 5 5 2
```
#### 📤 Output
```
2
```
#### 💡 Explanation
- The ribbon can be cut into two pieces: one of length `5` and another of length `2`.

## 🛠️ Approach
1. **Dynamic Programming (DP)**: Define `dp[i]` as the maximum number of pieces for a ribbon of length `i`.
2. **Initialization**: Set `dp[0] = 0` since no pieces are needed for length `0`.
3. **Transition**: Iterate over `n` and update `dp[i]` if `i - a`, `i - b`, or `i - c` is a valid ribbon length.
4. **Result**: The answer is stored in `dp[n]`.

## ⏳ Complexity Analysis
- **Time Complexity**: `O(n)`, since we iterate through the ribbon length up to `n`.
- **Space Complexity**: `O(n)`, as we use an array to store results.

## 📝 Notes
- If multiple ways exist to cut the ribbon, always choose the one with the **maximum** pieces.
- Ensure all possible cuts are considered using a **bottom-up** DP approach.

## 🖥️ Implementation
Check out the `cut_ribbon.cpp` file for the C++ implementation. 🚀