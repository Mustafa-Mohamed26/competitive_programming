# Beautiful Matrix

## 📝 Problem Statement
You have a `5 × 5` matrix consisting of `24` zeroes and a single number `1`. The matrix rows are indexed from `1 to 5` (top to bottom), and columns are indexed from `1 to 5` (left to right). 

In one move, you can perform one of the following transformations:

1. Swap two adjacent matrix rows (i.e., swap rows `i` and `i+1` for `1 ≤ i < 5`).
2. Swap two adjacent matrix columns (i.e., swap columns `j` and `j+1` for `1 ≤ j < 5`).

A matrix is considered **beautiful** if the single number `1` is positioned in the center (at row `3`, column `3`).

Your task is to determine the **minimum number of moves** required to make the matrix beautiful.

---

## 📥 Input Format
The input consists of **five lines**, each containing **five space-separated integers**. The `j-th` integer in the `i-th` line represents the element of the matrix at the intersection of row `i` and column `j`.

It is guaranteed that the matrix contains exactly `24` zeroes and a single `1`.

---

## 📤 Output Format
Output a single integer — the **minimum number of moves** needed to make the matrix beautiful.

---

## 🔢 Examples

### Example 1
#### 📌 Input
```
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```
#### 📌 Output
```
3
```
#### 📌 Explanation
The `1` is located at position `(2, 5)`. Moving it to `(3,3)` requires:
1. Move left to `(2,4)`
2. Move left to `(2,3)`
3. Move down to `(3,3)`

Thus, the minimum moves required = `3`.

---

### Example 2
#### 📌 Input
```
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```
#### 📌 Output
```
1
```
#### 📌 Explanation
The `1` is at position `(3,2)`, so moving it one step right to `(3,3)` requires **1 move**.

---

## 💡 Solution Approach
To determine the minimum moves required:
1. **Find the position** of `1` in the matrix.
2. Compute the **row distance** from the center `(3,3)`, which is `abs(current_row - 2)`.
3. Compute the **column distance** from the center `(3,3)`, which is `abs(current_column - 2)`.
4. The **total number of moves** required is the sum of these two distances.

This approach runs in **O(1)** time complexity since the matrix is of fixed size `5 × 5`.