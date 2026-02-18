# B. Sale – Codeforces Problem

## 📌 Problem Summary

Bob goes to a sale where there are **n TV sets**. Each TV has a price `ai`.

* Some prices are **negative** → meaning the seller will pay Bob to take the TV.
* Bob can carry at most **m TVs**.
* He wants to **maximize the money he earns**.

---

## 🧠 Key Idea

To maximize profit:

* Only buy TVs with **negative prices**.
* Among them, choose up to **m TVs** with the largest absolute values.
* Sorting helps to pick the best choices greedily.

This is a classic **Greedy Algorithm** problem.

---

## ⚙️ Algorithm Steps

1. Read `n` and `m`.
2. Store prices in a vector.
3. Sort prices in ascending order.
4. Iterate from the smallest element:

   * If price is negative → add its absolute value to earnings.
   * Stop after selecting `m` TVs or when numbers become non‑negative.
5. Print total earnings.

---

## 💻 C++ Implementation

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int earn = 0;

    for (int i = 0; i < n && m > 0; i++) {
        if (arr[i] < 0) {
            earn += -arr[i];
            m--;
        } else {
            break;
        }
    }

    cout << earn;
    return 0;
}
```

---

## ⏱ Time Complexity

* Sorting: **O(n log n)**
* Iteration: **O(n)**
* Overall: **O(n log n)**

Given constraints (`n ≤ 100`), this solution is efficient.

---

## ✅ Example

### Input

```
5 3
-6 0 35 -2 4
```

### Output

```
8
```

Bob takes `-6` and `-2` → earns `6 + 2 = 8`.

---

## 📚 Concepts Used

* Greedy Strategy
* Sorting
* Vectors
* Basic Iteration

---

## 👨‍💻 Author

Prepared as part of competitive programming practice.
