تمام ✅
ده **README.md كامل ومتكامل** (Markdown جاهز 100%) تقدر تحطه مباشرة في الريبو أو تضيفه للمسألة على GitHub:

```md
# 🏁 How Much Does Daytona Cost?

## 📖 Problem Overview
You are given an integer array `a` of size `n` and an integer `k`.

An integer is considered **the most common element** in a subsegment if its number of occurrences in that subsegment is **strictly greater** than the number of occurrences of any other integer in the same subsegment.

A **subsegment** is a consecutive part of the array.

Your task is to determine whether there exists **at least one non-empty subsegment** of the array where `k` is the most common element.

---

## 🧾 Input Format
- The first line contains an integer `t` — the number of test cases.
- For each test case:
  - One line contains two integers `n` and `k`
  - One line contains `n` integers representing the array `a`

---

## 📤 Output Format
For each test case, print:
- `"YES"` if there exists a subsegment where `k` is the most common element
- `"NO"` otherwise

> Output is case-insensitive.

---

## 💡 Key Insight
A subsegment can consist of **a single element**.

If the array contains at least one occurrence of `k`, we can choose the subsegment:
```

[k]

````

In this subsegment:
- `k` appears once
- No other element appears more than once

✅ Therefore, `k` is trivially the most common element.

---

## ✅ Decision Rule
- If `k` appears **at least once** in the array → `YES`
- If `k` does **not appear** in the array → `NO`

No additional checks are required.

---

## 🧠 Algorithm
For each test case:
1. Read `n` and `k`
2. Iterate through the array
3. If any element equals `k`, print `"YES"`
4. Otherwise, print `"NO"`

---

## ⏱ Complexity Analysis
- **Time Complexity:** `O(n)` per test case
- **Space Complexity:** `O(1)`

Efficient enough for all given constraints.

---

## 💻 C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        bool found = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == k) {
                found = true;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}
````

---

## 🧪 Sample Input

```
7
5 4
1 4 3 4 1
4 1
2 3 4 4
5 6
43 5 60 4 2
2 5
1 5
4 1
5 3 3 1
1 3
3
5 3
3 4 1 5 5
```

---

## ✅ Sample Output

```
YES
NO
NO
YES
YES
YES
YES
```

---

## 📝 Notes

* Subsegments must be **non-empty**
* A single-element subsegment is valid
* Simple linear scan is sufficient
* Works within all constraints

---

## 🚀 Conclusion

This problem reduces to a simple check:

> **Does `k` appear in the array or not?**

If yes — the answer is always `"YES"`.

Happy coding 🎯