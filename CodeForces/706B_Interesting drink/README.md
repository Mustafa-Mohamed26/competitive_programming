# 🍹 Interesting Drink

## 📜 Problem Statement
Vasiliy likes to rest after hard work, so he often visits a nearby bar. As a programmer, he loves the famous drink **"Beecola"**, which is sold in `n` different shops across the city. The price of one bottle in the `i`-th shop is `xi` coins.

Vasiliy plans to buy his favorite drink for `q` consecutive days. On the `i`-th day, he has `mi` coins to spend. He wants to know in how many different shops he can buy a bottle of "Beecola" each day.

## 🔢 Input
- The first line contains a single integer `n` (`1 ≤ n ≤ 100,000`) — the number of shops.
- The second line contains `n` integers `x1, x2, ..., xn` (`1 ≤ xi ≤ 100,000`) — the price of a bottle in each shop.
- The third line contains a single integer `q` (`1 ≤ q ≤ 100,000`) — the number of days.
- The next `q` lines each contain one integer `mi` (`1 ≤ mi ≤ 10^9`) — the number of coins Vasiliy has on that day.

## 📤 Output
Print `q` integers. The `i`-th integer should be the number of shops where Vasiliy can buy a bottle of "Beecola" on the `i`-th day.

## 📝 Example
### 📥 Input
```
5
3 10 8 6 11
4
1
10
3
11
```
### 📤 Output
```
0
4
1
5
```

## 🔍 Explanation
1. **Day 1 (`mi = 1`)**: No shop sells the drink for `1` coin or less → `0`
2. **Day 2 (`mi = 10`)**: Shops with prices `3, 6, 8, 10` are affordable → `4`
3. **Day 3 (`mi = 3`)**: Only the shop with price `3` is affordable → `1`
4. **Day 4 (`mi = 11`)**: All shops (`3, 6, 8, 10, 11`) are affordable → `5`

## 💡 Solution Approach
1. **Sort the shop prices** to enable efficient searching.
2. **Use Binary Search (Upper Bound)**:
   - For each `mi`, determine how many prices are ≤ `mi` using `std::upper_bound` (in C++).
   - This runs in `O(log n)`, making it efficient for large constraints.

This approach ensures the solution runs efficiently within the given constraints. 🚀

