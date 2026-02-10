# 🎨 Array Coloring

## 📌 Problem
Given an array of `n` integers, determine whether it is possible to color all elements using **two colors** such that:
- Each color has **at least one element**
- The **sum of elements** of both colors has the **same parity** (both even or both odd)

---

## 💡 Key Insight
For two sums to have the same parity:
- even + even = even  
- odd + odd = even  

➡️ Therefore, **the total sum of the array must be even**.

If the total sum is odd, it is impossible to split it into two parts with the same parity.

---

## ✅ Decision Rule
- **Total sum is even** → `YES`
- **Total sum is odd** → `NO`

---

## 🧠 Algorithm
1. Read the array
2. Compute the total sum
3. Check the parity of the sum

---

## ⏱ Complexity
- **Time:** `O(n)` per test case
- **Space:** `O(1)`

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

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
