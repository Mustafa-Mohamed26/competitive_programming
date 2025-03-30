# 🏅 Team Olympiad

## 📌 Problem Statement
The School №0 in the capital of Berland has `n` children. Each child excels in exactly one of three subjects:
- **Programming** (`1`)
- **Mathematics** (`2`)
- **Physical Education (PE)** (`3`)

The Team Scientific Decathlon Olympiad requires teams consisting of exactly **three students**, where each team must include:
- One **programmer** (`1`)
- One **mathematician** (`2`)
- One **sportsman** (`3`)

Each child can be in at most one team.

### 🎯 Task
Determine the **maximum number of teams** that can be formed under these conditions and output the teams.

### 📥 Input Format
- The first line contains an integer `n` (`1 ≤ n ≤ 5000`), the number of students.
- The second line contains `n` integers `t1, t2, ..., tn` (`1 ≤ ti ≤ 3`), where `ti` represents the subject expertise of the `i-th` student.

### 📤 Output Format
- Print a single integer `w`, the maximum number of teams that can be formed.
- Then, print `w` lines, each containing three integers, representing the indices of the students forming a valid team.
- The students are numbered from `1` to `n` in order of input.
- If no teams can be formed, print `0`.

### 📝 Examples
#### 🔹 Input
```
7
1 3 1 3 2 1 2
```
#### 🔹 Output
```
2
3 5 2
6 7 4
```
#### 🔹 Input
```
4
2 1 1 2
```
#### 🔹 Output
```
0
```

### 📖 Explanation
- In the first example, two teams can be formed:
  - **Team 1:** Student `3` (programming), Student `5` (math), Student `2` (PE)
  - **Team 2:** Student `6` (programming), Student `7` (math), Student `4` (PE)
- In the second example, it is impossible to form a team with all three subjects, so the output is `0`.

### ⚙️ Constraints
- Each student specializes in **exactly one** subject (`1`, `2`, or `3`).
- The number of possible teams is determined by the **minimum count** among the three subject groups.
- The solution should be efficient for `n` up to `5000`.

### 📝 Notes
- The ordering of teams or students within a team does not matter as long as the composition is correct.
- If multiple valid solutions exist, any can be printed.

