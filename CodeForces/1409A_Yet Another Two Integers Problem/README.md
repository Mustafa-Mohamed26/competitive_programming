# Yet Another Two Integers Problem

![🔢 Two Integers Icon](https://example.com/two_integers_icon.png)

## Problem Statement
You are given two integers `a` and `b`.

In one move, you can choose an integer `k` from `1` to `10` and either:
- ➕ Add `k` to `a`, or
- ➖ Subtract `k` from `a`.

Your task is to determine the **minimum number of moves** required to transform `a` into `b`.

## Input Format
![📥 Input Icon](https://example.com/input_icon.png)
- The first line contains an integer `t` (1 ≤ `t` ≤ 2×10⁴) — the number of test cases.
- Each of the next `t` lines contains two integers `a` and `b` (1 ≤ `a, b` ≤ 10⁹).

## Output Format
![📤 Output Icon](https://example.com/output_icon.png)
For each test case, print a single integer — the minimum number of moves required to obtain `b` from `a`.

## Example
![🔍 Example Icon](https://example.com/example_icon.png)
### Input
```
6
5 5
13 42
18 4
1337 420
123456789 1000000000
100500 9000
```
### Output
```
0
3
2
92
87654322
9150
```

## Explanation
1. **5 → 5**: No moves needed, answer is `0`.
2. **13 → 42**: Three moves: (13→23→32→42) using steps of 10, 9, and 10 respectively.
3. **18 → 4**: Two moves: (18→10→4) using steps of 8 and 6.

## Approach
![🧠 Strategy Icon](https://example.com/strategy_icon.png)

- Compute the absolute difference `|a - b|`.
- The optimal strategy is to reduce this difference using the maximum possible `k` values (from `10` to `1`).
- Since we can only use numbers from `1` to `10`, the minimum number of moves is calculated as:
  ```
  moves = ceil(|a - b| / 10)
  ```
  which is equivalent to:
  ```
  moves = (|a - b| + 9) / 10  (using integer division)
  ```

## Complexity Analysis
![⏳ Complexity Icon](https://example.com/complexity_icon.png)

- Each test case runs in **O(1)** time since it involves basic arithmetic operations.
- Overall, the solution runs in **O(t)** time for `t` test cases.

## Implementation
![💻 Code Icon](https://example.com/code_icon.png)

Refer to the `yet_another_two_integers.cpp` file for the C++ implementation.

