# 🔄 Translation Check

## 📌 Problem Statement
In the Berland and Birland languages, words are translated by reversing their order. A Berlandish word **s** is translated into a Birlandish word **t** by writing **s** in reverse order.

Vasya attempted to translate a word. Your task is to determine whether the translation is correct.

---
## 📥 Input
1. A string **s** (Berlandish word).
2. A string **t** (Vasya’s translation to Birlandish).

Both **s** and **t**:
- Consist only of lowercase Latin letters.
- Are non-empty.
- Have lengths not exceeding **100** characters.

---
## 📤 Output
- Print `YES` if `t` is the reverse of `s`.
- Print `NO` otherwise.

---
## 🏆 Examples
### Example 1
**Input:**
```
code
edoc
```
**Output:**
```
YES
```

### Example 2
**Input:**
```
abb
aba
```
**Output:**
```
NO
```

### Example 3
**Input:**
```
code
code
```
**Output:**
```
NO
```

---
## 🔍 Solution Approach
1. Reverse the string `s`.
2. Compare it with `t`.
3. If they match, print `YES`; otherwise, print `NO`.

---
## ⏳ Complexity Analysis
- **O(n)** time complexity: We reverse a string of length `n` and perform a comparison.
- **O(1)** space complexity: Only a few extra variables are used.

---
## 🏁 Conclusion
This is a straightforward problem involving string reversal and comparison. It can be efficiently solved with basic string operations.

