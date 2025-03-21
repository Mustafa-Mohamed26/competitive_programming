# 📝 Pangram

## 📖 Problem Statement
A word or a sentence in some language is called a **pangram** if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in **uppercase or lowercase**.

## 🔢 Input Format
- The first line contains a single integer `n` (1 ≤ n ≤ 100) — the number of characters in the string.
- The second line contains the string, consisting only of uppercase and lowercase Latin letters.

## 🖨️ Output Format
- Output **"YES"** if the string is a pangram.
- Output **"NO"** otherwise.

## 🔍 Examples

### ✅ Example 1
#### Input
```
12
toosmallword
```
#### Output
```
NO
```

### ✅ Example 2
#### Input
```
35
TheQuickBrownFoxJumpsOverTheLazyDog
```
#### Output
```
YES
```

## 💡 Solution Approach
1. Convert the input string to **lowercase** to handle case insensitivity.
2. Use a **set** to store all unique letters in the string.
3. Check if the set contains **all 26 English letters**.
4. If yes, print "YES"; otherwise, print "NO".

## 🕒 Complexity Analysis
- **Time Complexity**: O(n) (where `n` is the length of the input string)
- **Space Complexity**: O(1) (since we only store a set of at most 26 characters)

🚀 **Happy Coding!**