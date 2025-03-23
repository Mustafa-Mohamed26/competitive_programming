# 🐍 Fox And Snake

## 📜 Problem Statement
Fox Ciel is learning programming and wants to draw a snake pattern on an `n × m` table. The snake follows a specific pattern:
1. The head starts at `(1,1)` and moves right to `(1,m)`.
2. It moves down two rows to `(3,m)` and moves left to `(3,1)`.
3. This pattern repeats for all subsequent rows.

Your task is to generate and print this snake pattern, where:
- `#` represents the snake's body.
- `.` represents an empty space.

## 📥 Input
- A single line containing two integers `n` and `m` (`3 ≤ n, m ≤ 50`).
- `n` is always an odd number.

## 📤 Output
- Print `n` lines, each containing a string of `m` characters representing the snake pattern.

## 🔢 Examples
### Example 1
**Input:**
```
3 3
```
**Output:**
```
###
..#
###
```

### Example 2
**Input:**
```
3 4
```
**Output:**
```
####
...#
####
```

### Example 3
**Input:**
```
5 3
```
**Output:**
```
###
..#
###
#..
###
```

## 📝 Explanation
- The first row is always fully filled with `#`.
- The second row (if any) has `#` at the rightmost end.
- The third row is fully filled with `#`.
- The fourth row (if any) has `#` at the leftmost end.
- The pattern continues for `n` rows.

## ⚠️ Constraints
- `3 ≤ n, m ≤ 50`
- `n` is always odd.

## 💡 Solution Approach
1. Loop through rows from `1` to `n`.
2. If it's an odd row (`1, 3, 5,...`), print `#` for all `m` columns.
3. If it's an even row (`2, 4, 6,...`):
   - If the row index is a multiple of `4`, place `#` at the leftmost column.
   - Otherwise, place `#` at the rightmost column.

## 🏷️ Tags
- 🐍 Pattern Printing
- 🔲 Grid Processing
- 🏗️ Implementation

