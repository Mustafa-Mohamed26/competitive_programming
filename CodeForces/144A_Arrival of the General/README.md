# 🏅 Arrival of the General - Problem Statement

## 📜 Problem Description
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of Colonel SuperDuper. The colonel ordered all `n` soldiers to line up on the parade ground.

By military charter, soldiers should stand in non-increasing order of height. However, due to time constraints, they line up arbitrarily. The general is short-sighted and considers the lineup correct if:
- 🏆 The first soldier in the line has the **maximum height**.
- 🥇 The last soldier in the line has the **minimum height**.

The order of the other soldiers does not matter. The task is to determine the **minimum number of swaps** needed to achieve this order.

## 📥 Input Format
1. 🔢 An integer `n` (2 ≤ n ≤ 100) representing the number of soldiers.
2. 📏 A sequence of `n` space-separated integers representing the heights of the soldiers in their initial order.

Each height value is in the range (1 ≤ ai ≤ 100), and the heights are not necessarily unique.

## 📤 Output Format
- 🕐 Print a single integer representing the **minimum number of swaps** required to make the first soldier the tallest and the last soldier the shortest.

## 📝 Examples
### Example 1
**📌 Input:**
```
4
33 44 11 22
```
**📌 Output:**
```
2
```

### Example 2
**📌 Input:**
```
7
10 10 58 31 63 40 76
```
**📌 Output:**
```
10
```

## 🏗️ Solution Approach
1. 🔎 Find the **maximum height** and its **first occurrence index**.
2. 🔎 Find the **minimum height** and its **last occurrence index**.
3. 🔄 Calculate swaps required:
   - Move the tallest soldier to index `0`.
   - Move the shortest soldier to index `n-1`.
   - ⚠️ If the tallest soldier is before the shortest soldier initially, subtract one swap (as one position is already adjusted).

## ⏳ Complexity Analysis
- 🔍 Finding max/min values: **O(n)**.
- 🔍 Finding first/last occurrence: **O(n)**.
- ⚡ Total time complexity: **O(n)**.

## 🛠️ Edge Cases Considered
1. 🧩 **Minimal Input:** `n = 2` with identical heights.
2. ✅ **Already Sorted:** Soldiers are already in the correct order.
3. 🔄 **Multiple Max/Min Occurrences:** Ensuring correct index selection.

## 🎯 Conclusion
This problem is efficiently solved using basic array operations and index calculations, ensuring a minimal number of swaps to meet the general's requirements. 🚀

