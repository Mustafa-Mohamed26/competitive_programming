# Bit++

## Problem Statement
Bit++ is a peculiar programming language in Bitland that operates on a single variable, `x`. The program consists of a series of statements, each of which either increases or decreases the value of `x`.

### 🔹 Operations:
- ➕ `++X` or `X++` increases `x` by 1.
- ➖ `--X` or `X--` decreases `x` by 1.

Given a sequence of such statements, execute them sequentially and determine the final value of `x`, which initially starts at `0`.

---

## 📝 Input
- 📌 The first line contains an integer `n` (1 ≤ n ≤ 150), representing the number of statements.
- 📌 The next `n` lines each contain one statement (`++X`, `X++`, `--X`, or `X--`).

## 📤 Output
- 📌 Print a single integer representing the final value of `x` after executing all statements.

---

## 📌 Example

### 🔹 Input:
```
1
++X
```
### 🔹 Output:
```
1
```

### 🔹 Input:
```
2
X++
--X
```
### 🔹 Output:
```
0
```

---

## 📌 Constraints
- ✅ `1 ≤ n ≤ 150`
- ✅ Each statement contains exactly one operation (`++` or `--`) and the variable `X`.

---

## 💡 Solution Approach
1. Read the integer `n`, representing the number of statements.
2. Initialize `x = 0`.
3. Iterate through `n` statements:
   - If the statement contains `++`, increase `x` by 1.
   - If the statement contains `--`, decrease `x` by 1.
4. Print the final value of `x`.

### ⏳ Complexity Analysis
- **⏱️ Time Complexity**: O(n) — Each statement is processed in constant time.
- **💾 Space Complexity**: O(1) — Only a single integer `x` is stored.

This ensures an efficient solution for the given constraints. 🚀