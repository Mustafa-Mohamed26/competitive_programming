# 🔢 Borze Code Decoder

## 📜 Problem Statement
In Berland, ternary numeric notation is popular. To telegraph ternary numbers, the **Borze alphabet** is used:

- `0` is represented as `.`
- `1` is represented as `-.`
- `2` is represented as `--`

Your task is to **decode** a given Borze code and determine the corresponding ternary number.

## 🔢 Input
- The first line contains a **string** in Borze code.
- The string length is between **1 and 200** characters.
- The input is guaranteed to be a valid Borze code of some ternary number (which may have leading zeroes).

## 📤 Output
- Print the **decoded ternary number** (it may contain leading zeroes).

## 📝 Example
### 📥 Input
```
.-.--
```
### 📤 Output
```
012
```
### 📥 Input
```
--.
```
### 📤 Output
```
20
```
### 📥 Input
```
-..-.--
```
### 📤 Output
```
1012
```

## 💡 Solution Approach
1. **Iterate through the string**:
   - If a `.` is found → Append `0` to the result.
   - If a `-` is found:
     - Check the next character:
       - If it's `.` → Append `1` (`-.` detected) and move forward.
       - If it's `-` → Append `2` (`--` detected) and move forward.
2. **Efficiently process the string** using a loop to decode symbols sequentially.

This method ensures decoding in **O(n)** time complexity, making it efficient even for the maximum input size. 🚀

