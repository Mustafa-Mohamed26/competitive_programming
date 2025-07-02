# Vanya and Vova Game Solver

## 🧠 Problem Description

Vanya and Vova are playing a number game with the following rules:

* The game starts with an integer `n`.
* Players take turns. Vanya moves first.
* On each turn, a player can either add or subtract 1 from `n`.
* If **after Vanya’s move** the number becomes divisible by 3, **Vanya wins**.
* If **10 total moves** are made and Vanya hasn't made the number divisible by 3, **Vova wins**.
* Both players play optimally.

Your task is to determine who will win for a given `n`.

---

## 📅 Input

* The first line contains a single integer `t` (1 ≤ t ≤ 100) — the number of test cases.
* Each of the next `t` lines contains an integer `n` (1 ≤ n ≤ 1000) — the starting number for each game.

---

## 📄 Output

For each test case, print:

* `"First"` if **Vanya wins**
* `"Second"` if **Vova wins**

---

## 🔍 Example

### Input:

```
6
1
3
5
100
999
1000
```

### Output:

```
First
Second
First
First
Second
First
```

---

## ⚙️ Code Explanation

Here's the implementation in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 3 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
}
```

### 📈 Logic

* If `n % 3 == 0`, Vanya cannot make the number divisible by 3 in one move (either `n+1` or `n-1` will not be divisible by 3), so **Vova wins**: `Second`.
* If `n % 3 != 0`, Vanya can win in his first move by making `n ± 1` divisible by 3, so **Vanya wins**: `First`.

---

## 📌 Notes

* The game only considers the first few moves needed to reach a number divisible by 3.
* Since Vanya always starts, and he can force a win unless the number is initially divisible by 3, the logic becomes straightforward.

---

Let us know if you'd like the same in Python or with additional features!
