# Games - Problem Statement and Solution ⚽🎮

## Problem Description
Manao, working at a sports TV channel, observes a national football championship where each team has a home and a guest uniform. The teams follow these rules:
1. 🏠 A team wears its home uniform while playing at its home stadium.
2. 🚗 A team wears its guest uniform while playing as a guest.
3. ⚠️ If the host's home uniform matches the guest's uniform, the host wears its guest uniform instead.

Given `n` teams, each playing every other team once at home, we need to determine how many times a host team is forced to wear its guest uniform.

## Input Format 📝
- 📌 The first line contains an integer `n` (2 ≤ n ≤ 30) — the number of teams.
- 📌 The next `n` lines each contain two distinct space-separated integers `hi, ai` (1 ≤ hi, ai ≤ 100), representing the home and guest uniform colors of the `i`-th team.

## Output Format 📤
- ✅ A single integer representing the number of times a host team has to wear its guest uniform.

## Examples 🔍
### Example 1
**Input:**
```
3
1 2
2 4
3 4
```
**Output:**
```
1
```
**Explanation:** The only match where the host team has to switch to the guest uniform is when team 2 (home: 2, guest: 4) hosts team 1 (home: 1, guest: 2).

### Example 2
**Input:**
```
4
100 42
42 100
5 42
100 5
```
**Output:**
```
5
```

### Example 3
**Input:**
```
2
1 2
1 2
```
**Output:**
```
0
```

## Solution Approach 🔢
1. 📥 Read the integer `n`.
2. 🗂️ Store the home and guest uniform colors for each team.
3. 🔄 Iterate through all possible matches (each team hosting every other team once).
4. 🔍 Count the cases where the host's home uniform matches the guest's uniform.
5. 📤 Print the final count.

## Complexity Analysis 📊
- **Time Complexity:** `O(n^2)`, since we compare each team against every other team once.
- **Space Complexity:** `O(n)`, as we store home and guest uniforms for `n` teams.

## Conclusion 🎯
This solution efficiently counts the number of games where the host team must wear its guest uniform by checking uniform color conflicts. ⚽🏆

