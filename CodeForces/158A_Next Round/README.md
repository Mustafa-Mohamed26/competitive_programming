# 🏆 Next Round

## 📜 Problem Statement
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of `n` participants took part in the contest (`n ≥ k`), and you already know their scores. Calculate how many participants will advance to the next round.

## 📥 Input Format
The input consists of two lines:
1. 📝 The first line contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 50`) separated by a single space.
2. 🏅 The second line contains `n` space-separated integers `a1, a2, ..., an` (`0 ≤ ai ≤ 100`), where `ai` is the score earned by the participant who got the `i-th` place. The given sequence is non-increasing (that is, for all `i` from `1` to `n - 1`, the following condition is fulfilled: `ai ≥ ai+1`).

## 📤 Output Format
Output a single integer representing the number of participants who advance to the next round.

## 🔢 Examples
### Example 1
#### 📌 Input
```
8 5
10 9 8 7 7 7 5 5
```
#### 📌 Output
```
6
```
#### 📌 Explanation
The participant on the 5th place earned `7` points. As the participant on the 6th place also earned `7` points, there are `6` advancers.

### Example 2
#### 📌 Input
```
4 2
0 0 0 0
```
#### 📌 Output
```
0
```
#### 📌 Explanation
In the second example, nobody got a positive score, so no one advances.

## ⚙️ Constraints
- `1 ≤ k ≤ n ≤ 50`
- `0 ≤ ai ≤ 100`
- The scores are given in non-increasing order.

## 💡 Solution Approach
1. 📥 Read the input values `n` and `k`.
2. 🏅 Read the list of scores.
3. 🎯 Determine the score of the `k-th` participant.
4. 🔢 Count the number of participants whose scores are at least the `k-th` participant's score and greater than `0`.
5. 🖨 Print the count of such participants.

This problem can be solved in `O(n)` time complexity as we only need a single pass through the list to determine the count of qualifying participants.

