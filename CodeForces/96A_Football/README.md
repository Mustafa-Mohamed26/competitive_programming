# ⚽ Football - Dangerous Situation Detection

## 📌 Problem Statement
Petya loves football very much. One day, while watching a football match, he noted the players' current positions as a string of zeroes and ones:
- `0` represents players of one team.
- `1` represents players of the other team.

A situation is considered **dangerous** if there are at least **seven** consecutive players from the same team standing in a row. Your task is to determine whether the given situation is dangerous.

## 📥 Input
- A **non-empty** string consisting of characters `0` and `1`, representing player positions.
- The length of the string does not exceed **100** characters.
- There is **at least one** player from each team present on the field.

## 📤 Output
- Print `YES` if the situation is dangerous.
- Print `NO` otherwise.

## 🏆 Examples
### Example 1
**Input:**
```
001001
```
**Output:**
```
NO
```

### Example 2
**Input:**
```
1000000001
```
**Output:**
```
YES
```

## 🔍 Solution Approach
- We need to check if the input string contains a **substring** of `0000000` (seven `0`s) or `1111111` (seven `1`s).
- If either pattern is found in the input string, print `YES`.
- Otherwise, print `NO`.

## ⏳ Complexity Analysis
- The solution can be efficiently implemented in **O(n)** time complexity by scanning the string for the required substring.

## 📌 Edge Cases Considered
- The smallest possible input: `01` (output: `NO`)
- A string where the dangerous condition is at the start: `000000011` (output: `YES`)
- A string where the dangerous condition is at the end: `110000000` (output: `YES`)
- A string with alternating values: `1010101010` (output: `NO`)
- The longest possible string (100 characters) without danger
- The longest possible string (100 characters) with danger in the middle

## 🏁 Conclusion
This problem is a simple string-search task that can be efficiently solved using built-in substring search operations.

