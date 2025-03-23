# 🐉 Dragons

## 📜 Problem Statement
Kirito is playing an MMORPG and is stuck on a level. To progress, he must defeat **n** dragons. Both Kirito and the dragons have a strength level represented as an integer. The duel outcome is determined as follows:

- ⚔️ If Kirito's strength is **less than or equal to** a dragon's strength, he **loses** the duel and dies.
- 🏆 If Kirito's strength is **greater than** a dragon's strength, he **defeats** the dragon and gains a **bonus** strength increase.

Kirito can fight the dragons in **any order**. The goal is to determine whether Kirito can defeat **all dragons** without losing a single duel.

## 📥 Input
- 📌 The first line contains two integers **s** and **n**:
  - **s** (1 ≤ s ≤ 10⁴): Kirito's initial strength.
  - **n** (1 ≤ n ≤ 10³): Number of dragons.
- 📌 The next **n** lines each contain two integers **xi** and **yi**:
  - **xi** (1 ≤ xi ≤ 10⁴): The **strength** of the **i-th** dragon.
  - **yi** (0 ≤ yi ≤ 10⁴): The **bonus** Kirito gains after defeating this dragon.

## 📤 Output
✅ Print **"YES"** if Kirito can defeat all dragons and move to the next level; otherwise, print **"NO"**.

## 📝 Example
### Example 1
**Input:**
```
2 2
1 99
100 0
```
**Output:**
```
YES
```
**Explanation:**
- Kirito fights the first dragon (strength = 1), wins, and gains **99** strength.
- His new strength is **101**.
- He now fights the second dragon (strength = 100) and wins.
- Since he defeated all dragons, the answer is **YES**.

### Example 2
**Input:**
```
10 1
100 100
```
**Output:**
```
NO
```
**Explanation:**
- The only dragon has strength **100**, which is greater than Kirito's initial strength of **10**.
- Kirito **loses** immediately, so the answer is **NO**.

## 🔍 Solution Approach
1. 📊 **Sorting:**
   - Since Kirito can fight in any order, sort the dragons in **ascending order** of their strength (`xi`).
2. 🎯 **Greedy Strategy:**
   - Iterate through the sorted list.
   - If Kirito’s strength is **greater** than the dragon’s strength, defeat it and increase Kirito’s strength.
   - If Kirito’s strength is **less than or equal to** a dragon’s strength, print **"NO"** and stop.
3. ✅ **Final Check:**
   - If all dragons are defeated, print **"YES"**.

## 🏷️ Tags
- ⚔️ Greedy Algorithm
- 🔢 Sorting
- 🎮 Game Strategy