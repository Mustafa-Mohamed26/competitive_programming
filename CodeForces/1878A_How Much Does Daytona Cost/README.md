# 🏁 How Much Does Daytona Cost? - Solution

## 📖 Problem Overview
The problem asks whether there exists a **non-empty subsegment** in a given array `a` where a specific integer `k` is the **most common element**. 

An element is "most common" if its frequency is **strictly greater** than the frequency of any other element in that subsegment.

---

## 💡 Key Insight
The most efficient way to solve this is to look for the smallest possible subsegment: **a subsegment of length 1.**

If the integer `k` exists anywhere in the array, we can simply pick the subsegment `[k]`. 
* In this subsegment, `k` appears **1 time**.
* No other element appears.
* Therefore, `k` is the most common element.

> **Conclusion:** The answer is `YES` if `k` is present in the array, and `NO` otherwise.

---

## ⚙️ Algorithm
1. Read the number of test cases `t`.
2. For each test case:
    - Read `n` (size of array) and `k` (target element).
    - Read the array elements.
    - Check if `k` exists in the array.
    - Print `YES` if found, else print `NO`.

---

## ⏱ Complexity Analysis
- **Time Complexity:** $O(n)$ per test case, as we only need to scan the array once.
- **Space Complexity:** $O(1)$ if we check elements on the fly, or $O(n)$ to store the array.

---

## 💻 Implementation

### C++ Solution
```cpp
#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    
    cin >> t;
    
    while (t--) {
        bool found = false;
        cin >> n >> k;
		int* arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k) {
                found = true;
                
            }
            
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
}