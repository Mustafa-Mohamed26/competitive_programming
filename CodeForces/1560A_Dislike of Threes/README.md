# ❌ Dislike of Threes

## 📌 Problem Statement
Polycarp dislikes numbers that are:
1. Divisible by 3.
2. Ending with the digit 3.

Polycarp writes down only the numbers he likes in an increasing order: `1, 2, 4, 5, 7, 8, 10, 11, 14, 16, ...`.

Given `k`, find the `k`-th number in this sequence.

## 🔢 Input
- The first line contains an integer `t` (1 ≤ t ≤ 100) — the number of test cases.
- Each of the next `t` lines contains a single integer `k` (1 ≤ k ≤ 1000).

## 🎯 Output
- For each test case, print the `k`-th liked number.

## 🛠️ Explanation & Solution
To generate the sequence:
1. Start from `1` and check each integer sequentially.
2. If the number is not divisible by 3 and does not end in 3, add it to the sequence.
3. Continue until reaching the `k`-th liked number.

### 📖 Example Walkthrough
#### Example Input:
```
10
1
2
3
4
5
6
7
8
9
1000
```

#### Example Output:
```
1
2
4
5
7
8
10
11
14
1666
```

## ⏳ Complexity Analysis
- Checking each number takes `O(1)`, and filtering out disliked numbers makes the process approximately `O(k)`, which is efficient for given constraints.

## 📌 Summary
- Iterate through positive integers, filtering out disliked numbers.
- Store them in sequence and fetch the `k`-th number when needed.
- Efficient `O(k)` approach for direct computation.