# ⏳ New Year and Hurry - Problem Statement

## 📌 Problem Description
Limak is going to participate in a contest on the last day of 2016. The contest starts at **20:00** and lasts exactly **four hours** until midnight. There are **n** problems sorted by difficulty, meaning problem **1** is the easiest and problem **n** is the hardest. The time required to solve the **i-th** problem is **5 * i** minutes.

Limak wants to attend a New Year's Eve party at midnight. It takes him **k** minutes to travel from his house (where he participates in the contest) to the party. Your task is to determine the maximum number of problems Limak can solve while ensuring he reaches the party on time.

---

## 📥 Input Format
- The input consists of a single line containing two integers **n** and **k**:
  - **n** (1 ≤ n ≤ 10): The number of problems in the contest.
  - **k** (1 ≤ k ≤ 240): The number of minutes required to reach the party.

---

## 📤 Output Format
- Print a single integer: the maximum number of problems Limak can solve while still reaching the party before or at midnight.

---

## 📝 Examples
### 🔹 Example 1
#### 📥 Input
```
3 222
```
#### 📤 Output
```
2
```
#### 🧐 Explanation
- There are 3 problems, and Limak needs **222 minutes** to reach the party.
- Solving problems takes the following time:
  - Problem 1: **5 minutes**
  - Problem 2: **10 minutes**
  - Problem 3: **15 minutes**
- The total available contest time is **240 minutes**.
- If Limak solves 2 problems, he will spend **5 + 10 = 15 minutes**, leaving him **225 minutes**.
- Since **225 ≥ 222**, he can go to the party on time.
- If he tries solving 3 problems, he will use **15 more minutes**, leaving **210 minutes**, which is **not enough**.
- So, the maximum number of problems he can solve is **2**.

---

### 🔹 Example 2
#### 📥 Input
```
4 190
```
#### 📤 Output
```
4
```
#### 🧐 Explanation
- Total available time: **240 minutes**.
- Total solving time for 4 problems: **5 + 10 + 15 + 20 = 50 minutes**.
- Time left: **240 - 50 = 190 minutes**, which is exactly enough to reach the party.
- Limak can solve all 4 problems.

---

### 🔹 Example 3
#### 📥 Input
```
7 1
```
#### 📤 Output
```
7
```
#### 🧐 Explanation
- Limak only needs **1 minute** to reach the party.
- He can use **239 minutes** to solve problems.
- Solving all **7** problems takes **5 + 10 + 15 + 20 + 25 + 30 + 35 = 140 minutes**.
- He has enough time to solve all problems and still reach the party.

---

## 🔍 Solution Approach
1. **Determine available time**: The total contest duration is **240 minutes**.
2. **Track time usage**: Iterate through the problems, adding the required solving time for each problem.
3. **Check if there’s enough time left**: Ensure that Limak has at least **k** minutes left for travel.
4. **Stop when time runs out**: If solving the next problem exceeds the remaining time, stop counting.
5. **Output the number of problems solved**.

---

## ⏳ Complexity Analysis
- **Time Complexity**: **O(n)** because we iterate through at most 10 problems.
- **Space Complexity**: **O(1)** since we only use a few variables.

---

## 🎯 Conclusion
This problem requires simple iteration and condition checking. By tracking time usage and ensuring enough time for travel, we can determine the maximum number of problems Limak can solve before heading to the party. 🎉