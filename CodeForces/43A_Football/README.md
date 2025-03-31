# ⚽ Football

## 📜 Problem Statement
Vasya is reviewing the results of the Berland 1910 Football Championship’s finals. Unfortunately, he couldn’t find the overall score, but he found a description of the goals scored during the match. Each line of the description records a goal with the name of the team that scored it.

Help Vasya determine which team won the match. It is guaranteed that the match did not end in a tie and that the description contains no more than two different teams.

## 📥 Input Format
The input consists of:
- An integer `n` (1 ≤ n ≤ 100) — the number of goals described.
- `n` lines, each containing the name of the team that scored the goal. The team names are uppercase Latin letters with a maximum length of 10 characters.

## 📤 Output Format
Print the name of the team that scored the most goals and won the match.

## 📌 Example
### 📥 Input
```
1
ABC
```
### 📤 Output
```
ABC
```

### 📥 Input
```
5
A
ABA
ABA
A
A
```
### 📤 Output
```
A
```

## 🔍 Explanation
In the second example:
- Team `A` scored 3 goals.
- Team `ABA` scored 2 goals.
- Since `A` has more goals than `ABA`, `A` is the winner.

## ⚠️ Constraints
- `1 ≤ n ≤ 100`
- The match does not end in a tie.
- There are at most two different team names in the input.

## 💡 Solution Approach
1. 📝 Read the input and count the number of goals for each team.
2. 🔢 Identify the team with the highest number of goals.
3. 🏆 Print the winning team's name.

## ⏳ Complexity Analysis
- The solution runs in `O(n)`, since it only requires counting occurrences in a list of `n` elements.

