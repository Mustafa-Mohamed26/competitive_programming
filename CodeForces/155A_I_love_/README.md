# I_love_%username% 🏆

## Problem Statement 📃
Vasya is a big fan of sports programming. He doesn't write code himself, but he loves watching contests and tracking the progress of his favorite coder. 

Vasya records the points his favorite coder earns in each contest in chronological order. He considers a performance **amazing** if:
1. 🏆 The coder earns **strictly more** points than in any previous contest.
2. 🏠 The coder earns **strictly fewer** points than in any previous contest.

The first contest is never considered amazing. Vasya wants to count how many amazing performances his favorite coder had.

## Input 📝
- The first line contains an integer `n` (1 ≤ n ≤ 1000) — the number of contests the coder participated in.
- The second line contains `n` space-separated non-negative integers — the points earned in each contest, in chronological order.
- Each score does not exceed 10,000.

## Output 📢
Print a single integer — the number of amazing performances.

## Examples 📚
### Input 1
```
5
100 50 200 150 200
```
### Output 1
```
2
```
### Input 2
```
10
4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
```
### Output 2
```
4
```

## Explanation ✅
- In the first example, the coder had amazing performances in contests **2 (50, lowest at that point)** and **3 (200, highest at that point)**.
- In the second example, amazing performances happened in contests **2, 4, 9, and 10**.

## Constraints ⚠️
- `1 ≤ n ≤ 1000`
- `0 ≤ points[i] ≤ 10000`

## Solution Approach 🔄
- Track the **minimum** and **maximum** points seen so far.
- Iterate through the contests and check if the current score is a new minimum or maximum.
- Count such occurrences as amazing performances.

---

This README provides a clear explanation of the problem, input/output format, example cases, and an approach to solve it. 🚀

