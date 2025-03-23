# 🏡 The New Year: Meeting Friends

## 📜 Problem Statement
In Lineland, three friends live on a straight line, represented by the Ox axis. The first friend lives at point `x1`, the second at `x2`, and the third at `x3`. They want to meet at a common point to celebrate the New Year. The task is to determine the **minimum total distance** they must travel to meet at a single point.

## 📥 Input
- 📌 The input consists of a single line containing three distinct integers `x1`, `x2`, and `x3`.
- 📌 The values satisfy: `1 ≤ x1, x2, x3 ≤ 100`.

## 📤 Output
- ✅ Print one integer: the minimum total distance the friends need to travel to meet at the optimal location.

## 🔢 Example
### Example 1
**📥 Input:**
```
7 1 4
```
**📤 Output:**
```
6
```
**💡 Explanation:** The friends meet at position `4`, with travel distances of `3` (from `7` to `4`) and `3` (from `1` to `4`). The total distance is **6**.

### Example 2
**📥 Input:**
```
30 20 10
```
**📤 Output:**
```
20
```
**💡 Explanation:** The friends meet at position `20`, with travel distances of `10` (from `10` to `20`) and `10` (from `30` to `20`). The total distance is **20**.

## 📏 Constraints
- 🔢 The coordinates are distinct integers between `1` and `100`.

## 🔍 Solution Approach
1. **Sorting:** Arrange the three values in ascending order.
2. **🎯 Median Selection:** The optimal meeting point is always the **middle value**.
3. **📊 Distance Calculation:** Compute the absolute differences between the two extreme values and the median.
4. **🖥️ Output the Result.**

## 🏷️ Tags
- 📌 Greedy Algorithm
- 🎯 Sorting
- 📊 Mathematics