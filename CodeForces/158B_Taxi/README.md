# 🚖 Taxi

## 📜 Problem Statement
After their lessons, `n` groups of schoolchildren decided to visit Polycarpus to celebrate his birthday. Each `i-th` group consists of `sᵢ` friends (1 ≤ `sᵢ` ≤ 4), and they want to travel together.

They decided to take taxis, where each taxi can accommodate at most four passengers. Multiple groups can share a taxi as long as they fit within the capacity.

Your task is to determine the minimum number of taxis required to transport all children while ensuring that each group stays together.

## 📥 Input
- The first line contains an integer `n` (1 ≤ `n` ≤ 10⁵) — the number of groups.
- The second line contains `n` space-separated integers `s₁, s₂, ..., sₙ` (1 ≤ `sᵢ` ≤ 4), where each `sᵢ` represents the number of children in the `i-th` group.

## 📤 Output
- Print a single integer — the minimum number of taxis required.

## 🔢 Examples
### Example 1
**Input:**
```
5
1 2 4 3 3
```
**Output:**
```
4
```
**📝 Explanation:**
- Taxi 1: Group with 4 children.
- Taxi 2: Group with 3 children.
- Taxi 3: Group with 3 children.
- Taxi 4: Groups with 1 and 2 children.

### Example 2
**Input:**
```
8
2 3 4 4 2 1 3 1
```
**Output:**
```
5
```

## ⚠️ Constraints
- `1 ≤ n ≤ 10⁵`
- `1 ≤ sᵢ ≤ 4`

## 💡 Solution Approach
1. Count the number of groups of size `1`, `2`, `3`, and `4`.
2. Assign all `4`s to separate taxis.
3. Pair `3`s with `1`s if possible; otherwise, `3`s get separate taxis.
4. Pair `2`s together; if one remains, it can pair with up to two `1`s.
5. Assign remaining `1`s in groups of four per taxi.

## 🏷️ Tags
- 🏗️ Greedy Algorithm
- 🚕 Taxi Allocation
- 📊 Grouping Strategy

