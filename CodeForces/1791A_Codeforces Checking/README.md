# ✅ Codeforces Checking

## 📌 Problem Statement
Given a lowercase Latin character (letter), check if it appears in the string **"codeforces"**.

## 📥 Input
- The first line contains an integer `t` (`1 ≤ t ≤ 26`) — the number of test cases.
- The only line of each test case contains a character `c` — a single lowercase Latin letter.

## 📤 Output
- For each test case, output **"YES"** if `c` is present in **"codeforces"**, otherwise output **"NO"**.
- The answer can be printed in any case (e.g., "yes", "Yes", "YES" are all valid outputs).

## 📝 Examples

### ✅ Input
```
10
a
b
c
d
e
f
g
h
i
j
```

### ✅ Output
```
NO
NO
YES
YES
YES
YES
NO
NO
NO
NO
```

## 🔍 Explanation
The characters **c, d, e, f** appear in the string **"codeforces"**, so the output is **YES** for them and **NO** for the others.

## 💡 Solution Approach
1. Store the string **"codeforces"** as a reference.
2. For each test case, check if the given character is in the reference string.
3. Print **"YES"** if the character is found, otherwise print **"NO"**.

This approach ensures an efficient solution within the given constraints. 🚀

