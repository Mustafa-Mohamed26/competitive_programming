# 💰 Hit the Lottery - Problem Statement and Solution

## 📜 Problem Description
Allen has a lot of money in the bank, represented by an integer `n`, and he wants to withdraw the entire amount using the **minimum number of bills**. The available denominations are:
- 💵 $100
- 💵 $20
- 💵 $10
- 💵 $5
- 💵 $1

Your task is to determine the **minimum number of bills** required to withdraw exactly `n` dollars.

## 📥 Input Format
- 🔢 A single integer `n` (1 ≤ n ≤ 10⁹), representing the amount Allen wants to withdraw.

## 📤 Output Format
- 📝 Print a single integer — the **minimum number of bills** needed to withdraw `n` dollars.

## 📝 Examples
### Example 1
**📌 Input:**
```
125
```
**📌 Output:**
```
3
```
**🧐 Explanation:**
- Allen can withdraw:
  - 1 bill of $100
  - 1 bill of $20
  - 1 bill of $5
- **Total bills:** 3

### Example 2
**📌 Input:**
```
43
```
**📌 Output:**
```
5
```
**🧐 Explanation:**
- 2 bills of $20
- 3 bills of $1
- **Total bills:** 5

### Example 3
**📌 Input:**
```
1000000000
```
**📌 Output:**
```
10000000
```
**🧐 Explanation:**
- Allen can withdraw all his money using 10 million **$100** bills.

## 🏗️ Solution Approach
1. 🧮 Start with `n` dollars.
2. 🔢 Use **greedy approach**:
   - First, use as many $100 bills as possible.
   - Then, use as many $20 bills as possible.
   - Then, use as many $10 bills as possible.
   - Then, use as many $5 bills as possible.
   - Finally, use $1 bills for the remainder.
3. 🔄 Count the number of each bill and sum them up.

## ⏳ Complexity Analysis
- **O(1)** (constant time complexity), since we iterate through a fixed set of 5 denominations.

## 🛠️ Edge Cases Considered
1. **Smallest input:** `n = 1` → Needs exactly 1 bill.
2. **Multiple denominations required:** `n = 37` → Needs different bills.
3. **Largest input:** `n = 10⁹` → Ensuring efficiency for large values.

## 🎯 Conclusion
The problem is efficiently solved using a **greedy algorithm**, ensuring the **minimum number of bills** required to withdraw `n` dollars. 🚀

