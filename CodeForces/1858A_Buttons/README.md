# 🟢 A. Buttons – Game Theory Solution

## 📌 Problem Overview

Anna and Katie are playing a game inside a laboratory.

There are three types of buttons:

* `a` → Buttons only **Anna** can press
* `b` → Buttons only **Katie** can press
* `c` → Buttons that **either** of them can press

### 🎮 Game Rules

* Anna plays first.
* Each button can be pressed **at most once**.
* Players alternate turns.
* The player who cannot make a move **loses**.
* Both players play **optimally**.

For each test case, determine the winner:

* `First` → Anna wins
* `Second` → Katie wins

---

## 🧠 Key Insight

The winner is NOT determined simply by `(a + b + c)`.

Instead, we compare the exclusive buttons first.

### ✅ Winning Conditions

```
If a > b       → First
If a < b       → Second
If a == b:
    If c is odd  → First
    If c is even → Second
```

---

## 💡 Explanation

### Case 1: `a > b`

Anna has more exclusive buttons. Even if shared buttons are used optimally, Anna will always have one extra move.

### Case 2: `a < b`

Katie has more exclusive buttons and will eventually outlast Anna.

### Case 3: `a == b`

Exclusive buttons cancel out evenly.
The shared buttons (`c`) become decisive.

* If `c` is **odd**, Anna (who starts first) gets the last move.
* If `c` is **even**, Katie gets the last move.

---

## 💻 C++ Implementation

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a > b) {
            cout << "First\n";
        }
        else if (a < b) {
            cout << "Second\n";
        }
        else {
            if (c % 2 == 1)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }

    return 0;
}
```

---

## ⏱ Complexity Analysis

* Time Complexity: **O(t)**
* Space Complexity: **O(1)** per test case

---

## 🏁 Example

### Input

```
5
1 1 1
9 3 3
1 2 3
6 6 9
2 2 8
```

### Output

```
First
First
Second
First
Second
```

---

## 📚 Concepts Used

* Game Theory
* Parity (Odd/Even analysis)
* Greedy reasoning

---

✨ This problem is a great example of how small logical observations can replace full simulation.
