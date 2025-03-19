# 🔠 Word Case Correction

## 📌 Problem Statement
Vasya is frustrated that people mix uppercase and lowercase letters in words online. He wants to develop a browser extension that changes every word's case to either all uppercase or all lowercase. The transformation should be done while changing the fewest number of letters possible.

- If a word has **more uppercase letters** than lowercase ones, convert the entire word to uppercase.
- Otherwise, convert the entire word to lowercase.
- If the word contains an equal number of uppercase and lowercase letters, convert it to lowercase.

## 🔢 Input
- A single word `s` consisting of **uppercase and lowercase** Latin letters (`a-z, A-Z`).
- The length of `s` is between `1` and `100`.

## 🎯 Output
- Print the corrected version of the word `s` based on the given rules.

## 📖 Examples
### Example 1
**Input:**
```
HoUse
```
**Output:**
```
house
```

### Example 2
**Input:**
```
ViP
```
**Output:**
```
VIP
```

### Example 3
**Input:**
```
maTRIx
```
**Output:**
```
matrix
```

## 💡 Approach
1. **Count** the number of uppercase and lowercase letters in the word.
2. **Compare** their counts:
   - If **uppercase > lowercase**, convert the word to uppercase.
   - Otherwise, convert the word to lowercase.
3. **Print** the modified word.

## ⏱️ Complexity Analysis
- The solution runs in **O(n)** time, where `n` is the length of the word, since we only iterate over the characters once.