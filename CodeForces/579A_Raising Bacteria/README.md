# 🦠 Raising Bacteria

## 📌 Problem Statement
You want to raise bacteria in a box. Initially, the box is empty. Each morning, you can put any number of bacteria into the box. Each night, every bacterium in the box splits into two bacteria. You need to determine the minimum number of bacteria you need to put into the box across multiple days to reach exactly `x` bacteria at some moment.

## 🔢 Input
- A single integer `x` (1 ≤ x ≤ 10^9), representing the desired number of bacteria.

## 🎯 Output
- A single integer: the minimum number of bacteria that need to be put into the box.

## 🛠️ Explanation & Solution
The problem can be solved by observing the binary representation of `x`:
- Each `1` in the binary representation of `x` corresponds to a bacterium that must be added manually.
- The reason is that the bacteria double every night, meaning that the number of bacteria follows powers of two.
- The minimum number of bacteria to be added initially is equal to the number of `1`s in the binary representation of `x`.

### 📖 Example Walkthrough
#### Example 1:
**📝 Input:**
```
5
```
**🔢 Binary Representation:** `101`
- The number `5` in binary is `101`, which contains **2** ones.
- So, we need to add 2 bacteria manually.

**✅ Output:**
```
2
```

#### Example 2:
**📝 Input:**
```
8
```
**🔢 Binary Representation:** `1000`
- The number `8` in binary is `1000`, which contains **1** one.
- So, we need to add 1 bacterium manually.

**✅ Output:**
```
1
```

## ⏳ Complexity Analysis
- Since counting the number of `1`s in the binary representation of `x` takes `O(log x)`, the solution is efficient and runs in logarithmic time.

## 📌 Summary
- Convert `x` to binary and count the number of `1`s.
- This count represents the minimum number of bacteria to be added.
- Efficient solution with `O(log x)` complexity.

