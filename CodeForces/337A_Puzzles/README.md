# 🧩 Puzzles Problem - Solution Guide

## 📌 Problem Statement
Ms. Manana wants to buy **n** puzzles for her **n** students from a shop that has **m** puzzles available, each with a different number of pieces. She wants to minimize the difference between the largest and smallest number of pieces among the selected puzzles.

### 📥 Input
- The first line contains two integers **n** and **m** (2 ≤ n ≤ m ≤ 50).
- The second line contains **m** space-separated integers, representing the number of pieces in each puzzle (4 ≤ fi ≤ 1000).

### 📤 Output
- Print a single integer: the minimum possible difference **A - B** where **A** is the maximum number of pieces in the chosen puzzles and **B** is the minimum number.

## 📖 Example
### 📥 Input
```
4 6
10 12 10 7 5 22
```
### 📤 Output
```
5
```

## 🛠️ Solution Approach
1. **🔢 Sort the list** of puzzle piece counts in non-decreasing order.
2. **🔍 Use a sliding window** approach to check all possible sets of `n` consecutive puzzles and find the minimum difference between the largest and smallest values.
3. **✅ Output the minimum difference** found.

## ⏳ Complexity Analysis
- 📌 Sorting takes **O(m log m)**.
- 📌 The sliding window approach runs in **O(m - n)**.
- 📌 Overall, the solution runs in **O(m log m)**, which is efficient for the given constraints.

## 🔍 Edge Cases Considered
- ⚡ The smallest possible values of `n` and `m`.
- ⚡ All puzzles having the same number of pieces.
- ⚡ The largest `m` value allowed in constraints.
- ⚡ Cases where the optimal set is found at different positions within the sorted list.

## 🎯 Conclusion
This approach ensures that the teacher selects puzzles with the smallest possible difference in pieces, making it a fair distribution for the students. 🏆

