# 🌟 Petya and Strings 🌟

## 💡 Problem Statement
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, meaning an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

## 📝 Input Format
The input consists of two lines:
1. ✉️ The first line contains the first string.
2. ✉️ The second line contains the second string.

The strings' lengths range from `1` to `100` inclusive. It is guaranteed that both strings have the same length and consist of uppercase and lowercase Latin letters.

## 📅 Output Format
Print:
- `-1` ➡️ if the first string is lexicographically smaller than the second one.
- `1` ➡️ if the first string is lexicographically greater than the second one.
- `0` ➡️ if both strings are equal (ignoring case).

## 📚 Examples
### ✅ Example 1
#### ♻️ Input
```
aaaa
aaaA
```
#### ⭐ Output
```
0
```
### ✅ Example 2
#### ♻️ Input
```
abs
Abz
```
#### ⭐ Output
```
-1
```
### ✅ Example 3
#### ♻️ Input
```
abcdefg
AbCdEfF
```
#### ⭐ Output
```
1
```

## 🔧 Solution Approach
1. ✔️ Convert both strings to lowercase.
2. ✔️ Compare them lexicographically.
3. ✔️ Print the corresponding result based on the comparison.

For a formal definition of lexicographical order, visit:
👉 [Lexicographical Order](http://en.wikipedia.org/wiki/Lexicographical_order) 👈