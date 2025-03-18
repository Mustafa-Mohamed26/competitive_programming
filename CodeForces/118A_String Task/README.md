# 🔠 String Task - Solution

## 📌 Problem Statement
Petya's task is to transform a given string based on the following rules:
1. ❌ Delete all vowels (`A, O, Y, E, U, I, a, o, y, e, u, i`).
2. ➕ Insert a `.` before each consonant.
3. 🔡 Convert all uppercase consonants to lowercase.

### 📥 Input
- 📄 A single string consisting of uppercase and lowercase Latin letters.
- 📏 The length of the string is between `1` and `100` (inclusive).

### 📤 Output
- ✅ A single transformed string based on the given rules.

## 🔍 Example Walkthrough
### 📌 Example 1
#### 📝 Input:
```
tour
```
#### ✅ Output:
```
.t.r
```
#### ℹ️ Explanation:
- ✂️ Remove vowels: `t r`
- ➕ Insert `.` before each consonant: `.t.r`
- 🔡 Convert to lowercase (already lowercase).

### 📌 Example 2
#### 📝 Input:
```
Codeforces
```
#### ✅ Output:
```
.c.d.f.r.c.s
```
#### ℹ️ Explanation:
- ✂️ Remove vowels: `C d f r c s`
- ➕ Insert `.` before each consonant: `.c.d.f.r.c.s`
- 🔡 Convert uppercase to lowercase.

### 📌 Example 3
#### 📝 Input:
```
aBAcAba
```
#### ✅ Output:
```
.b.c.b
```
#### ℹ️ Explanation:
- ✂️ Remove vowels: `B c b`
- ➕ Insert `.` before each consonant: `.b.c.b`
- 🔡 Convert uppercase to lowercase.

## 💡 Solution Approach
1. 🔄 Iterate through the input string.
2. ❌ Check if a character is a vowel; if so, skip it.
3. ✅ If it is a consonant:
   - 🔡 Convert it to lowercase.
   - ➕ Append `.` before adding it to the output.
4. 🏗️ Construct and print the resulting string.

## 📊 Complexity Analysis
- ⏳ **Time Complexity**: O(n) — We traverse the string once.
- 🛠️ **Space Complexity**: O(n) — Storing the resulting transformed string.

This solution efficiently processes the string based on the given transformations. 🚀

