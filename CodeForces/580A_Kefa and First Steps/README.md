# Kefa and First Steps - Problem Statement and Solution 💎

## Problem Description 📝
Kefa wants to analyze his earnings over `n` days and determine the longest non-decreasing subsegment in his earnings sequence. A subsegment is a continuous part of the sequence, and a non-decreasing subsegment is one where each number is greater than or equal to the previous one.

## Input Format ✉️
- The first line contains an integer `n` (1 ≤ n ≤ 10^5) — the number of days.
- The second line contains `n` integers `a1, a2, ..., an` (1 ≤ ai ≤ 10^9) — the amount of money Kefa made on each day.

## Output Format 📝
- A single integer representing the length of the longest non-decreasing subsegment.

## Examples 📚
### Example 1
**Input:**
```
6
2 2 1 3 4 1
```
**Output:**
```
3
```
**Explanation:** The longest non-decreasing subsegment is `[1, 3, 4]`.

### Example 2
**Input:**
```
3
2 2 9
```
**Output:**
```
3
```
**Explanation:** The longest non-decreasing subsegment is `[2, 2, 9]`.

## Solution Approach 🤖
1. Initialize `max_length` to 1 and `current_length` to 1.
2. Iterate through the array from the second element to the last:
   - If the current element is greater than or equal to the previous one, increase `current_length`.
   - Otherwise, update `max_length` and reset `current_length` to 1.
3. After the loop, update `max_length` one last time.
4. Print `max_length`.

## Edge Cases Considered 🔄
- All elements are the same.
- All elements are strictly increasing or decreasing.
- The longest subsegment appears at the start or end of the sequence.

## Complexity Analysis ⌛
- **Time Complexity:** `O(n)`, as we traverse the sequence once.
- **Space Complexity:** `O(1)`, since we use only a few extra variables.

## Conclusion 🚀
This approach efficiently finds the longest non-decreasing subsegment in the earnings sequence using a single traversal. 🚀