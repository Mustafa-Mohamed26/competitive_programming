# 🧮 Expression - Problem Statement and Solution

## 📜 Problem Description
Petya, a math-loving student, is given three positive integers `a`, `b`, and `c` on the blackboard. The task is to insert the arithmetic operations `+` (addition) and `*` (multiplication), and possibly brackets, to form an expression with the **largest possible value**.

### ⚠️ Rules:
- Operations can **only** be placed between `a` and `b`, and between `b` and `c`.
- The order of the numbers **cannot** be changed.
- Parentheses can be used to change the order of operations.

### ✅ Example Cases
#### Example 1:
**📌 Input:**
```
1
2
3
```
**📌 Possible Expressions:**
- `1 + 2 * 3 = 7`
- `1 * (2 + 3) = 5`
- `1 * 2 * 3 = 6`
- `(1 + 2) * 3 = 9` **(maximum value)**

**📌 Output:**
```
9
```

#### Example 2:
**📌 Input:**
```
2
10
3
```
**📌 Possible Expressions:**
- `(2 + 10) * 3 = 36`
- `2 * (10 + 3) = 26`
- `2 * 10 * 3 = 60` **(maximum value)**

**📌 Output:**
```
60
```

## 🚀 Solution Approach
Since `a`, `b`, and `c` are **small (1 ≤ a, b, c ≤ 10)**, we can simply evaluate all possible expressions and return the **maximum value**.

### 🔢 Considered Expressions:
1. `a + b + c`
2. `a * b * c`
3. `(a + b) * c`
4. `a * (b + c)`

### ⏳ Complexity Analysis
- Evaluating four expressions is **O(1)** (constant time), making this solution optimal for the given constraints.

## 🏆 Edge Cases Considered
1. **Minimum Values:** `a = 1, b = 1, c = 1`.
2. **Maximum Values:** `a = 10, b = 10, c = 10`.
3. **Different Operation Effects:** Testing cases where multiplication and addition yield varying results.

## 🎯 Conclusion
This problem can be efficiently solved by evaluating all valid expressions and choosing the maximum result. 🚀

