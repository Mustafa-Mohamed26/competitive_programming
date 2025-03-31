# 🔤 Short Substrings

## 📜 Problem Statement
Alice is trying to guess a secret string `a` that Bob created. Bob constructs `b` from `a` using the following process:
1. Extract all consecutive substrings of length 2 from `a` in left-to-right order.
2. Concatenate these substrings to form `b`.

Your task is to reconstruct `a` from `b`. It is guaranteed that `b` was generated using this exact process and that the answer is unique.

## 📥 Input Format
The input consists of:
- An integer `t` (1 ≤ t ≤ 1000) — the number of test cases.
- `t` lines, each containing a string `b` (2 ≤ |b| ≤ 100) — the string constructed by Bob.

## 📤 Output Format
For each test case, print the original string `a`.

## 📌 Example
### 📥 Input
```
4
abbaac
ac
bccddaaf
zzzzzzzzzz
```
### 📤 Output
```
abac
ac
bcdaf
zzzzzz
```

## 🔍 Explanation
1. **Test Case 1:**
   - Given `b = "abbaac"`
   - Extracted substrings: `ab`, `ba`, `ac`
   - Original string `a = "abac"`
2. **Test Case 2:**
   - Given `b = "ac"`
   - Since `|b| = 2`, `a = "ac"`
3. **Test Case 3:**
   - Given `b = "bccddaaf"`
   - Extracted substrings: `bc`, `cd`, `da`, `af`
   - Original string `a = "bcdaf"`
4. **Test Case 4:**
   - Given `b = "zzzzzzzzzz"`
   - Extracted substrings: `zz`, `zz`, `zz`, `zz`, `zz`, `zz`, `zz`, `zz`, `zz`
   - Original string `a = "zzzzzz"`

## 💡 Solution Approach
1. Take the first two characters of `b` as the start of `a`.
2. Traverse `b` from index 2 onward, adding every second character to `a`.
3. Print the reconstructed `a`.

## ⏳ Complexity Analysis
- The solution runs in `O(|b|) ≈ O(100)` for each test case, which is efficient given the constraints.

