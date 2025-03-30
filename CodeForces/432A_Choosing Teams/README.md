# 🏆 Choosing Teams

## 📌 Problem Statement
The Saratov State University Olympiad Programmers Training Center (SSU OPTC) has `n` students. Each student's number of participations in the ACM ICPC world programming championship is known. According to ACM ICPC rules, each participant can compete in the world championship at most **5 times**.

The head of SSU OPTC wants to form teams for the championship. Each team must consist of exactly **three members**, and a person cannot be a part of multiple teams. Each team must be able to participate in the championship at least **k** more times with the same members.

### 🎯 Task
Given `n` students and their participation counts, determine the **maximum number of teams** that can be formed under these conditions.

### 📥 Input Format
- The first line contains two integers `n` and `k` (`1 ≤ n ≤ 2000`, `1 ≤ k ≤ 5`).
- The second line contains `n` integers `y1, y2, ..., yn` (`0 ≤ yi ≤ 5`), where `yi` represents how many times the `i-th` student has already participated in the ACM ICPC world championship.

### 📤 Output Format
- Print a single integer — the maximum number of valid teams that can be formed.

### 📝 Examples
#### 🔹 Input
```
5 2
0 4 5 1 0
```
#### 🔹 Output
```
1
```
#### 🔹 Input
```
6 4
0 1 2 3 4 5
```
#### 🔹 Output
```
0
```
#### 🔹 Input
```
6 5
0 0 0 0 0 0
```
#### 🔹 Output
```
2
```

### 📖 Explanation
- In the first example, the valid team consists of the **1st, 4th, and 5th** students.
- In the second example, no team can be formed because all students have participated too many times.
- In the third example, all students have never participated, allowing **two teams** to be formed in any valid way.

### ⚙️ Constraints
- Each student can participate at most **5 times**.
- The solution should be efficient for `n` up to `2000`.

### 📝 Notes
- A student can be part of a team **only if they can participate at least `k` more times**.
- The number of possible teams is determined by the number of eligible students divided by 3.
- The solution should efficiently filter and count students meeting the participation criteria.

