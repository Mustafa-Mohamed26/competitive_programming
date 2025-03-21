# 🚀 HQ9+ Interpreter

## 📜 Problem Statement
HQ9+ is a joke programming language that consists of only four one-character instructions:

- **H** → Prints "Hello, World!"
- **Q** → Prints the source code of the program itself
- **9** → Prints the lyrics of "99 Bottles of Beer" song
- **+** → Increments the value stored in an internal accumulator (does not produce output)

Characters that are not one of these instructions are ignored.

### 🎯 Goal
Given a program written in HQ9+, determine whether executing the program will produce **any output**.

---

## 🔹 Input Format
- A single line containing a string `p` (1 ≤ |p| ≤ 100)
- Each character of `p` has an ASCII value between 33 (exclamation mark `!`) and 126 (tilde `~`).

## 🔸 Output Format
- Print `YES` if the program will generate **any** output.
- Otherwise, print `NO`.

---

## 📌 Examples

### ✅ Example 1
#### **Input:**
```
Hi!
```
#### **Output:**
```
YES
```

### ✅ Example 2
#### **Input:**
```
Codeforces
```
#### **Output:**
```
NO
```

---

## 💡 Solution Approach
1. The program produces output if it contains any of the following characters:
   - `'H'` (prints "Hello, World!")
   - `'Q'` (prints the program itself)
   - `'9'` (prints "99 Bottles of Beer" lyrics)
2. The `'+'` instruction does not produce output.
3. If any of `'H'`, `'Q'`, or `'9'` is found in the string, print `YES`.
4. Otherwise, print `NO`.

---

## ⏳ Complexity Analysis
- The solution iterates through the string **once**.
- Time Complexity: **O(n)** (where `n` is the length of the input string).
- Space Complexity: **O(1)** (constant extra space is used).

---

## 🔥 Fun Fact
This problem is a great introduction to **esoteric programming languages**! HQ9+ is often used as a joke to demonstrate minimalistic language design.

---

## 🏆 Ready to try it out?
Implement your own **HQ9+ interpreter** and have fun! 😃

