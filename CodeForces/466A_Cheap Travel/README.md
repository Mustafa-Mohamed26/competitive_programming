# 🚇 Cheap Travel

## 📝 Problem Statement
Ann has recently started commuting by subway. She discovered two ticket options:
- A **single-ride ticket** costs `a` rubles.
- A **multi-ride ticket** covers `m` rides and costs `b` rubles.

Ann needs to take the subway `n` times. Your task is to determine the **minimum cost** required to make `n` rides.

## 📥 Input
A single line containing four space-separated integers:
- `n` (1 ≤ n ≤ 1000) — the number of rides Ann plans to take.
- `m` (1 ≤ m ≤ 1000) — the number of rides covered by the multi-ride ticket.
- `a` (1 ≤ a ≤ 1000) — the cost of a single-ride ticket.
- `b` (1 ≤ b ≤ 1000) — the cost of an `m`-ride ticket.

## 📤 Output
Print a single integer — the **minimum amount of rubles** Ann needs to spend.

## 🔍 Examples
### ✅ Input
```
6 2 1 2
```
### ✅ Output
```
6
```
### ✅ Input
```
5 2 2 3
```
### ✅ Output
```
8
```

## 💡 Solution Approach
1. 🧮 Compute the cost if Ann buys only **single-ride tickets** (`n * a`).
2. 🎟 Compute the cost if Ann buys only **multi-ride tickets** (`ceil(n / m) * b`).
3. 🔄 Compute a **mixed strategy**, where Ann buys full `m`-ride tickets and then purchases the remaining single rides.
4. ✅ Choose the **minimum** of the three computed costs.

This ensures an **optimal** and **efficient** solution.

