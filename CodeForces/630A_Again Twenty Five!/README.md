# 🔢 Again Twenty Five!

## 📝 Problem Statement
The HR manager is frustrated because candidates are struggling with a simple problem: Compute `5^n` and determine its last two digits. Given that `n` can be very large, direct computation is not feasible.

Your task is to output the last two digits of `5^n` for a given integer `n`.

## 📥 Input Format
A single integer `n` (2 ≤ `n` ≤ 2 × 10¹⁸), which represents the power to which 5 must be raised.

## 📤 Output Format
Print the last two digits of `5^n` without spaces between them.

## 💡 Approach
1. Observe the pattern of `5^n` for different values of `n`:
   - `5^1 = 5`
   - `5^2 = 25`
   - `5^3 = 125`
   - `5^4 = 625`
   - `5^5 = 3125`
2. Notice that for `n ≥ 2`, the last two digits of `5^n` are always `25`.
3. Thus, regardless of the value of `n` (as long as `n ≥ 2`), the answer is always `25`.

## 🔍 Example
### 📌 Input
```
2
```
### 📌 Output
```
25
```

### 📌 Input
```
10
```
### 📌 Output
```
25
```

### 📌 Input
```
1000000000000000000
```
### 📌 Output
```
25
```

## ⏱️ Complexity Analysis
Since the answer is always constant (`25`), the solution runs in **O(1)** time.

## 🖥️ Implementation
Refer to the `again_twenty_five.cpp` file for the complete C++ implementation.

