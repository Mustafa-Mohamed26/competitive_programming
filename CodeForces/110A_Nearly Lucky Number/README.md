# 🍀 Nearly Lucky Number

## 📌 Problem Statement
Petya loves lucky numbers. A **lucky number** is a positive integer whose decimal representation contains only the digits **4** and **7**.

For example:
- ✅ **Lucky Numbers**: `47`, `744`, `4`
- ❌ **Not Lucky Numbers**: `5`, `17`, `467`

Since not all numbers are lucky, Petya defines a number as **nearly lucky** if the count of its lucky digits (`4` and `7`) is itself a lucky number.

Your task is to determine whether a given number `n` is nearly lucky.

---
## 📥 Input
- A **single integer** `n`
- Constraints: `1 ≤ n ≤ 10¹⁸`

---
## 📤 Output
- Print `YES` if `n` is a **nearly lucky number**.
- Print `NO` otherwise.

---
## 🏆 Examples
### Example 1
**Input:**
```
40047
```
**Output:**
```
NO
```

### Example 2
**Input:**
```
7747774
```
**Output:**
```
YES
```

### Example 3
**Input:**
```
1000000000000000000
```
**Output:**
```
NO
```

---
## 🔍 Solution Approach
1. **Count the lucky digits** (`4` and `7`) in the number `n`.
2. Check if this count itself is a lucky number.
3. If it is, print `YES`, otherwise print `NO`.

---
## ⏳ Complexity Analysis
- Since `n` can be up to `10¹⁸`, we treat it as a **string** to iterate over its digits.
- The solution runs in **O(log n)** time complexity as it depends on the number of digits in `n` (at most 18).

---
## 🏁 Conclusion
This problem is a simple number-processing task that requires:
- String iteration for digit counting.
- Checking membership in a predefined lucky set (`4`, `7`).
- Ensuring the final count is also a lucky number.

