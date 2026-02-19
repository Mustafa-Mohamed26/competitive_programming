# B. ICPC Balloons 🎈

## 📌 Problem Overview

In an ICPC contest, balloons are distributed based on solved problems:

* Whenever a team solves a problem, they receive **1 balloon**.
* If it is the **first time** that problem is solved, the team receives **an additional balloon**.

There are **26 possible problems** labeled from `A` to `Z`.

You are given the order of solved problems as a string. Your task is to calculate the **total number of balloons distributed**.

---

## 🧾 Input Format

* The first line contains an integer `t` — number of test cases.
* For each test case:

  * An integer `n` — length of the string.
  * A string `s` of length `n` consisting of uppercase English letters.

### Constraints

* `1 ≤ t ≤ 100`
* `1 ≤ n ≤ 50`

---

## 📤 Output Format

For each test case, print a single integer — the total number of balloons distributed.

---

## 💡 Explanation

* First time a problem appears → **2 balloons**
* If the same problem appears again → **1 balloon**

Example:

Input:

```
3
ABA
```

Explanation:

* A → 2 balloons (first time)
* B → 2 balloons (first time)
* A → 1 balloon (already solved before)

Total = 5

---

## 🛠️ Approach

We:

1. Keep track of solved problems using a vector.
2. Loop through each character in the string.
3. If problem already solved → add 1.
4. If first time → add 2 and store it.

Time Complexity: **O(n²)** (due to `find()` usage)

---

## 💻 C++ Solution

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> solved;
        int balloons = 0;

        for (int i = 0; i < n; i++)
        {
            if (find(solved.begin(), solved.end(), s[i]) != solved.end()) {
                balloons++;
            } else {
                solved.push_back(s[i]);
                balloons += 2;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
```

---

## 🚀 Possible Optimization

Instead of using a vector and `find()`, we can use:

* `set<char>`
* or a boolean array of size 26

This reduces time complexity to **O(n)** per test case.

---

## ✅ Example

Input:

```
6
3
ABA
1
A
3
ORZ
5
BAAAA
4
BKPT
10
CODEFORCES
```

Output:

```
5
2
6
7
8
17
```

---

### 👨‍💻 Author

Prepared for competitive programming practice.
