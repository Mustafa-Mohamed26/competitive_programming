# 🗑️ Remove Smallest

## 📜 Problem Statement
You are given an array `a` consisting of `n` positive integers.

In one move, you can choose two indices `i` and `j` (`i ≠ j`) such that the absolute difference between `a[i]` and `a[j]` is no more than one (`|a[i] - a[j]| ≤ 1`) and remove the smallest of these two elements. If two elements are equal, you can remove any of them (but exactly one).

Your task is to determine if it is possible to obtain an array consisting of only one element using several (possibly zero) such moves.

## 🔢 Input
- The first line contains one integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.
- Each test case consists of two lines:
  - The first line contains one integer `n` (`1 ≤ n ≤ 50`) — the length of the array.
  - The second line contains `n` integers `a1, a2, ..., an` (`1 ≤ ai ≤ 100`).

## 📤 Output
For each test case, print `YES` if it is possible to obtain an array consisting of only one element, otherwise print `NO`.

## 📝 Example
### 📥 Input
```
5
3
1 2 2
4
5 5 5 5
3
1 2 4
4
1 3 4 4
1
100
```
### 📤 Output
```
YES
YES
NO
NO
YES
```

## 🔍 Explanation
1. **Test Case 1:** `[1, 2, 2]`
   - 🗑️ Remove `1`, array becomes `[2, 2]`
   - 🗑️ Remove one `2`, array becomes `[2]`
   - ✅ Output: `YES`
2. **Test Case 2:** `[5, 5, 5, 5]`
   - Since all elements are the same, we can remove one at a time until one remains.
   - ✅ Output: `YES`
3. **Test Case 3:** `[1, 2, 4]`
   - We can remove `1` and `2` together, but `4` remains and cannot be reduced further.
   - ❌ Output: `NO`
4. **Test Case 4:** `[1, 3, 4, 4]`
   - No valid sequence exists to remove all but one element.
   - ❌ Output: `NO`
5. **Test Case 5:** `[100]`
   - Already a single element.
   - ✅ Output: `YES`

## 💡 Solution Approach
1. **📌 Sort the array** to make it easier to check consecutive numbers.
2. **🔍 Check adjacent elements** in the sorted array:
   - If any consecutive pair has a difference greater than 1 (`a[i+1] - a[i] > 1`), then it's **impossible** to reduce the array to a single element (`NO`).
   - Otherwise, it's **possible** (`YES`).

This approach works efficiently given the constraints (`n ≤ 50`). 🚀

