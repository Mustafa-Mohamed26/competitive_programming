# ➗ Calculating Function

## 📌 Problem Statement
For a positive integer `n`, let's define a function **f(n)**:

\[
f(n) = -1 + 2 - 3 + 4 - 5 + ... + (-1)^n \times n
\]

Your task is to calculate **f(n)** for a given integer `n`.

## 🔢 Input
- A single integer `n` \(1 \leq n \leq 10^{15}\).

## 📤 Output
- Print the result of **f(n)** in a single line.

## ✅ Examples
### Example 1
**Input:**
```
4
```
**Output:**
```
2
```

### Example 2
**Input:**
```
5
```
**Output:**
```
-3
```

## 📝 Explanation
- **f(4) = -1 + 2 - 3 + 4 = 2**
- **f(5) = -1 + 2 - 3 + 4 - 5 = -3**

## 🔗 Related Topics
- ✅ Mathematical Formulation
- ✅ Series Summation
- ✅ Parity (Even/Odd)

## 🏁 Conclusion
This function follows a pattern:
- If `n` is **even**, then `f(n) = n/2`.
- If `n` is **odd**, then `f(n) = -(n+1)/2`.

Using this formula, the problem can be solved in constant time **O(1)**. 🚀