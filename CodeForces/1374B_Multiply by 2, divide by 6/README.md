# README: B. Multiply by 2, Divide by 6

## Problem Overview

You are given an integer `n`. In one move, you can either:

- Multiply `n` by 2.
- Divide `n` by 6 (only if it is divisible by 6).

Your task is to determine the **minimum number of moves** needed to reach 1 from `n`, or determine if it's impossible.

Multiple test cases `t` are provided.

## Input Format

- The first line contains an integer `t` (1 ≤ t ≤ 2×10⁴) — the number of test cases.
- Each of the next `t` lines contains one integer `n` (1 ≤ n ≤ 10⁹).

## Output Format

For each test case, print the minimum number of moves to reach 1 from `n`. If it is impossible, print `-1`.

## Example

**Input:**

```
7
1
2
3
12
12345
15116544
387420489
```

**Output:**

```
0
-1
2
-1
-1
12
36
```

## Example Explanation

For `n = 15116544`, a sequence of moves is:

1. Divide by 6 → 2519424
2. Divide by 6 → 419904
3. Divide by 6 → 69984
4. Divide by 6 → 11664
5. Multiply by 2 → 23328
6. Divide by 6 → 3888
7. Divide by 6 → 648
8. Divide by 6 → 108
9. Multiply by 2 → 216
10. Divide by 6 → 36
11. Divide by 6 → 6
12. Divide by 6 → 1

Total moves = 12

## Approach

1. **Simulation Approach:**
   - While `n != 1`:
     - If `n % 6 == 0`, divide by 6.
     - Else if `n % 3 == 0`, multiply by 2.
     - Else, impossible (output `-1`).

   - Count each move.

2. **Mathematical Optimization:**
   - Count factors of 2 and 3 in `n`.
   - If `n` contains any other prime factors → impossible.
   - Minimum moves can be calculated using factor counts.

## Constraints

- 1 ≤ t ≤ 2×10⁴
- 1 ≤ n ≤ 10⁹

## Sample Code (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int count = 0;

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
            }
            else if (n % 3 == 0) {
                n *= 2;
            }
            else {
                count = -1;
                break;
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}

```

This approach ensures we find the minimum moves or determine impossibility efficien
