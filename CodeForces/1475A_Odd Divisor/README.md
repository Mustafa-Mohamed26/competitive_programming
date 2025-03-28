# Odd Divisor

## 📜 Problem Statement
You are given an integer **n**. Your task is to check if **n** has an odd divisor greater than 1 (i.e., there exists an odd number **x > 1** such that **n** is divisible by **x**).

### 🔍 Example:
- If **n = 6**, then **x = 3** is a valid divisor.
- If **n = 4**, there is no such **x**, so the answer is "NO".

---
## 📥 Input
- The first line contains an integer **t** (**1 ≤ t ≤ 10⁴**) — the number of test cases.
- Each of the next **t** lines contains a single integer **n** (**2 ≤ n ≤ 10¹⁴**).
- **Note:** The value of **n** may not fit in a 32-bit integer, so you should use at least a 64-bit integer type in your program.

---
## 📤 Output
For each test case, print on a separate line:
- **"YES"** if **n** has an odd divisor greater than **1**.
- **"NO"** otherwise.

*You can output "YES" and "NO" in any case (e.g., "yEs", "yes", "Yes", "YES" are all considered correct).*

---
## 📝 Examples
### ✅ Input
```
6
2
3
4
5
998244353
1099511627776
```

### ✅ Output
```
NO
YES
NO
YES
YES
NO
```

---
## 💡 Solution Approach
1. **Check if n is a power of 2**:
   - If **n** is a power of **2**, it has no odd divisors greater than **1**, so print "NO".
   - Otherwise, print "YES".
2. **Efficient Approach**:
   - A number **n** is a power of **2** if and only if **n & (n - 1) == 0**.
   - This bitwise trick allows checking in **O(1)** time complexity.

This ensures an efficient solution given the constraints (**n ≤ 10¹⁴**). 🚀

