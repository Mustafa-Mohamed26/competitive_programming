# 🧩 C. Prepend and Append

## 📌 Problem Overview

Timur initially had a **binary string** (possibly empty).
He performed the following operation several (possibly zero) times:

* Add `0` to one end of the string
* Add `1` to the other end

### Example

```
1011 → 010111
1011 → 110110
```

You are given the **final string**.
Your task is to determine:

> ✨ What is the minimum possible length of the original string?

---

## 💡 Key Insight

Each operation always adds:

* Exactly one `0`
* Exactly one `1`
* On opposite ends

This means every operation creates a **mismatched pair at the boundaries**:

* `0 ... 1`
* `1 ... 0`

So to recover the shortest possible original string, we:

1. Compare the first and last characters.
2. If they are different, remove them (undo one operation).
3. Repeat until they become equal or pointers cross.

The remaining substring is the shortest possible original string.

---

## 🚀 Algorithm (Two Pointers Technique)

* Initialize:

  * `l = 0`
  * `r = n - 1`
* While:

```
l < r AND s[l] != s[r]
```

Move inward:

```
l++
r--
```

* Final answer:

```
r - l + 1
```

---

## ⏱️ Time Complexity

For each test case:

```
O(n)
```

Since `n ≤ 2000`, the solution is efficient.

---

## 💻 C++ Implementation

```cpp
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0;
        int r = n - 1;

        while (l < r && s[l] != s[r]) {
            l++;
            r--;
        }

        cout << r - l + 1 << endl;
    }

    return 0;
}
```

---

## 🧪 Example

### Input

```
1
6
101010
```

### Output

```
0
```

### Explanation

```
ε → 10 → 0101 → 101010
```

The shortest original string was empty.

---

## 🏁 Summary

* Use two pointers.
* Remove mismatched boundary pairs.
* Stop when boundaries match.
* Remaining length is the answer.

---

### 📚 Concepts Used

* Two Pointers
* Greedy Thinking
* Reverse Simulation

---

⭐ Clean, simple, and optimal solution for competitive programming.
