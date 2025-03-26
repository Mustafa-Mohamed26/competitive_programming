# 🎴 Sereja and Dima

## 📝 Problem Statement
Sereja and Dima are playing a game with `n` cards placed in a row. Each card has a unique integer value. The game rules are as follows:
- Sereja plays first.
- On their turn, a player can take either the leftmost or rightmost card.
- The game ends when all cards are taken.
- The player with the highest sum of collected cards wins.
- Both players follow a greedy strategy, always picking the highest available card.

Given the initial arrangement of the cards, determine the final score of both players.

## 📥 Input Format
- The first line contains an integer `n` (1 ≤ `n` ≤ 1000), the number of cards.
- The second line contains `n` space-separated integers (1 ≤ `aᵢ` ≤ 1000), representing the values of the cards from left to right. All values are distinct.

## 📤 Output Format
Print two space-separated integers:
- The total score of **Sereja**.
- The total score of **Dima**.

## 💡 Approach
1. Use a two-pointer approach to simulate the game.
2. Start from both ends of the list.
3. On each turn:
   - The current player picks the maximum of the leftmost or rightmost card.
   - Update their total score.
   - Remove the selected card.
4. Alternate turns between Sereja and Dima until all cards are taken.

## 🔍 Example
### 📌 Input
```
4
4 1 2 10
```
### 📌 Output
```
12 5
```

### 📌 Explanation
- **Turn 1:** Sereja takes `10`, remaining: `[4, 1, 2]`.
- **Turn 2:** Dima takes `4`, remaining: `[1, 2]`.
- **Turn 3:** Sereja takes `2`, remaining: `[1]`.
- **Turn 4:** Dima takes `1`, game ends.
- **Final Scores:** Sereja = `12`, Dima = `5`.

### 📌 Input
```
7
1 2 3 4 5 6 7
```
### 📌 Output
```
16 12
```

## ⏱️ Complexity Analysis
The algorithm runs in **O(n)** time since each turn involves a constant-time decision and removal operation.

## 🖥️ Implementation
Refer to `sereja_dima.cpp` for the full C++ implementation.

