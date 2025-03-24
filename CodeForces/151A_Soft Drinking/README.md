# Soft Drinking ☕🍋🧂

## 📜 Problem Statement
This winter is extremely cold in Nvodsk! A group of `n` friends decided to buy `k` bottles of a soft drink called **"Take-It-Light"** to warm up. Each bottle contains `l` milliliters of the drink. Additionally, they bought `c` limes 🍋 and sliced each lime into `d` pieces. They also purchased `p` grams of salt ⛄.

To make a toast 🧂, each friend requires:
- `nl` milliliters of the drink ☕
- `1` slice of lime 🍋
- `np` grams of salt ⛄

The friends want to make as many toasts as possible, ensuring that each of them gets the same amount. How many toasts can each friend make?

## 🔢 Input
A single line contains **eight** space-separated integers:
- `n` (1 ≤ n ≤ 1000) — Number of friends 🧑‍🤝🧑
- `k` (1 ≤ k ≤ 1000) — Number of bottles 🥤
- `l` (1 ≤ l ≤ 1000) — Milliliters per bottle ☕
- `c` (1 ≤ c ≤ 1000) — Number of limes 🍋
- `d` (1 ≤ d ≤ 1000) — Slices per lime ✂️
- `p` (1 ≤ p ≤ 1000) — Grams of salt ⛄
- `nl` (1 ≤ nl ≤ 1000) — Milliliters needed per toast ☕
- `np` (1 ≤ np ≤ 1000) — Grams of salt needed per toast ⛄

## 🎯 Output
Print a single integer — the maximum number of toasts each friend can make. 🧂🚀

## 📌 Examples
### ✅ Input 1:
```
3 4 5 10 8 100 3 1
```
### 🎯 Output 1:
```
2
```
### ✅ Input 2:
```
5 100 10 1 19 90 4 3
```
### 🎯 Output 2:
```
3
```
### ✅ Input 3:
```
10 1000 1000 25 23 1 50 1
```
### 🎯 Output 3:
```
0
```

## 🔍 Explanation
For the first example:
- Total drink available: `4 * 5 = 20` milliliters ☕
- Total lime slices: `10 * 8 = 80` slices 🍋
- Total salt available: `100` grams ⛄
- Maximum possible toasts based on drink: `20 / 3 = 6`
- Maximum possible toasts based on lime slices: `80`
- Maximum possible toasts based on salt: `100`
- Since there are `3` friends, the final answer is `min(6, 80, 100) / 3 = 2`

## 🛠 Solution Approach 💡
1. Calculate the total amount of each resource:
   - **Total drink available** = `k * l` ☕
   - **Total lime slices** = `c * d` 🍋
   - **Total salt available** = `p` ⛄
2. Compute the possible toasts each resource allows:
   - `total_drink / nl`
   - `total_lime_slices / 1`
   - `total_salt / np`
3. The answer is the **minimum** of these values divided by `n` (number of friends).

---
📘 This README provides a clear explanation of the problem, input/output format, example cases, and an approach to solve it. ☕🍋🧂🚀