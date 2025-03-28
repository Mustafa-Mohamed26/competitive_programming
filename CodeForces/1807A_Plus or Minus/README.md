# ➕➖ Plus or Minus

## 📜 Problem Statement
You are given three integers `a`, `b`, and `c` such that exactly one of the following two equations is true:

- `a + b = c`
- `a - b = c`

Your task is to determine which equation holds true and output:
- `+` if `a + b = c`
- `-` if `a - b = c`

## 🔢 Input
- The first line contains a single integer `t` (`1 ≤ t ≤ 162`) — the number of test cases.
- Each test case consists of three integers `a`, `b`, and `c` (`1 ≤ a, b ≤ 9`, `−8 ≤ c ≤ 18`).
- The input is guaranteed to be generated such that exactly one of the two equations will always be true.

## 📤 Output
For each test case, output either `+` or `-` on a new line, representing the correct equation.

## 📝 Example
### 📥 Input
```
11
1 2 3
3 2 1
2 9 -7
3 4 7
1 1 2
1 1 0
3 3 6
9 9 18
9 9 0
1 9 -8
1 9 10
```
### 📤 Output
```
+
-
-
+
+
-
+
+
-
-
+
```

## 🔍 Explanation
1. **Test Case 1:** `1 + 2 = 3` → Output: `+`
2. **Test Case 2:** `3 - 2 = 1` → Output: `-`
3. **Test Case 3:** `2 - 9 = -7` → Output: `-`
4. **Test Case 4:** `3 + 4 = 7` → Output: `+`
5. **Test Case 5:** `1 + 1 = 2` → Output: `+`
6. **Test Case 6:** `1 - 1 = 0` → Output: `-`
7. **Test Case 7:** `3 + 3 = 6` → Output: `+`
8. **Test Case 8:** `9 + 9 = 18` → Output: `+`
9. **Test Case 9:** `9 - 9 = 0` → Output: `-`
10. **Test Case 10:** `1 - 9 = -8` → Output: `-`
11. **Test Case 11:** `1 + 9 = 10` → Output: `+`

## 💡 Solution Approach
1. Read the number of test cases `t`.
2. Iterate through each test case:
   - If `a + b == c`, print `+`.
   - Otherwise, print `-` (since `a - b == c` is guaranteed to be true otherwise).

This approach ensures a simple and efficient solution given the problem constraints. 🚀

