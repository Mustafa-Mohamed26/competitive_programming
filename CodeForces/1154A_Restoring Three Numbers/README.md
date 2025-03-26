# 🔢 Restoring Three Numbers

## 📝 Problem Statement
Polycarp writes down four numbers on a board in an arbitrary order. These numbers represent:
1. ➕ The sum of two numbers: `a + b`
2. ➕ The sum of another two numbers: `a + c`
3. ➕ The sum of another two numbers: `b + c`
4. ➕ The sum of all three numbers: `a + b + c`

Given these four numbers, the task is to determine the original three numbers `a`, `b`, and `c`.

## 📥 Input Format
A single line containing four positive integers `x1, x2, x3, x4` (2 ≤ `xi` ≤ 10^9), representing the numbers written on the board in random order.

## 📤 Output Format
Print three integers `a`, `b`, and `c` in any order.

## 💡 Approach
1. 📌 Read four integers from input.
2. 📌 Sort the four numbers in ascending order.
3. 📌 The largest number will always be `a + b + c`.
4. 📌 Compute the original numbers as:
   - `a = x4 - x3`
   - `b = x4 - x2`
   - `c = x4 - x1`
5. 📌 Print the values of `a`, `b`, and `c`.

## 🔍 Example
### 📌 Input
```
3 6 5 4
```
### 📌 Output
```
2 1 3
```

### 📌 Input
```
40 40 40 60
```
### 📌 Output
```
20 20 20
```

## ⏱️ Complexity Analysis
The solution involves sorting four numbers (O(1) complexity) and simple arithmetic operations, making it an **O(1)** approach overall.

## 🖥️ Implementation
Refer to the `restoring_three_numbers.cpp` file for the complete implementation in C++.

