# Ultra-Fast Mathematician ⚡🧮

## 📖 Problem Statement
Shapur, a **gifted mathematician**, created a contest to test the speed of calculations. In this contest, given two binary numbers of the **same length**, the task is to generate a new binary number based on the following rule:
- The i-th digit of the output is **1** if the corresponding digits in the two given numbers **differ**.
- Otherwise, the i-th digit of the output is **0**.

This operation is known as the **bitwise XOR**.

### 🔢 Input
- Two lines containing binary numbers.
- The numbers consist **only of 0s and 1s** and have the **same length** (≤ 100).

### 🎯 Output
- A single line representing the resulting binary number.
- The output **must not omit leading zeros**.

## 📝 Examples
### ✅ Sample 1
#### **Input**
```
1010100
0100101
```
#### **Output**
```
1110001
```

### ✅ Sample 2
#### **Input**
```
000
111
```
#### **Output**
```
111
```

### ✅ Sample 3
#### **Input**
```
1110
1010
```
#### **Output**
```
0100
```

### ✅ Sample 4
#### **Input**
```
01110
01100
```
#### **Output**
```
00010
```

## 🛠️ Solution Approach
1. Read the two input binary strings.
2. Perform **bitwise XOR** for each corresponding digit:
   - If digits are different → **1**
   - If digits are the same → **0**
3. Print the resulting binary number while **preserving leading zeros**.

## 🔥 Constraints
- **Binary Strings**: Only `0` and `1` characters.
- **Same Length**: Both input numbers have the same length (≤ 100).
- **Leading Zeros**: Must be preserved in the output.

## 📌 Tags
- **Bitwise Operations** ⚡
- **Strings** 🔤
- **Mathematics** 🧮

---
🚀 **Ready to XOR? Let's Code!** 🎯