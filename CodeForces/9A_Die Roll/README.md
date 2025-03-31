# 🎲 Die Roll

## 📜 Problem Statement
Yakko, Wakko, and Dot, the world-famous animaniacs, decided to take a short leave to travel. Since they could only visit one destination, Yakko suggested a fair way to decide: each of them would roll a six-sided die, and the one with the highest roll would choose the destination.

Dot wants to determine the probability that she will win, assuming she rolls after Yakko and Wakko. If Dot rolls the same number as the highest roll, she will be considered the winner.

## 📥 Input Format
The input consists of a single line containing two natural numbers:
- 🎲 `Y` (1 ≤ Y ≤ 6): Yakko's die roll result.
- 🎲 `W` (1 ≤ W ≤ 6): Wakko's die roll result.

## 📤 Output Format
The output should be the probability that Dot wins, expressed as an irreducible fraction in the format `A/B`, where:
- 🔢 `A` is the numerator.
- 🔢 `B` is the denominator.

If the probability is 0, print `0/1`. If the probability is 1, print `1/1`.

## 📌 Example
### 📥 Input
```
4 2
```
### 📤 Output
```
1/2
```

## 🔍 Explanation
Dot wins if she rolls a number that is at least as high as the highest of `Y` and `W`. In this case, the highest number is `4`. The numbers she can roll to win are `4, 5, or 6`.

Since a fair six-sided die has outcomes `{1, 2, 3, 4, 5, 6}`, the probability of rolling `4, 5, or 6` is:
```
3/6 = 1/2
```
Thus, the correct output is `1/2`.

## ⚠️ Constraints
- The input values are always valid six-sided die results (1 to 6).
- The output fraction should be irreducible.

## 💡 Solution Approach
1. 🔝 Determine the highest roll among Yakko and Wakko: `max(Y, W)`.
2. 🎲 Count the favorable outcomes for Dot: numbers greater than or equal to `max(Y, W)`.
3. ➗ Compute the probability as `favorable outcomes / 6`.
4. ✂️ Simplify the fraction and print it in irreducible form.

## 🔄 Edge Cases
- If `Y = W = 6`, Dot must roll a `6` to win, giving probability `1/6`.
- If `Y = W = 1`, Dot wins if she rolls `1, 2, 3, 4, 5, or 6`, giving probability `6/6 = 1/1`.
- If Dot cannot win at all, return `0/1`.

## ⏳ Complexity Analysis
- The solution runs in constant time `O(1)`, as it only involves a few comparisons and arithmetic operations.
