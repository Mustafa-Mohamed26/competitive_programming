# ✨ Helpful Maths ✨

## 💡 Problem Statement
Xenia, a beginner mathematician, is a third-year student in elementary school and is learning addition.

Her teacher wrote down a sum consisting of numbers 1, 2, and 3 separated by `+`. However, Xenia can only calculate the sum if the numbers are in non-decreasing order.

Your task is to rearrange the given sum so that it is sorted in non-decreasing order.

## 📝 Input Format
- The input consists of a single non-empty string `s`, representing the sum Xenia needs to count.
- The string contains only digits (`1`, `2`, `3`) and the `+` character.
- The string is a valid mathematical expression with at most `100` characters.

## 📅 Output Format
- Print the sorted sum, where numbers appear in non-decreasing order while maintaining the `+` signs.

## 📚 Examples
### ✅ Example 1
#### ♻️ Input
```
3+2+1
```
#### ⭐ Output
```
1+2+3
```
### ✅ Example 2
#### ♻️ Input
```
1+1+3+1+3
```
#### ⭐ Output
```
1+1+1+3+3
```
### ✅ Example 3
#### ♻️ Input
```
2
```
#### ⭐ Output
```
2
```

## 🔧 Solution Approach
1. ✔️ Extract the numbers from the input string.
2. ✔️ Sort the extracted numbers in non-decreasing order.
3. ✔️ Reconstruct the string by inserting `+` between the sorted numbers.
4. ✔️ Print the final result.

This ensures that Xenia can count the sum easily! 🚀

