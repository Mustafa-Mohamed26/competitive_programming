# 🚗 A. Line Trip

## 📌 Problem Overview

You are located at point `0` on a number line and want to travel to point `x` and then return back to `0`.

* Your car consumes **1 liter of gasoline per 1 unit of distance**.
* You start at point `0` with a **full tank**.
* There are `n` gas stations at positions:

```
a1, a2, ..., an
```

* When you reach a gas station, you refuel completely.
* There are **no gas stations at 0 or x**.

### 🎯 Goal

Determine the **minimum gas tank capacity** required to:

```
0 → x → 0
```

---

## 💡 Key Insight

The tank must be large enough to handle the **longest distance traveled without refueling**.

We analyze two parts:

---

### 1️⃣ Forward Trip (0 → x)

We calculate all distances between consecutive refueling points:

* `0 → a1`
* `a1 → a2`
* `a2 → a3`
* ...
* `an → x`

The tank must be at least as large as the **maximum of these distances**.

---

### 2️⃣ Special Case: Return From x 🚨

There is **no gas station at x**.

That means:

From the last station `an`, you must:

```
an → x → an
```

Distance required without refueling:

```
2 × (x - an)
```

This is usually the most critical part.

---

## ✅ Final Formula

The minimum tank capacity is:

```
max(
    maximum distance between consecutive stations,
    2 × (x - last_station)
)
```

---

## ⏱️ Time Complexity

For each test case:

```
O(n)
```

Since `n ≤ 50`, this is very efficient.

---

## 💻 C++ Implementation

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int arr[55];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxDistance = 0;

        // Distance from 0 to first station
        maxDistance = arr[0];

        // Distances between consecutive stations
        for (int i = 1; i < n; i++) {
            maxDistance = max(maxDistance, arr[i] - arr[i - 1]);
        }

        // Special return case from x
        maxDistance = max(maxDistance, 2 * (x - arr[n - 1]));

        cout << maxDistance << endl;
    }

    return 0;
}
```

---

## 🧪 Example

### Input

```
3
3 7
1 2 5
3 6
1 2 5
1 10
7
```

### Output

```
4
3
7
```

---

## 🏁 Summary

* Compute all forward gaps.
* Pay special attention to the last segment.
* Take the maximum required distance.

---

### 📚 Concepts Used

* Greedy Strategy
* Maximum Gap Calculation
* Simulation of Constraints

---

⭐ Clean greedy observation problem commonly seen in competitive programming.
