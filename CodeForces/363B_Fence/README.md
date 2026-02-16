# 🪵 Fence Problem – Sliding Window Technique

## 📌 Problem Summary

Polycarpus wants to remove exactly **k consecutive planks** from a fence so he can move his piano into the house. Each plank has a certain height.

The goal is to find the starting index of **k consecutive planks** such that their total height is **minimum possible**.

* The fence is NOT cyclic.
* If multiple answers exist, print any valid one.

---

## 🧠 Key Idea – Sliding Window

Instead of calculating the sum of every possible group of k planks from scratch (which would be slow), we use a technique called:

> 🎯 **Sliding Window**

### Why?

Because:

* n can be as large as 150,000
* A brute force solution would be too slow

Sliding Window allows us to solve the problem in:

```
O(n)
```

---

## 🚀 Algorithm Steps

1. Read `n` and `k`.
2. Store the plank heights in an array.
3. Compute the sum of the first `k` planks.
4. Slide the window across the array:

   * Subtract the element leaving the window
   * Add the new entering element
5. Keep track of the minimum sum and its starting index.
6. Print the starting index (1-based).

---

## 💻 Implementation (C++)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Compute first window sum
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += a[i];
    }

    int minSum = currentSum;
    int index = 0;

    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum = currentSum - a[i - k] + a[i];

        if (currentSum < minSum) {
            minSum = currentSum;
            index = i - k + 1;
        }
    }

    cout << index + 1;

    delete[] a;
    return 0;
}
```

---

## 📊 Example

Input:

```
7 3
1 2 6 1 1 7 1
```

Output:

```
3
```

Explanation:
Planks at positions **3, 4, 5** have the minimum total height.

---

## 🏆 Complexity

* Time Complexity: **O(n)**
* Space Complexity: **O(n)**

---

## 📚 Concepts Used

* Arrays
* Sliding Window Technique
* Time Complexity Optimization

---

## ✨ Author

Prepared as part of problem-solving practice and algorithm training.
