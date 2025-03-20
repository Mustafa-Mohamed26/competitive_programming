# 🍀 Lucky Division

## 📌 Problem Statement
Petya loves **lucky numbers**. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits **4** and **7**.

For example:
- ✅ **Lucky numbers:** 47, 744, 4
- ❌ **Not lucky numbers:** 5, 17, 467

Petya calls a number **almost lucky** if it can be evenly divided by some lucky number.

Your task is to determine if a given number `n` is **almost lucky**.

## 🔢 Input
- The input consists of a single integer `n` \(1 \leq n \leq 1000\), which needs to be checked.

## 📤 Output
- Print **"YES"** (without quotes) if `n` is **almost lucky**.
- Otherwise, print **"NO"**.

## ✅ Examples
### Example 1
**Input:**
```
47
```
**Output:**
```
YES
```
### Example 2
**Input:**
```
16
```
**Output:**
```
YES
```
### Example 3
**Input:**
```
78
```
**Output:**
```
NO
```

## 🔗 Related Topics
- ✅ Number Properties
- ✅ Divisibility Rules
- ✅ Iterative Checking

## 🏁 Conclusion
This problem can be solved by checking if `n` is a lucky number itself or if it is divisible by any lucky number. A simple loop over known lucky numbers within the given range can determine the result efficiently. 🚀