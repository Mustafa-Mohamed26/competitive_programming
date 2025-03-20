# 🎉 Beautiful Year Problem

## 📌 Problem Statement
The year **2013** was the first year after **1987** where all digits are distinct. Given a year `y`, find the smallest year strictly larger than `y` that has only distinct digits.

## 📝 Input
- A single integer `y` (`1000 ≤ y ≤ 9000`) representing the given year.

## 📤 Output
- A single integer — the next beautiful year where all digits are distinct.

## 🔍 Example
### Input
```
1987
```
### Output
```
2013
```

### Input
```
2013
```
### Output
```
2014
```

## 💡 Approach
1. Start from `y + 1` and keep incrementing.
2. Convert the number to a string and check if all digits are unique.
3. Print the first valid year found.

## 🔥 Complexity Analysis
- **Time Complexity:** `O(1)`, since a valid year is found within at most `9` iterations.
- **Space Complexity:** `O(1)`, as only a few variables are used.

## 🎯 Tags
- 🔢 Brute Force
- 🎭 Unique Digits
- 🚀 Simple Simulation