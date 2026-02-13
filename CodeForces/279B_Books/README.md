# 📚 B. Books

## 🧩 Problem Summary

Valera has **t minutes** of free time and **n books**.
Each book requires a certain amount of time to read.

He chooses a starting book `i` and reads consecutively:

```
i, i+1, i+2, ...
```

He stops when:

* ⏰ Time runs out
* 📖 Or he reaches the last book

⚠️ Important: He must finish a book completely before starting the next one.

---

## 🎯 Goal

Print the **maximum number of consecutive books** Valera can read without exceeding `t` minutes.

---

## 📥 Input Format

```
n t

a1 a2 a3 ... an
```

### Constraints

* 1 ≤ n ≤ 10^5
* 1 ≤ t ≤ 10^9
* 1 ≤ ai ≤ 10^4

---

## 💡 Key Idea (Sliding Window Technique)

We need to find the longest contiguous subarray whose sum ≤ t.

Instead of trying all possible starting points (which would be too slow),
we use the **Sliding Window (Two Pointers)** technique:

* Expand the window using `right`
* Keep adding reading time
* If total time exceeds `t`, shrink from the left
* Track the maximum window size

⏱ Time Complexity: **O(n)**
📦 Space Complexity: **O(1)**

---

## ✅ C++ Implementation

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0;
    long long sum = 0;
    int maxBooks = 0;

    for (int right = 0; right < n; right++)
    {
        sum += arr[right];

        while (sum > t)
        {
            sum -= arr[left];
            left++;
        }

        maxBooks = max(maxBooks, right - left + 1);
    }

    cout << maxBooks;

    delete[] arr;
    return 0;
}
```

---

## 🧠 Why Sliding Window Works Here?

Because:

* All numbers are positive
* If the sum exceeds `t`, moving `left` forward will always reduce the sum

This guarantees linear time performance.

---

## 📌 Example

### Input

```
4 5
3 1 2 1
```

### Explanation

Best choice is starting from index 2:

```
1 + 2 + 1 = 4
```

📖 Maximum books = **3**

---

## 🚀 Learning Outcome

This problem is a classic example of:

* Two Pointers
* Sliding Window
* Subarray Sum Optimization

Mastering this pattern helps solve many competitive programming problems efficiently.
