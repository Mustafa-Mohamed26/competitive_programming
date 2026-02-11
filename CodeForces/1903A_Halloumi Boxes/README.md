# 🧀 A. Halloumi Boxes

## 📖 Problem Description

Theofanis has stored halloumis inside **n boxes**, where each box has a number `a[i]` written on it.

He wants to sort the boxes in **non-decreasing order**.

However, his machine can only reverse any **subarray** of length **at most `k`**.

Your task is to determine whether it is possible to sort the array using any number of such reverse operations.

---

## 🔄 Operation Definition

You may choose indices `i` and `j` such that:

* `1 ≤ i ≤ j ≤ n`
* `(j - i + 1) ≤ k`

Then reverse the subarray:

```
a[i], a[i+1], ..., a[j]
```

Example:

```
Original: 1 2 3 4 5
Reverse (2,4)
Result:   1 4 3 2 5
```

---

## 📥 Input Format

* First line contains integer `t` — number of test cases.
* For each test case:

  * First line contains integers `n` and `k`.
  * Second line contains `n` integers `a1, a2, ..., an`.

### Constraints

* `1 ≤ t ≤ 100`
* `1 ≤ k ≤ n ≤ 100`
* `1 ≤ a[i] ≤ 10^9`

---

## 📤 Output Format

For each test case, print:

* `YES` if it is possible to sort the array
* `NO` otherwise

Case-insensitive.

---

## 💡 Key Insight

There are only **two cases** to consider:

### ✅ Case 1: `k ≥ 2`

* You can reverse subarrays of length 2.
* That means you can swap adjacent elements.
* Swapping adjacent elements allows simulation of **Bubble Sort**.
* Therefore, you can always sort the array.

**Answer: YES**

---

### ❌ Case 2: `k = 1`

* You can only reverse subarrays of length 1.
* Reversing one element changes nothing.
* The array cannot be modified.

So:

* If the array is already sorted → `YES`
* Otherwise → `NO`

---

## 🧠 Algorithm

```
For each test case:
    If k == 1:
        Check if array is already sorted
        If sorted → print YES
        Else → print NO
    Else:
        print YES
```

---

## ⏱️ Complexity Analysis

* Time Complexity: `O(n)` per test case
* Space Complexity: `O(n)`
* Maximum operations are small due to constraints

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
		int n, k;
		cin >> n >> k;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

        if (k == 1) {
            
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i - 1]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            
            cout << "YES\n";
        }
    }
}
```

---

## 📌 Example

### Input

```
5
3 2
1 2 3
3 1
9 9 9
4 4
6 4 2 1
4 3
10 3 830 14
2 1
3 1
```

### Output

```
YES
YES
YES
YES
NO
```

---

## 🎯 Final Rule Summary

| Condition                  | Result |
| -------------------------- | ------ |
| `k ≥ 2`                    | YES    |
| `k = 1` and already sorted | YES    |
| `k = 1` and not sorted     | NO     |

---

## 🚀 Conclusion

If you can reverse at least two elements, sorting is always possible.

If you can only reverse one element, the array must already be sorted.
