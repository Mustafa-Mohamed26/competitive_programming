# 🏆 In Search of an Easy Problem

## 📌 Problem Statement
When preparing a tournament, Codeforces coordinators try their best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked `n` people about their opinions. Each person answered whether this problem is **easy** or **hard**.

If at least **one** of these `n` people has answered that the problem is **hard**, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

## 🔢 Input
- The first line contains a single integer `n` \(1 \leq n \leq 100\) — the number of people who were asked to give their opinions.
- The second line contains `n` integers, each integer is either `0` or `1`:
  - `0` means the person thinks the problem is **easy**.
  - `1` means the person thinks the problem is **hard**.

## 📤 Output
Print one word:
- **"EASY"** if all responses indicate the problem is easy.
- **"HARD"** if at least one person thinks the problem is hard.

You may print the output in any case (e.g., "EaSY", "easy", etc.).

## ✅ Examples
### Example 1
**Input:**
```
3
0 0 1
```
**Output:**
```
HARD
```
### Example 2
**Input:**
```
1
0
```
**Output:**
```
EASY
```

## 🔗 Related Topics
- ✅ Simple Conditions
- ✅ Looping through Input
- ✅ Basic Input/Output

## 🏁 Conclusion
This problem is a straightforward **decision-making** problem where we just need to check if any response contains a `1`. If found, we print "HARD"; otherwise, we print "EASY". 🚀

