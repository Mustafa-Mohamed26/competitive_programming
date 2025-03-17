# 🍉 Watermelon Problem  

## 📝 Problem Statement  
Pete and Billy bought a watermelon. They love **even numbers** and want to split it into two **positive even parts**.  

Your task is to determine whether they can split the watermelon into **two even-weighted parts** (not necessarily equal).  

---

## 📥 Input  
- A single integer **w** (1 ≤ w ≤ 100) representing the weight of the watermelon.  

## 📤 Output  
- Print `"YES"` if it is possible to split the watermelon as required.  
- Otherwise, print `"NO"`.  

---

## 🏆 Examples  

### ✅ Example 1  
#### **Input: YES**

#### **Explanation:**  
The watermelon can be split as `2 + 6` or `4 + 4`. Both are valid.  

---

### ❌ Example 2  
#### **Input: 3** 
#### **Output: NO**  

#### **Explanation:**  
There is no way to split **3** into two even positive numbers.  

---

## 🔍 Constraints  
- **w** is a positive integer between **1 and 100**.  
- The two parts must be **positive** even numbers.  

---

## 💡 Solution Approach  

1. **Check if `w` is even** (divisible by 2).  
2. **Check if `w` is greater than 2**, since the smallest valid even split is `2 + 2` (**w = 4**).  
3. If both conditions hold, print `"YES"`, otherwise print `"NO"`.  

---


