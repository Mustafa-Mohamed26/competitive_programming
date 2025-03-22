# 🎮 I Wanna Be the Guy - Problem Statement and Solution

## 📜 Problem Description
"I Wanna Be the Guy" is a game consisting of `n` levels. Two players, Little X and Little Y, attempt to complete the game together.
- 🎮 Little X can pass `p` levels, while Little Y can pass `q` levels.
- 📋 The levels each player can pass are provided as a list of integers.
- 🎯 The objective is to determine if their combined skills allow them to complete all `n` levels.

## 📥 Input Format
1. 📌 The first line contains an integer `n` (1 ≤ n ≤ 100), representing the number of levels.
2. 📌 The second line starts with an integer `p` (0 ≤ p ≤ n), followed by `p` distinct integers representing the levels Little X can pass.
3. 📌 The third line starts with an integer `q` (0 ≤ q ≤ n), followed by `q` distinct integers representing the levels Little Y can pass.

## 📤 Output Format
- ✅ Print **"I become the guy."** if all levels from 1 to `n` can be passed by either of the players.
- ❌ Otherwise, print **"Oh, my keyboard!"**

## 📌 Examples
### Example 1
**📥 Input:**
```
4
3 1 2 3
2 2 4
```
**📤 Output:**
```
I become the guy.
```
**🔎 Explanation:** Little X can pass levels [1, 2, 3] and Little Y can pass levels [2, 4]. Together, they can pass all levels.

### Example 2
**📥 Input:**
```
4
3 1 2 3
2 2 3
```
**📤 Output:**
```
Oh, my keyboard!
```
**🔎 Explanation:** Neither player can pass level 4, so the game cannot be fully completed.

## 🛠 Solution Approach
1. 📌 Read the integer `n` representing the total levels.
2. 📌 Read the levels that Little X can pass and store them in a set.
3. 📌 Read the levels that Little Y can pass and add them to the same set.
4. 📌 If the set contains all numbers from 1 to `n`, print "I become the guy." Otherwise, print "Oh, my keyboard!".

## 💻 Implementation in Python
```python
n = int(input())
x_levels = set(map(int, input().split()[1:]))
y_levels = set(map(int, input().split()[1:]))

all_levels = x_levels.union(y_levels)

if len(all_levels) == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
```

## 📊 Complexity Analysis
- 🚀 The solution uses sets for storing the levels and checking their union.
- ⏳ The worst-case time complexity is **O(n)**, which is efficient given `n ≤ 100`.

## ⚠️ Edge Cases Considered
1. **🔹 Minimal Input:** `n = 1, p = 0, q = 0`. Neither player can pass any level.
2. **🔹 One Player Completes All:** Either `p = n` or `q = n`, meaning one player can already pass all levels alone.
3. **🔹 Levels Overlap:** Some levels are passable by both players, ensuring proper set operations.

## 🏆 Conclusion
This problem is a simple implementation of set operations and basic input handling. By leveraging Python's set operations, we can efficiently determine if all levels are covered. ✅

