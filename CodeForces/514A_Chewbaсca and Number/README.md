# 🌟 A. Chewbacca and Number

Chewbacca was given a number by Luke Skywalker. He loves to invert digits to get a **smaller number**! This program finds the **minimum possible positive number** by inverting some digits.

---

## 📌 Problem Statement

Given an integer `x`, Chewbacca can invert any digit `t` by replacing it with `9 - t`, **only if it leads to a smaller digit**, and **the result must not start with a 0**.

---

## 🧮 Input

* A single integer `x` (1 ≤ x ≤ 10¹⁸)

## 📤 Output

* The minimum possible number after inverting some digits.

---

## ✅ Examples

### Input:

```
27
```

### Output:

```
22
```

### Input:

```
4545
```

### Output:

```
4444
```

---

## 🧠 Logic Explanation

* For each digit `t`, Chewbacca checks if `9 - t` is **less than** `t`.
* If true, he inverts the digit.
* **However**, the first digit must not be changed to 0.

### Example: 27

* '2' → `9 - 2 = 7` → 7 > 2 → Don't change it.
* '7' → `9 - 7 = 2` → 2 < 7 → Invert it.
* Result: **22** ✅

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        // Avoid leading zero
        if (i == 0 && inverted == 0) continue;

        if (inverted < digit)
            x[i] = '0' + inverted;
    }

    cout << x << endl;
    return 0;
}
```

---

## ⏱️ Time & Space Complexity

* **Time:** O(n), where n is the number of digits in x
* **Space:** O(1) extra (just modifies the input string)

---

## ✍️ Author

Mustafa Mohamed Ali

Inspired by a classic Codeforces problem involving math and string manipulation!
