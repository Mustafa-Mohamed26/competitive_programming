# Two Sum Problem 🔢➕

## Problem Statement 📝
Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers such that they add up to `target`.

### Constraints ⚠️
- Each input has **exactly one** solution.
- You may not use the **same element** twice.
- The answer can be returned in any order.

## Examples 📌
### Example 1:
**Input:**
```cpp
nums = [2,7,11,15], target = 9
```
**Output:**
```cpp
[0,1]
```
**Explanation:** nums[0] + nums[1] = 2 + 7 = 9 ✅

### Example 2:
**Input:**
```cpp
nums = [3,2,4], target = 6
```
**Output:**
```cpp
[1,2]
```

### Example 3:
**Input:**
```cpp
nums = [3,3], target = 6
```
**Output:**
```cpp
[0,1]
```

---
## Solution Approaches 🔍

### **1️⃣ Brute-Force Approach (O(n²))** ❌
- **Idea:** Check every pair `(i, j)`.
- **Time Complexity:** `O(n²)` (slow for large inputs).
- **Space Complexity:** `O(1)` (no extra storage).

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}
```

---

### **2️⃣ Optimized Approach (O(n) using Hashing) ✅**
- **Idea:** Use a `map` to store the **index** of numbers seen so far.
- **Time Complexity:** `O(n)` (single pass through `nums`).
- **Space Complexity:** `O(n)` (extra space for `map`).

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}
```

---
## Follow-up 💡
**Can you solve it in `O(n log n)` or `O(n)` time?**

- `O(n log n)`: Sort + Two-Pointer (but indices are lost) 🔀
- `O(n)`: HashMap method (best approach ✅)

🚀 **Happy Coding!** 💻🔥

