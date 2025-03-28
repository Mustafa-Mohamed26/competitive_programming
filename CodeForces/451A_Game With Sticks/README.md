# 🎮 Game With Sticks

## 📜 Problem Statement
Akshat and Malvika are playing a game on a grid made of `n` horizontal and `m` vertical sticks.

### 🎲 Game Rules:
- An **intersection point** is formed where a horizontal stick intersects with a vertical stick.
- Players take turns, starting with **Akshat**.
- On each turn, a player chooses any remaining **intersection point** and removes **all sticks** passing through it.
- A player loses if they cannot make a move.
- Both players play optimally.

Your task is to determine the winner given the dimensions of the grid.

## 📥 Input
- A single line containing two space-separated integers `n` and `m` (`1 ≤ n, m ≤ 100`).

## 📤 Output
- Print **"Akshat"** if Akshat wins or **"Malvika"** if Malvika wins.

## 📝 Examples
### ✅ Input
```
2 2
```
### ✅ Output
```
Malvika
```

### ✅ Input
```
2 3
```
### ✅ Output
```
Malvika
```

### ✅ Input
```
3 3
```
### ✅ Output
```
Akshat
```

## 🔍 Explanation
- The game proceeds by removing sticks in rounds, where each move removes one row and one column.
- The maximum number of moves possible is `min(n, m)`.
- If `min(n, m)` is **odd**, **Akshat wins** 🎉 (since he starts first).
- If `min(n, m)` is **even**, **Malvika wins** 🎊.

## 💡 Solution Approach
1. Compute `min(n, m)`, which represents the number of rounds possible.
2. If the number of rounds is **odd**, Akshat wins; otherwise, Malvika wins.
3. Print the result accordingly.

This ensures an efficient solution given the constraints (`n, m ≤ 100`).

