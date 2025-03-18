# Domino Piling

## 📝 Problem Statement
You are given a rectangular board of `M × N` squares. Also, you have an unlimited number of standard domino pieces of `2 × 1` squares. You are allowed to rotate the pieces. Your task is to place as many dominoes as possible on the board while ensuring the following conditions:

1. Each domino completely covers two squares.
2. No two dominoes overlap.
3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes that can be placed under these restrictions.

## 📥 Input Format
A single line contains two integers `M` and `N` — the board dimensions in squares (`1 ≤ M ≤ N ≤ 16`).

## 📤 Output Format
Output a single integer — the maximum number of dominoes that can be placed on the board.

## 🔢 Examples
### Example 1
#### 📌 Input
```
2 4
```
#### 📌 Output
```
4
```

### Example 2
#### 📌 Input
```
3 3
```
#### 📌 Output
```
4
```

## 💡 Solution Approach
To maximize the number of dominoes placed on the board:
1. Each domino covers exactly 2 squares.
2. The maximum number of dominoes that can fit is simply the total number of squares divided by 2.
3. Thus, the formula to compute the result is:
   
   \[ \text{max dominoes} = \frac{M \times N}{2} \]

Since `M × N` is always an integer (as per the constraints), integer division suffices to get the correct answer efficiently in `O(1)` time complexity.

