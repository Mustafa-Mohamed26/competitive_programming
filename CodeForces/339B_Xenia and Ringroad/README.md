# 🏠 Xenia and Ringroad

## 📝 Problem Statement
Xenia lives in a city with `n` houses arranged in a circular ringroad. The houses are numbered from `1` to `n` in a clockwise direction, and traffic flows in the same direction.

Xenia starts at house `1` and has `m` tasks to complete at specific houses. She must complete each task in order, moving along the ringroad. Moving from one house to the next takes one unit of time.

Your task is to determine the minimum time required for Xenia to complete all her tasks.

## 📥 Input Format
- The first line contains two integers `n` and `m` (2 ≤ `n` ≤ 10⁵, 1 ≤ `m` ≤ 10⁵), where:
  - `n` is the number of houses on the ringroad.
  - `m` is the number of tasks Xenia must complete.
- The second line contains `m` integers `a₁, a₂, ..., aₘ` (1 ≤ `aᵢ` ≤ `n`), representing the houses where tasks must be performed in order.

## 📤 Output Format
Print a single integer representing the minimum time required to complete all tasks.

## 💡 Approach
1. Start at house `1`.
2. For each task at house `aᵢ`:
   - If `aᵢ` is ahead of the current house, move forward normally.
   - If `aᵢ` is behind the current house, complete a full cycle around the ringroad.
3. Accumulate the total time taken.

## 🔍 Example
### 📌 Input
```
4 3
3 2 3
```
### 📌 Output
```
6
```

### 📌 Explanation
The movement sequence is:
1 → 2 → 3 → 4 → 1 → 2 → 3 (Total time: 6 units)

### 📌 Input
```
4 3
2 3 3
```
### 📌 Output
```
2
```

## ⏱️ Complexity Analysis
Since we iterate through `m` tasks and each movement is computed in constant time, the solution runs in **O(m)** time complexity.

## 🖥️ Implementation
Refer to the `xenia_ringroad.cpp` file for the complete C++ implementation.

