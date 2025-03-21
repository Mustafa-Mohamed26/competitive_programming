# Even Odds Problem 🔢

## 📖 Problem Statement
Volodya, a **nonconformist**, is dissatisfied with the usual order of **natural numbers**. He rearranges the first **n** numbers such that:
1. **All odd numbers** from **1 to n** are listed first (in ascending order).
2. **All even numbers** from **1 to n** follow (in ascending order).

Your task is to find the **k-th** number in this new sequence.

### 🔢 Input
- The input consists of two integers **n** and **k** (1 ≤ k ≤ n ≤ 10¹²).

### 🎯 Output
- Print the **k-th** number in the sequence after reordering.

## 📝 Examples
### ✅ Sample 1
#### **Input**
```
10 3
```
#### **Output**
```
5
```

### ✅ Sample 2
#### **Input**
```
7 7
```
#### **Output**
```
6
```

## 🛠️ Solution Approach
1. Count the **total number of odd numbers**:
   - Since odd numbers appear first, this count is **(n + 1) / 2**.
2. If **k ≤ number of odd numbers**, the answer is the **k-th odd number**:
   - Formula: **2k - 1**.
3. If **k is greater**, find the **(k - odd count)-th even number**:
   - Formula: **2 × (k - odd count)**.

## 🔥 Constraints
- **1 ≤ k ≤ n ≤ 10¹²** (efficient O(1) solution required)

## 📌 Tags
- **Mathematics** 📐
- **Implementation** 💻

---
🚀 **Let's Code!** Happy Coding! 😊

