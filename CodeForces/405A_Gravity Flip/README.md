# 📦 Gravity Flip

## 📜 Problem Statement
Little Chris has a toy box with **n** columns of cubes. Initially, gravity pulls the cubes **downwards**, but when Chris **switches gravity**, it pulls them to the **right** side of the box.

Your task is to determine the **final configuration** of cubes in each column after the gravity switch.

## 🔢 Input Format
- The first line contains an integer **n** *(1 ≤ n ≤ 100)* — the number of columns.
- The second line contains **n** space-separated integers **a₁, a₂, ..., aₙ** *(1 ≤ aᵢ ≤ 100)* — the number of cubes in each column.

## 🖥️ Output Format
- Print **n** integers, representing the number of cubes in each column after the gravity switch.

## 📝 Example
### Input
```
4
3 2 1 2
```
### Output
```
1 2 2 3
```
### Input
```
3
2 3 8
```
### Output
```
2 3 8
```

## 💡 Solution Approach
1. **Sort** the list of cubes in **ascending order**.
2. Print the sorted values as the final arrangement.

## ⏳ Complexity Analysis
- **Sorting takes O(n log n)**, which is efficient for **n ≤ 100**.

## 🎯 Key Observations
- The problem is equivalent to **sorting** the initial heights in ascending order.
- Sorting ensures cubes shift to the right while maintaining their count.

🚀 Happy Coding!