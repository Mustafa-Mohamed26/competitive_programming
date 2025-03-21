# Twins Problem 👬💰

## 📖 Problem Statement
Imagine you have a **twin sibling**, and your mother left you **n coins** with different values. Instead of splitting the money equally, you decide to take the **minimum number of coins** whose total value is **strictly greater** than what remains for your twin.

### 🔢 Input
- The first line contains an integer **n** (1 ≤ n ≤ 100), the number of coins.
- The second line contains **n** integers **a1, a2, ..., an** (1 ≤ ai ≤ 100), the values of the coins.

### 🎯 Output
- Print a single integer — the **minimum number of coins** you need to take to have strictly more money than your twin.

## 📝 Examples
### ✅ Sample 1
#### **Input**
```
2
3 3
```
#### **Output**
```
2
```

### ✅ Sample 2
#### **Input**
```
3
2 1 2
```
#### **Output**
```
2
```

## 🛠️ Solution Approach
1. **Sort the coins in descending order** (pick the highest values first).
2. **Keep adding coins** to your collection until your total sum **exceeds** the remaining sum.
3. **Count the minimum number of coins** needed to achieve this condition.

## 🔥 Constraints
- **1 ≤ n ≤ 100** (small constraint allows a simple greedy approach)
- **1 ≤ ai ≤ 100** (ensuring valid coin values)

## 📌 Tags
- **Greedy Algorithm** 🤖
- **Sorting** 📊

---
🚀 **Let's Code!** Happy Coding! 😊