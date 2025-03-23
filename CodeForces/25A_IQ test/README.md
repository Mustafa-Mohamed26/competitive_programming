# 🧠 IQ Test

## 📜 Problem Statement
Bob is preparing to pass an IQ test. One of the most common tasks in this test is to find the number that differs in evenness from the others. Bob noticed that there is always exactly one number that is different in evenness.

Your task is to write a program that finds the index of this number in the given sequence.

## 📥 Input
- The first line contains an integer `n` (3 ≤ n ≤ 100) — the number of numbers in the sequence.
- The second line contains `n` space-separated natural numbers, each not exceeding 100.
- It is guaranteed that exactly one number differs from the others in evenness.

## 📤 Output
- Output the 1-based index of the number that differs from the others in evenness.

## 🔢 Examples
### Example 1
**Input:**
```
5
2 4 7 8 10
```
**Output:**
```
3
```
**📝 Explanation:** The number 7 is odd, while all others are even. The index of 7 in the input is 3.

### Example 2
**Input:**
```
4
1 2 1 1
```
**Output:**
```
2
```
**📝 Explanation:** The number 2 is even, while all others are odd. The index of 2 in the input is 2.

## ⚠️ Constraints
- `3 ≤ n ≤ 100`
- `1 ≤ a[i] ≤ 100`
- There is exactly one number that differs in evenness.

## 💡 Solution Approach
1. 📌 Read the input values.
2. 🔍 Determine the count of even and odd numbers.
3. 🔢 Identify the outlier number based on the majority type.
4. 📢 Print the index of the number that differs.

## 🏷️ Tags
- 🏗️ Implementation
- 📊 Array Processing
- 🔢 Even and Odd Numbers