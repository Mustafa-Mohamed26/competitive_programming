# ✍️ Anton and Letters - Problem Statement

## 📜 Problem Description
Anton found a **set** of lowercase English letters. He wrote all the letters in a line, separated by commas, enclosed within curly brackets `{}`.

However, Anton sometimes repeats letters. Your task is to count the **number of distinct letters** in his set.

## 📥 Input Format
- A single line containing letters enclosed in `{}` and separated by `, ` (comma and space).
- The length of the line **does not exceed 1000**.
- The input always starts with `{` and ends with `}`.

## 📤 Output Format
- A single integer representing the number of **distinct** letters in Anton's set.

## 📝 Examples
### Example 1
**📌 Input:**
```
{a, b, c}
```
**📌 Output:**
```
3
```

### Example 2
**📌 Input:**
```
{b, a, b, a}
```
**📌 Output:**
```
2
```

### Example 3
**📌 Input:**
```
{}
```
**📌 Output:**
```
0
```

## 🏗️ Solution Approach
1. **Remove the brackets** `{}` and split the string by `, ` (comma and space).
2. **Use a set** to store unique letters.
3. **Handle edge cases**: If the set is empty `{}`, return `0`.

## 🛠️ Edge Cases Considered
- **Empty set:** `{}` should return `0`.
- **All same letters:** `{a, a, a}` should return `1`.
- **Maximum input length:** Ensuring performance for large inputs (up to 1000 characters).

## 🎯 Conclusion
This problem is efficiently solved using **sets**, ensuring quick lookups and uniqueness enforcement. 🚀

