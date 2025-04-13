# 🧸 A. Mishka and Game

## 🧠 Problem Description

Mishka, a little polar bear, loves playing dice games for chocolates. One day, she plays a game with her friend Chris. The rules are simple:

- There are `n` rounds.
- In each round, both players roll a 6-faced dice (numbers 1 through 6).
- The player who rolls a higher number wins the round.
- If both roll the same number, it's a draw.

At the end of the game:
- The player with more wins is the overall winner.
- If both win the same number of rounds, it's a draw.

---

## 📥 Input

- First line: Integer `n` (1 ≤ n ≤ 100), the number of rounds.
- Next `n` lines: Each contains two integers `mi` and `ci` (1 ≤ mi, ci ≤ 6), the results of Mishka's and Chris' dice in the `i-th` round.

---

## 📤 Output

- Print `Mishka` if Mishka wins the game.
- Print `Chris` if Chris wins the game.
- Print `Friendship is magic!^^` if it's a draw.

---

## 📘 Examples

### Input
```
3
3 5
2 1
4 2
```
### Output
```
Mishka
```

### Input
```
2
6 1
1 6
```
### Output
```
Friendship is magic!^^
```

### Input
```
3
1 5
3 3
2 2
```
### Output
```
Chris
```

---

## 💡 Explanation

- **Example 1:** Mishka wins 2 rounds, Chris wins 1.
- **Example 2:** Each player wins 1 round, hence it's a draw.
- **Example 3:** Chris wins 1 round, and 2 rounds are draws, so Chris wins.

---

## 🏷️ Tags

- 🎲 Simulation
- 🧮 Counting
- 👥 Game Logic