# 📘 K-th Not Divisible by n

This README provides a full explanation and code solution for the competitive programming problem **"K-th Not Divisible by n"**.

---

## 🧩 Problem Statement

You are given two positive integers `n` and `k`. You need to find the **k-th positive integer that is NOT divisible by `n`**.

### 🔍 Example:

If `n = 3` and `k = 7`, the numbers not divisible by 3 are:

```
1, 2, 4, 5, 7, 8, 10, ...
```

The 7th number in this sequence is **10**.

---

## 📥 Input Format

* First line: integer `t` — number of test cases (1 ≤ t ≤ 1000).
* Next `t` lines: each contains two integers `n` and `k` (2 ≤ n ≤ 10^9, 1 ≤ k ≤ 10^9).

## 📤 Output Format

* For each test case, print a single number: the k-th positive integer not divisible by `n`.

---

## 📘 Sample Input

```
6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1
```

## 📗 Sample Output

```
10
15
1999999999
113
1000000001
1
```

---

## 💡 Logic and Formula

We want to skip numbers that are divisible by `n`. So for a given `k`, we calculate:

```
x = k + (k - 1) / (n - 1)
```

This formula works because for every `(n-1)` numbers, there is exactly one divisible by `n`.

---

## 🧠 C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long result = k + (k - 1) / (n - 1);
        cout << result << endl;
    }
    return 0;
}
```

---

## ⚙️ Time & Space Complexity

* **Time Complexity:** O(1) per test case
* **Space Complexity:** O(1)

---

## ✍️ Author

**Mustafa Mohamed Ali**

Created for educational and coding practice purposes.
