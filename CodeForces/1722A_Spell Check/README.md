# A. Spell Check

## 📌 Problem Overview

Timur likes his name and allows **any permutation** of the letters in "Timur" as a valid spelling.

However, there are strict rules:

* The name must contain exactly these 5 letters: **T, i, m, u, r**
* The letter **T must be uppercase**
* The letters **i, m, u, r must be lowercase**
* Each letter must appear exactly once

You are given multiple test cases. For each test case, determine whether the given string is a valid spelling of "Timur".

---

## 🧾 Input Format

* First line: integer `t` — number of test cases
* For each test case:

  * Integer `n` — length of string
  * String `s`

### Constraints

* `1 ≤ t ≤ 1000`
* `1 ≤ n ≤ 10`
* `s` consists only of uppercase and lowercase Latin letters

---

## ✅ Output Format

For each test case, print:

* `YES` → if the string is a valid spelling
* `NO` → otherwise

Output is case-insensitive.

---

## 💡 Solution Idea

1. If the string length is not 5 → print `NO`
2. Sort the string
3. Sort the target string `"Timur"`
4. Compare both strings

   * If equal → `YES`
   * Otherwise → `NO`

Why does sorting work?
Because all valid permutations of a word become identical after sorting.

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
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        string target = "Timur";

        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
```

---

## ⏱ Complexity Analysis

* Sorting takes: **O(5 log 5)** → effectively constant
* Total complexity per test case: **O(1)**
* Overall complexity: **O(t)**

---

## 🧪 Example

### Input

```
5
Timur
```

### Output

```
YES
```

---

## 🚀 Key Takeaways

* Always check constraints first
* Sorting is a powerful trick for permutation problems
* Keep solutions simple and efficient

---

👨‍💻 Created for competitive programming practice.
