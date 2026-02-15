# 🎯 Target Practice - Problem Solution

## 📖 Problem Overview

You are given a **10×10 target board** divided into 5 square rings.

Each ring has a different score:

| Ring Position | Points |
| ------------- | ------ |
| Outermost     | 1      |
| Ring 2        | 2      |
| Ring 3        | 3      |
| Ring 4        | 4      |
| Center Ring   | 5      |

For each test case, you must calculate the total score based on the positions of arrows (`X`) on the board.

---

## 🧠 Key Idea

Instead of manually checking each ring using complex conditions, we use a mathematical observation:

For any cell `(i, j)`:

```
layer = min(i, j, 9 - i, 9 - j)
score += layer + 1
```

### ✅ Why This Works

* The minimum distance to any border determines the ring.
* Layer numbering starts from 0.
* So we add `1` to get the correct ring score.

This makes the solution:

* Clean
* Efficient
* Easy to maintain

---

## ⏱ Time Complexity

Each test case processes a 10×10 grid:

```
O(100) per test case
```

Maximum test cases = 1000

So total operations ≤ 100,000 → Very fast.

---

## 💻 C++ Implementation

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int score = 0;
        string grid[10];

        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int layer = min(min(i, j), min(9 - i, 9 - j));
                    score += layer + 1;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}
```

---

## 🎯 Example

Input:

```
1
....X.....
..........
..........
..........
..........
..........
..........
..........
..........
..........
```

Output:

```
5
```

---

## 🚀 Learning Takeaway

Instead of hardcoding shapes or boundaries:

> Always look for a mathematical property that simplifies the problem.

This approach reduces bugs and improves clarity.

---

### ✨ Author

Prepared as part of competitive programm
