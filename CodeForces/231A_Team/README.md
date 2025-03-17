# 🏆 Team

## 📜 Problem Statement
Petya, Vasya, and Tonya are best friends who want to participate in a programming contest. Each problem has three opinions from them (either **0** or **1**), where **1** means a person is sure about the solution, and **0** means they are not sure.

A problem will be implemented if at least **two** of them are sure about its solution.

Your task is to determine how many problems they will implement.

## 📥 Input Format
- The first line contains an integer **n** (1 ≤ n ≤ 1000), the number of problems.
- The next **n** lines each contain three integers (**0** or **1**), representing the confidence of Petya, Vasya, and Tonya, respectively.

## 📤 Output Format
- Print a single integer representing the number of problems that will be implemented.

## 🔍 Constraints
- **1 ≤ n ≤ 1000**
- Each number in the input is either **0** or **1**

## 🎯 Example
### **📌 Input:**
```
3
1 1 0
1 1 1
1 0 0
```

### **📌 Output:**
```
2
```

### **📌 Explanation:**
1. The first problem has **(1,1,0)** → At least **two** sure → ✅ Implement
2. The second problem has **(1,1,1)** → All three sure → ✅ Implement
3. The third problem has **(1,0,0)** → Only one sure → ❌ Skip

Total problems implemented = **2**

## ⏳ Complexity Analysis
- **Reading Input:** O(n)
- **Processing Each Problem:** O(1)
- **Total Complexity:** O(n) (Linear Time Complexity)

## 💡 Solution Approach
1. Read the integer `n` from input.
2. Process each problem:
   - Read three integers representing the confidence of each friend.
   - If the sum of these three values is **2 or more**, increase the count.
3. Print the final count.

🚀 Happy Coding! 🎯