# 🪨 Stones on the Table - Solution

## 📌 Problem Statement
There are `n` stones on the table arranged in a row, each colored Red (`R`), Green (`G`), or Blue (`B`). The goal is to count the minimum number of stones to remove so that no two neighboring stones have the same color.

### 📥 Input
- The first line contains an integer `n` (1 ≤ n ≤ 50) — the number of stones.
- The second line contains a string `s` of length `n`, consisting of the characters `R`, `G`, and `B`.

### 📤 Output
- Print a single integer — the minimum number of stones that must be removed.

## 🔍 Example Walkthrough
### Example 1
#### 📝 Input:
```
3
RRG
```
#### ✅ Output:
```
1
```
#### ℹ️ Explanation:
The first two stones are `RR`, which need one removal to make them different.

### Example 2
#### 📝 Input:
```
5
RRRRR
```
#### ✅ Output:
```
4
```
#### ℹ️ Explanation:
All stones are `R`, so four removals are needed to make all neighboring stones different.

### Example 3
#### 📝 Input:
```
4
BRBG
```
#### ✅ Output:
```
0
```
#### ℹ️ Explanation:
No two neighboring stones are the same, so no removals are needed.

## 💡 Solution Approach
We iterate through the string and compare each stone with the next one:
1. 🔄 If two consecutive stones are the same, we increase the removal count.
2. 📌 Continue until the end of the string.

## 📊 Complexity Analysis
- ⏳ **Time Complexity**: O(n) — We traverse the string once.
- 🛠️ **Space Complexity**: O(1) — We use only a few integer variables.

## ⚠️ Edge Cases Considered
- 🔹 **Minimum Input**: `n = 1` → No removals needed.
- 🔹 **All Same Color**: Maximum removals needed.
- 🔹 **Alternating Colors**: No removals needed.

This solution efficiently determines the minimum number of removals required to make adjacent stones different.

