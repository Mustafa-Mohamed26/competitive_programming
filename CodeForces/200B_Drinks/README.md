# Orange Cocktail Problem 🍊🥤

## 📖 Problem Statement
Little Vasya loves **orange juice** and ensures that every drink in his fridge contains it. He wants to create a **cocktail** by mixing equal proportions of all drinks and determine the final **volume fraction of orange juice** in it.

### 🔢 Input
- The first line contains an integer **n** (1 ≤ n ≤ 100), the number of drinks.
- The second line contains **n** integers **pi** (0 ≤ pi ≤ 100), where each **pi** represents the percentage of orange juice in the i-th drink.

### 🎯 Output
- Print the **volume fraction of orange juice** in the final cocktail with **at least 12 decimal places**.
- The answer is considered correct if the absolute or relative error does not exceed **10⁻⁴**.

## 📝 Examples
### ✅ Sample 1
#### **Input**
```
3
50 50 100
```
#### **Output**
```
66.666666666667
```

### ✅ Sample 2
#### **Input**
```
4
0 25 50 75
```
#### **Output**
```
37.500000000000
```

## 🛠️ Solution Approach
1. Compute the **sum of all pi values**.
2. Divide the sum by **n** to get the average percentage of orange juice.
3. Print the result with high precision (at least **12 decimal places**).

## 🔥 Constraints
- **1 ≤ n ≤ 100** (small constraint allows simple averaging)
- **0 ≤ pi ≤ 100** (ensuring valid percentages)

## 📌 Tags
- **Math** 📊
- **Implementation** 💻

---
🚀 **Let's Code!** Happy Coding! 😊

