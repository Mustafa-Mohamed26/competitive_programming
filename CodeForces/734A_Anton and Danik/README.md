# ♟️ Anton and Danik

## 📌 Problem Statement
Anton and his friend Danik enjoy playing chess. They played **n** games in a row, and the winner of each game is recorded.

For each game:
- `A` means **Anton** won.
- `D` means **Danik** won.
- There are **no ties**.

Your task is to determine who won more games.

---
## 📥 Input
1. A single integer `n` (`1 ≤ n ≤ 100000`) — the number of games played.
2. A string `s` of length `n`, consisting of characters **'A'** and **'D'** representing the winner of each game.

---
## 📤 Output
- Print `Anton` if Anton won more games.
- Print `Danik` if Danik won more games.
- Print `Friendship` if both won the same number of games.

---
## 🏆 Examples
### Example 1
**Input:**
```
6
ADAAAA
```
**Output:**
```
Anton
```

### Example 2
**Input:**
```
7
DDDAADA
```
**Output:**
```
Danik
```

### Example 3
**Input:**
```
6
DADADA
```
**Output:**
```
Friendship
```

---
## 🔍 Solution Approach
1. **Count** the occurrences of `A` (Anton’s wins) and `D` (Danik’s wins) in string `s`.
2. Compare the two counts:
   - If `A > D`, print `Anton`.
   - If `D > A`, print `Danik`.
   - If `A == D`, print `Friendship`.

---
## ⏳ Complexity Analysis
- **O(n)** time complexity: We scan the string once to count `A` and `D`.
- **O(1)** space complexity: Only a few integer counters are used.

---
## 🏁 Conclusion
This problem is a simple counting task that can be solved efficiently with a single pass through the string. The solution is optimal for large values of `n`.

