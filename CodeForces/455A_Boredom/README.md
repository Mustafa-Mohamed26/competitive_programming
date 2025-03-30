# 🎮 Boredom

## 📌 Problem Statement
Alex doesn't like boredom. That's why whenever he gets bored, he comes up with games. One long winter evening, he came up with a game and decided to play it.

Given a sequence `a` consisting of `n` integers, the player can take several steps. In a single step, the player can:
- Choose an element `a_k` from the sequence and delete it.
- Additionally, all elements equal to `a_k + 1` and `a_k - 1` must also be deleted from the sequence.
- The player earns `a_k` points for this step.

Alex, being a perfectionist, wants to earn the **maximum number of points** possible. Help him determine the highest score he can achieve.

## 🎯 Task
Find and print the **maximum number of points** that Alex can collect by making optimal moves.

## 📥 Input Format
- The first line contains an integer `n` (`1 ≤ n ≤ 10^5`), the number of elements in the sequence.
- The second line contains `n` integers `a_1, a_2, ..., a_n` (`1 ≤ a_i ≤ 10^5`), representing the sequence elements.

## 📤 Output Format
- Print a single integer — the maximum number of points Alex can earn.

## 📝 Examples
### 🔹 Input 1
```
2
1 2
```
### 🔹 Output 1
```
2
```
### 🔹 Input 2
```
3
1 2 3
```
### 🔹 Output 2
```
4
```
### 🔹 Input 3
```
9
1 2 1 3 2 2 2 2 3
```
### 🔹 Output 3
```
10
```

## 📖 Explanation
### Example 3 Breakdown:
- Initial sequence: `[1, 2, 1, 3, 2, 2, 2, 2, 3]`
- Choose `2`: This removes all `1`s and `3`s from the sequence, leaving `[2, 2, 2, 2]`.
- Choose `2` four more times.
- Total points: `2 + 2 + 2 + 2 + 2 = 10`.

## ⚙️ Constraints
- The number of possible operations should be optimized to run in **O(n)** time complexity.
- Efficient approaches using **dynamic programming** or **frequency counting** are recommended.

## 📝 Notes
- The key observation is that taking `a_k` removes `a_k-1` and `a_k+1`, leading to a **subproblem similar to the "House Robber Problem"**.
- Sorting or hashing methods can be useful to count occurrences efficiently before making decisions.

