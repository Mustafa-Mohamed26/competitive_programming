# 🕵️ Spy Detected!

## 📜 Problem Statement
You are given an array `a` consisting of `n` (**n ≥ 3**) positive integers. It is known that **all numbers except one** are the same. Your task is to find the index of the unique number.

For example, in the array `[4, 11, 4, 4]`, all numbers except `11` are `4`. The index of `11` is **2**.

## 🔢 Input
- The first line contains an integer `t` (**1 ≤ t ≤ 100**) — the number of test cases.
- Each test case consists of two lines:
  - The first line contains an integer `n` (**3 ≤ n ≤ 100**) — the length of the array `a`.
  - The second line contains `n` integers `a1, a2, ..., an` (**1 ≤ ai ≤ 100**).
- It is guaranteed that all numbers except one are the same.

## 📤 Output
For each test case, print a single integer — the **index** of the element that is different from the others.

(Indexes are **1-based**.)

## 📝 Example
### 📥 Input
```
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
```

### 📤 Output
```
2
1
5
3
```

## 💡 Solution Approach
1. **Identify the majority element:**
   - The repeating element appears at least twice.
   - The unique element appears only once.
2. **Compare the first three elements:**
   - If `a[0] == a[1]`, then the majority element is `a[0]`.
   - Otherwise, the unique element is among the first three.
3. **Find the unique element's index** by iterating through the array.

This approach ensures an efficient **O(n)** time complexity per test case. 🚀

