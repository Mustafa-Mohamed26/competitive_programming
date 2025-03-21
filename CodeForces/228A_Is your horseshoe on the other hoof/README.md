# Is Your Horseshoe on the Other Hoof? 🐎

## 📌 Problem Statement
Valera the Horse wants to attend a party in style by wearing four horseshoes of different colors. However, he only has four horseshoes from last year, and some of them might be of the same color. To ensure that he wears four unique colors, he may need to buy additional horseshoes.

Your task is to determine the **minimum number of horseshoes** Valera needs to buy to have four distinct colors.

## 📥 Input Format
- A single line containing four space-separated integers **s1, s2, s3, s4**.
- Each integer represents the color of a horseshoe (1 ≤ s1, s2, s3, s4 ≤ 10^9).

## 📤 Output Format
- Print a single integer — the **minimum number of horseshoes** Valera needs to buy.

## 🔍 Example
### 📝 Input 1
```
1 7 3 3
```
### ✅ Output 1
```
1
```
**Explanation:** The given horseshoes have colors `{1, 7, 3, 3}`. There are **3 unique colors** (1, 7, 3), so Valera needs to buy **1 more** horseshoe to get 4 unique ones.

### 📝 Input 2
```
7 7 7 7
```
### ✅ Output 2
```
3
```
**Explanation:** All horseshoes are of the same color `{7, 7, 7, 7}`. Valera needs to buy **3 more** horseshoes of different colors.

## 🏆 Solution Approach
1. **Use a Set:** Since a set automatically removes duplicates, we can store the given colors in a set.
2. **Calculate Missing Colors:** The number of horseshoes Valera needs to buy is `4 - (size of the set)`.

📌 This approach efficiently determines the minimum number of horseshoes Valera needs to buy. 🚀

