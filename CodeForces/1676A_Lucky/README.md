# Lucky? 🍀

## Problem Statement
A ticket is represented as a string consisting of six digits. A ticket is considered **lucky** if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, determine if it is lucky or not. Note that a ticket can have leading zeroes.

## Input Format ✉️
- The first line contains an integer `t` (1 ≤ `t` ≤ 10³) — the number of test cases.
- Each of the next `t` lines contains a single string consisting of **six digits**.

## Output Format 📃
For each test case, output **"YES"** if the given ticket is lucky, and **"NO"** otherwise.
- The answer is **case insensitive**, meaning "yEs", "yes", "Yes", and "YES" are all considered valid outputs.

## Example 📝
### Input
```
5
213132
973894
045207
000000
055776
```
### Output
```
YES
NO
YES
YES
NO
```

## Explanation 👨‍💻
1. **213132** → (2+1+3) = (1+3+2) → **YES**
2. **973894** → (9+7+3) ≠ (8+9+4) → **NO**
3. **045207** → (0+4+5) = (2+0+7) → **YES**
4. **000000** → (0+0+0) = (0+0+0) → **YES**
5. **055776** → (0+5+5) ≠ (7+7+6) → **NO**

## Approach 🔄
1. Read the integer `t` representing the number of test cases.
2. For each test case:
   - Read the six-digit string.
   - Calculate the sum of the first three digits.
   - Calculate the sum of the last three digits.
   - Compare the sums and print **"YES"** if they are equal, otherwise print **"NO"**.

## Complexity Analysis 💪
The solution runs in **O(1)** per test case since it involves basic arithmetic operations and string indexing.

## Implementation 🛠️
Refer to the `lucky_ticket.cpp` file for the complete C++ implementation.