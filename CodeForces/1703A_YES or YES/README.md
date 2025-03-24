# YES or YES? ✅

## Problem Statement 📜
You are given a string `s` of length **3**, consisting of uppercase and lowercase English letters. Your task is to check whether `s` is equal to "YES" (case insensitive). That means, the string "yES", "Yes", "yes", and other variations are all considered valid.

## Input 📥
- The first line contains an integer `t` (**1 ≤ t ≤ 10³**) — the number of test cases.
- The next `t` lines each contain a string `s` of exactly **3** characters. Each character of `s` is either an uppercase or lowercase English letter.

## Output 📤
For each test case:
- Print **"YES"** (without quotes) if `s` matches "YES" in any case variation.
- Otherwise, print **"NO"** (without quotes).
- You can output "YES" and "NO" in any case (e.g., "yes", "Yes", "yES" are all valid outputs).

## Examples 📌
### Input:
```
10
YES
yES
yes
Yes
YeS
Noo
orZ
yEz
Yas
XES
```
### Output:
```
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
```

## Explanation 📝
- The first five test cases contain different case variations of "YES", so they all output **YES**.
- The last five test cases do not match "YES" (case insensitive), so they output **NO**.

## Solution Approach 💡
1. Read the number of test cases `t`.
2. For each test case:
   - Convert the input string to **uppercase**.
   - If the resulting string is **"YES"**, print "YES".
   - Otherwise, print "NO".

This ensures that all variations of "YES" are recognized correctly.

---
This README provides a clear explanation of the problem, input/output format, examples, and a simple approach to solve it. 🚀✅

