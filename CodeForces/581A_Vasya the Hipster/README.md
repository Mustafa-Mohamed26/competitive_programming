# 🧦 Vasya the Hipster

## 📝 Problem Statement
Vasya the Hipster has a collection of red and blue socks. Each day, he prefers to wear one red sock on the left foot and one blue sock on the right foot to stay fashionable. Once worn, the socks are discarded at the end of the day.

He wants to determine:
1. The maximum number of days he can wear different-colored socks.
2. The number of additional days he can wear only the same-colored socks until he runs out of socks or cannot make a single pair.

## 📥 Input Format
A single line containing two positive integers `a` and `b` (1 ≤ `a, b` ≤ 100), where:
- `a` is the number of red socks.
- `b` is the number of blue socks.

## 📤 Output Format
Print two space-separated integers:
- The first integer represents the maximum number of days Vasya can wear different-colored socks.
- The second integer represents the number of additional days he can wear the same-colored socks.

## 💡 Approach
1. Calculate the minimum of `a` and `b`, which represents the maximum number of days Vasya can wear different-colored socks (`min(a, b)`).
2. Subtract this from both `a` and `b` to determine how many socks remain.
3. Divide the remaining socks by 2 to determine the number of days Vasya can wear the same-colored socks (`(max(a, b) - min(a, b)) / 2`).

## 🔍 Example
### 📌 Input
```
3 1
```
### 📌 Output
```
1 1
```

### 📌 Input
```
2 3
```
### 📌 Output
```
2 0
```

### 📌 Input
```
7 3
```
### 📌 Output
```
3 2
```

## ⏱️ Complexity Analysis
Since the solution only requires basic arithmetic operations, the time complexity is **O(1)**.

## 🖥️ Implementation
Refer to the `vasya_hipster.cpp` file for the complete C++ implementation.

